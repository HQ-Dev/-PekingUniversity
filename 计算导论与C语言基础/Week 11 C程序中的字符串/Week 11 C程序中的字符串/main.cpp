//
//  main.cpp
//  Week 11 C程序中的字符串
//
//  Created by apple on 15/12/24.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    // 第一课 第一节 字符数组与字符串
//    char a[10] = {'a','b','c','d','e'};    // 没定义的后五个字符，会被自动赋值为\0 （即ascii码中第一个字符,也是一个空字符）
//    for (int i = 0; i < 10; i++)
//        cout << a[i] << " ";
//    
//    char b[] = {'C','h','i','n','a'};
//    // 在数组定义并初始化的时候可以如此
//    char c[] = "China";      // 这样的数组有6个字符，最后一个是 \0
    
    // 不可以：
    // 不能用赋值语句将一个字符串常量或者字符数组直接赋给另一个字符数组。
    /*
     str1[] = "China";     不合法
     str1 = "China";       不合法
     str2 = str1;          不合法
     */
    
    // 下面示范如何正确地将一个字符数组赋给另外一个字符数组
//    char one[] = "C++ Language", two[20];
//    int i = 0;
//    while (one[i] != '\0')
//    {
//        two[i] = one[i];
//        i++;
//    }
//    two[i] = '\0';
//    
//    cout << one << endl;       // 可直接写字符数组的名字（其它数组不行，但是唯字符数组是可行的）
//    cout << two << endl;
    
    /*
     利用二维数组存储多个字符串：
     
        char weekday[7][11] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
     
     包括了7行11列，那为什么是11列呢？做了一些冗余。
     */
    
    // 第一课 第二节 输入缓冲区
    /*
    讲的内容是字符／字符数组／字符串的输入和输出
    一共分三个部分进行讲解：
    1.引子：输入的过程
    2.一个字符的输入与输出
    3.字符数组／字符串的输入与输出
    
    关于第一个输出的过程，我们首先需要知道一个概念就是“输入缓冲区”。
    cin>>str; 当你将你要输入的东西键入并且按下回车键之后，这些内容就会进入一个地方————输入缓冲区。
    然后程序再到这个输入缓存区里面进行提取，提取相应的内容。缓冲区指针进行标记，记录读取内容都到了哪个地方。
    */
    
//    第一课 第二节 一个字符的输入
//    方法一：直接输入cin输入字符
//    这个方法有一个弊端，就是当你输入一些字符的时候，如果中间有一些空格存在，那么在读取这些内容的时候，这些空格不会被当作是数据，输出的内容不会有空格，cin会跳过空格和回车。
//    当你需要终止输入的时候，可以输入终止输入标志    ^Z(看似是一个字符，其实需要 control ＋ Z)
//    
//    方法二：
//     cin.get()函数
//       可以读入一个字符；
//       2种形式：无参数，一个参数
//    cin.get();
//    cin.get(char);
    
//    char c;
//    cout << "enter a sentence:" << endl;
//    while ( (c = cin.get()) != EOF)           // EOF的意思是文件结束标志   control + Z  但是mac 的xcode不可以
//    {
//        cout << c;
//    }
    
    // 这种输入方式可以读入空格 和 回车
//    方法三 是cin.get(char) 输入字符
//    方法四 用getchar()输入字符 不跳过任何字符
    
    
    return 0;
}




