#include <bits/stdc++.h>
using namespace std;
void solve(int ind, string& s, vector<string>& dictionary, vector<string>& res, string& output) {
    if (ind == s.length()) {
            res.push_back(output);
        return;
    }

    for (int i = ind; i < s.length(); i++) {
        string word = s.substr(ind, i - ind + 1);
        if (find(dictionary.begin(), dictionary.end(), word) != dictionary.end()) {
            string prevOutput = output;
            if (prevOutput.empty()) {
                output = word;
            } else {
                output += " " + word;
            }
            solve(i + 1, s, dictionary, res, output);
            output = prevOutput;
        }
    }
}

vector<string> wordBreak(string& s, vector<string>& dictionary) {
    vector<string> res;
    string output;
    solve(0, s, dictionary, res, output);
    return res;
}
