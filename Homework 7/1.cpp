//
//  1.cpp
//  1
//
//  Created by Vincent Yu on 11/11/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

struct Record{
    double quiz1;
    double quiz2;
    double midterm;
    double finalExam;
};

char grade(Record score);

int main() {
    Record score;
    cout <<"Enter the score of the first quiz (0-25): " <<endl;
    cin >>score.quiz1;
    cout <<"Enter the score of the second quiz (0-25): " <<endl;
    cin >>score.quiz2;
    cout <<"Enter the score of the midterm (0-100): " <<endl;
    cin >>score.midterm;
    cout <<"Enter the score of the final exam (0-100): " <<endl;
    cin >>score.finalExam;
    cout << "The final grade is: " <<grade(score) <<endl;
    
    
    return 0;
}

char grade(Record score){
    double quizScore, midtermScore, finalScore, totalScore;
    char letterGrade;
    quizScore = score.quiz1 + score.quiz2;
    quizScore = (quizScore/50)*0.25;
    midtermScore = (score.midterm/100)*0.25;
    finalScore = (score.finalExam/100)*0.50;
    totalScore = (quizScore + midtermScore + finalScore)*100;
    if (totalScore >= 90) {
        letterGrade = 'A';
    }
    if (totalScore >= 80 && totalScore < 90 ){
        letterGrade = 'B';
    }
    if (totalScore >= 70 && totalScore < 80 ){
        letterGrade = 'C';
    }
    if (totalScore >= 60 && totalScore < 70 ){
        letterGrade = 'D';
    }
    if (totalScore < 60){
        letterGrade = 'F';
    }
    return letterGrade;
}
