//
//  main.cpp
//  SlowSquare
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int slow_square(int x)
{
    int result = 0;
    
    
    for (int i = 0; i < x; ++i)
        result += x;
    
    return result;
}

int main()
{
    for (int i = 0; i < 100; ++i) {
        cout << i << "\t" << slow_square(i) << "\n";
    }
}
