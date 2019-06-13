//
// Created by 赵逢春 on 2019/5/2.
//

/*
#include <stdio.h>
#include <math.h>
*/
/**
 * 二分查找
*//*

int main(){
    int list[] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("请输入要查询的数:\n");
    int searchNum;
    scanf("%d", &searchNum);
    int start = 0, middle = sizeof(list)/(2*sizeof(int)), end = sizeof(list)/sizeof(int);
    int resultIndex = -1;
    while (start < end){
        if (searchNum == list[middle]){
            resultIndex = middle;
            break;
        } else if (searchNum > list[middle]) {
            end = middle;
            middle = end / 2;
        } else {
            start = middle;
            middle = start + (end - start) / 2;
        }
    }
    if (resultIndex >= 0){
        printf("查到了，是列表中的第%d项\n", resultIndex + 1);
    } else {
        printf("该数不在列表中");
    }
    return 0;
}*/


// 求两个整数中的较大者
#include <stdio.h>
// 主函数
int main(){
    int max(int x, int y); // 对被调用函数 max 的声明
    int a = 0, b = 0, c = 0;
    scanf("%d%d", &a, &b); // 输入变量a和变量b的值
    c = max(a, b); // 调用max函数，将得到的值赋给c
    printf("max=%d\n",c);
    return 0;
}

// 求两个整数中较大的max
int max(int x, int y)
{
    int z;
    if(x > y)
        z = x;
    else
        z=y;
    return z;
}