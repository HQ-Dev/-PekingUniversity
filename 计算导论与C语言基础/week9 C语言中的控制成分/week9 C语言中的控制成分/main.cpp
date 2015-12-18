//
//  main.cpp
//  week9 C语言中的控制成分
//
//  Created by apple on 15/12/18.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 本节重点在于掌握各种控制语句的使用方式。顺便，了解一下历史上的Goto之争
    
    // 第一课 再谈分支语句
    /*
     什么样的结构才能支持程序运行的逻辑？
        1966年， G.jacopini 和 C.Bohm 从理论上证明了：任何具有单入口单出口的程序都可以用三种基本结构表达：
     
      ·顺序结构
      ·分支结构
      ·循环结构
     
     
                    if语句使用须知
     在执行if语句前先对表达式求解
       if() 内可以是任意的数值类型
     若表达式的值为非零，按真处理；
     若表达式的值为零，按假处理。
     
     */
    
    /*
       第二课 第一节 再谈循环语句
     
       第二课 第二节 Goto之争
     Goto语句
       无条件转向语句
       它的一般形式为
          goto语句标号；
          ·语句标号：标识符，定名规则与变量名相同；
     
     */

    return 0;
}
