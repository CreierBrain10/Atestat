#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n, i, x;
int prim(int n)
{
  if (n < 2)
    return 0;
  for (int d = 2; d <= n / 2; d++)
    if (n % d == 0)
      return 0;
  return 1;
}
int main()
{
  fin >> n;
  for (i = 1; i <= n; i++)
  {
    fin >> x;
    if (prim(x) == 1)
      fout << x << " ";
  }
  fin.close();
  return 0;
}
