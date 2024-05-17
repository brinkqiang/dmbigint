
#include "dmbigint.h"
#include <iostream>
#include "gtest.h"

TEST(CDMBigIntTest, BasicOperations) {
	// Initialize CDMBigInt variables
	CDMBigInt bigint1(123);
	CDMBigInt bigint2(2);
	CDMBigInt bigint3(10);

	// Test addition
	EXPECT_EQ(bigint1 + bigint2, CDMBigInt(125));
	EXPECT_EQ(bigint1 + bigint3, CDMBigInt(133));
	EXPECT_EQ(bigint2 + bigint3, CDMBigInt(12));

	// Test subtraction
	EXPECT_EQ(bigint1 - bigint2, CDMBigInt(121));
	EXPECT_EQ(bigint1 - bigint3, CDMBigInt(113));
	EXPECT_EQ(bigint3 - bigint2, CDMBigInt(8));

	// Test multiplication
	EXPECT_EQ(bigint1 * bigint2, CDMBigInt(246));
	EXPECT_EQ(bigint1 * bigint3, CDMBigInt(1230));
	EXPECT_EQ(bigint2 * bigint3, CDMBigInt(20));

	// Test division
	EXPECT_EQ(bigint1 / bigint2, CDMBigInt(61));
	EXPECT_EQ(bigint1 / bigint3, CDMBigInt(12)); // Handle division by zero appropriately
	EXPECT_EQ(bigint3 / bigint2, CDMBigInt(5)); // Handle division by zero appropriately

	// Test modulo
	// 	EXPECT_EQ(bigint1 % bigint2, CDMBigInt(1));
	// 	EXPECT_EQ(bigint1 % bigint3, CDMBigInt(3));
	// 	EXPECT_EQ(bigint3 % bigint2, CDMBigInt(0));
}

TEST(CDMBigIntTest, ComparisonOperators) {
	// Initialize CDMBigInt variables
	CDMBigInt bigint1(123);
	CDMBigInt bigint2(2);
	CDMBigInt bigint3(10);

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