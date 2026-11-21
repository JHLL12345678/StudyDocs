//#include <stdio.h>
////例题力扣209.长度最小的子数组
////滑动窗口的本质就是利用枚举出来的某一个右端点设定一个合法的左端点，通过数据之间的关系和题目的需求来去动态调整区间
//int minSubArrayLen(int target, int* nums, int numsSize) {
//	int sum = 0,min= numsSize+1 , l = 0;
//	for (int r = 0; r < numsSize; r++)
//	{
//		sum += nums[r];
//		while (sum >= target) {
//			min = min > r - l + 1 ? r - l + 1 : min;
//			sum -= nums[l++];
//		}
//	}
//	return min <= numsSize ? min : 0;
//}
//int main() {
//	int nums[] = { 1,2,3,4,5 };
//	printf("%d", minSubArrayLen(11,nums,5));
//}