#include <iostream>
#include <string>
using namespace std;

class HourlyEmployee {
    private:
        string name;
        string ssn;
        string uname;
        double netPay;
    public:
        HourlyEmployee();
        HourlyEmployee(const string& theName, const string& theSsn, const string& theUniv);
        string getName() const;
        string getSsn() const;
        string getUname() const;
        double getNetPay() const;
        void setName(const string& newName);
        void setSsn(const string& newSsn);
        void setUname(const string& newUname);
        void setNetPay(double newNetPay);
        void printCheck() const;
};

HourlyEmployee::HourlyEmployee() : name("No name yet"), ssn("No number yet"), uname("No uname yet"), netPay(0) { }
HourlyEmployee::HourlyEmployee(const string& theName, const string& theNumber, const string& theUniv)
    : name(theName), ssn(theNumber), uname(theUniv), netPay(0) {}

string HourlyEmployee::getName() const { return name; }
string HourlyEmployee::getSsn() const { return ssn; }
string HourlyEmployee::getUname() const {return uname; }
double HourlyEmployee::getNetPay() const { return netPay; }

void HourlyEmployee::setName(const string& newName) { name = newName; }
void HourlyEmployee::setSsn(const string& newSsn) { ssn = newSsn; }
void HourlyEmployee::setUname(const string& newUname) { uname = newUname; }
void HourlyEmployee::setNetPay(double newNetPay) { netPay = newNetPay; }
void HourlyEmployee::printCheck() const {
    cout << "\n ERROR: printCheck FUNCTION CALLED FOR AN \n"
         << "UNDIFFERENTIATED EMPLOYER, Aborting the program. \n"
         << "Check with the author of the program about this bug.\n";
    exit(1);
}

// Employee 클래스 선언

class UnivHourlyEmployee : public HourlyEmployee {
        private:
            double wageRate;
            double hours;
        public: 
            UnivHourlyEmployee();
            UnivHourlyEmployee(string theName, string theSsn, string theUniv, double theWageRate, double theHours);
            void setRate(double newWageRate);
            double getRate() const;
            void setHours(double hoursWorked);
            double getHours() const;
            void printInfo();
};

UnivHourlyEmployee::UnivHourlyEmployee() : HourlyEmployee(), wageRate(0), hours(0) {}
UnivHourlyEmployee::UnivHourlyEmployee(string theName, string theNumber, string theUniv, double theWageRate, double theHours)
 : HourlyEmployee(theName, theNumber, theUniv), wageRate(theWageRate), hours(theHours) {}

void UnivHourlyEmployee::setRate(double newWageRate) {
    wageRate = newWageRate;
}

double UnivHourlyEmployee::getRate() const { return wageRate; }
void UnivHourlyEmployee::setHours(double hourWorked) {
    hours = hourWorked;
}
double UnivHourlyEmployee::getHours() const { return hours; }

void UnivHourlyEmployee::printInfo() {
    setNetPay(hours * wageRate);

    cout << "Employee name: " << getName() << ", Affliation: " << getUname();
    cout << "\n____________________________\n";
    cout << "Pay to the order of " << getName() << endl;
    cout << "The sum of " << getNetPay() << " Dollars\n";
    cout << "______________________________\n";
    cout << "Check stub: NOT NEGOTIABLE \n";
    cout << "Employee Number: " << getSsn() << endl;
    cout << "Hourly Employee. \n Hours worked: " << hours 
         << " Rate: " << wageRate << " Pay: " << getNetPay() << endl;
    cout << "______________________________\n";
}

int main() {
    UnivHourlyEmployee john("JohnDoe", "123456", "SSU", 10, 40);
    john.printInfo();
}