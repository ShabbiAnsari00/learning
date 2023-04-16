
#include <iostream>
#include <cmath>

using namespace std;

float add(int a, float b) {
    return roundf(a + b);
}

int main() {

    float sum;

    sum = add(20, 1.8F);

    cout << "20 + 1.8 = "  << sum << endl;   

    return 0;
}