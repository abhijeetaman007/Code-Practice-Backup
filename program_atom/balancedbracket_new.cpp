int Solution::solve(string str) {
  stack<char> s;
  for(int i=0;i<str.length();i++)
  {
    if(str[i]=='{'||str[i]=='['||str[i]=='('){
      s.push(str[i]);
    }
      if(str[i]=='}'||str[i]==']'||str[i]==')')
      {
          if(s.empty())
          return 0;
        if(str[i]=='}')
        {
            if(s.top()=='{')
            {
                s.pop();
                continue;
            }
            else
            return 0;
        }
        if(str[i]==')')
        {
            if(s.top()=='(')
            {
                s.pop();
                continue;
            }
            else
            return 0;
        }
        if(str[i]==']')
        {
            if(s.top()=='[')
            {
                s.pop();
                continue;
            }
            else
            return 0;
        }
     }
  }
  if(!s.empty())
    return 0;
  return 1;
}
