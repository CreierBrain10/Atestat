#include <iostream>
using namespace std;
int n, i, j, k, a[11][11], nr, m;
int main()
{
  cin >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      a[i][j] = j;
  m = 1;
  for (i = 2; i <= n; i++)
  {
    for (k = 1; k <= m; k++)

    {
      nr = a[i][1];
      for (j = 1; j < n; j++)
        a[i][j] = a[i][j + 1];
      a[i][n] = nr;
    }
    m++;
  }
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << '\n';
  }
  return 0;
}
