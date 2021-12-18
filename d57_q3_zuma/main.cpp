// d57_q3_zuma : Zuma

#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(false);

    int data[1000005];
    int N, K, V, inp;
    cin >> N >> K >> V;
    N++;
    for (int i = 0; i < N; i++) {
        if (i == K) data[i] = V;
        else {
            cin >> inp;
            data[i] = inp;
        }
    }

    int l = K, r = K;
    int tmp_l = K, tmp_r = K;
    int del_count = 0;
    while ((tmp_l >= 0 && tmp_r < N) && data[tmp_l] == data[tmp_r]) {
        while (data[tmp_l - 1] == data[tmp_l] && tmp_l >= 0) tmp_l--;
        while (data[tmp_r + 1] == data[tmp_r] && tmp_r < N) tmp_r++;

        if (tmp_r - tmp_l + 1 - del_count < 3) break;
        del_count = tmp_r - tmp_l + 1;
        l = tmp_l;
        r = tmp_r;
        tmp_l--;
        tmp_r++;

    }

    int i = 0;
    while (i < N) {
        if (l <= i && i <= r && del_count > 0) {
            i += del_count;
            continue;
        }
        cout << data[i] << " ";
        i++;
    }

}
