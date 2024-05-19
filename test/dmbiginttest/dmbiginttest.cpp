
#include "dmbigint.h"
#include <iostream>
#include "gtest.h"

TEST(CDMBigIntTest, BasicOperations) {
	// Initialize CDMBigInt variables
	CDMBigUint biguint1(123);
	CDMBigUint biguint2(2);
	CDMBigUint biguint3(10);

	// Test addition
	EXPECT_EQ(biguint1 + biguint2, CDMBigUint(125));
	EXPECT_EQ(biguint1 + biguint3, CDMBigUint(133));
	EXPECT_EQ(biguint2 + biguint3, CDMBigUint(12));

	// Test subtraction
	EXPECT_EQ(biguint1 - biguint2, CDMBigUint(121));
	EXPECT_EQ(biguint1 - biguint3, CDMBigUint(113));
	EXPECT_EQ(biguint3 - biguint2, CDMBigUint(8));

	// Test multiplication
	EXPECT_EQ(biguint1 * biguint2, CDMBigUint(246));
	EXPECT_EQ(biguint1 * biguint3, CDMBigUint(1230));
	EXPECT_EQ(biguint2 * biguint3, CDMBigUint(20));

	// Test division
	EXPECT_EQ(biguint1 / biguint2, CDMBigUint(61));
	EXPECT_EQ(biguint1 / biguint3, CDMBigUint(12));
	EXPECT_EQ(biguint3 / biguint2, CDMBigUint(5));

	// Test modulo

	EXPECT_EQ(biguint1 % biguint2, CDMBigUint(1));
	EXPECT_EQ(biguint1 % biguint3, CDMBigUint(3));
	EXPECT_EQ(biguint3 % biguint2, CDMBigUint(0));
	EXPECT_EQ(CDMBigUint(10) % CDMBigUint(3), CDMBigUint(1));
	EXPECT_EQ(CDMBigUint(10) % CDMBigUint(2), CDMBigUint(0));
	EXPECT_EQ(CDMBigUint(10) % CDMBigUint(4), CDMBigUint(2));
	EXPECT_EQ(CDMBigUint(0) % CDMBigUint(1), CDMBigUint(0));

}

TEST(CDMBigIntTest, ComparisonOperators) {
	// Initialize CDMBigInt variables
	CDMBigUint biguint1(123);
	CDMBigUint biguint2(2);
	CDMBigUint biguint3(10);

	// Test equality
	EXPECT_FALSE(biguint1 == biguint3);
	EXPECT_FALSE(biguint1 == biguint2);

	// Test inequality
	EXPECT_TRUE(biguint1 != biguint2);
	EXPECT_TRUE(biguint1 != biguint3);

	// Test greater than
	EXPECT_TRUE(biguint1 > biguint2);
	EXPECT_TRUE(biguint1 > biguint3);
	EXPECT_FALSE(biguint2 > biguint1);

	// Test greater than or equal
	EXPECT_TRUE(biguint1 >= biguint2);
	EXPECT_TRUE(biguint1 >= biguint3);
	EXPECT_FALSE(biguint2 >= biguint1);

	// Test less than
	EXPECT_TRUE(biguint2 < biguint1);
	EXPECT_TRUE(biguint2 < biguint3);
	EXPECT_FALSE(biguint1 < biguint2);

	// Test less than or equal
	EXPECT_TRUE(biguint2 <= biguint1);
	EXPECT_TRUE(biguint2 <= biguint3);
	EXPECT_FALSE(biguint1 <= biguint2);
}
