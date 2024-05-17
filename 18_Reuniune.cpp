#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("multimi.in");
ofstream fout("multimi.out");
int n, m, i, j, a[101], b[101];
int main()
{
  fin >> n >> m;
  for (i = 1; i <= n; i++)
    fin >> a[i];
  for (j = 1; j <= m; j++)
    fin >> b[j];
  i = 1;
  j = 1;
  fin >> a[i];
  fin >> b[j];
  while (i <= n && j <= m)

  {
    if (a[i] < b[j])
    {
      fout << a[i] << " ";
      i++;
    }
    else if (a[i] > b[j])
    {
      fout << b[j] << " ";
      j++;
    }
    else
    {
      fout << a[i] << " ";
      i++;
      j++;
    }
  }
  while (i <= n)
  {
    fout << a[i] << " ";
    i++;
  }
  while (j <= m)
  {
    fout << b[j] << " ";
    j++;
  }
  fin.close();
  fout.close();
  return 0;
}
