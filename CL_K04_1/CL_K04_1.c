/*‰Û‘èCL_K04_1*/
/*ì¬ÒFŒË‘q‚ä‚©‚è*/
#include <stdio.h>

void main(void){
	int a[5];
	int i;

	for(i = 0; i < 5 ;i = i + 1) {
		a[i] = i * 10;
		printf("a[%d] = %d \n",i,a[i]);
	}
	printf("\n");
}