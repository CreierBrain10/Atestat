#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
char s[256], *p, sep[] = " .,;:-!?", c[256], a[100][20];
int n, i;

int cauta(char a[100][20], int n, char *c)
{
  for (int i = 0; i < n; i++)
    if (stricmp(a[i], c) == 0)
      return 1;
  return 0;
}
int main()
{
  while (!fin.eof())
  {
    fin.getline(s, 255);
    p = strtok(s, sep);
    while (p)
    {
      if (strstr(p, "ate"))
        if (cauta(a, n, p) == 0)
          strcpy(a[n++], p);
      p = strtok(NULL, sep);
    }
  }
  for (i = 0; i < n; i++)
    fout << a[i] << '\n';
  fin.close();
  fout.close();
  return 0;
}
