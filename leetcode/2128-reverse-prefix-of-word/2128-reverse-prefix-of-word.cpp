class Solution {
public:
    string reversePrefix(string word, char ch) {
int pos = -1;
for (int i = 0; i < word.length(); ++i) {
    if (word[i] == ch) {
        pos = i;
        break;
    }
}

if (pos == -1) {
    return word;
}
string rev = word.substr(0, pos + 1);

reverse(rev.begin(), rev.end()); 
string suffix = word.substr(pos + 1);

return rev + suffix;
        
    }
};