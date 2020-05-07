#include <iostream>
using namespace std;

int N[1010][1010];
int S[1010][1010];

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i ++) 
        for (int j = 1;  j <= m; j ++) {
            scanf("%d", &N[i][j]);
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + N[i][j];
        }
            
    while (q --) {
        int x1, x2, y1, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        cout << S[x2][y2] - S[x1 - 1][y2] - S[x2][y1 - 1] + S[x1 - 1][y1 - 1] << endl;
    }
    return 0;
}
