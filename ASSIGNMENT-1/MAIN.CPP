Pascal's Triangle code :-

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int n = 0; n < rows; n++)
    {
        for(int space = 0; space < rows - n - 1; space++)
        {
            cout << " ";
        }
        for(int r = 0; r <= n; r++)
        {
            cout << factorial(n) / (factorial(r) * factorial(n - r)) << " ";
        }
        cout << endl;
    }
    return 0;
}
