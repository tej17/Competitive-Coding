 #include <stdio.h>
    #include<math.h>
    using namespace std;
     
    int main() 
    {
    	int t;
    	scanf("%d",&t);
    	while(t--){
    	long long int n,m,p,k,i,j;
    	scanf("%lld %lld %lld %lld",&n,&m,&p,&k);
    	double ans1=0,ans2=0,ans3=0,ans4=0,sum=0,x=1,fa;
    	if(n%2==0 && m%2==0 || p==0)
    	{
    		printf("1.000000\n");
    	}
    	else if(n%2!=0 && m%2!=0)
    	{
    		printf("0.000000\n");
    	}
    	else if(k%2!=0 && p==(k+1)/2)
    	{
    		printf("0.500000\n");
    	}
    	else 
    	{
    		for(i=k;i>=k-p+1;i--)
    		{
    			ans1+=1.0*log2(i);
    		}
    		for(i=k-p;i>=p;i--)
    		{
    			ans2+=1.0*log2(i);
    		}
    		for(i=p;i>=1;i--)
    		{
    			ans3+=1.0*log2(i);
    		}
    		ans2+=ans3;
    		ans1+=ans2;
    		for(i=p,j=p+1;j<=k;i++,j++)
    		{
    			x=(x*1.0*(k-i))/(j);
    			sum+=x;
    		}
    		ans4=log2(1+sum);
    		fa=ans1-(ans2+ans3)+ans4-k;
    		printf("%.6lf\n",pow(2,fa));
    	}
    	}
    	return 0;
    } 