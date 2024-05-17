#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int n, i, fr[9999];
int main()
{
  while (fin >> n)
    fr[n]++;
  for (i = 9999; i >= 1; i--)
    if (fr[i] == 0)
      fout << i << " ";
  fin.close();
  fout.close();
  return 0;
}
