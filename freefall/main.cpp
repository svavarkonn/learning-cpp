#include <iostream>

using namespace std;

int main()
{
    double t, y;
    cout << "Enter freefall time in seconds: " << endl;
    cin >> t;
    y = 9.81*t*t/2;
    cout << "The vertical distance covered is " << y << " meters." << endl;
    return 0;
}
