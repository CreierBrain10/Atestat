#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");

long nrfib(long n)
{
  if (n < 2)
    return n;
  return nrfib(n - 1) + nrfib(n - 2);
}
int main()
{
  long n, s, i, m;
  fin >> n;
  cout << n << " = ";
  m = n;
  while (n > 0)
  {
    i = 0;
    s = 0;
    while (s < n)
    {
      i++;
      s = nrfib(i);
    }
    if (s == n)
    {
      if (n == m)
      {
        cout << nrfib(i - 1) << " + " << nrfib(i - 2);
        n = 0;
      }
      else
      {
        cout << nrfib(i);
        n = 0;
      }
    }
    else
    {
      s = nrfib(i - 1);
      cout << s << " + ";
      n = n - s;
    }
  }
  return 0;
}
