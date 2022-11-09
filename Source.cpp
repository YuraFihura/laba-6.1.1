#include <iostream>
#include <iomanip>
using namespace std;

void Init(int t[], const int n)
{
    for (int i = 0; i < n; i++)
        t[i] = -20 + rand() % 58;
}

void Print(int t[], const int n)
{
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << t[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "}" << endl;
}

int SumElement(const int* const t, const int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
        if (t[i] % 5 != 0 && t[i] < 0)
            S += t[i];
    return S;
}

int CountElement(const int* const t, const int n)
{
    int C = 0;
    for (int i = 0; i < n; i++)
        if (t[i] % 5 != 0 && t[i] < 0)
            C++;
    return C;
}

void ReplaceElement(int t[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (t[i] % 5 != 0 && t[i] < 0)
            t[i] = 0;
    }
}

int main()
{
    srand(time(0));

    const int n = 22;
    int t[n];

    Init(t, n);
    Print(t, n);
    cout << "Array sum by condition = " << SumElement(t, n) << endl;
    cout << "Count element by condition = " << CountElement(t, n) << endl;
    ReplaceElement(t, n);
    Print(t, n);

    return 0;
}
