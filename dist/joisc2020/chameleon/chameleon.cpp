#include "chameleon.h"
#include <vector>

namespace {

int variable_example = 1;

}  // namespace

void Solve(int N) {
  std::vector<int> p(3);
  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  variable_example = Query(p);
  for (int i = 0; i < N; ++i) {
    Answer(i * 2 + 1, i * 2 + 2);
  }
}
