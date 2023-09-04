#include <iostream>
#include <vector>
using namespace std;

int main() {
    int largo, ancho;
    cin >> largo >> ancho;

    int n;
    cin >> n;

    vector<vector<bool>> cuarto(largo + 1, vector<bool>(ancho + 1, false));

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        cuarto[x][y] = true;
    }

    int formasSeguras = 0;
    for (int i = 1; i <= largo - 1; i++) {
        for (int j = 1; j <= ancho - 1; j++) {
            if (!cuarto[i][j] && !cuarto[i + 1][j] && !cuarto[i][j + 1] && !cuarto[i + 1][j + 1]) {
                formasSeguras++;
            }
        }
    }

    cout << formasSeguras << endl;

    return 0;
}
