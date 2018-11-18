/*************************************************************************
	> File Name: testcase2.h
	> Author: gaoyu
	> Mail: 
	> Created Time: 2018年08月22日 星期三 11时30分58秒
 ************************************************************************/


#ifndef _TESTCASE2_H
#define _TESTCASE2_H
#include "test.h"
#include "add.h"

TEST(test, add_func) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_NE(add(3, 4), 8);
    EXPECT_GE(add(2, 2), 4);
    EXPECT_GT(add(2, 7), 5);
    EXPECT_LT(add(3, 8), 10);
    EXPECT_LE(add(3, 5), 15);
}

#endif
