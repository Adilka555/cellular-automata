#include <iostream>
#include "vector.h"
#include "foos.h"
using namespace std;

int main() {
  Matrix v(10,10);
  Matrix v1(10,10);
  int n;
  cin >> n;
  starter(v, n);
  v1 = v;
  cout << v << endl;
  game(v,v1);
  return 0;
}
