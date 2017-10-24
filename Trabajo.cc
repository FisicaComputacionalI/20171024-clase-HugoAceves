                                            
//Te dice si unnúmero es primo

#include<iostream>
using namespace std;
int main()
{
  long N=12;
  long Flag=0;
  long divisor=0;
  cout<<"inserte número_"<<endl;
  cin>>N;
  for(long i=2; i<=N/2; i++)
    {
      if(N%i==0){
	Flag=1;
	divisor=i;
	break;
      }
    }
  
  if(Flag==1){
    cout<<"tu número no es primo"<<endl;
    cout<<"porque es divisible entre"<<divisor<<endl;
  }
  else
    cout<<"tu nùmero es primo"<<endl;
  return 0 ;
}
