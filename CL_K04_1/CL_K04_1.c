/*課題CL_K04_1*/
/*作成者：戸倉ゆかり*/
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