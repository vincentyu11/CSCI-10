//
//  main.cpp
//  1b
//
//  Created by Vincent Yu on 10/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    for (int i=10;i<19;i+=2){
        cout <<"start";
        for (int j=5;j>0;j--){
            cout <<" "<<i <<" "<<j <<",";
        }
        cout <<" end" <<endl;
    }
    return 0;
}
