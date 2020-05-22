string Solution::countAndSay(int A) {

vector<string> v;
v.push_back("1");
for(int i=2;i<=A;i++)
{
    string s=v[i-2];
    string t="";
    int count=1;
    
    for(int j=0;j<s.length();j++)
    {
        if(j==(s.length()-1))
        {
            t+=to_string(count);
            t+=s[j];
            
        }
        else if(s[j]==s[j+1])
        count++;
        else
        {
            t+=to_string(count);
            t+=s[j];
            count=1;
        }
        
    }
    v.push_back(t);
    
}
return v[A-1];
}