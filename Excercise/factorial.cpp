#include <iostream>

using namespace std;

int fact(int x)
{
    if(x == 0 || x == 1) {
        return 1;
    }else
    {
        return x*fact(x-1);
    }
}

int main(int argc, char const *agrv[])
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num) << endl;
    return 0;
}