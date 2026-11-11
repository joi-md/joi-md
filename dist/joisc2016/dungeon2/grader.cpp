#include "dungeon2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 201
#define N_MOVE_MAX 1500000

static int N;
static int M;
static int X;
static int R;
static int n_roads[MAX_N];
static int road[MAX_N][MAX_N];
static int road_idx[MAX_N][MAX_N];

static int color[MAX_N];
static int pos;
static int last_road;

static int called_answer[MAX_N];
static int call_move;

static int expected_answer[MAX_N];

static void Wrong(int message) {
	printf("Wrong Answer [%d]\n", message);
	exit(1);
}

void Answer(int D, int A)
{
	if (!(1 <= D && D <= R)) {
		Wrong(1);
	}
	if (called_answer[D] != -1) {
		Wrong(2);
	}

	called_answer[D] = A;
}

void Move(int I, int V)
{
	if (I < 1 || n_roads[pos] < I) {
		Wrong(5);
	}
	if (V < 1 || X < V) {
		Wrong(6);
	}

	++call_move;

	if (call_move > N_MOVE_MAX) {
		Wrong(7);
	}
	--I;
	color[pos] = V;
	last_road = road_idx[road[pos][I]][pos] + 1;
	pos = road[pos][I];
}

int NumberOfRoads()
{
	return n_roads[pos];
}

int LastRoad()
{
	return last_road;
}

int Color()
{
	return color[pos];
}

int main(void)
{
	int i, j;
	if (scanf("%d%d%d", &N, &X, &R) != 3) {
		fprintf(stderr, "error: cannot read N, X and R.\n");
		exit(1);
	}

	if (N < 2 || MAX_N < N) {
		fprintf(stderr, "error: N is out of bounds.\n");
		exit(1);
	}

	for (i = 0; i < N; ++i) {
		scanf("%d", &(n_roads[i]));

		for (j = 0; j < N; ++j) road_idx[i][j] = -1;
		for (j = 0; j < n_roads[i]; ++j) {
			scanf("%d", &(road[i][j]));
			--road[i][j];
			road_idx[i][road[i][j]] = j;
		}
	}

	for (i = 1; i <= R; ++i) {
		scanf("%d", &(expected_answer[i]));
	}

	for (i = 0; i < N; ++i) {
		color[i] = 1;
	}

	pos = 0;
	last_road = -1;
	call_move = 0;
	for (i = 1; i <= R; ++i) called_answer[i] = -1;

	Inspect(R);

	for (i = 1; i <= R; ++i) {
		if (called_answer[i] == -1) {
			Wrong(3);
		}
		if (called_answer[i] != expected_answer[i]) {
			Wrong(4);
		}
	}

	printf("Accepted: #move = %d\n", call_move);

	return 0;
}
