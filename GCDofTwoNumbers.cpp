/*
Program to find the GCD of two numbers
Author: Prajjwal Pathak
Programming Language: C++
*/

#include <iostream>

using namespace std;

//Function to find GCD of two numbers
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

//main function
int main()
{
    int a, b, res;
    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;
    res = gcd(a, b);  //Function call
    cout << "GCD = " << res;

    return 0;
}