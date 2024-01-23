#include <iostream>
#include <vector>

using namespace std;

int main() {
  unsigned long int n = 0, aux = 0, count = 0, diff = 0;
  vector<int> vec;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> aux;
    vec.push_back(aux);
  }

  for (int i = 1; i < n; i++) {
    if (vec[i] < vec[i - 1]) {
      diff = vec[i - 1] - vec[i];
      vec[i] += diff;
      count += diff;
    }
  }

  cout << count << endl;

  return 0;
}