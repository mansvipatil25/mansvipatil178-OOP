Sort the numbers in an array using separate functions for read, display, sort, swap :-

#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void accept(int n,int array[])
{
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}
void display(int n,int array[])
{
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void sort(int n, int array[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            swap(array[j],array[j+1]);
        };
    };
}
int main()
{
    int n, array[10];
    cout << "Enter required size of array: ";
    cin >> n;
    cout << "\n Enter elements of array: ";
    accept(n, array);
    cout << "\n Displayed elements of array are: ";
    display(n, array);
    sort(n,array);
    cout << "\n Displayed elements of sorted array are: ";
    display(n, array);
    return 0;
}
