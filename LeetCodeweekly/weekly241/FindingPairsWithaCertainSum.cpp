class FindSumPairs {
public:
    set<int> s;
    unordered_map<int,int> m;
    vector<int> v1;
    vector<int> v2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        v1=nums1;
        v2=nums2;
        
        for(int i=0;i<v2.size();i++)
        {
            s.insert(v2[i]);
            m[v2[i]]++;
        }
        
    }
    
    void add(int index, int val) {
        m[v2[index]]--;
        
        if(m[v2[index]]<=0){
            if(s.find(v2[index])!=s.end())
            {
                s.erase(s.find(v2[index]));        
            }
        }
        s.insert(v2[index]+val);
        m[v2[index]+val]++;
        v2[index]+=val;
    }
    
    int count(int tot) {
        int ans=0;
        for(int i=0;i<v1.size();i++)
        {
            if(s.find(tot-v1[i])!=s.end())
            {
                if(m[tot-v1[i]]>0)
                ans=ans+m[tot-v1[i]];
            }
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */