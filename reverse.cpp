#include <iostream>
using namespace std;

int main() 
{
	int k,number[100],reverse,rem,n;
	cin>>k;
	    for(int i=0;i<k;i++)
	    {
	      reverse=0;
	      cin>>number[i];
	      n=number[i];
	      while(n!=0)    
          {    
            rem=n%10;    
            reverse=reverse*10+rem;    
            n/=10;    
           }  
           cout<<reverse<<endl;
	    }
	
	return 0;
}
