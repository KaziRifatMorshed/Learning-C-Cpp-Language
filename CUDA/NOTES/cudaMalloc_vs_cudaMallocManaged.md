`cudaMalloc` and `cudaMallocManaged` are two different memory allocation functions in CUDA, each serving distinct purposes. Here's a comparison and explanation of their differences:

### `cudaMalloc`

- **Function**: `cudaError_t cudaMalloc(void** devPtr, size_t size)`
- **Purpose**: Allocates memory on the GPU.
- **Usage**: Used when you want to allocate memory exclusively on the GPU.
- **Memory Type**: Device memory.
- **Memory Access**: The allocated memory can only be accessed by the GPU (only, not by the CPU) directly. The host can only access this memory indirectly via memory copy operations (`cudaMemcpy`).
- **Typical Workflow**:
  1. Allocate memory on the GPU using `cudaMalloc`.
  2. Copy data from host to device using `cudaMemcpy`.
  3. Perform computations on the device.
  4. Copy results back to the host using `cudaMemcpy`.
  5. Free the allocated device memory using `cudaFree`.

### `cudaMallocManaged`

- **Function**: `cudaError_t cudaMallocManaged(void** devPtr, size_t size)`
- **Purpose**: Allocates managed memory, which is accessible by both the host (CPU) and the device (GPU).
- **Usage**: Used for Unified Memory, where the same memory can be accessed by both the CPU and GPU.
- **Memory Type**: Unified memory.
- **Memory Access**: The allocated memory can be accessed by both the host and the device without explicit memory copy operations. The CUDA runtime and driver handle data migration between the host and device automatically.
- **Typical Workflow**:
  1. Allocate managed memory using `cudaMallocManaged`.
  2. Access and modify the memory from both the host and the device as needed.
  3. Synchronize the memory accesses using `cudaDeviceSynchronize` to ensure data consistency.
  4. Free the allocated managed memory using `cudaFree`.

### Example Usage

Here's an example that demonstrates the usage of both `cudaMalloc` and `cudaMallocManaged`:

#### Using `cudaMalloc`

```c
#include <cuda_runtime.h>
#include <stdio.h>

__global__ void add(int *a, int *b, int *c, int size) {
  int index = threadIdx.x + blockIdx.x * blockDim.x;
  if (index < size) {
    c[index] = a[index] + b[index];
  }
}

int main(void) {
  int size = 10;
  int bytes = size * sizeof(int);
  int *h_a, *h_b, *h_c;
  int *d_a, *d_b, *d_c;

  // Allocate host memory
  h_a = (int *)malloc(bytes);
  h_b = (int *)malloc(bytes);
  h_c = (int *)malloc(bytes);

  // Initialize host arrays
  for (int i = 0; i < size; i++) {
    h_a[i] = i;
    h_b[i] = i * 2;
  }

  // Allocate device memory
  cudaMalloc(&d_a, bytes);
  cudaMalloc(&d_b, bytes);
  cudaMalloc(&d_c, bytes);

  // Copy data from host to device
  cudaMemcpy(d_a, h_a, bytes, cudaMemcpyHostToDevice);
  cudaMemcpy(d_b, h_b, bytes, cudaMemcpyHostToDevice);

  // Launch kernel
  add<<<1, size>>>(d_a, d_b, d_c, size);

  // Copy result from device to host
  cudaMemcpy(h_c, d_c, bytes, cudaMemcpyDeviceToHost);

  // Print result
  for (int i = 0; i < size; i++) {
    printf("%d + %d = %d\n", h_a[i], h_b[i], h_c[i]);
  }

  // Free memory
  free(h_a);
  free(h_b);
  free(h_c);
  cudaFree(d_a);
  cudaFree(d_b);
  cudaFree(d_c);

  return 0;
}
```

#### Using `cudaMallocManaged`

```c
#include <cuda_runtime.h>
#include <stdio.h>

__global__ void add(int *a, int *b, int *c, int size) {
  int index = threadIdx.x + blockIdx.x * blockDim.x;
  if (index < size) {
    c[index] = a[index] + b[index];
  }
}

int main(void) {
  int size = 10;
  int bytes = size * sizeof(int);
  int *a, *b, *c;

  // Allocate unified memory
  cudaMallocManaged(&a, bytes);
  cudaMallocManaged(&b, bytes);
  cudaMallocManaged(&c, bytes);

  // Initialize arrays
  for (int i = 0; i < size; i++) {
    a[i] = i;
    b[i] = i * 2;
  }

  // Launch kernel
  add<<<1, size>>>(a, b, c, size);

  // Synchronize // here, cudaMallocManaged was used
  cudaDeviceSynchronize();

  // Print result
  for (int i = 0; i < size; i++) {
    printf("%d + %d = %d\n", a[i], b[i], c[i]);
  }

  // Free memory
  cudaFree(a);
  cudaFree(b);
  cudaFree(c);

  return 0;
}
```

### Summary

- **`cudaMalloc`**: Allocates memory on the device (GPU) and requires explicit memory management and copying between host and device.
- **`cudaMallocManaged`**: Allocates unified memory accessible by both host and device, simplifying memory management at the cost of potential performance overhead due to automatic data migration.