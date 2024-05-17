#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;
ofstream fout("date.out");
int r, x, y, n, d, k;
int main()
{
  cin >> n;
  r = sqrt(n);
  for (d = 1; d <= r; d++)
    if (n % d == 0)
    {
      k = n / d;
      if (n % d == n % k)
      {
        x = (d + k) / 2;
        y = (d - k) / 2;
        fout << x << ' ' << y << '\n';
        fout << x << ' ' << -y << '\n';
        fout << -x << ' ' << y << '\n';
        fout << -x << ' ' << -y << '\n';
      }
    }
  fout.close();
  return 0;
}
