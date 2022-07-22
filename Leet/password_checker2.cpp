class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int size=password.size();
        if(size<8)
            return false;
        bool c1=false,c2=false,c3=false,c4=false;
        for(int i=0;i<size;i++)
        {
            if(password[i]==password[i+1])
                return false;
            if((password[i])>='0' && (password[i])<='9' )
                c1=true;
            else if(password[i]>='a' && password[i]<='z')
                c2=true;
            else if(password[i]>='A'&&password[i]<='Z')
                c3=true;
            else if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
                c4=true;
                
        }
        cout<<c1<<' '<<c2<<' '<<c3<<' '<<c4;
        return c1&c2&c3&c4;
    }
};