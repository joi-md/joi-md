#include "Catherine.h"
#include <vector>

namespace {

int A, B;
int variable_example = 0;

}  // namespace

void Init(int A, int B) {
  ::A = A;
  ::B = B;
}

int Move(std::vector<int> y) {
  ++variable_example;
  for (int j = 0; j < A; ++j) {
    if (y[j] != 0) {
      return j;
    }
  }
  return -1;
}
