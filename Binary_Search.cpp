#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main(void) {
	int key;
	int grade[SIZE] = { 2,6,11,13,17,20,22,25,29,32,35,43,46,53,55,60};
	printf("탐색할 값을 입력 : ");
	scanf("%d", &key);
	printf("탐색결과 = %d", binary_search(grade, SIZE, key));
	


	return 0;
}

int binary_search(int list[], int n, int key) {
	int low, high, middle;
	high = n;
	low = -1;
	while (low<=high) {
		printf("[%d %3d]\n", low, high);
		middle = (high + low) / 2;
		if (list[middle] == key)
			return middle;
		else if (key < list[middle])
			high = middle - 1;
		else
			low = middle + 1;

	}
	return -1;
	
}