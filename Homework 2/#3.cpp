//
//  #3.cpp
//  #3
//
//  Created by Vincent Yu on 10/5/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int day;
    cout <<"Monday = 1 \nTuesday = 2 \nWednesday = 3 \nThursday = 4 \nFriday = 5 \nSaturday = 6 \nSunday = 7 \nEnter a number corresponding to a day of the week: " <<endl;
    cin >>day;
    
    switch (day)
    {
        case 1:
            cout <<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45" <<endl;
            break;
        case 2:
            cout <<"PHYS 2 at 12:10, CSCI 10 lab at 2:15" <<endl;
            break;
        case 3:
            cout <<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45" <<endl;
            break;
        case 4:
            cout <<"PHYS 2 at 12:10" <<endl;
            break;
        case 5:
            cout <<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45" <<endl;
            break;
        case 6: case 7:
            cout <<"There is no class on weekends!" <<endl;
            break;
        default:
            cout <<"That is not a valid number corresponding to a day" <<endl;
    }
    return 0;
}
