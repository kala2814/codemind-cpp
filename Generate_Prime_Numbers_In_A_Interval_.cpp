#include <iostream>
using namespace std;
int main() {
  int low, high, temp, i;
  bool is_prime;
  cin >> low >> high;
  if (low > high) {
    temp = low;
    low = high;
    high = temp;
  }
  while (low < high) {
    is_prime = true;
    if (low == 0 || low == 1) {
      is_prime = false;
    }

    for (i = 2; i <= low / 2; ++i) {
      if (low % i == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime)
      cout << low << "
";

    ++low;
  }

  return 0;
}