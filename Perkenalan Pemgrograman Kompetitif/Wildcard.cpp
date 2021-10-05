#include <bits/stdc++.h>
using namespace std;

bool isPattern(string match, string pattern){
    int asterisk = pattern.find("*");
    if(pattern.size()-1 > match.size())
        return false;
 
    string frontWord = pattern.substr(0, asterisk);
    string backWord = pattern.substr(asterisk + 1);

    string frontMatch = match.substr(0, frontWord.size());
    string backMatch = match.substr(match.size() - backWord.size());

    if(frontWord == frontMatch && backWord == backMatch)
        return true;
    else
        return false;
}

int main() {
    string asterisk;
    cin >> asterisk;
    // cout << asterisk.find('*'); -> 2
    int n;
    cin >> n;
    while(n--){
        string temp;
        cin >> temp;
        if(isPattern(temp, asterisk)){
            cout << temp << "\n";
        }
    }

    return 0;
}