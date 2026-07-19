#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int pos = (n - i - 1 + j) % 26;
            char result = ch + pos;
            cout << result << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);

    return 0;
}