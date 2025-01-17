#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    unordered_set<int> unique_songs;
    int start = 0, max_length = 0;

    for (int end = 0; end < n; end++) {
        while (unique_songs.count(songs[end])) {
            unique_songs.erase(songs[start]);
            start++;
        }
        unique_songs.insert(songs[end]);
        max_length = max(max_length, end - start + 1);
    }

    cout << max_length << endl;
    return 0;
}
