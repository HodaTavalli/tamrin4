#include <iostream>
using namespace std;

// Mahdi Fakhrabadi <hi@mahdi.work>
// Help from: https://www.geeksforgeeks.org/check-if-a-given-number-is-factorial-of-any-number/

bool isFactorial(int n)
{
    for (int i = 1;; i++)
    {
        if (n % i == 0)
        {
            n /= i;
        }
        else
        {
            break;
        }
    }

    if (n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 0;

    cout << "Number = ";
    cin >> n;

    if (isFactorial(n) == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}