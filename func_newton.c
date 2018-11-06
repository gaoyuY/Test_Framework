/*************************************************************************
	> File Name: func_newton.c
	> Author: gaoyu
	> Mail:
	> Created Time: 2018年08月15日 星期三 19时57分26秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

double f1(double x, double n) {
    return x * x - n;
}

double f1_prime(double x) {
    return 2 * x;
}
