#include<stdio.h>
        gcd(long long int a,long long int b)
        {
            if(b==0) return a;
            
            return gcd(b,a%b);
        }
        int main()
        {
            
          long long int n,temp;
            long long int lcm;
            scanf("%lld",&n);
            for(int i=0;i<n;i++)
            {
                scanf("%lld",&temp);
                if(temp!=0)
                {if(i==0) lcm=temp;
                else lcm=(lcm*temp)/gcd(lcm,temp);
                }
            }
            printf("%lld\n",lcm);
            return 0;
        }
