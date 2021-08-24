#include <iostream>
using namespace std;

int main() 
{
    double math, programming, data;

    cout << "20170363_박준석_고프 Task#4_과제" << endl;
    cout << "Put the discrete math score: ";
    cin >> math;
    cout << "Put the gromramming language score: ";
    cin >> programming;
    cout << "Put the data structure score: ";
    cin >> data;

    double ave = (math+programming+data)/3;
    string grade;

    if(ave>70 && ave<76) grade = "C0";
    else if(ave>75 && ave<80) grade = "C+";
    else if(ave>80 && ave<86) grade = "B0";
    else if(ave>85 && ave<90) grade = "B+";
    else if(ave>90 && ave<96) grade = "A0";
    else if(ave>95) grade = "A+";
    else grade = 'F';

    cout << "The average score is " << ave << " and the grade is " << grade;
    return 0;
}