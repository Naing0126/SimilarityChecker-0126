#include "gmock/gmock.h"
#include "similaritychecker.cpp"


TEST(LengthCheck, SameSize) {
	LengthChecker sc;
	EXPECT_EQ(60, sc.GetLengthPoint("ASD", "DSA"));
}
TEST(LengthCheck, Zero) {
	LengthChecker sc;
	EXPECT_EQ(0, sc.GetLengthPoint("A", "BB"));
}
TEST(LengthCheck, PartialPoint) {
	LengthChecker sc;
	EXPECT_EQ(20, sc.GetLengthPoint("AAABB", "BAA"));
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}