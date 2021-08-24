#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main() 
{
    cout << "20170363_박준석_고프 Task#5과제" << endl;
    ifstream read;
    read.open("Task#5.txt");

    char str[sizeof(read)]={'\0'};
    int i=0;

    if(read.good())
    {
        while(!read.eof())
        {
            read.getline(str, sizeof(read));
            for(i=0; i<sizeof(read); i++)
            {
                if(str[i]=='h'&& str[i+1]=='a' && str[i+2]=='t' && str[i+3]=='e')
                {
                    str[i]='l';
                    str[i+1]='o';
                    str[i+2]='v';
                    str[i+3]='e';
                }
            }
        }
    }
    cout << str << endl;
    return 0;
}

