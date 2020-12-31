int Solution::evalRPN(vector<string> &v) {
    int n=v.size();
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        if(v[i]=="+"|| v[i]=="-"|| v[i]=="/" || v[i]=="*")
        {
            int x=0;
            int y=0;
            if(v[i]=="+")
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(x+y);
                continue;
            }
            if(v[i]=="-")
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(y-x);
                continue;
            }
            if(v[i]=="*")
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(x*y);
                continue;
            }
            if(v[i]=="/")
            {
                x=s.top();
                s.pop();
                y=s.top();
                s.pop();
                s.push(y/x);
                continue;
            }   
        }
        else
        {
            int x=0;
            int sign=1;
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]=='-')
                {
                    sign=-1;
                    continue;
                }
                x=x*10;
                x=x+((int)v[i][j]-'0');
            }
            x=x*sign;
            s.push(x);
        }
    }
    int ans=s.top();
    return ans;
}
