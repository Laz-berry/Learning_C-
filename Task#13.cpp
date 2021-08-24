#include <iostream>
using namespace std;

class DayOfYear
{
    public:
        void output();
        int month;
        int day;
        int adjustDay(int a);
};

int main() {
    DayOfYear d1;
    d1.month = 8;
    d1.day = 20;

    d1.adjustDay(20);
    cout << "Adjusted date is: ";
    d1.output();
}

void DayOfYear::output() {
    switch (month)
    {
        case 1:
            cout << "January "; break;
        case 2:
            cout << "February "; break;
        case 3:
            cout << "March "; break;
        case 4:
            cout << "April "; break;
        case 5:
            cout << "May "; break;
        case 6:
            cout << "June "; break;
        case 7:
            cout << "July "; break;
        case 8:
            cout << "August "; break;
        case 9:
            cout << "September "; break;
        case 10:
            cout << "October "; break;
        case 11:
            cout << "November "; break;
        case 12:
            cout << "December "; break;
        default:
            cout << "Error in DayOfYear::output. Contact software vendor.";
    }
    cout << day;
}

int DayOfYear::adjustDay(int a) {
    if(month == 1 || month == 3 || month == 5 || month == 7 || 
    month == 8 || month == 10 || month == 12) { // 31일 인 달 일때
        if((a + day) > 31 ) // adjustDay + day가 31일 초과일 때
        {
            if(month == 12) {
                month = 1;
                day = (a + day - 31);
            } 
            else {
                month++;
               day = (a + day - 31);
            }
        }
        else {
            day = a + day;  
        }
    }
    else if(month == 4 || month == 6 || 
    month == 9 || month == 11) { // 한 달이 30일 일때
        if((a + day) > 30 ) { // adJustDay + day가 30일 초과일 때
            month++;
            day = (a + day - 30);
        }
        else {
         day = day + a; 
        }
    } 
    else { // 2월달 28일 있는 경우
        if((a + day) > 28 ) {
            month++;
            day = (a + day - 28);
        }
        else {
            day = day + a;
        }
    }
}