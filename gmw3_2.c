#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, N, D;
	scanf("%d", &num);

	int v, f, c, cnt[50]={0};
	double div;

	for (int i = 0; i < num; i++) {//while(num--)�� �ξ� ȿ����, --�ڿ� �� ��(�տ� ���� ���� ����)
		scanf("%d %d", &N, &D);
		for (int j = 0; j < N; j++) {
			scanf("%d %d %d", &v, &f, &c);
			div = (double) f / c; //���� div �������� ���� �ٷ� ������ ���ص� ��
			if (div * v >= D)
				cnt[i]++;
		}
	}

	for (int i = 0; i < num; i++)
		printf("%d\n", cnt[i]); //�迭���ٴ� �ٷ� ����Ʈ�ǰԲ�
}

//������ �ڵ�
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
   int testCase;
   int n, distance;
   int velo, fuel, consume, count = 0;

   scanf("%d", &testCase);
   while (testCase--) {
      scanf("%d %d", &n, &distance);
      while (n--) {
         scanf("%d %d %d", &velo, &fuel, &consume);
         if (velo * ((double)fuel / consume) >= distance) {
            count++;
         }
      }
      printf("%d\n", count);
      count = 0;
   }

   return 0;
}*/