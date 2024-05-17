#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n, i, j, minim, maxim, ok, a[100][100];
int main()
{
  fin >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      fin >> a[i][j];
  minim = a[1][1];
  maxim = a[1][1];
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
    {
      if (a[i][j] < minim)
        minim = a[i][j];
      if (a[i][j] > maxim)
        maxim = a[i][j];
    }
  for (i = 1; i <= n; i++)
  {
    ok = 0;
    for (j = 1; j <= n; j++)
      if (a[i][j] == maxim)
        ok = 1;
    for (j = 1; j <= n && ok == 1; j++)
      a[i][j] = a[i][j] + minim;
  }
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
      fout << a[i][j] << " ";
    fout << '\n';
  }
  fin.close();
  fout.close();
  return 0;
}
