#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.txt");
int n, i, j, maxim, a[100001];
int main()
{
  maxim = 0;
  i = 1;
  while (fin >> a[i])
    i++;
  n = i - 1;
  for (i = 1; i < n; i++)
    for (j = i + 1; j <= n; j++)
      if (a[i] == a[j])
        if (j - i > maxim)
          maxim = j - i;
  cout << maxim;
  fin.close();
  return 0;
}
