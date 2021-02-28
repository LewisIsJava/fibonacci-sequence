// fibonacci sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int days, initialSize, count, prevNumber{0}, dayCount{0};
    int growthRate = 5;
    cout << "Enter days: ";
    cin >> days;
    count = days / growthRate; // will use this in a loop to count every 5 days which is the growth
    cout << "Enter inital weight in pounds: ";
    cin >> initialSize;

    double number1 = 0;
    double number2 = initialSize;
    
    for (int i = 0; i < count; i++)
    {
        dayCount = dayCount + 5;
      
        double temp = number1 + number2;
        number1 = number2;
        number2 = temp;
        
        cout << "For day " << dayCount << "the green cruds weight is " << number2 << endl;
    }
}


