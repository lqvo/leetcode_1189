#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans = 0;
        unordered_map<char, int>um;
        for (char i : text)
            if (i == 'b' || i == 'a' || i == 'l' || i == 'o' || i == 'n')
                um[i]++;
        um['l'] /= 2;
        um['o'] /= 2;
        ans = um['b'];
        if (um['a'] < ans)ans = um['a'];
        if (um['l'] < ans)ans = um['l'];
        if (um['o'] < ans)ans = um['o'];
        if (um['n'] < ans)ans = um['n'];
        return ans;
    }
};
int main() {
    Solution sol;
    string text = "loonbalxballpoon";
    cout<<sol.maxNumberOfBalloons(text);
    return 0;
}