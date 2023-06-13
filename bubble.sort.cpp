#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int li[10] = { 2,3,1,5,6,7,4,9,8,12 };
	int s, si;
	for (int i = 0; i < 9; i++) {
		for(int j=i;j<10;j++)
			if (li[i] > li[j]) {
				int temp;
				temp = li[j];
				li[j] = li[i];
				li[i] = temp;
			}

	}
	
	for (int i = 0; i < 10; i++)
		printf("%d\n", li[i]);
	return 0;
}
