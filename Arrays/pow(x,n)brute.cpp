class Solution {
public:
      double myPow(double x, int n) {
        if(n==0 || x==1)
            return 1;
        double num=x;
        if(n>0)
        {
            while(n!=1)
            {
                num=num*x;
                n--;
            }
             return num;
        }
        long long int n2=abs(n);
       while(n2!=1)
            {
                num=num*x;
                n2--;
            }
        num=1/(1.00*num);
        return num;
    }
};   