//
//  main.cpp
//  week7 编程作业
//
//  Created by apple on 15/12/6.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 编程题＃1: 年龄和疾病        // 这题提交了5次才成功
    /*
     描述：
         某医院香统计某项疾病的获得与年龄是否有关，需要对以前的诊断进行整理
     输入：
         共两行，第一行为过往病人的数目n（0<n<=100），第二行为每个病人患病时的年龄
     输出：
         每个年龄段（分四段：18一下，19-35，36-60，大于60）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。关于C++的格式化输入输出，请参考：www.cplusplus.com/reference/iomanip。
     */
    
//    需要的变量有记录一共有几个病人n，需要输入各个病人年龄的变量age，记录这些年龄的数组age[n]，遍历这个数组将各个年龄段的人数分别统计到四个变量中a,b,c,d； 然后就是简单的计算和打印输出。

//    int n, age[100];
//    cin >> n;
//    for (int i=0; i<n; i++)
//    {
//        cin >> age[i];
//    }
//    double a=0,b=0,c=0,d=0;
//    
//    for (int i=0; i<n; i++)
//    {
//        if ( age[i] <= 18) {
//            a += 1;
//        }
//        else if ( (age[i]-18) <= 17 )
//        {
//            b += 1;
//        }
//        else if ( (age[i]-35) <= 25 )
//        {
//            c += 1;
//        }
//        else
//        {
//            d += 1;
//        }
//    }
//    // printf()可以自己设定格式，在没有格式要求的情况下 cout可以自动判定类型
////    printf("1-18: %f%%\n", (double)a/n*100);
////    printf("19-35: %f%%\n", (double)b/n*100);
////    printf("36-60: %f%%\n", (double)c/n*100);
////    printf("60-: %f%%\n", (double)d/n*100);
//    cout<<fixed<<setprecision(2);         // 注意这段代码，看看精度是如何设置的，fixed的意思：用普通的方式输出浮点数
//    cout<<"1-18: "<<a/n*100<<"%"<<endl;
//    cout<<"19-35: "<<b/n*100<<"%"<<endl;
//    cout<<"36-60: "<<c/n*100<<"%"<<endl;
//    cout<<"60-: "<<d/n*100<<"%"<<endl;

    
    
    
    
    // 编程题＃2: 成绩判断
    /*
     描述：
     输入一个0-－100的分数，判断分数代表什么等级。
     95<=分数<=100，输出1；
     90<=分数<95,输出2；
     85<=分数<90，输出3；
     80<=分数<85，输出4；
     70<=分数<80，输出5；
     60<=分数<70,输出6；
     分数<60，输出7；
     输入：
         n；
     输出：
         m；
     */
    
//    int n = 0;
//    cin>>n;
//    
//    if ((n-95) >= 0)
//    {
//        cout<<1<<endl;
//    }
//    else if ((n-90) >= 0 && (n-95) < 0)
//    {
//        cout<<2<<endl;
//    }
//    else if ((n-85) >= 0 && (n-90) < 0)
//    {
//        cout<<3<<endl;
//    }
//    else if ((n-80) >= 0 && (n-85) < 0)
//    {
//        cout<<4<<endl;
//    }
//    else if ((n-70) >= 0 && (n-80) < 0)
//    {
//        cout<<5<<endl;
//    }
//    else if ((n-60) >= 0 && (n-70) < 0)
//    {
//        cout<<6<<endl;
//    }
//    else
//    {
//        cout<<7<<endl;
//    }
    
    
    
    // 编程题＃3: 找出第K大的数
    /*
     描述：
     用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。
     注意，第k大的数意味着从大到小排在第K位的数。
     输入：
         N
         K
         a1 a2 a3 a4 ......aN
     输出：
         b
     */
     // 这个方法没有用到排序
//    int n=0, k=0;
//    cin>>n>>k;
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin>>a[i];
//    }
//    
//    for (int i = 0; i < n; i++)
//    {
//        int maxThan = 0;
//        for (int j = 0; j < n; j++)                  // 这一段的方法是比较数组中的每一个数，当有一个数存在比它大的数有k－1个的时候
//        {                                            // 就把遍历到的 a[i] 打印出来。
//            if (a[j] > a[i])
//            {
//                maxThan = maxThan + 1;
//            }
//        }
//        if (maxThan == k-1) {
//            cout<<a[i]<<endl;
//            break;
//        }
//    }
    
    
    
    // 编程题＃4: 人民币支付
    /*
     描述：
     从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，
     要求尽量使用大面额的钞票。
     输入：
         一个小于1000的正整数。
     输出：
         输出分行，每行显示一个整数，从上到下分别表示100，50，20，10，5，1元人民币的张数。
     */
    
//    int amount = 0, one,five,ten,twenty,fifty,hundred;
//    cin>>amount;
//    for (one = 0; one <= amount/1; one++) {
//        for (five = 0; five <= amount/5; five++) {
//            for (ten = 0; ten <= amount/10; ten++) {
//                for (twenty = 0; twenty <= amount/20; twenty++) {
//                    for (fifty = 0; fifty <= amount/50; fifty++) {
//                        for (hundred = 0; hundred <= amount/100; hundred++) {
//                            if (one*1 + five*5 + ten*10 + twenty*20 + fifty*50 + hundred*100 == amount) {
//                                cout<<hundred<<endl;
//                                cout<<fifty<<endl;
//                                cout<<twenty<<endl;
//                                cout<<ten<<endl;
//                                cout<<five<<endl;
//                                cout<<one<<endl;
//                                goto OUT;           // 跳到指定标号语句。
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }                                 // 这个方法不能得到最优解
//    
//OUT:
//    return 0;
    
    
    int n, a[6];
    cin>>n;
    if (n <= 0) {
        return 0;
    }
    a[0] = n/100;
    a[1] = (n % 100) / 50;
    a[2] = ((n % 100) % 50) / 20;
    a[3] = (((n % 100) % 50) % 20) / 10;
    a[4] = ((n % 100) % 50 % 20 % 10) / 5;
    a[5] = ((n % 100) % 50 % 20 % 10) % 5;
    
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    cout<<a[4]<<endl;
    cout<<a[5]<<endl;
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
