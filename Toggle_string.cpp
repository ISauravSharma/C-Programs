// This program changes lower case alphabet to upper case alphabets and vice versa in a string.
#include<iostream.h>
#include<string.h>

int main()
{
   char a[100],b[100];                              /* a string holds the actual input and b is supposed to hold toggled string*/
   int d,i;
   cin>>a;
   d=strlen(a);
   for(i=0;i<d;i++)
   {
       if(a[i]>=97 && a[i]<=122)                    /*if letter is lower case then change to upper case*/
       {
           b[i]=a[i]-32;
       }
       if(a[i]<=90 && a[i]>=65)                     /*if letter is upper case then change to lower case*/
       {
           b[i]=a[i]+32;
       }
   }
   for(i=0;i<d;i++)
   {
       cout<<b[i];
   }
return(0);
}
