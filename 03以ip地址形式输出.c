#include<stdio.h>
/*
�����32λ�Ķ������������ʵ�ֽ��ö�������ת����ip��ַ��ʽ 
*/ 

//�Զ���ݹ麯�����ڶ�����ת��Ϊʮ���� 
int bin_dec(int x, int n) {
	if (n == 0) {
		return 1;
	}
	return x*bin_dec(x,n-1);
}


int main() {
	int i;
	int ip[4] = {0};
	char arr[33];			//��Ŷ�������
	printf("please input binary number :\n");
	scanf("%s", &arr);			//���ַ�����ʽд��
	//����0~7��ת�����
	for (i = 0; i < 8; i++) {
		if (arr[i] == '1') {
			ip[0] += bin_dec(2, 7-i);
		}
	} 
	//����8~15��ת�����
	for (i = 8; i < 15; i++) {
		if (arr[i] == '1') {
			ip[1] += bin_dec(2, 15-i);
		}
	}
	//����16~24��ת�����
	for (i = 16; i < 24; i++) {
		if (arr[i] == '1') {
			ip[2] += bin_dec(2, 24-i);
		}
	}
	//����24~32��ת�����
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
