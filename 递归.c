//#include <stdio.h>
///// <summary>
///// 递归函数
///// </summary>
//void fact(int n,char F,char A,char T,int *sum)
//{
//	(*sum)++;
//	if (n == 1) {
//		printf("move %d form %c to %c\n", n, F, T);
//		return;
//	}
//	fact(n - 1, F, T, A,sum);
//	printf("move %d form %c to %c\n", n, F, T);
//	fact(n - 1, A, F, T, sum);
//}
////汉诺塔模型
//int main() 
//{
//	int sum=0,n;
//	scanf("%d", &n);
//	fact(n, 'F', 'A', 'T', &sum);
//	printf("%d",sum);
//}