#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("pag.txt");
int n, nrv, nrp, ok;
int main()
{
  cin >> n;
  nrv = 0;
  while (n >= 792)
  {
    nrv++;
    n = n - 792;
  }
  nrv++;
  ok = 1;
  if (n <= 9)
    nrp = n;
  else if (n <= 189)
  {
    if ((n - 9) % 2 == 0)
      nrp = 9 + (n - 9) / 2;
    else
      ok = 0;
  }
  else if (n <= 792)
  {
    if ((n - 189) % 3 == 0)
      nrp = 99 + (n - 189) / 3;
    else
      ok = 0;
  }
  if (ok == 1)
    fout << nrv << '\n'
         << nrp;
  else
    fout << "Imposibil";
  fout.close();
  return 0;
}
