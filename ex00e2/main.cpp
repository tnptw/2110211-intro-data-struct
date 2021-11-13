// ex00e2 : Min Max
#include <iostream>

using namespace std;

int main() {
    int r, c, reg;
    cin >> r >> c >> reg;
    int mtrx[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mtrx[i][j];
        }
    }
    int r1, c1, r2, c2;
    for (int n = 0; n < reg; n++) {
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 || c1 > c2) { cout << "INVALID" << endl; }
        else if (r1 > r || c1 > c || r2 < 0 || c2 < 0) { cout << "OUTSIDE" << endl; }
        else {
            int Max = mtrx[r1 - 1][c1 - 1];
            for (int i = r1; i <= r2; i++) {
                for (int j = c1; j <= c2; j++) {
                    if (i <= r && j <= c) {
                        if (mtrx[i - 1][j - 1] > Max) {
                            Max = mtrx[i - 1][j - 1];
                        }
                    }
                }
            }
            cout << Max << endl;
        }

    }
    return 0;

}
