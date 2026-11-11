#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Memory(int N, int M);

#define MAX_N 100
#define FORMAT_S "%101s"
#define LENGTH_S 102
#define LIMIT_M 4194304  // 2^22
#define MAX_NUM_DAYS 15000

static int N, Q;
static char S[LENGTH_S];

static void Wrong(int message) {
  printf("Wrong Answer [%d]\n", message);
  exit(0);
}

static int get_called;
static int get_I;

char Get(int I) {
  if (get_called) {
    Wrong(2);
  }
  get_called = 1;
  get_I = I;
  if (!(1 <= I && I <= N)) {
    Wrong(3);
  }
  return S[I - 1];
}

int main(void) {
  int M;
  int test_index;
  int num_days;

  if (scanf("%d%d", &N, &Q) != 2) {
    fprintf(stderr, "error: cannot read N, Q\n");
    exit(1);
  }
  if (!(1 <= N && N <= MAX_N)) {
    fprintf(stderr, "error: N is out of bounds\n");
    exit(1);
  }
  if (Q < 0) {
    fprintf(stderr, "error: Q is out of bounds\n");
    exit(1);
  }

  for (test_index = 0; test_index < Q; ++test_index) {
    if (scanf(FORMAT_S, S) != 1) {
      fprintf(stderr, "error: cannot read S\n");
      exit(1);
    }
    if (N != (int)strlen(S)) {
      fprintf(stderr, "error: the length of S is not N\n");
      exit(1);
    }
    num_days = 0;
    M = 0;
    for (; ; ) {
      get_called = 0;
      get_I = 0;
      M = Memory(N, M);
      if (!((0 <= M && M < LIMIT_M) || M == -1 || M == -2)) {
        Wrong(1);
      }
      if (M == -1 || M == -2) {
        break;
      }
      if (++num_days >= MAX_NUM_DAYS) {
        Wrong(5);
      }
    }
    printf("%d\n", M);
  }

  return 0;
}
