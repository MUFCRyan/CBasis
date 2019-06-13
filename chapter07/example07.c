//
// Created by 赵逢春 on 2019/5/2.
//

#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 * 1~n^2 魔方阵
 * 解法如下：
 * 1. 第一行第二列的元素置为 1
 * 2. 从 2 开始直至 n*n 止各数一次按下列规则存放，每个数存放的行比前一个数的行数-1、列数+1----即上一行后一列---右上方
 * 3. 若上一个数的行数为 1 --> 下一个数的行数为 n --- 最下一行，同时列数+1
 * 4. 上一个数列数为 n 时，下一个数列数为 1，同时行数-1
 * 5. 若按以上规则确定的位置已有数，或上一个数是 [1][n]，则将下一个数放在上一个数以下
*/
int main(){
    int nums[15][15];
    //1. 第一行第二列的元素置为 1
    int level = 5;
    printf("请输入魔方的阶数，范围是 1~15 阶，且必须为奇数，否则会取小于该数的最近的一个符合要求的数\n");
    scanf("%d", &level);
    if (level > 15) {
        level = 15;
    }
    if (level < 1){
        level = 1;
    }
    if (level %2 == 0) {
        level -= 1;
    }
    for(int i = 0; i < level; i++){
        for(int j = 0; j < level; j++){
            nums[0][0] = 0;
        }
    }
    // 2. 从 2 开始直至 n*n 止各数一次按下列规则存放，每个数存放的行比前一个数的行数-1、列数+1----即上一行后一列---右上方
    int preRow = 0, preColumn = level/2, row = preRow, column = preColumn;
    nums[preRow][preColumn] = 1;
    for(int i = 2; i <= level * level; i++){
        row --;
        column ++;
        if (row < 0 && column >= level){
            row += 2;
            column --;
        } else {
            if (row < 0)
                row = level -1;
            if (column >= level)
                column = 0;
        }
        if (nums[row][column] == 0){
            nums[row][column] = i;
        } else {
            row += 2;
            column --;
            nums[row][column] = i;
        }
        /*// 5. 若上一个数是 [1][n]，则将下一个数放在上一个数以下
        if (preRow == 0 && preColumn == level - 1) {
            row = preRow + 1;
        }
        // 3. 若上一个数的行数为 1 --> 下一个数的行数为 n --- 最下一行，同时列数+1
        if (preRow == 0) {
            row = level - 1;
            column = preColumn + 1;
        }
        // 4. 上一个数列数为 n 时，下一个数列数为 1，同时行数-1
        if (preColumn >= level - 1) {
            column = 0;
            row = preRow - 1;
        }
        while(i < level*level - 1 && nums[row][column] != 0 && row < level - 1){
            row ++;
        }
        nums[row][column] = i;
        preRow = row;
        preColumn = column;*/
    }

    for(int i = 0; i < level; i++){
        for(int j = 0; j < level; j++){
            printf("%5d", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}