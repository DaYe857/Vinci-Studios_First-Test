#include<stdio.h>
int count(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + count(n / 10);
}

void main() {
	int n;
	printf("������һ��������\n");
	scanf_s("%d", &n);
	printf("%d�ĸ�λ֮����:%d\n", n, count(n));
}


