#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("date.in");
char s[101][31], x[31];
int n, i, j;
int main()
{
  while (fin >> x)
  {
    n++;
    strcpy(s[n], x);
  }
  for (i = 1; i < n; i++)
    for (j = i + 1; j <= n; j++)
      if (strcmp(s[i], s[j]) > 0)
      {
        strcpy(x, s[i]);
        strcpy(s[i], s[j]);
        strcpy(s[j], x);
      }
  for (i = 1; i <= n; i++)
    cout << s[i] << '\n';
  fin.close();
  return 0;
}
