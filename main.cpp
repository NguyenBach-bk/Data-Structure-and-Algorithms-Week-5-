#include <iostream>
using namespace std;

void xepmau(int mau[], int n) {
    int ha = 0, trung = 0, cao = n - 1;

    while (trung <= cao) {
        switch (mau[trung]) {
            case 0: //Do
                swap(mau[ha++], mau[trung++]);
                break;
            case 1: //Trang
                trung++;
                break;
            case 2: //Xanh
                swap(mau[trung], mau[cao--]);
                break;
        }
    }
}

int main() {
    int mau[] = {2, 0, 2, 1, 0, 1, 2, 1, 0};
    int n = sizeof(mau) / sizeof(mau[0]);
    xepmau(mau, n);

    for (int i = 0; i < n; ++i) {
        cout << mau[i] << " ";
    }
    return 0;
}
