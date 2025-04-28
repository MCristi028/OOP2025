#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <cctype>
#include <vector>
using namespace std;

// Comparator for priority_queue
struct Compare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }
};

bool isSeparator(char c) {
    return c == ' ' || c == ',' || c == '?' || c == '!' || c == '.';
}

int main() {
    ifstream fin("input.txt");
    if (!fin) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string text;
    getline(fin, text);
    fin.close();

    for (char& c : text) {
        c = tolower(c);
    }

    map<string, int> wordCount;
    string word = "";

    for (char c : text) {
        if (isSeparator(c)) {
            if (!word.empty()) {
                wordCount[word]++;
                word.clear();
            }
        }
        else {
            word += c;
        }
    }

    if (!word.empty()) {
        wordCount[word]++;
    }

    priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> pq;

    for (auto& entry : wordCount) {
        pq.push({ entry.second, entry.first });
    }

    while (!pq.empty()) {
        cout << pq.top().second << " : " << pq.top().first << endl;
        pq.pop();
    }

    return 0;
}
