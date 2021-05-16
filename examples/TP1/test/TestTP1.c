#include "TP1.h"
#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(TP1);

TEST_SETUP(TP1)
{
}

TEST_TEAR_DOWN(TP1)
{
}

TEST(TP1, TestTP11)
{
  int vec[5] = {4,2,6,8,0}
  TEST_ASSERT_TRUE(TP1(&vec,5))
  TEST_ASSERT_FALSE(TP1(&vec,8))
}

TEST(TP1, TestTP12)
{
  int vec[5] = {5,4,3,2,1}
  TEST_ASSERT_EQUAL_HEX8_ARRAY({1,2,3,4,5},TP1(&vec,5),5);
}

TEST(TP1, TestTP13){
	int vec[10] = {1,7,8,10,6}
	[1,6,7,8,10]
	vec = TP1(&vec,5)
	TEST_ASSERT_EQUAL_INT(1, vec[0])
	TEST_ASSERT_EQUAL_INT(6, vec[1])
	TEST_ASSERT_EQUAL_INT(7, vec[2])
	TEST_ASSERT_EQUAL_INT(8, vec[3])
	TEST_ASSERT_EQUAL_INT(10, vec[4])

}