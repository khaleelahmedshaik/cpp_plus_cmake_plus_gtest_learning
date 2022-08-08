#include <gtest/gtest.h>
#include "hello_world.h"

TEST(HelloTest, BasicAssertions) {
	/*string equal*/
   EXPECT_STREQ(test_function("Hello World"), "Hello World");
   EXPECT_STREQ(test_function(NULL), NULL);
	/*************/
	/* string not equal*/
   EXPECT_STRNE(test_function("Hello World"), "First c++");
	/*************/
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}