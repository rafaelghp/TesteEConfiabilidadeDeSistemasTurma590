#include "TP2.h"
#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(TP2);

TEST_SETUP(TP2)
{
}

TEST_TEAR_DOWN(TP2)
{
}

TEST(TP2, TestTP21)
{
  TEST_ASSERT_EQUAL_INT(TP2(0.01,"regular")0)
  TEST_ASSERT_EQUAL_INT(TP2(10.00,"estudante")0)
  TEST_ASSERT_EQUAL_INT(TP2(99999.99,"VIP")0)
  TEST_ASSERT_EQUAL_INT(TP2(50.0,"aposentado")0)
  TEST_ASSERT_EQUAL_INT(TP2(0.00,"aposentado")1)
  TEST_ASSERT_EQUAL_INT(TP2(999999.99,"aposentado")1)
  TEST_ASSERT_EQUAL_INT(TP2(50.00,"militar")2)
  TEST_ASSERT_EQUAL_INT(TP2(0.00,"presidente")1)
}

TEST(TP2, TestTP22)
{
  TEST_ASSERT_EQUAL_INT(TP2(0.01,"regular")0)
  TEST_ASSERT_EQUAL_INT(TP2(99999.99,"regular")0)
  TEST_ASSERT_EQUAL_INT(TP2(0.01,"")2)
  TEST_ASSERT_EQUAL_INT(TP2(,"regular")1)
  TEST_ASSERT_EQUAL_INT(TP2()1)
  TEST_ASSERT_EQUAL_INT(TP2(0.00,"regular")1)
  TEST_ASSERT_EQUAL_INT(TP2(999999.99,"egular")1)
}

TEST(TP2, TestTP23){
	TEST_ASSERT_EQUAL_INT(TP2("A","")1)
	TEST_ASSERT_EQUAL_INT(TP2(1,"")2)
	TEST_ASSERT_EQUAL_INT(TP2(0.01,"")2)
	TEST_ASSERT_EQUAL_INT(TP2(0.01,"m")2)
	TEST_ASSERT_EQUAL_INT(TP2(0.01,1)2)
	TEST_ASSERT_EQUAL_INT(TP2(0.01,"aaaaaaaaaaaaaaaa")2)
	TEST_ASSERT_EQUAL_INT(TP2(0.01,"regular")0)
}