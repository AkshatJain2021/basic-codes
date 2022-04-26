class Solution {
public:
    int compareVersion(string version1, string version2) {
     int leng1=version1.length();
     int leng2=version2.length();
        int i=0,j=0;
        while(i<leng1 || j<leng2)
        {
            int num1=0,num2=0;
          while(i<leng1 && version1[i]!='.' )
          {
              num1=num1*10+(version1[i]-'0');
              i++;
          }
            while(j<leng2 && version2[j]!='.')
          {
              num2=num2*10+(version2[j]-'0');
                j++;
          }
            if(num1>num2)
            {
                return 1;
            }
            else if(num1<num2)
            {
                return -1;
            }
            i++;
            j++;
        }
        return 0;
    }
};