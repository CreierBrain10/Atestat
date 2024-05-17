#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n, i, x;
int suma_cifre(int n)
{
  if (n == 0)
    return 0;
  else
    return n % 10 + suma_cifre(n / 10);
}
int main()
{
  fin >> n;
  for (i = 1; i <= n; i++)
  {
    fin >> x;
    if (suma_cifre(x) % 3 == 0)
      fout << x << " ";
  }
  fin.close();
  fout.close();
  return 0;
}
