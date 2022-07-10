#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *agrv[])
{
    int n1, n2;
    cout << "Enter the number\n"; // << is insertion operator
    cin >> n1;                    // >> is extraction operator
    cin >> n2;
    cout << "The sum of n1 and n2 is " << n1 + n2 << endl;
    getch();
    return 0;
}