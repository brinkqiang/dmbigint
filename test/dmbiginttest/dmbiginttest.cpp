
#include "dmbigint.h"
#include <iostream>
#include "gtest.h"

TEST(CDMBigIntTest, BasicOperations) {
	// Initialize CDMBigInt variables
	CDMBigUint bigint1(123);
	CDMBigUint bigint2(2);
	CDMBigUint bigint3(10);

	// Test addition
	EXPECT_EQ(bigint1 + bigint2, CDMBigUint(125));
	EXPECT_EQ(bigint1 + bigint3, CDMBigUint(133));
	EXPECT_EQ(bigint2 + bigint3, CDMBigUint(12));

	// Test subtraction
	EXPECT_EQ(bigint1 - bigint2, CDMBigUint(121));
	EXPECT_EQ(bigint1 - bigint3, CDMBigUint(113));
	EXPECT_EQ(bigint3 - bigint2, CDMBigUint(8));

	// Test multiplication
	EXPECT_EQ(bigint1 * bigint2, CDMBigUint(246));
	EXPECT_EQ(bigint1 * bigint3, CDMBigUint(1230));
	EXPECT_EQ(bigint2 * bigint3, CDMBigUint(20));

	// Test division
	EXPECT_EQ(bigint1 / bigint2, CDMBigUint(61));
	EXPECT_EQ(bigint1 / bigint3, CDMBigUint(12));
	EXPECT_EQ(bigint3 / bigint2, CDMBigUint(5));

	// Test modulo

	EXPECT_EQ(bigint1 % bigint2, CDMBigUint(1));
	EXPECT_EQ(bigint1 % bigint3, CDMBigUint(3));
	EXPECT_EQ(bigint3 % bigint2, CDMBigUint(0));
	EXPECT_EQ(CDMBigUint(10) % CDMBigUint(3), CDMBigUint(1));
	EXPECT_EQ(CDMBigUint(10) % CDMBigUint(2), CDMBigUint(0));
	EXPECT_EQ(CDMBigUint(10) % CDMBigUint(4), CDMBigUint(2));

}

TEST(CDMBigIntTest, ComparisonOperators) {
	// Initialize CDMBigInt variables
	CDMBigUint bigint1(123);
	CDMBigUint bigint2(2);
	CDMBigUint bigint3(10);

	// Test equality
	EXPECT_FALSE(bigint1 == bigint3);
	EXPECT_FALSE(bigint1 == bigint2);

	// Test inequality
	EXPECT_TRUE(bigint1 != bigint2);
	EXPECT_TRUE(bigint1 != bigint3);

	// Test greater than
	EXPECT_TRUE(bigint1 > bigint2);
	EXPECT_TRUE(bigint1 > bigint3);
	EXPECT_FALSE(bigint2 > bigint1);

	// Test greater than or equal
	EXPECT_TRUE(bigint1 >= bigint2);
	EXPECT_TRUE(bigint1 >= bigint3);
	EXPECT_FALSE(bigint2 >= bigint1);

	// Test less than
	EXPECT_TRUE(bigint2 < bigint1);
	EXPECT_TRUE(bigint2 < bigint3);
	EXPECT_FALSE(bigint1 < bigint2);

	// Test less than or equal
	EXPECT_TRUE(bigint2 <= bigint1);
	EXPECT_TRUE(bigint2 <= bigint3);
	EXPECT_FALSE(bigint1 <= bigint2);
}
