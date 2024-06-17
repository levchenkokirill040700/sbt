/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 19, 2019, 9:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a, b, c, d;
    int max;
      printf("Nhập số thứ 1: "); scanf("%d", &a);
      printf("Nhập số thứ 2: "); scanf("%d", &b);
      printf("Nhập số thứ 3: "); scanf("%d", &c);
      printf("Nhập số thứ 4: "); scanf("%d", &d);

    max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(max<d) max=d;
      printf("So lon nhat la: %d \n", max);

    return (EXIT_SUCCESS);
}

