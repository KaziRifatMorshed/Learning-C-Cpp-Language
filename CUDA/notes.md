### Compilation code 
```json
".cu": "cd $dir && nvcc $fileName -o $fileNameWithoutExt -arch=sm_86 && $dir$fileNameWithoutExt",
```
