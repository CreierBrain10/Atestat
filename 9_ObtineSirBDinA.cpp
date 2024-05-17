#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("DATE.TXT");
int a[5001], b[5001], i, x, verif, n, m;
int main()
{
  fin >> n >> m;
  for (i = 1; i <= n; i++)
  {
    fin >> x;
    a[x]++;
  }

  for (i = 1; i <= m; i++)
    fin >> b[i];
  for (i = 1; i <= m && verif == 0; i++)
    if (a[b[i]] > 0)
      a[b[i]]--;
    else
      verif = 1;
  if (verif == 1)
    cout << "b nu se poate obtine din a";
  else
    cout << "b se poate obtine din a";
  fin.close();
  return 0;
}
