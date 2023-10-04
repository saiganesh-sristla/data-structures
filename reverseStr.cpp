#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}

int main()
{
    string name = "saiganeh";

    int i = 0;
    int j = name.length() - 1;

    reverse(name, i, j);

    cout << name;

    return 0;
}