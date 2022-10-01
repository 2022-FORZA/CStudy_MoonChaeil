#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, N, D;
	scanf("%d", &num);

	int v, f, c, cnt[50]={0};
	double div;

	for (int i = 0; i < num; i++) {//while(num--)이 훨씬 효율적, --뒤에 쓸 것(앞에 쓰면 빼고 시작)
		scanf("%d %d", &N, &D);
		for (int j = 0; j < N; j++) {
			scanf("%d %d %d", &v, &f, &c);
			div = (double) f / c; //굳이 div 정의하지 말고 바로 식으로 비교해도 됨
			if (div * v >= D)
				cnt[i]++;
		}
	}

	for (int i = 0; i < num; i++)
		printf("%d\n", cnt[i]); //배열보다는 바로 프린트되게끔
}

//멘토의 코드
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