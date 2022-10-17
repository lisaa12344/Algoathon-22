#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int result = 0;
        for (int j = 0; j < m; j++) {
            int element;
            cin >> element;
            result += element;
        }
        cout << result << endl;
    }
    return 0;
}
