#define vi vector<int>
class Solution {
public:
    int ans = 0;
    int Final=0;
    
    void fun(int s, int m, int score, vector<vi>& students, vector<vi>& mentors, int dp[300][300][70]){
        if(s==Final){
            if(ans < score) ans = score;
            return;
        } 
        if(dp[s][m][score] != -1) return;
        dp[s][m][score] = 1;
        int n = students.size();
        
        for(int i=0;i<n;i++){
            if(s & (1<<i)) continue;
            for(int j=0;j<n;j++){
                if(m & (1<<j)) continue;
                int inc = 0;
                for(int k=0;k<students[i].size();k++){
                    inc += students[i][k]==mentors[j][k]; 
                }
                fun(s|(1<<i), m|(1<<j), score+inc, students, mentors, dp);
            }
        }   
    }
    
    int maxCompatibilitySum(vector<vi>& students, vector<vi>& mentors) {
        ans = 0;
        int n = students.size();
        int dp[300][300][70];
        memset(dp, -1, sizeof dp);
        Final = (1<<n)-1;
        fun(0, 0, 0, students, mentors, dp);
        return ans;
    }
};