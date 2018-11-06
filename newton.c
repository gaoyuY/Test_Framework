/*************************************************************************
	> File Name: newton.c
	> Author:gaoyu 
	> Mail:
	> Created Time: 2018年08月18日 星期六 19时27分49秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define EPS 1e-7

int newton(double (*fp)(double, double), double(*fp_prime)(double), double n) {
    double x = 1;
    while (fabs(fp(x, n)) > EPS) {
        x -= fp(x, n) / fp_prime(x);
    }
    return x;
}
