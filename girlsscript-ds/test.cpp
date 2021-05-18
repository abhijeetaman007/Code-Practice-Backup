#include <bits/stdc++.h>
using namespace std;
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int max_len=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                //map with its index
                mp[s[i]]=i;
            }else{
                int map_size=mp.size();
                max_len=max(max_len,map_size);
                auto itr=mp.find(s[i]);
                //mp.erase((mp.begin()),mp.end());
                mp.clear();
                mp[s[i]]=i;
            }
            int size=mp.size();
            max_len=max(max_len,size);     
        }
        return max_len;
    }
int main(){
    //string s="abcbadabcd";
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}