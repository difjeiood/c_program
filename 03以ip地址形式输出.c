#include<stdio.h>
/*
任意的32位的二进制数，编程实现将该二进制数转换成ip地址形式 
*/ 

//自定义递归函数用于二进制转换为十进制 
int bin_dec(int x, int n) {
	if (n == 0) {
		return 1;
	}
	return x*bin_dec(x,n-1);
}


int main() {
	int i;
	int ip[4] = {0};
	char arr[33];			//存放二进制数
	printf("please input binary number :\n");
	scanf("%s", &arr);			//以字符串形式写入
	//计算0~7的转换结果
	for (i = 0; i < 8; i++) {
		if (arr[i] == '1') {
			ip[0] += bin_dec(2, 7-i);
		}
	} 
	//计算8~15的转换结果
	for (i = 8; i < 15; i++) {
		if (arr[i] == '1') {
			ip[1] += bin_dec(2, 15-i);
		}
	}
	//计算16~24的转换结果
	for (i = 16; i < 24; i++) {
		if (arr[i] == '1') {
			ip[2] += bin_dec(2, 24-i);
		}
	}
	//计算24~32的转换结果
	for (i = 24; i < 32; i++) {
		if (arr[i] == '1') {
			ip[0] += bin_dec(2, 7-i);
		}
		
		if(arr[i] == '\0') {
			break;
		}
	}
	
	printf("ip:");
	printf("%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
	return 0;
}
