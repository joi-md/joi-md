#include <stdio.h>
#include <stdlib.h>

#define NMAX 500
#define QMAX 500
#define SERVERSIZE 1000
#define ASKMAX 20

void InitAnya(int N , int A[] , int B[]);
void Anya(int C[]);
void InitBoris(int N , int A[] , int B[]);
int Boris(int city);
static int N , Q , A[NMAX] , B[NMAX] , C[NMAX];
static int BorisReturnArray[QMAX];
static int ServerBit[SERVERSIZE];
static int ServerSaved[SERVERSIZE];
static int Asktotal;

void Save(int place , int bit) {
  if(place < 0 || place >= SERVERSIZE) {
    printf("Wrong Answer [1]\n");
    exit(1);
  }
  if(ServerSaved[place] == 1) {
    printf("Wrong Answer [2]\n");
    exit(1);
  }
  if(bit < 0 || bit > 1) {
    printf("Wrong Answer [3]\n");
    exit(1);
  }
  ServerSaved[place] = 1;
  ServerBit[place] = bit;
}
int Ask(int place) {
  if(place < 0 || place >= SERVERSIZE) {
    printf("Wrong Answer [5]\n");
    exit(1);
  }
  Asktotal++;
  if(Asktotal > ASKMAX) {
    printf("Wrong Answer [6]\n");
    exit(1);
  }
  return ServerBit[place];
}
int main(void) {
  int i , j , k;
  scanf("%d" , &N);
  for(i = 0 ; i < N - 1 ; i++) scanf("%d%d" , &A[i] , &B[i]);
  InitAnya(N , A , B);
  InitBoris(N , A , B);
  scanf("%d" , &Q);
  for(i = 0 ; i < Q ; i++) {
    char readC[NMAX];
    scanf("%s" , readC);
    for(j = 0 ; j < N - 1 ; j++) C[j] = (int)(readC[j] - '0');
    scanf("%d" , &k);
    for(j = 0 ; j < SERVERSIZE ; j++) {
      ServerBit[j] = 0;
      ServerSaved[j] = 0;
    }
    Anya(C);
    for(j = 0 ; j < k ; j++) {
      int city;
      scanf("%d" , &city);
      Asktotal = 0;
      int Borisreturn = Boris(city);
      if(Borisreturn < 0 || Borisreturn >= N) {
        printf("Wrong Answer [4]\n");
        exit(1);
      }
      BorisReturnArray[j] = Borisreturn;
    }
    for(j = 0 ; j < k ; j++) {
      if(j > 0) printf(" ");
      printf("%d" , BorisReturnArray[j]);
    }
    printf("\n");
  }
  return 0;
}
