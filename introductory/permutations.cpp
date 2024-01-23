#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n=0, lastValue=-1;
  bool flag=false;
  vector<int> vec;

  cin >> n;


  for (int i = 2; i <= n; i += 2) {
    vec.push_back(i);
    lastValue = i;
  }

  for (int i = 1; i <= n; i += 2) {
    if (i == 1 && (lastValue - i == 1 or lastValue - i == -1)) {
      flag = true;
      break;
    }
    vec.push_back(i);
  }

  if (!flag) {
    for (int i = 0; i < vec.size(); i++) {
      cout << vec[i] << " ";
    }
    cout << endl;
  } else {
    cout << "NO SOLUTION" << endl;
  }

  return 0;
}