#include <gtest/gtest.h>
#include "stock00.h"

TEST(StockTest, BasicAssertions) {
	Stock test;
	double exp = 1500;
	test.acquire("Dummy", 100, 15);
	double resp = test.show();
	
	EXPECT_EQ (exp, resp);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}