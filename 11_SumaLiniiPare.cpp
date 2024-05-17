#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.in");
ofstream fout("matrice.out");
int n, i, j, x[11][11];
int suma(int x[11][11], int n, int p)
{
  int i, s = 0;
  for (i = 1; i <= n; i++)
    s = s + x[p][i];
  return s;
}
int main()
{
  fin >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      fin >> x[i][j];
  for (i = 1; i <= n; i++)
    if (suma(x, n, i) % 2 == 0)
      fout << i << " ";
  fin.close();
  fout.close();
  return 0;
}
