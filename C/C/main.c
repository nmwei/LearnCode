//
//  main.c
//  AGoodStart
//
//  Created by 倪梦威 on 2021/11/29.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //注释
    // 打印小说的开头
    printf("It was the best of times.\n");
    printf("It was the worst of times. \n");
    /*这个开头真的好吗？
        也许需要重写。*/
    
    //整形：short、int、long
    //浮点型: float、double
    //字符型: char
    //指针: 可以保存内存地址，必须用星号字符来声明。例如: int * 声明一个内存地址，该内存保存的的是int整形数。
    //结构: 以上类型组合而成的符合类型
    float weight;
    weight = 12.3;
    printf("The turkey weighs %f.\n", weight);
    
    float cookingTime = 15.0 + 15.0 * weight;
    printf("Cook it for %f minutes.\n", cookingTime);
    
    
    float a = 3.14;
    float b = 42.0;
    double sum = a + b;
    printf("sum is %f .\n", sum);
    
    return 0;
}
