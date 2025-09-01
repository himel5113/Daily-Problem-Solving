#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> photos(M, vector<int>(N));
    
    // Read the input photos
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> photos[i][j];
        }
    }

    // Set to track all adjacent pairs in the photos
    set<pair<int, int>> adjacent_pairs;
    
    // Process each photo and find adjacent pairs
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            int person1 = photos[i][j];
            int person2 = photos[i][j + 1];
            // Store the pair in sorted order (smaller number first)
            adjacent_pairs.insert({min(person1, person2), max(person1, person2)});
        }
    }

    // Count the number of pairs who are not adjacent in any photo
    int bad_mood_pairs = 0;
    
    // Check every possible pair of people (i, j) where i < j
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            // If the pair (i, j) is not in the adjacent pairs set, count it as a bad mood pair
            if (adjacent_pairs.find({i, j}) == adjacent_pairs.end()) {
                bad_mood_pairs++;
            }
        }
    }

    // Output the result
    cout << bad_mood_pairs << endl;
    
    return 0;
}
