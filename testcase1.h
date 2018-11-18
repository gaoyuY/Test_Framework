/*************************************************************************
	> File Name: testcase1.h
	> Author: gaoyu
	> Mail: 
	> Created Time: 2018年08月22日 星期三 11时29分39秒
 ************************************************************************/


#ifndef _TESTCASE1_H
#define _TESTCASE1_H
#include "is_prime.h"

TEST(test, is_prime_func) {
    EXPECT(is_prime(2), 0);
    EXPECT(is_prime(-2), 0);
    EXPECT(is_prime(15), 0);
    EXPECT(is_prime(9973), 1);
}

#endif
