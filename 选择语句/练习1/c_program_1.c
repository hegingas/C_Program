#include<stdio.h>

int main(){
	int num_i;
	int result;
	printf("请输入一个待检测数字：\n");
	scanf("%d",&num_i);
	while(num_i){
		result++;
		num_i/=10;
	}
	printf("该数字一共有%d位\n",result);
	return 0;
}
