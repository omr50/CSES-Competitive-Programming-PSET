#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void repetition()
{
    string genes;
    cin >> genes;
    char curr = genes[0];
    int currSize = 1, maxSize = 1;
    for (int i = 1; i < genes.length(); i++)
    {
        if (genes[i] == curr)
            currSize++;
        else
        {
            maxSize = max(currSize, maxSize);
            currSize = 1;
            curr = genes[i];
        }
    }
    maxSize = max(maxSize, currSize);
    cout << maxSize;
}

int main()
{
    repetition();
}