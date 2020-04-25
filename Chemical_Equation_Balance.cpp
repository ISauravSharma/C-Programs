//This program Balances a Chemical Equation which has only Hydrogen and Carbon elements.
//(b1)Cx +(b2)Hy-->(b3)CpHq
//x,y,p,q are inputs and b1,b2,b3 are outputs

#include <iostream.h>
void main()
{
	int i,x,y,p,q,gcd,lcm,b1,b2,b3;
	float z;
  cin>>x>>y>>p>>q;                         //take input
	for(i=1;i<=y && i<=q;i++)              //calculating lcm for Hydrogen element 
	{
		if(y%i==0 && q%i==0)
		{
			gcd=i;
		}
	}
	lcm=(q*y)/gcd;                        //lcm of y and q for total number of Hydrogen element
	b3=lcm/q;                             //coefficient of final product 
	b2=lcm/y;                             //coefficient of hydrogen on LHS
	b1=(p*b3)/x;                          //coefficient of carbon on LHS 
	if((p*b3)%x!=0)                       //if coefficient of carbon on LHS comes out to be fractional 
	{
		b1=(p*b3);
		b2=b2*x;
		b3=b3*x;
		for(i=1;i<=b1 && i<=b2 && i<=b3;i++)
		{
			if(b1%i==0 && b2%i==0 && b3%i==0)
			{
				gcd=i;
			}
		}
		b1=b1/gcd;
		b2=b2/gcd;
		b3=b3/gcd;
	}
	cout<<b1<<b2<<b3;
}
