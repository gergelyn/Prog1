#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int i = 0;

    while (a != 0)
    {
        a <<= 1;
        ++i;
    }

    cout << "Lepesek szama: " << i << "\n";
}