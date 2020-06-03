#include <iostream>

using namespace std;

void refa(int **a)
{
    cout << endl;
    cout << "&a: " << &a << endl;
    cout << "*a: " << **a << endl;
    cout << " a: " << a << endl;
    cout << endl;
}

void refb(int *a)
{
    cout << endl;
    cout << "&a: " << &a << endl;
    cout << "*a: " << *a << endl;
    cout << " a: " << a << endl;
    cout << endl;
}

int main()
{
    int x = 4;
    int *a = &x;
    cout << endl;
    cout << "&x: " << &x << endl;
    cout << "&a: " << &a << endl;
    cout << "*a: " << *a << endl;
    cout << " a: " << a << endl;
    refb(a);
    refa(&a);

    return 0;
}