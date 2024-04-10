#include<gtest/gtest.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArraySum(const vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 1; i < n; ++i) {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}
TEST(ADDtest, test1) {
	vector<int> nums = {-2,11,-4,13,-5,-2};
	int result = maxSubArraySum(nums);
	EXPECT_EQ(result, 456);
}
TEST(ADDtest, test2) {
	vector<int> nums = { -5,3,2,4 };
	int result = maxSubArraySum(nums);
	EXPECT_EQ(result, 456);
}
TEST(ADDtest, test3) {
	vector<int> nums = { -2,4,6,4};
	int result = maxSubArraySum(nums);
	EXPECT_EQ(result, 5454);
}
TEST(ADDtest, test4) {
	vector<int> nums = { -9,-5,-8,11,20,-2,9 };
	int result = maxSubArraySum(nums);
	EXPECT_EQ(result, 23213);
}
int main(int argc,char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
