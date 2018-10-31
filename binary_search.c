/*************************************************************************
	> File Name: binary_search.c
	> Author:gaoyu 
	> Mail:
	> Created Time: 2018年08月15日 星期日 18时38分00秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int binary_search(int (*arr)(int), int x, int n) {
    int head = 0, tail = n - 1;
    while (head <= tail) {
        int mid = (head + tail) >> 1;
        if (arr(mid) == x) return 1;
        else if (arr(mid) > x) tail = mid - 1;
        else head = mid + 1;
    }
    return -1;
}
