//
//  main.cpp
//  ZFraction
//
//  Created by Nathan Benabou on 08/02/2014.
//  Copyright (c) 2014 Nathan Benabou. All rights reserved.
//

#include <iostream>
#include "ZFraction.h"

using namespace std;



int main()
{
    ZFraction a (8,16);
    cout << a << endl;
    a.simplifier();
    cout << a << endl;
    ZFraction b (2,5);
    a+=b;
    cout << a << endl;
    cout << a+b << endl;
    int * pointeur(0);
    pointeur=new int (3);
    cout << *pointeur <<endl;
    return 0;
}

