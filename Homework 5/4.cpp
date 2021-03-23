//
//  4.cpp
//  4
//
//  Created by Vincent Yu on 10/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int numbers[50];
    int size, i;
    do{
        cout << "How many integers to input between 1 and 50? : " <<endl;
        cin >> size;
        if(size <= 0 || size > 50)
            cout << endl << "Invalid size. Enter again."<<endl;
    }while(size <= 0 || size > 50);
    cout << "Enter " <<size << " numbers: " <<endl;
    
    for(i=0;i<size;i++){
        cin >> numbers[i];
    }
    
    for(i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(numbers[j] < numbers[j+1]){
                int a = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = a;
            }
        }
    }

    int number;
    int count=0;
    int countList=0;
    
    cout <<endl <<"N\tCount" <<endl;
    for(i=0;i<size;i++){
        number=numbers[i];
        for(int j=0;j<size;j++){
            if(number==numbers[j]){
                countList++;
                count=j;
            }
        }
        
        cout << numbers[i] << "\t" << countList<<endl;
        i=count;
        countList=0;
    }
    return 0;
}
