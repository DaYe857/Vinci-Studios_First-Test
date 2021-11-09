#include<stdio.h>
int count(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + count(n / 10);
}

void main() {
	int n;
	printf("请输入一个正整数\n");
	scanf_s("%d", &n);
	printf("%d的各位之和是:%d\n", n, count(n));
}


