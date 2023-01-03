/*
N=5
*********
 *     *
  *   *
   * *
    *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    // Number of rows
    cin >> n;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
            cout << " ";
        for (int j = 2 * n - 1; j > i; j--)
        {
            if (i == 0 || j == 2 * n - 1 || j == i + cnt)
                cout << "*";
            else
                cout << " ";
        }
        cnt++;
        cout << endl;
    }
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)