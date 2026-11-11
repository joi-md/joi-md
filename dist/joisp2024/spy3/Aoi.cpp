#include "Aoi.h"

namespace {

int variable_example = 0;

int function_example(int a, int b) { return a + b; }

}  // namespace

std::string aoi(int N, int M, int Q, int K, std::vector<int> A,
                std::vector<int> B, std::vector<long long> C,
                std::vector<int> T, std::vector<int> X) {
  variable_example++;
  variable_example = function_example(1, 2);
  std::string s(100, '0');
  s[0] = '1';
  return s;
}
