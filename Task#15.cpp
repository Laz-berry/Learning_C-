#include <iostream>
#include <cstdlib>
using namespace std;

class HotDogStand {
       public:
           HotDogStand(string id);
           void justSold(int hds);
           int getNumSold();
           string getName();
           static int getTotalSold();
       private:
           string Name;
           int hotDogsSold;
     static int totalSold;
};

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand(string id) {
       Name = id;
}

void HotDogStand::justSold(int hds) {
       hotDogsSold = hds;
       totalSold += hotDogsSold;
}

int HotDogStand::getNumSold() {
       return hotDogsSold;
}

string HotDogStand::getName() {
       return Name;
}

int HotDogStand::getTotalSold() {
       return totalSold;
}

int main() {
       HotDogStand h1("SSU-1"), h2("SSU-2"), h3("CAU-1");

       h1.justSold(20);
       h2.justSold(50);
       h3.justSold(1);

       cout << h1.getName() << " has sold " << h1.getNumSold() << " hotdogs." << endl;
       cout << h2.getName() << " has sold " << h2.getNumSold() << " hotdogs." << endl;
       cout << h3.getName() << " has sold " << h3.getNumSold() << " hotdogs." << endl;
       cout << "Total sales are: " << HotDogStand::getTotalSold() << endl;
}