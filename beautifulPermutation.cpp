#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

void bPermutation(){
    int n;
    cin >> n;
    if ( n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return;
    }

    // even and odd have similar steps except that for odd
    // we will loop then add the center element at the end
    // before returning. So the for loop if the same and the
    // element will be added at the end if it is odd with if.

    int l = n / 2, r = n; 
    while (l > 0)
    {
        if (n % 2)
            cout << r << " " << l << ' ';
        else
            cout << l << " " << r<< ' ';
        l--;
        r--;
    }
    if (n % 2)
        cout << n / 2 + 1;
}   

int main(){
    bPermutation();
    return 0;
}


/*
A beutiful perumation is one where all of the numbers from 1 to n in the permutation that are adjacent
have a difference of more than one.

3 does not have one because 1 2 3 cannot be arranged in any way like that.

1 2 3        3 2 1     2 1 3   2 3 1   

2 doesnt either

4 does

3 1 4 2

5 also does. 

I think all numbers that are greater than 3 would have a valid beutiful permutation.

Also we can make sure that all elements are spaced out correctly if we just iterate and
add elements together that are futher away

for example 1 2 3 4 5:

we can start at the end and start at the mid point.

Then group them together and iterate both pointers.

start at end : 5 and start at mid : 3

so first iteration : 3 5

second iteration: 2 4

2 5 4 1 3

third iteration: 1

so we can return 3 5 2 4 1

Can we also do that on even numbers

Example:

1 2 3 4

start at 4 and 2

2 4 1 3

seems like it works.
*/