#include <iostream>
using namespace std;

const int N = 100010;

int a[N], s[N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]); // 注意必须要从 1 开始读入
    for (int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
    while (m --) {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
}
