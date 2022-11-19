#include<iostream>

using namespace std;

int main()
{
    //int myNum = 15;
    //cout<<myNum<<endl;
    // int x = 50, y = 5, z = 50;

    //int x, y, z;
    //x = y = z = 50;

    // Good
    //int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    //int m = 60;

    const int minutesPerHour = 60;
    const float PI = 3.14;

    cout << minutesPerHour << endl;
    cout << PI;

    return 0;
}
