#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h>
int Add(int x, int y){
	return x + y;
}
int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x * y;
}
int Div(int x, int y){
	return x / y;
}
int main(){
	int num = 0;
	int input = 1;
	int x = 0;
	int y = 0;
	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div};
	while (input){
		printf("************************\n");
		printf("**1.add           2.sub**\n"); 
		printf("**3.mul           4.div**\n");
		printf("************************\n");
		printf("请选择：");
		scanf("%d", &input);
		if (input <= 4 && input >= 1){
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			num = p[input](x, y);
		}
		else
		{
			printf("输入有误");
		}
		printf("num=%d\n", num);
	}
	system("pause");
	return 0;
}