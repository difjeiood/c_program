#include<stdio.h>
void main() {
	//����һЩ��Ҫ�õ��Ĳ���
	int number,i,j,temp;
	//ֵ��ʼ��
	i=0; 
	//����һ��16λ�������Ŷ���������ʼ��Ϊ0
	int array[16] = {0};

	printf("please input a number:");
	scanf("%d",&number);
	temp = number;
	
	//%2����
	while(temp != 0) {
		array[i] = temp % 2; //ģ2���㣬���ֵ
		temp = temp / 2;
		i++; 
	}
	//��� 
	for (j = 15; j >= 0; j--) {
		printf("%d", array[j]);
		if (j % 4 ==0 ){
			printf(" ");
		} 
	}
} 

