#include "Anna.h"
#include "Annalib.h"
#include "Bruno.h"
#include "Brunolib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N   300
#define MAX_M 89700
#define MAX_Q    60
#define MAX_K     5
#define MAX_L  1000

#define MAX_C 10000000000000000LL

static int N;
static int M;
static int Q;
static int K;
static int A[MAX_M];
static int B[MAX_M];
static long long C[MAX_M];
static int S[MAX_Q];
static int T[MAX_Q];
static long long Z[MAX_Q];
static int U[MAX_K];

static int A_[MAX_M];
static int B_[MAX_M];
static long long C_[MAX_M];
static int S_[MAX_Q];
static int T_[MAX_Q];
static int U_[MAX_K];

static int L;
static int X[MAX_L];

static int has_AB[MAX_N][MAX_N];
static int has_ST[MAX_N][MAX_N];
static int has_U[MAX_M];

static int mode;
static int question_id;
static int is_valid_shiritori[MAX_Q];
static int first_kanji[MAX_Q];
static int last_kanji[MAX_Q];
static long long duration[MAX_Q];

static void Wrong(int message) {
  printf("Wrong Answer [%d]\n", message);
  exit(1);
}

void Tap(int x) {
  if (mode == 1) {
    if (!(x == 0 || x == 1)) {
      Wrong(1);
    }
    if (L >= MAX_L) {
      Wrong(2);
    }
    X[L++] = x;
  }
}

void Answer(int w){
  if (mode == 2) {
    if (!((0 <= w && w < M) || w == -1)) {
      Wrong(3);
    }
    if (question_id >= Q) {
      Wrong(4);
    }
    if (w == -1) {
      ++question_id;
    } else {
      if (first_kanji[question_id] == -1) {
        first_kanji[question_id] = A[w];
      } else {
        if (last_kanji[question_id] != A[w]) {
          is_valid_shiritori[question_id] = 0;
        }
      }
      last_kanji[question_id] = B[w];
      duration[question_id] += C[w];
    }
  }
}

static void Reset(int new_mode){
  int j, k;

  memcpy(A_, A, sizeof(A));
  memcpy(B_, B, sizeof(B));
  memcpy(C_, C, sizeof(C));
  memcpy(S_, S, sizeof(S));
  memcpy(T_, T, sizeof(T));
  memcpy(U_, U, sizeof(U));

  if (new_mode == 1) {
    L = 0;
  }

  if (new_mode == 2) {
    question_id = 0;
    for (j = 0; j < Q; ++j) {
      is_valid_shiritori[j] = 1;
      first_kanji[j] = -1;
      last_kanji[j] = -1;
      duration[j] = 0;
    }
    for (k = 0; k < K; ++k) {
      C_[U[k]] = -1;
    }
  }

  mode = new_mode;
}

int main(void) {
  int i, j, k;

  if (4 != scanf("%d%d%d%d", &N, &M, &Q, &K)) {
    fprintf(stderr, "error: cannot read N, M, Q and K.\n");
    exit(1);
  }
  if (!(2 <= N && N <= MAX_N)) {
    fprintf(stderr, "error: N is out of bounds.\n");
    exit(1);
  }
  if (!(1 <= M && M <= N * (N - 1))) {
    fprintf(stderr, "error: M is out of bounds.\n");
    exit(1);
  }
  if (!(1 <= Q && K <= MAX_Q)) {
    fprintf(stderr, "error: Q is out of bounds.\n");
    exit(1);
  }
  if (!(1 <= K && K <= MAX_K)) {
    fprintf(stderr, "error: K is out of bounds.\n");
    exit(1);
  }
  for (i = 0; i < M; ++i) {
    if (3 != scanf("%d%d%lld", &A[i], &B[i], &C[i])) {
      fprintf(stderr, "error: cannot read A[%d], B[%d] and C[%d].\n", i, i, i);
      exit(1);
    }
    if (!(0 <= A[i] && A[i] < N)) {
      fprintf(stderr, "error: A[%d] is out of bounds.\n", i);
      exit(1);
    }
    if (!(0 <= B[i] && B[i] < N)) {
      fprintf(stderr, "error: B[%d] is out of bounds.\n", i);
      exit(1);
    }
    if (A[i] == B[i]) {
      fprintf(stderr, "error: A and B do not satisfy the constraints.\n");
      exit(1);
    }
    if (has_AB[A[i]][B[i]]) {
      fprintf(stderr, "error: A and B do not satisfy the constraints.\n");
      exit(1);
    }
    has_AB[A[i]][B[i]] = 1;
    if (!(1 <= C[i] && C[i] <= MAX_C)) {
      fprintf(stderr, "error: C[i] is out of bounds.\n");
      exit(1);
    }
  }
  for (j = 0; j < Q; ++j) {
    if (3 != scanf("%d%d%lld", &S[j], &T[j], &Z[j])) {
      fprintf(stderr, "error: cannot read S[j], T[j] and Z[j].\n");
      exit(1);
    }
    if (!(0 <= S[j] && S[j] < N)) {
      fprintf(stderr, "error: S[%d] is out of bounds.\n", j);
      exit(1);
    }
    if (!(0 <= T[j] && T[j] < N)) {
      fprintf(stderr, "error: T[%d] is out of bounds.\n", j);
      exit(1);
    }
    if (S[j] == T[j]) {
      fprintf(stderr, "error: S and T do not satisfy the constraints.\n");
      exit(1);
    }
    if (has_ST[S[i]][T[i]]) {
      fprintf(stderr, "error: S and T do not satisfy the constraints.\n");
      exit(1);
    }
    has_ST[S[j]][T[j]] = 1;
  }
  for (k = 0; k < K; ++k) {
    if (1 != scanf("%d", &U[k])) {
      fprintf(stderr, "error: cannot read U[k].\n");
      exit(1);
    }
    if (!(0 <= U[k] && U[k] < M)) {
      fprintf(stderr, "error: U[%d] is out of bounds.\n", k);
      exit(1);
    }
    if (has_U[U[k]]) {
      fprintf(stderr, "error: U does not satisfy the constraints.\n");
      exit(1);
    }
    has_U[U[k]] = 1;
    if (A[U[0]] != A[U[k]]) {
      fprintf(stderr, "error: A[U[0]], A[U[1]], ..., A[U[K-1]] must be the same.\n");
      exit(1);
    }
  }

  Reset(1);
  Anna(N, M, A_, B_, C_, Q, S, T_, K, U_);

  Reset(2);
  Bruno(N, M, A_, B_, C_, Q, S_, T_, K, U_, L, X);

  if (question_id < Q) {
    Wrong(5);
  }
  for (j = 0; j < Q; ++j) {
    if (first_kanji[j] == -1) {
      Wrong(6);
    }
  }
  for (j = 0; j < Q; ++j) {
    if (!is_valid_shiritori[j]) {
      Wrong(7);
    }
  }
  for (j = 0; j < Q; ++j) {
    if (S[j] != first_kanji[j] || T[j] != last_kanji[j]) {
      Wrong(8);
    }
  }
  for (j = 0; j < Q; ++j) {
    if (Z[j] != duration[j]) {
      Wrong(9);
    }
  }

  printf("Accepted : L = %d\n", L);
  
  return 0;
}
