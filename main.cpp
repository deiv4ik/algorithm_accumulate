#include <string>
#include <iostream>
#include <numeric>
#include <set>

using namespace std;

string DushStopWords(const string& s1, const string& s2) {
    return s1 + " -" + s2;
}

string AddStopWords(const string& query, const set<string>& stop_words) {
    return accumulate(stop_words.begin(), stop_words.end(), query, DushStopWords);
}

int main() {
    string s = "someone say me"s;
    set<string> stop_words = {"off"s, "on"s};
    cout << AddStopWords(s, stop_words) << endl;
}
