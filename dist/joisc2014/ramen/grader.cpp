#include <stdio.h>
#include <stdlib.h>

void Ramen(int);

#define MAX_N 400

static int N, input_type, R[MAX_N], compare_count, min_id, max_id;

static void correct(){
  printf("Accepted\n");
  exit(0);
}

static void wrong(int message){
  printf("Wrong Answer [%d]\n", message);
  exit(message);
}

int Compare(int X, int Y) {
  if(X < 0 || N <= X || Y < 0 || N <= Y || X == Y) {
    wrong(1);
  }
  ++compare_count;
  if(compare_count > 600) {
    wrong(2);
  }
  if(R[X] > R[Y]) return 1;
  if(R[X] < R[Y]) return -1;
  if(X > Y) return 1;
  if(X < Y) return -1;
  return 0;
}

void Answer(int X, int Y) {
  if(X < 0 || N <= X || Y < 0 || N <= Y) {
    wrong(4);
  }
  if(X == min_id && Y == max_id) {
    correct();
  }
  wrong(5);
}

int main() {
  int i;
  if(scanf("%d%d", &N, &input_type) < 2) {
    fprintf(stderr, "error: cannot read N and input_type.\n");
    exit(1);
  }
  if(N <= 0 || MAX_N < N) {
    fprintf(stderr, "error: N is out of bounds.\n");
    exit(1);
  }
  if(input_type == 1) {
    for(i = 0; i < N; ++i) {
      if(scanf("%d", &R[i]) < 1) {
        fprintf(stderr, "error: cannot read R[%d].\n", i);
      }
    }
    min_id = 0;
    for(i = 0; i < N; ++i) {
      if(R[min_id] > R[i]) {
        min_id = i;
      }
    }
    max_id = 0;
    for(i = 0; i < N; ++i) {
      if(R[max_id] <= R[i]) {
        max_id = i;
      }
    }
  } else {
    fprintf(stderr, "error: input_type is not 1.\n");
    exit(1);
  }
  compare_count = 0;
  Ramen(N);
  wrong(3);
  return 1;
}
