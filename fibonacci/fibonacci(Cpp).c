#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i<=n ; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << setw(1)<< t1;
            
        }
        else if(i == 2)
        {
            cout << t2 << setw(1);
  
        }
        else 
        {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << nextTerm << endl;
    }
    return 0;
}
