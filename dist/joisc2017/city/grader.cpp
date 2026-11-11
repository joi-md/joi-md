#include <stdio.h>
#include <stdlib.h>

#define NMAX 250000
#define QMAX 250000
#define CODEMAX ((1LL << 60LL) - 1)

void Encode(int N, int A[], int B[]);
void InitDevice();
int Answer(long long S, long long T);

static int N, Q, A[NMAX], B[NMAX], X[QMAX], Y[QMAX], expected[QMAX];
static long long given_code[NMAX];
static int ans[QMAX];

void WrongAnswer(int e)
{
	printf("Wrong Answer[%d]\n", e);
	exit(1);
}

void Code(int city, long long code)
{
	if (!(0 <= city && city <= N - 1)) {
		WrongAnswer(1);
	}
	if (given_code[city] != -1) {
		WrongAnswer(2);
	}
	if (!(0 <= code && code <= CODEMAX)) {
		WrongAnswer(3);
	}
	given_code[city] = code;
}

int main(void)
{
	int i;
	long long max_code;

	scanf("%d%d", &N, &Q);
	for (i = 0; i < N - 1; ++i) {
		scanf("%d%d", &(A[i]), &(B[i]));
	}
	for (i = 0; i < Q; ++i) {
		scanf("%d%d%d", &(X[i]), &(Y[i]), &(expected[i]));
	}
	for (i = 0; i < N; ++i) given_code[i] = -1;

	Encode(N, A, B);

	for (i = 0; i < N; ++i) {
		if (given_code[i] == -1) {
			WrongAnswer(4);
		}
	}

	InitDevice();
	for (i = 0; i < Q; ++i) {
		ans[i] = Answer(given_code[X[i]], given_code[Y[i]]);
		if (!(0 <= ans[i] && ans[i] <= 2)) {
			WrongAnswer(5);
		}
		if (ans[i] != expected[i]) {
			WrongAnswer(6);
		}
	}

	max_code = 0;
	for (i = 0; i < N; ++i) {
		if (max_code < given_code[i]) {
			max_code = given_code[i];
		}
	}

	printf("Accepted : max_code=%lld\n", max_code);
	return 0;
}
