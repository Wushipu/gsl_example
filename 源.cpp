#include <stdio.h>
#include <malloc.h>

int main()
{
	int** a;
	int i, j;
	a = (int**)malloc(sizeof(int*) * 3);//Ϊ��ά�������3��
	for (i = 0; i < 3; ++i) {//Ϊÿ�з���4����С�ռ�
		a[i] = (int*)malloc(sizeof(int) * 4);
	}
	//��ʼ��
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j) {
			a[i][j] = i + j;
		}
	}
	//�������
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 4; ++j) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	//�ͷŶ�̬���ٵĿռ�
	for (i = 0; i < 3; ++i) {
		free(a[i]);
	}
	free(a);
	return 0;
}