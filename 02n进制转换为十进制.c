#include<stdio.h>
#include<string.h>
/*
ʵ������һ������������ƣ����ɽ�����ת��Ϊʮ������ 
*/
int main() {
	//������� 
	long t1;
	int i, n, t, t3;
	char arr[100];
	printf("please input a number string:\n");
	gets(arr);		//����n��������ŵ������� 
	strupr(arr);	//��Сд��ĸת���ɴ�д
	t3 = strlen(arr);	//�������arr�ĳ���
	t1 = 0;				//��ʼ��t1��ֵ
	
	//��ʾ����
	printf("please input n (2or8or16)\n");
	scanf("%d", &n);
	
	for (i = 0; i < t3; i++) {
		//���жϳ������ 
		
		if (arr[i] - '0' >= n &&  arr[i] < 'A' || arr[i] - 'A' + 10 >= n) {//�ж���������ݺͽ����Ƿ������ 
			printf("data erro!\n");
//			exit(0);	//�˳����� 
		} 
		if ( arr[i] >= '0' && arr[i] <= '9') {	//�ж��Ƿ�Ϊ���� 
			t = arr[i] - '0';
		} else if (n >= 11 && (arr[i] >= 'A' && arr[i] <= 'A' + n -10)) { //�ж��Ƿ�Ϊ��ĸ 
			t = arr[i] - 'A' + 10; 
		}
		//������
		t1 = t1 * n + t; 
	} 
	//���
	printf("the decimal is : %ld\n", t1); 

	return 0;	
}
