To overload the factorial() function for integer input and long integer input in C++.
Code :- 

#include <iostream>
using namespace std;

class Factorial
{
public:
    int factorial(int n)
    {
        int fact = 1;
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
    long factorial(long n)
    {
        long fact = 1;
        for(long i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
};
int main()
{
    Factorial obj;
    int n;
    long m;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Factorial = " << obj.factorial(n) << endl;
    cout << "Enter a long integer: ";
    cin >> m;
    cout << "Factorial = " << obj.factorial(m) << endl;
    return 0;
}
