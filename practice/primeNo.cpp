#include <iostream>

using namespace std;

int prime(int a)
{
    
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return 0;

        }
    }
    return 1; 
}

int main()
{

    cout << "Enter a digit : ";
    int n;
    cin >> n;
    
    if (prime(n))
    {

        cout << n << " is Prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
}