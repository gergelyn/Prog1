#include <iostream>

using namespace std;

int main()
{
    int a = 1; // 00000001
    int i = 0;

    while (a != 0) // 00000000
    {
        cout << "Before bit-shift:" << a << "\n";
        a <<= 1;
        cout << "After bit-shift:" << a << "\n";
        cout << i << "\n";
        i++;
    }
    // i = 32 = 00100000
    cout << "Lepesek szama: " << i << "\n";
}