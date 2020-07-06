#include <iostream>
using namespace std;

void doMath();

int main()
{
    doMath();

    return 0;
}

void doMath()
{
    string s;
    long n = 0;

    cin >> s >> n;

    int count = 0;
    int len = s.size();
    int remainder = n % len;
    int remCount = 0;
    long quotient = n/len;

    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a')
            count++;
    }

    for(int i = 0; i < remainder; i++)
    {
        if(s[i] == 'a')
            remCount++;
    }

    cout << (count * quotient) + remCount << endl;

    return;
}
