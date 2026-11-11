#include "Anthony.h"
#include <vector>

namespace {

int FunctionExample(int i, int A) {
  return i % A;
}

}  // namespace

std::vector<int> Mark(int N, int M, int A, int B,
                      std::vector<int> U, std::vector<int> V) {
  std::vector<int> X(M);
  for (int i = 0; i < M; ++i) {
    X[i] = FunctionExample(i, A);
  }
  return X;
}
