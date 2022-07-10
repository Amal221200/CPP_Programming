#include <iostream>

using namespace std;

void arr_rev(int *arr)
{
    int temp;

    for (int i = 0; i < 8; i++)
    {
        if(i >= 4)
        {
            break;
        }
        temp = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = temp;
    }
}

int main(int argc, char const *agrv[])
{
    int arr[8] = {0, 1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 8; i++)
    {
        cout << "The value of array at position " << i << " is " << arr[i] << endl;
    }
    
    arr_rev(arr);
    cout << "The arr_rev function is called" << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << "The value of array at position " << i << " is " << arr[i] << endl;
    }

    return 0;
}