Operations of Complex numbers - Add, Subtract, Multiply, Divide, Modulus and Square 
Code :- 

#include <iostream>
#include <cmath>
using namespace std;

class Mathematics
{
    int real1, imag1;
    int real2, imag2;

public:
    void insert()
    {
        cout << "Enter real and imaginary part of first complex number: ";
        cin >> real1 >> imag1;

        cout << "Enter real and imaginary part of second complex number: ";
        cin >> real2 >> imag2;
    }

    void operations()
    {
        // Addition
        int realsum = real1 + real2;
        int imagsum = imag1 + imag2;

        // Subtraction
        int realdiff = real1 - real2;
        int imagdiff = imag1 - imag2;

        // Multiplication
        int realmultiply = (real1 * real2) - (imag1 * imag2);
        int imagmultiply = (real1 * imag2) + (imag1 * real2);

        // Division
        int denominator = (real2 * real2) + (imag2 * imag2);

        double realdivi =
            ((real1 * real2) + (imag1 * imag2)) / (double)denominator;

        double imagdivi =
            ((imag1 * real2) - (real1 * imag2)) / (double)denominator;

        // Modulus of first complex number
        double modulus1 = sqrt((real1 * real1) + (imag1 * imag1));

        // Modulus of second complex number
        double modulus2 = sqrt((real2 * real2) + (imag2 * imag2));

        // Square of first complex number
        int realsquare1 = (real1 * real1) - (imag1 * imag1);
        int imagsquare1 = 2 * real1 * imag1;

        // Square of second complex number
        int realsquare2 = (real2 * real2) - (imag2 * imag2);
        int imagsquare2 = 2 * real2 * imag2;

        // Display Addition
        cout << "\nAddition: ";
        cout << realsum;
        if (imagsum >= 0)
            cout << " + " << imagsum << "i";
        else
            cout << " - " << -imagsum << "i";

        // Display Subtraction
        cout << "\nSubtraction: ";
        cout << realdiff;
        if (imagdiff >= 0)
            cout << " + " << imagdiff << "i";
        else
            cout << " - " << -imagdiff << "i";

        // Display Multiplication
        cout << "\nMultiplication: ";
        cout << realmultiply;
        if (imagmultiply >= 0)
            cout << " + " << imagmultiply << "i";
        else
            cout << " - " << -imagmultiply << "i";

        // Display Division
        cout << "\nDivision: ";
        cout << realdivi;
        if (imagdivi >= 0)
            cout << " + " << imagdivi << "i";
        else
            cout << " - " << -imagdivi << "i";

        // Display Modulus
        cout << "\nModulus of first complex number: " << modulus1;
        cout << "\nModulus of second complex number: " << modulus2;

        // Display Square
        cout << "\nSquare of first complex number: ";
        cout << realsquare1;
        if (imagsquare1 >= 0)
            cout << " + " << imagsquare1 << "i";
        else
            cout << " - " << -imagsquare1 << "i";

        cout << "\nSquare of second complex number: ";
        cout << realsquare2;
        if (imagsquare2 >= 0)
            cout << " + " << imagsquare2 << "i";
        else
            cout << " - " << -imagsquare2 << "i";

        cout << endl;
    }
};
int main()
{
    Mathematics z;
    z.insert();
    z.operations();
    return 0;
}
