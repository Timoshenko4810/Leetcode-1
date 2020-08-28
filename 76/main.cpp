#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> m;
        for(char i:t){
            if(m.find(i)!=m.end())
                m[i]++;
            else
                m.insert(make_pair(i,1));
        }
        int index=0;
        int i=0;
        int count;
        int len=s.size()+1;
        while(i<s.size()){
            if(m.find(s[i])!=m.end()){
                m[s[i]]--;
            }
            else

        }
    }
};
class Solution {
public:
    unordered_map <char, int> ori, cnt;

    bool check() {
        for (const auto &p: ori) {
            if (cnt[p.first] < p.second) {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        for (const auto &c: t) {
            ++ori[c];
        }

        int l = 0, r = -1;
        int len = INT_MAX, ansL = -1, ansR = -1;

        while (r < int(s.size())) {
            if (ori.find(s[++r]) != ori.end()) {
                ++cnt[s[r]];
            }
            while (check() && l <= r) {
                if (r - l + 1 < len) {
                    len = r - l + 1;
                    ansL = l;
                }
                if (ori.find(s[l]) != ori.end()) {
                    --cnt[s[l]];
                }
                ++l;
            }
        }

        return ansL == -1 ? string() : s.substr(ansL, len);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
