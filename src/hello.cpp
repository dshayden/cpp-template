#include "hello.h"

void hello() {
  std::string message = get_message();
  std::cout << message << std::endl;
}

int ex_parfor() {
  int i;
  int n = 1e3;
  std::vector<int> tID(n);

  #pragma omp parallel for 
  for (i=1; i<n; i++) {  /* i is private by default */
    tID[i] = omp_get_thread_num();
  }
  std::vector<int>::iterator it = std::unique(tID.begin(), tID.end());
  tID.resize(std::distance(tID.begin(), it));
  
  return tID.size();
}

std::string get_message() {
  return "Hello, World!";
}
