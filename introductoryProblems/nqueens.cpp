#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
bool isReserved(pair<int, int> a, vector<pair<int, int>> &blocked)
{
    for (auto x : blocked)
        if (x == a)
            return true;
    return false;
}
void Queens(int row, vector<pair<int, int>> &queens, int &total, int n, vector<pair<int, int>> &blocked)
{
    // for (auto x : queens)
    //     cout << x.first << ' ' << x.second << ' ';
    // cout << endl;
    if (row == n)
    {
        total++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int goNext = false;
        if (isReserved(make_pair(row, i), blocked))
            goNext = true;
        for (auto x : queens)
            if (row - x.first == abs(x.second - i) || x.second == i)
            {
                goNext = true;
                break;
            }
        if (!goNext)
        {
            queens.push_back(make_pair(row, i));
            Queens(row + 1, queens, total, 8, blocked);
            queens.pop_back();
        }
        // cout << i << endl;
    }
}

int main()
{
    char t;
    vector<pair<int, int>> queens;
    vector<pair<int, int>> blocked;
    int total = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            cin >> t;
            if (t == '*')
                blocked.push_back(make_pair(i, j));
        }

    Queens(0, queens, total, 8, blocked);
    cout << total;
    return 0;
}

/*
The reserved spots need to be taken into account as well. So the general backtracking algorithm
needs to be used but another condition that terminates the backtracking would be to see if the
index is already taken.
*/