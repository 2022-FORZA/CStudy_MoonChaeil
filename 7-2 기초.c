#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char name[MAX][MAX];
	char stan[MAX];
	char *a,*k;
	char bac;
	int num,i,len; //lenstan �������� ���� ��������
	char* j=stan;

	scanf("%d", &num);
	scanf("%s", &stan);

	char fron = stan[0];

	for (i = 0; i < num; i++)
		scanf("%s", &name[i]);

	a=strchr(stan, '*');
	k = a - j; //k�� *�� ��ġ, ���شٸ�
	bac = (*k + 1);

	for (i = 1; i < k; i++) //k�� int�� �ƴϴ�
		fron = strcat(fron, stan[i]); //���شٸ�(char�� char*

	for (i = 0; i < num; i++) {
		len = strlen(name[i]); //�����ͼս�?
		char* m = name[i];
		if (m == strstr(name[i], fron)) //�Ű������ٸ�, ���شٸ�
		{
			char* n;
			n = strrstr(name[i], bac); //strrstr ���Ǿȵ�, 'extern�� int���� ��ȯ�ϴ°����ΰ���?'
			if (bac == *n) printf("DA");
			else printf("NE");
		}
		else
				printf("NE");
	
		
	
	}
	
	

	//�ƽ�Ű�ڵ� ������ strstr(stan, '*')+1
		//len ���� ó��~����ġ����/������~�� ����� �̸����̱�
	//¦���߱��Ҷ� ������ ���۰�=����, ���� ���=���� �̷���

	

}