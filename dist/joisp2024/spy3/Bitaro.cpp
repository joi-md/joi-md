#include "Bitaro.h"

namespace {

int variable_example = 0;

int function_example(int a, int b) { return a + b; }

}  // namespace

void bitaro(int N, int M, int Q, int K, std::vector<int> A, std::vector<int> B,
            std::vector<long long> C, std::vector<int> T, std::vector<int> X,
            std::string s) {
  variable_example++;
  variable_example = function_example(1, 2);
  for (int i = 0; i < Q; i++) {
    std::vector<int> v(10);
    for (int j = 0; j < 10; j++) {
      v[j] = j;
    }
    answer(v);
  }
}
