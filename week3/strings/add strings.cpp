class Solution {
public:
    string addStrings(string num1, string num2) {
        string sol="";
        int i=num1.length()-1,j=num2.length()-1,rem=0,a;
        while(i>=0&&j>=0)
        {
            a=num1[i]-'0'+num2[j]-'0'+rem;
            if(a>=10)
            {
                a=a-10;
                rem=1;
            }
            else
            {
                rem=0;
            }
            sol+=(char)(a+'0');
            
            i--;j--;
        }
        while(i>=0)
        {
            a=num1[i]-'0'+rem;
             if(a>=10)
            {
                a=a-10;
                rem=1;
            }
            else
            {
                rem=0;
            }
            sol+=(a+'0');
            i--;
        }
        while(j>=0)
        {
            a=num2[j]-'0'+rem;
             if(a>=10)
            {
                a=a-10;
                rem=1;
            }
            else
            {
                rem=0;
            }
            sol+=(a+'0');
            j--;
        }
        if(rem)
        sol+=rem+'0';
        reverse(sol.begin(),sol.end());
        cout<<sol;
        return sol;
    }
};