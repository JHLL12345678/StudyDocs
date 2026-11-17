//int cmp_node(const void *a,const void *b) 
//{
//	node* x = (const node*)a, * y = (const node*)b;
//	if (x->time != y->time)
//		return (x->time > y->time) - (x->time > y->time);
//	else if(x->V!=y->V)
//		return (x->V> y->V) - (x->V > y->V);
//	return (x->T > y->T) - (x->T > y->T);
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//状态从何而来，状态要怎么转移，转移到哪里去;
//int max(int a,int b)
//{
//	return a > b ? a : b;
//}
//int main() 
//{
//	//示例爬楼梯---一维dp
//	//int dp[51],n;//dp数组
//	//scanf("%d",&n); 
//	//memset(dp, 0, sizeof(dp));
//	//dp[0] = 1; dp[1] = 1;
//	//for (int i = 2; i <= n; i++)
//	//	dp[i] = dp[i - 1] + dp[i - 2];
//	//printf("%d",dp[n]);
//
//
//	//力扣 198.打家劫舍
//	int num[] = { 1,7,9,2 };
//	printf("%d", rob(&num[0], sizeof(num)/sizeof(int)));
//}
//int rob(int* nums, int numsSize) {
//	int dp[104],dp2[101];
//	memset(dp, 0, sizeof(dp));
//	dp[0] = nums[0];
//	if (numsSize <= 3)
//	{
//		int max_ = nums[0];
//		for (int i = 0; i < numsSize; i++)
//			if (nums[i] > max_)
//				max_ = nums[i];
//		return max_;
//	}
//	else
//	{
//		dp[1] = max(nums[0], nums[1]); dp2[1]=nums[1]; dp2[2] = max(nums[1], nums[2]);
//		for (int i = 2; i < numsSize-1; i++)
//			dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
//		for (int i = 3; i < numsSize; i++)
//			dp2[i] = max(dp2[i - 1], dp2[i - 2] + nums[i]);
//		return max(dp[numsSize - 2],dp2[numsSize-1]);
//	}
//}