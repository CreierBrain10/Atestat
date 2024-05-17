#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("numere.in");
int n, i, j;
long x;
int rotund(long x)
{
  int c;
  long a = x, p;
  c = (int)(log10(x)) + 1;
  p = pow(10, c - 1);
  for (int i = 1; i < c; i++)

  {
    a = a % 10 * p + a / 10;
    if (a == x)
      return 1;
  }
  return 0;
}
int main()
{
  fin >> n;
  j = 0;
  for (i = 1; i <= n; i++)
  {
    fin >> x;
    if (rotund(x) != 0)
    {
      cout << x << ' ';
      j++;
      if (j % 2 == 0)
        cout << '\n';
    }
  }
  if (j == 0)
    cout << '0';
  fin.close();
  return 0;
}
