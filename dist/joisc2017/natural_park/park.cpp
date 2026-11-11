#include "park.h"

static int Place[1400];
void Detect(int T, int N) {
	int i;
	for(i = 0 ; i < 2 ; i++) Place[i] = 0;
	for(i = 2 ; i < N ; i++) Place[i] = 1;
	if(Ask(3, 5, Place) != 1) return;
	Answer(2, 4);
	Answer(2, 5);
	Answer(3, 4);
	Place[0] = 1;
	Place[3] = 0;
	Place[5] = 0;
	if(Ask(0, 4, Place) != 0) return;
	Answer(0, 1);
	Answer(0, 3);
	Answer(1, 4);
	Answer(1, 2);
}
