#include <fstream>
using namespace std;
ifstream fin("mat.in");
ofstream fout("mat.out");
int n, m, i, j, minim, maxim, nr, a[100][100];
int main()
{
  fin >> n >> m;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= m; j++)
      fin >> a[i][j];
  maxim = a[1][1];
  for (i = 1; i <= n; i++)
    for (j = 1; j <= m; j++)
      if (a[i][j] > maxim)
        maxim = a[i][j];
  nr = 0;
  for (j = 1; j <= m; j++)
  {
    minim = a[1][j];
    for (i = 2; i <= n; i++)
      if (a[i][j] < minim)
        minim = a[i][j];
    for (i = 1; i <= n; i++)
      if (a[i][j] == maxim)
      {
        a[i][j] = minim;
        nr++;
      }
  }
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= m; j++)
      fout << a[i][j] << " ";
    fout << '\n';
  }
  fout << nr;
  fin.close();
  fout.close();
  return 0;
}
