class Solution {
public:
    void reverseString(vector<char>& s) {
        solve(0,s.size()-1,s);
        
    }
private:
    void solve(int i ,int j, vector<char>&s){
        if(i>=j)return;
        swap(s[i],s[j]);
        solve(i+1,j-1,s);

    }
};