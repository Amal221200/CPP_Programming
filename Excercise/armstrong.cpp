#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *agrv[])
{
    int num, rem, res = 0, original, dig = 0;

    cout << "Enter a number:" << endl;
    cin >> num;
    original = num;

    for (original = num; original != 0; original /= 10)
    {
        ++dig;
    }

    for (original = num; original != 0; original /= 10)
    {
        rem = original % 10;
        res += pow(rem, dig);
    }

    if (res == num)
    {
        cout << num << " is palindrome" << endl;
    }
    return 0;
}