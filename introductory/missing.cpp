#include <iostream>
#include <vector>

using namespace std;

int main() {
  unsigned int n = 0, aux = 0;

  cin >> n;
  vector<bool> vec(n+1, false);

  for (int i = 0; i < n-1; i++) {
    cin >> aux;
    vec[aux-1] = true;
  }

  for (int i = 0; i < n; i++) {
    if (!vec[i]) {
      cout << i+1 << endl;
    }
  }

  return 0;
}