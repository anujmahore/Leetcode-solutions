class Solution {
public:
    bool consecutive(char a, char b) {
        return abs(a - b) == 1 || 
               (a == 'a' && b == 'z') ||
               (a == 'z' && b == 'a');
    }

    string resultingString(string s) {
        string st;

        for (char c : s) {
            if (!st.empty() && consecutive(st.back(), c)) {
                st.pop_back();
            } else {
                st.push_back(c);
            }
        }

        return st;
    }
};