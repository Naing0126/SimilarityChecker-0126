#include "gmock/gmock.h"
#include "similaritychecker.cpp"


TEST(TS, TC) {
	SimilarityChecker sc;
	// 글자수검사
	EXPECT_EQ(60, sc.GetLengthPoint("ASD", "DSA"));
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}