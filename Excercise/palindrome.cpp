#include <iostream>

using namespace std;

int main(int argc, char const *agrv[])
{
    int num, rev = 0, original, remainder;
    cout << "Enter a number: " << endl;
    cin >> original;
    num = original;

    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    if(rev == original)
    {
        cout << original << " is palindrome" << endl;
    }
    else
    {
        cout << original << " is not palindrome" << endl;
    }
    return 0;
}