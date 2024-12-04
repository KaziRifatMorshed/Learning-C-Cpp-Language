#include <iostream>
#include <ostream>
#include <vector>

struct Vertex {
  float x, y, z;
};

void PrintThem(const std::vector<Vertex> &inside_Func) {}

int main(void) {

  Vertex *bindu = new Vertex[5];
  bindu[0].x = 3;

  std::vector<int> meaw, haulm;
  std::vector<Vertex> Oi_Vertex_er_vector;
  // cannot pass primitive data type in JAVA but can in c+

  meaw.push_back(1);
  meaw.push_back(2);
  meaw.push_back(3);
  meaw.push_back(4);
  Oi_Vertex_er_vector.push_back({1, 2, 3});
  Oi_Vertex_er_vector.push_back({4, 5, 6});
  for (int i = 0; i < (int)Oi_Vertex_er_vector.size(); i++) {
    std::cout << Oi_Vertex_er_vector[i].x << " " << Oi_Vertex_er_vector[i].y
              << " " << Oi_Vertex_er_vector[i].z << std::endl;
  }
  for (Vertex &v : Oi_Vertex_er_vector) {
    std::cout << &v << std::endl;
  }

  haulm = meaw;

  for (int i = 0; i < (int)meaw.size(); i++) {
    std::cout << haulm[i] << std::endl;
  }
  for (int kaka : haulm) {          // (DATATYPE NEWNAME : kotha_theke_jonmo)
    std::cout << kaka << std::endl; // coping each element in new scope
  }
  for (int &kaka : haulm) { // (DATATYPE & NEWNAME : kotha_theke_jonmo)
    std::cout << kaka << std::endl;
  }

  std::vector<int> jojo[100]; // রো সংখ্যা ৯৯ পর্যন্ত(১০০ টা) লিমিট করে দিয়ে
                              // ফেলেছি। বাট, কলাম ইনফিনিটি
  std::vector<std::vector<int>> pocca;

  pocca[0].push_back(9134);

  std::cout << pocca[0][0] << std::endl;

  meaw.clear();
} // END