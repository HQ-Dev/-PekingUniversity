//
//  main.cpp
//  冒泡排序
//
//  Created by apple on 15/9/11.
//  Copyright (c) 2015年 Archy. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    int sumn = 0, sumd = 1; // 储存结果，sumn/sumd
    while (n--) {
        int num, deno;
        char slash; // 专门用来吃掉/的
        cin >> num >> slash >> deno;
        // 先相加 a/b + c/d = (a*d + c*b)/(b*d)
        sumn = sumn*deno + num*sumd;
        sumd = sumd*deno;
    } // 这一步算出了输入进去的n个分数的和，但是还没有规约，即算出了sumn,sumd
    
    // 后约分
    // 先求最大公约数gcd，这里用的是欧几里德法
    int a = sumd, b = sumn, c;
    while (a != 0) {
        c = a; a = b%a; b = c;
    }
    int gcd = b;
    // 分子分母同时除以gcd就可以完成余份
    sumd /= gcd;
    sumn /= gcd;
    if (sumd > 1)
        cout << sumn << '/' << sumd << endl;
    else
        cout << sumn << endl;
    return 0;
}






















