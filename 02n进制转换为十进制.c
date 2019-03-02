#include<stdio.h>
#include<string.h>
/*
实现任意一个数输入其进制，即可将该数转换为十进制数 
*/
int main() {
	//定义变量 
	long t1;
	int i, n, t, t3;
	char arr[100];
	printf("please input a number string:\n");
	gets(arr);		//输入n进制数存放到数组中 
	strupr(arr);	//将小写字母转换成大写
	t3 = strlen(arr);	//求出数组arr的长度
	t1 = 0;				//初始化t1的值
	
	//提示输入
	printf("please input n (2or8or16)\n");
	scanf("%d", &n);
	
	for (i = 0; i < t3; i++) {
		//先判断程序错误 
		
		if (arr[i] - '0' >= n &&  arr[i] < 'A' || arr[i] - 'A' + 10 >= n) {//判断输入的数据和进制是否相符合 
			printf("data erro!\n");
//			exit(0);	//退出程序 
		} 
		if ( arr[i] >= '0' && arr[i] <= '9') {	//判断是否为数字 
			t = arr[i] - '0';
		} else if (n >= 11 && (arr[i] >= 'A' && arr[i] <= 'A' + n -10)) { //判断是否为字母 
			t = arr[i] - 'A' + 10; 
		}
		//最终数
		t1 = t1 * n + t; 
	} 
	//输出
	printf("the decimal is : %ld\n", t1); 

	return 0;	
}
