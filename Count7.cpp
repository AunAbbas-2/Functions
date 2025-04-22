#include <iostream>
using namespace std;

int count7(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        if (lastdigit == 7)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Enter a positive number" << endl;
    }
    cout << count7(n) << endl;
}
