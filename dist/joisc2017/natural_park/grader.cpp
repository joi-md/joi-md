#include <stdio.h>
#include <stdlib.h>

#define NMAX  1400
#define DMAX  7
#define QMAX  45000

static int T,N,M,Asktotal,Answertotal;
static int edge_list[NMAX][DMAX];
static int checked[NMAX][DMAX];
static int degree[NMAX];
static int visited[NMAX];
static void WA(int wa_num) {
	printf("Wrong Answer[%d]\n",wa_num);
	exit(0);
}
void Detect(int T, int N);

void Answer(int A, int B) {
	int i;
	if(A < 0||A >= B||B >= N) WA(1);
	for(i = 0 ; i < degree[A] ; i++) {
		if(edge_list[A][i] == B) {
			if(checked[A][i] == 1) WA(3);
			Answertotal++;
			checked[A][i] = 1;
			return;
		}
	}
	WA(2);
}
static void dfs(int now, int Place[]) {
	visited[now] = 1;
	int i;
	for(i = 0 ; i < degree[now] ; i++) {
		if(visited[edge_list[now][i]] == 0 && Place[edge_list[now][i]] == 1) dfs(edge_list[now][i], Place);
	}
}
int Ask(int A, int B, int Place[]) {
	int i;
	Asktotal++;
	if(Asktotal>QMAX) WA(5);
	if(A < 0||A >= B||B >= N) WA(4);
	if(Place[A] != 1) WA(4);
	if(Place[B] != 1) WA(4);
	for(i = 0 ; i < N ; i++) {
		if(Place[i]<0||Place[i]>1) WA(4);
		visited[i] = 0;
	}
	dfs(A, Place);
	return visited[B];
}
int main(int argc, char **argv) {
	int i;
	scanf("%d%d%d",&T,&N,&M);
	Answertotal = 0;
	for(i = 0 ; i < N ; i++) degree[i] = 0;
	for(i = 0 ; i < M ; i++) {
		int ea,eb;
		scanf("%d%d",&ea,&eb);
		checked[ea][degree[ea]] =  0;
		checked[eb][degree[eb]] =  0;
		edge_list[ea][degree[ea]++] = eb;
		edge_list[eb][degree[eb]++] = ea;
	}
	Detect(T, N);
	if(Answertotal<M) WA(6);
	printf("Accepted\n");
	return 0;
}
