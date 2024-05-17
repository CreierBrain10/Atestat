#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("munte.txt");

int n, p, v[100], nr = 0;

int solutie(int k)
{
  if (k == 5)
    return 1;
  return 0;
}

void afisare(int k)
{
  int i;
  for (i = 1; i <= k; i++)
    fout << v[i];
  for (i = k - 1; i >= 1; i--)
    fout << v[i];
  fout << ' ';
}
void BK(int k, int &nr)
{
  int i;
  for (i = v[k - 1] + 1; i <= 9; i++) // la pasul k selectăm din mulţime un element mai mare decât elementul
  {
    v[k] = i;       // de pe poziţia k-1
    if (solutie(k)) // nu este necesar să verificam condiţiile de continuare, ele sunt respectate
    {
      afisare(k); // datorită modului în care am selectat elementele.
      nr++;
    }
    else
      BK(k + 1, nr);
  }
}
int main()
{
  BK(1, nr);
  fout << '\n'
       << nr;
  return 0;
}
