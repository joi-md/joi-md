#include<stdio.h>
#include<stdlib.h>

void Solve(int, int);

#define MAX_N (50)

static int T;
static int N;
static int K;
static int P[MAX_N];
static int A[MAX_N * 2];

static int cnt_flip_called;
static int cnt_answer_called;

static void wrong_answer(int message){
	printf("Wrong Answer[%d]\n", message);
	exit(message);
}

static void correct_answer(){
	printf("Accepted\n");
	exit(0);
}

static int in_range(int lb, int ub, int x){
	if(lb <= x && x < ub) return 1;
	else return 0;
}

int Flip(int I, int J){
	cnt_flip_called++;
	if(cnt_flip_called > K){
		wrong_answer(2);
	}
	if(I == J || in_range(0, N * 2, I) == 0 || in_range(0, N * 2, J) == 0){
		wrong_answer(1);
	}
	if(P[A[I]] < P[A[J]]) return A[I];
	else return A[J];
}

static int answered[MAX_N];

void Answer(int I, int J, int X){
	if(in_range(0, N * 2, I) == 0 || in_range(0, N * 2, J) == 0 || I == J || 
	A[I] != X || A[J] != X){
		wrong_answer(3);
	}
	if(answered[X] != 0){
		wrong_answer(4);
	}
	answered[X] = 1;
	cnt_answer_called++;
}

int main(){
	int i;
	if(scanf("%d%d%d",&T, &N, &K) < 3){
		fprintf(stderr, "error: cannot read T, N and K.\n");
		exit(1);
	}
	if(N <= 0 || N > MAX_N){
		fprintf(stderr, "error: N is out of bounds.\n");
		exit(1);
	}
	for(i = 0; i < N; ++i){
		if(scanf("%d", &(P[i])) < 1){
			fprintf(stderr, "error: cannot read the sequence P.\n");
			exit(1);
		}
	}
	for(i = 0; i < N * 2; ++i){
		if(scanf("%d", &(A[i])) < 1){
			fprintf(stderr, "error: cannot read the sequence A.\n");
			exit(1);
		}
	}
	cnt_flip_called = 0;
	cnt_answer_called = 0;
	Solve(T, N);
	if(cnt_answer_called != N){
		wrong_answer(5);
	}
	correct_answer();
	return 1;
}
