class Solution {
public:
    string defangIPaddr(string address) {

        string ans = "" ; 
        for(char& val : address) {
            if (val == '.') ans += "[.]" ;
            else ans += val ;
        }
        return ans;
    }
};
