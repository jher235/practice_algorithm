#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {

	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("탐색할 값 입력 : ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("인덱스 위치 : %d\n", i);
			break;
		}
	}

	printf("탐색종료\n");

	return 0;
}
