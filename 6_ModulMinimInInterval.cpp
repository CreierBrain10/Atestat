#include <iostream>
#include <cmath>
using namespace std;
long a, b, minim, i, nr;
int prim(int n)
{
  int d;
  for (d = 2; d <= sqrt(n); d++)
    if (n % d == 0)
      return 0;
  return 1;
}
int main()
{
  cin >> a >> b;
  minim = 999999999;
  for (i = a; i <= b; i++)
    if (prim(i) == 1)
      if (abs(b + a - 2 * i) < minim)
      {
        minim = abs(b + a - 2 * i);
        nr = i;
      }
  cout << nr;
  return 0;
}