//
//  main.c
//  AGoodStart
//
//  Created by 倪梦威 on 2021/11/29.
//

#include <stdio.h>
#include <objc/objc.h>

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
    float weight; //C语言中的;分号不能省略。
    weight = 12.3;
    printf("The turkey weighs %f.\n", weight);//
    
    float cookingTime = 15.0 + 15.0 * weight;
    printf("Cook it for %f minutes.\n", cookingTime);
    
    
    float a = 3.14;
    float b = 42.0;
    double sum = a + b;
    printf("sum is %f .\n", sum);
    //Question: 为什么这里写的还是%f，而不是%d？
    //Answer: 对于数字而言，小数使用%f, 整数使用%d。
    
    float truckWeight = 3453.8;
    if(truckWeight < 4000) {
        printf("It is light truck. \n");
    } else {
        printf("It is heavy truck. \n");
    }
    
    //C语言中0代表假，非0代表真。
    //C语言使用int保存布尔值，而在Objective-C，可以使用BOOL类型变量保存布尔值。
    int f = 2 > 3;
    printf("false is %d. \n", f); //false is 0.
    
    int t = 2 <= 3;
    printf("true is %d. \n", t); //true is 1.
    
    BOOL t2 = 2 < 3;
    //在C语言中，如果要在main中使用BOOL，则必须使用include命令包含响应的命令，例如：#include <objc/objc.h>
    printf("true is %d.\n", t2); //true is 1.
    
    //三元运算符
    int isBoneless = false;
    int minutesPerpound = isBoneless ? 15: 20;
    printf("minutesPerpound is %d.\n", minutesPerpound);
   
    int i =20;
    int j = 25;
    int k = (i > j) ? 20: 5; //5
    if(5 < j - k) {
        printf("The first expression is true. \n");
    } else if(j > i) {
        printf("The second expression is true. \n");
    } else {
        printf("Neither expression is true. \n");
    }

    return 0;
}
