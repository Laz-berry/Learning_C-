#include <iostream>
#include <cstdlib>
using namespace std;

class DayOfYear {
    public:
        DayOfYear(string monthValue, int dayValue);
        DayOfYear(string monthValue);
        DayOfYear();
        void output();
        int getMonthNumber();
        int getDay();
    private:
        string smonth;
        int month;
        int day;
        void testDate();
};

int main() {
    string sMonth;
    int day;
    cout << "Put an abbreviation of a month (3 chars) and a day(number): ";
    cin >> sMonth >> day;
    DayOfYear date1(sMonth), date2(sMonth, day);
    date1.output();
    date2.output();
}

DayOfYear::DayOfYear(string monthValue, int dayValue) 
: smonth(monthValue), day(dayValue) {
    testDate();
}

DayOfYear::DayOfYear(string monthValue) : smonth(monthValue), day(1) {
}

DayOfYear::DayOfYear() : month(1), day(1) {}

void DayOfYear::testDate() {
    if((day < 1) || (day > 31)) {
        cout << "Illegal month value! \n";
        exit(1);
    }
}

void DayOfYear::output() {
    if(smonth == "Jan")
        cout << "Jan";
    if(smonth == "Feb") 
        cout << "Feb";
    if(smonth == "Mar")
        cout << "Mar";
    if(smonth == "Apr")
        cout << "Apr";
    if(smonth == "May")
        cout << "May";
    if(smonth == "Jun")
        cout << "Jun";
    if(smonth == "Jul")
        cout << "Jul";
    if(smonth == "Aug")
        cout << "Aug";
    if(smonth == "Sep")
        cout << "Sep";
    if(smonth == "Oct")
        cout << "Oct";
    if(smonth == "Nov")
        cout << "Nov";
    if(smonth == "Dec")
        cout << "Dec";
        
    cout << day << endl;
}