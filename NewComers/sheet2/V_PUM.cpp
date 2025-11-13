#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int counter = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cout << counter++ << " ";
        }
        cout << "PUM" << endl;
        counter++;
    }

    return 0;
}
