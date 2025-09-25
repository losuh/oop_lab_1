#include <iostream>
#include "count_one.h"

using namespace std;

int main() {
    unsigned int a, b, c; cin >> a >> b;
    c = counter(a, b);
    cout << c << endl;
    return 0;
}