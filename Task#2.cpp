#include <iostream>
using namespace std;

int main()
{
    const double mile_km = 1.60934;
    double dist = 184.6;

    cout << "20170363 박준석" << endl;
    cout << "The distance is " << dist/(mile_km*1000) << " miles" << endl;
    return 0;
}