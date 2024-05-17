#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int sub(int n, int a[20][20], int k)
{
  int i, j, s = 0;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      if (i + j == k)
        s = s + a[i][j];
  return s;
}
int main()
{
  int n, i, j, a[20][20], s = 0;
  fin >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      fin >> a[i][j];
  for (i = 2; i <= n; i++)
    s = s + sub(n, a, i);
  cout << "Suma este = " << s;
  fin.close();
  return 0;
}
