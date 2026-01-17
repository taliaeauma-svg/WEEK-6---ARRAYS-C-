#include <iostream>
using namespace std;

int main()
{
    int numbers[20];
    int even[20];
    int odd[20];

    int e = 0;
    int o = 0;

    for (int i = 0; i < 20; i++)
    {
        numbers [i]= i+1;
        if (numbers[i] % 2 == 0)
        {
            even[e] = numbers[i];
            e++;
        }
        else
        {
            odd[o] = numbers[i];
            o++;
        }
    }
    cout << "Even numbers: ";
    for (int i = 0; i < e; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "Odd numbers: ";
    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
    return 0;
}
