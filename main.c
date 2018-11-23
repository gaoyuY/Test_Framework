/*************************************************************************
	> File Name: main.c
	> Author: gaoyu
	> Mail:
	> Created Time: 2018年08月20日 星期一 11时28分20秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "./thirdpart/include/test.h"

#ifdef TESTFUNC
    #include "testcase1.h"
    #include "testcase2.h"
    #include "testcase3.h"
    #include "testcase4.h"
    #include "testcase5.h"
#endif

int main() {
    printf("hello haizei\n");
    return RUN_ALL_TEST();
}
