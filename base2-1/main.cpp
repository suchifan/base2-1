//
//  main.cpp
//  base2-1
//
//  Created by suchao on 3/22/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "input n:\n";
    int n;
    cin >> n;
    int a = 1-n;
    int b = n-1;
    if (a < 0)
        a = 0-a;
    if(a > b)
        cout << "|" << n << " - 1| > " << n << " - 1" <<endl;
    else
        cout << "|" << n << " - 1| == " << n << " - 1" <<endl;
    return 0;
}
