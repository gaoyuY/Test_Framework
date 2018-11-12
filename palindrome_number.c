/*************************************************************************
	> File Name: palindrome_number.c
	> Author: gaoyu
	> Mail: 
	> Created Time: 2018年08月18日 星期四 20时11分26秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int palindrome_number(int x) {
    int temp = x, num = 0;
    while (temp) {
        num = num * 10 + temp % 10;
        temp /= 10;
    }
    return num == x;
}
