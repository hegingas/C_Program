#include<stdio.h>

int main(){
	int lineNum;
	printf("请输入打印图形的行数：");
	scanf("%d",&lineNum);
	if(lineNum % 2 == 0){
		printf("你输入的数字不符合规范，请输入奇数\n");
		return 0;
	}
	for(int i = 0 ; i < lineNum ; i++){
		if(i <= lineNum/2){
			for(int j = 0 ; j <= lineNum/2 + i ; j++){
				if(j < lineNum/2 - i)
					printf(" ");
				else
					printf("*");
			}
		}
		else{
			for(int j = 0 ; j <= 3*lineNum/2 - i - 1 ; j++){
				if(j < i - lineNum/2)
					printf(" ");
				else
					printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
