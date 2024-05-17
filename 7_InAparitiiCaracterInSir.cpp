#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("date.in");
char s[256], c, voc[] = "AEIOU";
int n, nr, i;
int apcar(char s[256], char c)
{
  int p = 0, i;
  for (i = 0; i < n; i++)
    if (s[i] == c)
      p++;
  return p;
}
int main()
{
  fin >> s;
  n = strlen(s);
  for (i = 0; i <= 4; i++)
    nr = nr + apcar(s, voc[i]);
  cout << nr;
  fin.close();
  return 0;
}
