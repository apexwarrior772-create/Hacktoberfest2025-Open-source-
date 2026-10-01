#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, R;
    if (!(cin >> N >> M >> R)) return 0;

    // Check for invalid input condition (e.g., all zeros)
    if (N == 0 && M == 0 && R == 0) {
        cout << "Invalid input\n";
        return 0;
    }

    vector<int> incoming(N);
    vector<int> outgoing(M);

    int totin = 0;
    for (int i = 0; i < N; i++) {
        cin >> incoming[i];
        totin += (incoming[i] - R);
    }

    int totout = 0;
    for (int i = 0; i < M; i++) {
        cin >> outgoing[i];
        totout += (outgoing[i] - R);
    }

    if (totin == totout) {
        cout << "BALANCED\n";
    } else {
        int addpipe = (totin - totout) + R;
        cout << addpipe << "\n";
    }

    return 0;
}
