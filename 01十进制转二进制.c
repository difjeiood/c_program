#include<stdio.h>
void main() {
	//定义一些需要用到的参数
	int number,i,j,temp;
	//值初始化
	i=0; 
	//利用一个16位的数组存放二进制数初始化为0
	int array[16] = {0};

	printf("please input a number:");
	scanf("%d",&number);
	temp = number;
	
	//%2运算
	while(temp != 0) {
		array[i] = temp % 2; //模2运算，存放值
		temp = temp / 2;
		i++; 
	}
	//输出 
	for (j = 15; j >= 0; j--) {
		printf("%d", array[j]);
		if (j % 4 ==0 ){
			printf(" ");
		} 
	}
} 

