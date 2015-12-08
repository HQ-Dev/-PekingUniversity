//
//  main.cpp
//  Week 8 C语言中的运算成分
//
//  Created by apple on 15/12/8.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 第八周，将介绍C语言中的“运算成分”。重点在于：掌握各种运算符的基本含义，特别需要掌握“由各种运算符引起的数据类型转换的规律”
    
    // 第一课 第一节 "说在前面的话"
    /*
     C语言中的运算符范围很宽：
     & 求字节数运算符：  sizeof
     & 下标运算符： ［］
     & 赋值运算符：  =
     & 算数运算符：  + - * / %
     & 关系运算符： > < == >= <= !=
     & 逻辑运算符： ! && ||
     & 条件运算符： ? :
     & 逗号运算符： ,
     & 位运算符：   >> ~ | ^ &
     & 指针运算符： *, &
     & 强制类型转换运算符：  (类型)
     & 分量运算符： . ->
     
     C语言的运算符在各种语言中算是全面的了，但其实C++的运算符还要强大，甚至有可能强大大不是很好控制。
     
     */
    
    
    
    // 第一课 第二节 “赋值运算符”
    /*
     int a,b,c=5;
     表示只给c赋值。
     
     int a=b=c=5;
     上面这种赋值方式是不可以的！
     
     
               使用赋值运算符的一些要点
     要点一：两边的类型不同
       若 ＝ 两边的类型不一致，赋值的时候要进行类型转换；
       不管 ＝ 右边的操作数是什么类型，都要转换为 = 左边的类型
     */
    
//    int int_i = 64.12345;        // 右边会自动转换为整数64
//    char char_i = int_i;         // 输出@
//    float float_i = char_i;      // 会为char补充小数位： 64.0000     为什么会打印六位呢？因为cout在打印的时候是6位的精度
//    bool bool_i = float_i;       // 非零的数都是1，即 bool_i 的值就是 1;
//    cout<<showpoint<<int_i<<" "<<" "<<char_i<<" "<<float_i<<" "<<bool_i<< endl;
    
    // showpoint 的意思是什么呢？ 设置小数点模式，即使在不必要的时候也显示10进制小数点以及以后的0
    
    // 要点二： 长数赋给短数
    // 将会截取长数的低n位送给短数
    
//    char char_a = ' ';       // 8位                            01100001
//    int int_i = 0x361;       // 32位， 00000000000000000000001101100001
//    cout<<hex<<int_i<<endl;
//    char_a = int_i;    // 将长位赋给了短位
//    cout<<char_a<<endl;        // 输出的是a （代表的数字是97）
    
    
    // 举例：short = long
    // 00101010101010101010101010101010
    //                 1010101010101010          16位，第一位是1，则必然会输出一个负数
    long int long_i = 0x2AAAAAAA;
    cout<<long_i<<endl;
    short short_j = long_i;
    cout<<hex<<short_j<<endl;          // aaaa
    cout<<dec<<short_j<<endl;          // -21846
    
    
    // 要点三： 短数赋给常熟
    // 最好的处理情况，原来是什么数，现在还是什么数！
    // short int a = -1;  int b = a;
    /*
     计算机的处理过程：
       若short型的数为无符号数：
         &short型16位到long型低16位，long型高16位补0；
       若short型为有符号数：
         &short型16位到long型低16位；
         &若short型最高位为0，则long型高16位补0；
         &若short型最高位为1，则long型高16位补1；
     */
    
//    short short_i = -123;
//    cout<<hex<<short_i<<endl;      // ff85
//    int int_j = short_i;
//    cout<<hex<<int_j<<endl;        // ffffff85
//    cout<<dec<<int_j<<endl;        // -123
    
    
    // 要点四：符号位的赋值情况处理
    //   &也很好处理的情况！直接搬运！
    //   &直接赋值，不管符号位还是数字位。
    unsigned int unsigned_int_i = 0xAAAAAAA;
    cout<<unsigned_int_i<<endl;      // 2863311530
    signed int signed_int_j = unsigned_int_i;
    cout<<hex<<signed_int_j<<endl;    // aaaaaaaa
    cout<<dec<<signed_int_j<<endl;    //-1431655766
    
    // signed
    // 10101010101010101010101010101010
    // unsigned
    // 10101010101010101010101010101010
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
