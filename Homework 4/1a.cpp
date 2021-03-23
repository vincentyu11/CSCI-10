//
//  main.cpp
//  1a
//
//  Created by Vincent Yu on 10/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<5; i++){
        cout <<"start ";
        if (i==0){
            for (int j=0;j<1;j++){
                cout <<"o";
            }
            for (int k=0;k<7;k++){
                cout <<"x";
            }
        }
        if (i==1){
            for (int j=0;j<2;j++){
                cout <<"o";
            }
            for (int k=0;k<6;k++){
                cout <<"x";
            }
        }
        if (i==2){
            for (int j=0;j<3;j++){
                cout <<"o";
            }
            for (int k=0;k<5;k++){
                cout <<"x";
            }
        }
        if (i==3){
            for (int j=0;j<4;j++){
                cout <<"o";
            }
            for (int k=0;k<4;k++){
                cout <<"x";
            }
        }
        if (i==4){
            for (int j=0;j<5;j++){
                cout <<"o";
            }
            for (int k=0;k<3;k++){
                cout <<"x";
            }
        }
        cout <<" end" <<endl;
    }
    return 0;
}
