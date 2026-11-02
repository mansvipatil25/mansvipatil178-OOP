#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;

    // Open source file in read mode
    ifstream fin("source.txt");

    // Open destination file in write mode
    ofstream fout("destination.txt");

    // Check whether files are opened successfully
    if (!fin || !fout)
    {
        cout << "Error opening file!";
        return 1;
    }

    // Copy contents line by line
    while (getline(fin, line))
    {
        fout << line << endl;
    }

    cout << "File copied successfully!";

    fin.close();
    fout.close();

    return 0;
}
