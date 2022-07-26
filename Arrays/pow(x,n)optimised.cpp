class Solution {
public:
      double myPow(double x, int n) {
 if(n==0 || x==1)
            return 1;
          double ans=1.0000;
          long long int nu=abs(n);
          while(nu)
          {
              if(nu%2==0)
              {
                  x=x*x;
                  nu=nu/2;
              }
              else{
                  ans=ans*x;
                  nu=nu-1;
              }
          }
          if(n<0)
              ans=(double)1/(double)(ans);
          return ans;
    }
};   
   