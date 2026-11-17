//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAXA 100005
//
//int chosen[101];
//int cnt = 0;
//
//typedef struct
//{
//    int cost, val;
//} mode;
//
//mode N[101];
//int dp[120][MAXA];
//
//int _maxb(int a, int b) {
//    return a > b ? a : b;
//}
//int cmp_mode(const void* a, const void* b)
//{
//    const mode* x = (const mode*)a;
//    const mode* y = (const mode*)b;
//    if (x->cost != y->cost)
//        return (y->cost > x->cost) - (y->cost < x->cost);
//    else
//        return (y->val > x->val) - (y->val < x->val);
//}
//
//int main()
//{
//    int n, S;
//    if (scanf("%d %d", &n, &S) != 2) return 0;
//
//    for (int i = 1; i <= n; i++)
//        scanf("%d %d", &N[i].cost, &N[i].val);
//
//    qsort(&N[1], n, sizeof(N[0]), cmp_mode);
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= S; j++)
//        {
//            if (N[i].cost <= j)
//                dp[i][j] = _maxb(dp[i - 1][j], dp[i - 1][j - N[i].cost] + N[i].val);
//            else
//                dp[i][j] = dp[i - 1][j];
//        }
//    }
//
//    printf("%d\n", dp[n][S]);
//
//    int j = S;
//    for (int i = n; i >= 1; i--) {
//        if (j >= N[i].cost && dp[i][j] == dp[i - 1][j - N[i].cost] + N[i].val)
//        {
//            chosen[cnt++] = i;
//            j -= N[i].cost;
//        }
//    }
//
//    for (int k = cnt - 1; k >= 0; k--)
//        printf("%d %d\n", N[chosen[k]].cost, N[chosen[k]].val);
//
//    return 0;
//}