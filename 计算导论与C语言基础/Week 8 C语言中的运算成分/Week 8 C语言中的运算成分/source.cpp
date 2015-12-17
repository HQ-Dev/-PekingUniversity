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
    int best;
    for (best = 1; best <= 4; best++)
    {
        bool a = (best == 2);
        bool b = (best == 4);
        bool c = !(best == 3);
        bool d = !b;
        if ((a + b + c + d) != 1)
            continue;
        cout << best << endl;
        
        // 接下来输出说对的专家
        if (a == 1)
            cout<<"A"<<endl;
        else if (b == 1)
            cout<<"B"<<endl;
        else if (c == 1)
            cout<<"C"<<endl;
        else
            cout<<"D"<<endl;
    }
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
