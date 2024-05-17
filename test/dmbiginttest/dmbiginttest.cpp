
#include "dmbigint.h"
#include <iostream>
#include "gtest.h"

TEST(CDMBigIntTest, BasicOperations) {
	// Initialize CDMBigInt variables
	CDMBigInt bigint1(123);
	CDMBigInt bigint2(-456);
	CDMBigInt bigint3(0);

	// Test addition
	EXPECT_EQ(bigint1 + bigint2, CDMBigInt(-333));
	EXPECT_EQ(bigint1 + bigint3, bigint1);
	EXPECT_EQ(bigint2 + bigint3, bigint2);

	// Test subtraction
	EXPECT_EQ(bigint1 - bigint2, CDMBigInt(579));
	EXPECT_EQ(bigint1 - bigint3, bigint1);
	EXPECT_EQ(bigint2 - bigint3, bigint2);

	// Test multiplication
	EXPECT_EQ(bigint1 * bigint2, CDMBigInt(-56136));
	EXPECT_EQ(bigint1 * bigint3, bigint3);
	EXPECT_EQ(bigint2 * bigint3, bigint3);

	// Test division
	EXPECT_EQ(bigint1 / bigint2, CDMBigInt(-0));
	EXPECT_EQ(bigint1 / bigint3, CDMBigInt(INT_MAX)); // Handle division by zero appropriately
	EXPECT_EQ(bigint2 / bigint3, CDMBigInt(INT_MIN)); // Handle division by zero appropriately

	// Test modulo
	EXPECT_EQ(bigint1 % bigint2, bigint1);
	EXPECT_EQ(bigint1 % bigint3, bigint1);
	EXPECT_EQ(bigint2 % bigint3, bigint2);
}

TEST(CDMBigIntTest, ComparisonOperators) {
	// Initialize CDMBigInt variables
	CDMBigInt bigint1(123);
	CDMBigInt bigint2(-456);
	CDMBigInt bigint3(0);

	// Test equality
	EXPECT_TRUE(bigint1 == bigint3);
	EXPECT_FALSE(bigint1 == bigint2);

	// Test inequality
	EXPECT_TRUE(bigint1 != bigint2);
	EXPECT_FALSE(bigint1 != bigint3);

	// Test greater than
	EXPECT_TRUE(bigint1 > bigint2);
	EXPECT_FALSE(bigint1 > bigint3);
	EXPECT_FALSE(bigint2 > bigint1);

	// Test greater than or equal
	EXPECT_TRUE(bigint1 >= bigint2);
	EXPECT_TRUE(bigint1 >= bigint3);
	EXPECT_FALSE(bigint2 >= bigint1);

	// Test less than
	EXPECT_TRUE(bigint2 < bigint1);
	EXPECT_FALSE(bigint2 < bigint3);
	EXPECT_FALSE(bigint1 < bigint2);

	// Test less than or equal
	EXPECT_TRUE(bigint2 <= bigint1);
	EXPECT_TRUE(bigint2 <= bigint3);
	EXPECT_FALSE(bigint1 <= bigint2);
}