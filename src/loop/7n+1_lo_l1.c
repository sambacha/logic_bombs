#include <string.h> 
#include "utils.h"
#include "a_tester.h"

long f(long x){
    if (x%2 == 0)
	return x/2;
    else if (x%3 == 0)
	return x/3;
    else if (x%5 == 0)
	return x/5;
    else
        return 7*x + 1;
}

int logic_bomb(int i) {
    i = i + 1104;
    long j = f(i);
    int loopcount = 1;
    while(j != 1){
	j = f(j);
        loopcount ++;
    }
    if(loopcount == 50)
        return BOMB_ENDING;
    else
        return NORMAL_ENDING;
}
