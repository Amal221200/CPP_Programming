#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *agrv[])
{
    bool is;
    bool *ptr = &is;
    cout << "Address: " << (int)ptr << endl;
    ++ptr;
    cout << "Address: " << (int)ptr << endl;
    getch();
    return 0;
}