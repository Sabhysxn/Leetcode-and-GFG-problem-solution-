#include <iostream>
#include <queue>
#include <unordered_set>
#include <string>
using namespace std;
string findNumber(int n) {
    queue<string> q;
    unordered_set<int> visited;

    q.push("9"); 

    while (!q.empty()) {
        string s = q.front();
        q.pop();

        int rem = 0;
        for (size_t i = 0; i < s.size(); i++)
            rem = (rem * 10 + (s[i] - '0')) % n;

        if (rem == 0)
            return s;

        if (!visited.count(rem)) {
            visited.insert(rem);
            q.push(s + "0");
            q.push(s + "9");
        }
    }

    return ""; 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string result = findNumber(n);
        cout << result << endl;
    }
    return 0;
}
