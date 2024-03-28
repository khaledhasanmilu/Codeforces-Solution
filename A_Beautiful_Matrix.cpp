#include <iostream>
using namespace std;
int main()
{
  int arr[5][5];
  int a, b;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == 1)
      {
        a = i+1;
        b = j+1;
      }
    }
  }
  cout << abs(a - 3) + abs(b - 3) << endl;

  return 0;
}