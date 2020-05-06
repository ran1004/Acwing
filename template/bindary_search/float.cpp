#include <iostream>
using namespace std;

double l = -1e5, r = 1e5;
double n;

bool check(double mid, double n) {
    return mid*mid*mid >= n;
}

int main() {
    cin >> n;
    double mid;
    while (r - l > 1e-7) {
        mid = (l + r) / 2;
        if (check(mid, n)) r = mid;
        else l = mid;
    }
    printf("%.6f", l);
}
