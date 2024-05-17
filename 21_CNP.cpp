#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("doc.txt");
ofstream fout("cnp.txt");
char s[201], *p;
int n;
int main()
{
  while (fin >> s)
  {
    n = strlen(s);
    p = strtok(s, " ,.:;-");
    while (p != 0)
    {
      if (strlen(p) == 13 && p[0] >= '0' && p[0] <= '9')
        cout << p << '\n';
      p = strtok(0, " ,.:;-");
    }
  }
  fin.close();
  return 0;
}
