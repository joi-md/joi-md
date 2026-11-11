#include <cstdio>
#include <vector>
#include "library.h"
using namespace std;

void Solve(int N)
{
	vector<int> M(N);

	for(int i = 0; i < N; i++) {
		M[i] = 1;
	}

	int A = Query(M);

	vector<int> res(N);

	for(int i = 0; i < N; i++) {
		res[i] = i + 1;
	}

	Answer(res);
}
