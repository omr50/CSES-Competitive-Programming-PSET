#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

void twoSets(){
    int n;
    cin >> n;
    if (((n * (n+1) )/ 2) % 2)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        int size1, size2;
        vi a, b;

        if (n % 2) 
        {   
            for(int i = n; i > 3; i-=4)
            {
                    b.push_back(i);
                    a.push_back(i-1);
                    a.push_back(i-2);
                    b.push_back(i-3);
            }
            a.push_back(3);
            b.push_back(1);
            b.push_back(2);

        }
        else
        {
            for (int i = 1; i < n/2; i+=2)
            {
                a.push_back(i);
                a.push_back(n-i+1);
                b.push_back(i+1);
                b.push_back(n-i);
                    
            }
        }
        cout << a.size()<< endl;
        for (auto x : a)
            cout << x << " ";
        cout << endl;

        cout << b.size()<< endl;
        for (auto x : b)
            cout << x << " ";
        cout << endl;
        
    }
}
int main(){
    twoSets();

    return 0;
}