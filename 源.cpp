#include<gtest/gtest.h>
int add(int a, int b) {
	if (a > 0 && b > 0) {
		return a + b;
	}
	else if (a < 0 && b < 0) {
		return a * b;
	}
	else return a - b;
}
TEST(ADDtest, test1) {
	int result = add(1, 1);
	EXPECT_EQ(result, 2);
}
TEST(ADDtest, test2) {
	int result = add(-1, -1);
	EXPECT_EQ(result, 1);
}
TEST(ADDtest, test3) {
	int result = add(-1, 0);
	EXPECT_EQ(result, -1);
}
TEST(ADDtest, test4) {
	int result = add(1, -1);
	EXPECT_EQ(result, 2);
}
int main(int argc,char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
