#include<stdio.h>
#include<stdlib.h>
#include<time.h>

long int fib(int n){
	if(n == 1 || n == 2)
		return 1;
	else
		return (fib(n-1) + fib(n-2));
}
int main(){
	int num;
	clock_t start,finish;
	double totalTime;
	printf("请输入一个计算斐波拉切数列的数值:>\n");
	scanf("%d",&num);
	start = clock();
	long int ret = fib(num);
	finish = clock();
	printf("计算斐波拉切数列结果为:> %0d\n",ret);
	totalTime = (double)(finish - start)/CLOCKS_PER_SEC;
	printf("%f seconds\n",totalTime);
}
