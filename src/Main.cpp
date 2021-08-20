#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Solution.h"
#include <sstream>

using namespace std;

vector<int> split(const string &s, char delimiter) {
    vector<int> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(stoi(token));
    }
    return tokens;
}

int main() {
    string STRING;
    ifstream infile;
    infile.open("../files/in.txt");
    vector<string> input;
    while(!infile.eof()){
        getline(infile, STRING);
        input.emplace_back(STRING);
    }
    infile.close();

    vector<int> rows = split(input[0], ',');
    int target = split(input[1], ' ')[0];

    auto solution = Solution();
    auto result = solution.twoSum(rows, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
