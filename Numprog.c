// Program to solve every kind of number
#include <stdio.h>
#include <math.h>
#include <string.h>
int fibonacci(int a)
{
    int c=-1,d=1,e,s=0;
   int ar[a+1];
   ar[0]=0;
   ar[1]=1;
   for(int i=0;i<=a;i++)
   {
       e=c+d;
       printf("%d\t",e);
       s+=e;
       c=d;
       d=e;
   }
   for(int i=2;i<=a;++i)
   {
       ar[i]=ar[i-2]+ar[i-1];
   }
    printf("\nSum of fibonacci series =%d",s);
    return ar[a];
}
int palindrome(int a)
{
    int r=0;
    while(a!=0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    return r;
}
int armstrong(int a)
{
    int r,c=0,s=0,temp=a;
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    while(temp!=0)
    {
        r= temp%10;
        s+= pow(r,c);
        temp = temp/10;
    }
    return s;
}
int automorphic(int a)
{
    int temp=a,sq;
    sq=a*a;
    while(temp!=0)
    {
        if((temp%10)!=(sq%10))
        { 
            return 0;
            
        }
        temp=temp/10;
        sq= sq/10;
    }
    return 1;
}
int buzz(int a)
{
if (a%7==0||a%10==7)
return 1;
else 
return 0;
}
int duck(int a)
{
    int t=a;
    while(t>0)
    {
        if(t%10==0&&t>0)
      {  return 1;
          break;
      }
      else 
        t=t/10;
    }
}
int neon(int a)
{
    int r,s=0,sq;
    sq=a*a;
    while(sq>0)
    {
    r= sq%10;
    s= s+r;
    sq= sq/10;
    }
    return s;
}
int niven(int a)
{
    int r,s=0,temp=a;
    while(temp!=0)
    {
        r=temp%10;
        s+=r;
        temp=temp/10;
    }
    return(a%s==0);
}
int perfect(int a)
{
    int temp=a,s=0;
    for(int i=1;i<temp;i++)
    {
        if(temp%i==0)
        s+=i;
    }
    return (s==a);
}
long double factorial(int a)
{
    long double r=1.0;int temp=a;
    for(int i=1;i<=temp;i++)
    {
        r*=i;
    }
    return r;
}
int prime(int a)
{
    int temp=a;
    for(int i=2;i<temp;i++)
    {
        if(temp%i==0)
        return 0;
    }
    return 1;
}
int factors(int a)
{
    int temp=a;
    printf("Factors of %d is =\n",temp);
    for(int i=1;i<=temp;i++)
    {
        if(temp%i==0)
    printf("%d\n",i);
    }
}
int reverse(int a)
{
    int temp=a,r=0;
    while(temp!=0)
    {
        r=r*10+temp%10;
        temp=temp/10;
    }
    return r;
}
int spy(int a)
{
    int temp=a,sum=0,product=1,r;
    while(temp!=0)
    {
        r= temp%10;
        product*=r;
        sum+=r;
        temp=temp/10;
    }
    return (product==sum);
}
int magic(int a)
{
    int temp=a,r,s=a;
    while(s>9)
   {s=0;
    while(temp>0)
    {
        r= temp%10;
        s+=r;
        temp=temp/10;
    }
   temp=s;
   }
    return s;
}
int special(int a)
{
    int temp=a,r,s=0,p=1,sum;
    while(temp!=0)
    {
        r=temp%10;
        s+=r;
        p*=r;
        temp=temp/10;
    }
    sum= s+p;
    return (sum==a);
}
int disarium(int a)
{
    int temp=a,t=a,r,s=0,c=0;
    while(t!=0)
    {
        t=t/10;
        c++;
    }
    while(temp!=0)
    {
        for(int i=c;i>0;i--)
        {
            r= temp%10;
            s+= pow(r,i);
            temp=temp/10;
        }
    }
    return s;
}
int tech(int a)
{
int temp=a,t=a,r,c=0,s=0,den=10;
while(t>0)
{
     t=t/10;
     c++;
}
if(c>2)
{
    den*=den;
}
while(temp!=0)
{
    r=temp%den;
    s+=r;
    temp=temp/den;
}
s=s*s;
if(c%2==0 && s==a)
return 1;
else
return 0;
}
int twistedprime(int a)
{
    int temp=a,t=a,f,r=0,c=0,d=0;
    while(temp!=0)
    {
        f=temp%10;
        r=r*10+f;
        temp= temp/10;
    }
    for(int i=1;i<=t;i++)
    {
        if(t%i==0)
        c++;
    }
    for(int i=1;i<=r;i++)
    {
        if(r%i==0)
        d++;
    }
    if(c==2 && d==2)
    return 1;
    else
    return 0;
}
int floydtriangle(int a)
{
    char symbol;
    printf("Enter the symbol of your choice:");
    scanf(" %c",&symbol);
    int rows=a,space;
    for(int i=0;i<=rows;i++)
    {
        for(space=0;space<rows-i;space++)
        {
            printf("");
        }
        for(int j=0;j<2*i-1;j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}
int happy(int a)
{
    int temp=a,r,s=a;
    while(s>9)
    { s=0;
        while(temp!=0)
        {
            r=temp%10;
            s+=pow(r,2);
            temp=temp/10;
        }
        temp=s;
    }
    return s;
}
int pronic(int a)
{
    int temp=a;
    for(int i=0;i<a;i++)
    {
        if(i*(i+1)==a)
        return 1;
    }
    return 0;
}
int gcd(int a,int b )
{
    int t1=a,t2=b,r;
    while(t2>0)
    {
        r=t1%t2;
        t1=t2;
        t2=r;
    }
    return t1;
}
int lcm(int a,int b)
{
    int l= (a*b)/(gcd(a,b));
    return l;
}
int coprime(int a,int b)
{
    if(gcd(a,b)==1)
    return 1;
    else
    return 0;
}
int twinprime(int a)
{
    int temp=a,c=0;
    for(int i=1;i<temp;i++)
    {
        if(temp%i==0 && (temp+2)%i==0)
        c++;
    }
    if(c==1)
    return 1;
    else
    return 0;
}
int diamond(int a) 
{
    int rows=a;
    for(int i=1;i<=rows;i++)
    {
        for(int s=1;s<=rows-i;s++)
        {
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
        for(int i=(rows-1);i>=1;i--)
    {
        for(int s=1;s<=rows-i;s++)
        {
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int ugly(int a)
{
    int temp=a,i=2;
    while(temp%2==0)
    {
        temp=temp/2;
    }
    while(temp%3==0)
    {
        temp=temp/3;
    }
    while(temp%5==0)
    {
        temp=temp/5;
    }
    return (temp==1);
}
int circularprime(int a)
{
    int temp=a,r,den=10,t=a,c=0,cp=0;
    while(t!=0)
    {
        t=t/10;
        c++;
    }
    if(c>2)
    {
        for(int i=2;i<c;i++)
        {
            den=den*10;
        }
    }
    printf("All possible permutations of %d are:\n",a);
    do
    {
        r=temp%10;
        temp=temp/10;
        cp=r*den+temp;
        printf("%d\n",cp);
        if(prime(cp)==0)
        {
            return 0;
        }
        temp=cp;
    }
    while(cp!=a);
     return 1;
}
int unique(int a)
{
    int temp=a,t=a,r,c=0;
    while(t!=0)
    {
        r=t%10;
        t=t/10;
        temp=t;
        while(temp!=0)
        {
            if(temp%10==r)
            {
                c++;
                break;
            }
            temp=temp/10;
        }
    }
    if(c==0)
    return 1;
    else
    return 0;
}
int primetilln(int n)
{
    int temp=n;
    for(int i=2;i<=sqrt(temp);i++)
    {
        if(temp%i==0)
        return 0;
    }
    return 1;
}
int heart(int a)
{
    int row=a;
    for(int i=1;i<row;i++)
    {
        for(int s=1;s<=row-i;s++)
        {
            printf("  ");
        }
        for(int j=1;j<2*i-1;j++)
        {
            printf("* ");
        }
        for(int d=1;d<=row-i;d++)
        {
            printf("    ");
        }
        for(int t=1;t<2*i-1;t++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=row+3;i>=1;i--)
    {
        for(int s=1;s<=row+3-i;s++)
        {
            printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
int main() {
    int a; char ch[50];
    printf("Input the name of the number you want to check or print a pattern or find anything about a number:\n");
    scanf("%[^\n]s",&ch);
    printf("Input 5 for heart pattern else any number for others\n");
    printf("Input the number:\n");
    scanf("%d",&a);
    if(a==0)
    {
        printf("Null Value");
    }
    else if(a<0)
    {
        printf("Negative Value");
    }
    else if(strcmp(ch,"palindrome")==0)
    {
        int rev= palindrome(a);
        if(rev==a)
        printf("%d Is Palindrome",a);
        else
        printf("%d Is Not Palindrome",a);
    }
    else if(strcmp(ch,"fibonacci")==0)
   { int r= fibonacci(a);
    printf("\nTerm at %dth position is=%d",a,r);
   }
   else if(strcmp(ch,"armstrong")==0)
   {
       int n= armstrong(a);
       if(n==a)
       printf("%d Is Armstrong",a);
       else 
       printf("%d Is Not Armstrong",a);
   }
   else if(strcmp(ch,"automorphic")==0)
   {
       if(automorphic(a))
       printf("%d Is Automorphic",a);
       else
       printf("%d Is Not Automorphic",a);
   }
   else if(strcmp(ch,"buzz")==0)
   {
       int r= buzz(a);
       if(r==1)
       printf("%d Is Buzz",a);
       else
       printf("%d Is Not Buzz",a);
   }
   else if(strcmp(ch,"duck")==0)
   {
       int s= duck(a);
       if(s==1)
       printf("%d Is Duck",a);
       else
       printf("%d Is Not Duck",a);
   }
   else if(strcmp(ch,"neon")==0)
   {
       int n= neon(a);
       if(n==a)
       printf("%d Is Neon",a);
       else
       printf("%d Is Not Neon",a);
   }
   else if(strcmp(ch,"niven")==0)
   {
       if(niven(a))
       printf("%d Is Niven",a);
       else
       printf("%d Is Not Niven",a);
   }
   else if(strcmp(ch,"perfect")==0)
   {
       if(perfect(a))
       printf("%d Is Perfect",a);
       else
       printf("%d Is Not Perfect",a);
   }
   else if(strcmp(ch,"factorial")==0)
   {
       if(a<0)
       printf ("Error");
       else
       {
    long double f= factorial(a);
    printf("Factorial of %d=%Lf",a,f);
       }
   }
   else if(strcmp(ch,"prime")==0)
   {
    int s= prime(a);
    if(s==1)
    printf("%d Is Prime",a);
    else
    printf("%d Is Not Prime",a);
   }
   else if(strcmp(ch,"factors")==0)
   {
       int s= factors(a);
   }
   else if(strcmp(ch,"reverse")==0)
   {
       int s= reverse(a);
       printf("Reverse of %d is = %d",a,s);
   }
   else if(strcmp(ch,"spy")==0)
   {
       if(spy(a))
       printf("%d Is Spy",a);
       else
       printf("%d Is Not Spy",a);
   }
   else if(strcmp(ch,"magic")==0)
   {
    int m= magic(a);
    if(m==1)
    printf("%d Is Magic",a);
    else
    printf("%d Is Not Magic",a);
   }
   else if(strcmp(ch,"special")==0)
   {
        if(special(a))
    printf("%d Is Special",a);
    else
    printf("%d Is Not Special",a);
   }
   else if(strcmp(ch,"disarium")==0)
   {
       int d= disarium(a);
       if(d==a)
       printf("%d Is Disarium",a);
       else
       printf("%d Is Not Disarium",a);
   }
   else if(strcmp(ch,"tech")==0)
   {
       int d= tech(a);
       if(d==1)
       printf("%d Is Tech",a);
       else
       printf("%d Is Not Tech",a);
   }
   else if(strcmp(ch,"twisted prime")==0)
   {
       int tp= twistedprime(a);
       if(tp==1)
       printf("%d Is Twisted Prime",a);
       else
       printf("%d Is Not Twisted Prime",a);
   }
   else if(strcmp(ch,"floyd triangle")==0)
   {
       floydtriangle(a);
   }
   else if(strcmp(ch,"happy")==0)
   {
       if(happy(a)==1)
       printf("%d Is Happy",a);
       else
       printf("%d Is Not Happy",a);
   }
   else if(strcmp(ch,"pronic")==0)
   {
       if(pronic(a)==1)
       printf("%d Is Pronic",a);
       else
       printf("%d Is Not Pronic",a);
   }
   else if(strcmp(ch,"gcd")==0)
   {
       int b;
       printf("Input the second number:\n");
       scanf("%d",&b);
       int g=gcd(a,b);
       printf("GCD of %d and %d is= %d",a,b,g);
   }
   else if(strcmp(ch,"lcm")==0)
   {
       int b;
       printf("Input the second number:\n");
       scanf("%d",&b);
       int lc=lcm(a,b);
       printf("LCM of %d and %d is= %d",a,b,lc);
   }
   else if(strcmp(ch,"coprime")==0)
   {
       int b;
       printf("Input the second number:\n");
       scanf("%d",&b);
       if(coprime(a,b)==1)
       printf("%d and %d Is Coprime",a,b);
       else
       printf("%d and %d Is Not Coprime");
   }
   else if(strcmp(ch,"twin prime")==0)
   {
       int b=a+2;
       if(twinprime(a)==1)
       printf("%d and %d Is Twin Prime",a,b);
       else
       printf("%d and %d Is Not Twin Prime",a,b);
   }
   else if(strcmp(ch,"diamond")==0)
   {
       diamond(a);
   }
   else if(strcmp(ch,"ugly")==0)
   {
       if(ugly(a))
       printf("%d Is Ugly",a);
       else
       printf("%d Is Not Ugly",a);
   }
   else if(strcmp(ch,"circular prime")==0)
   {
       if(circularprime(a)==1)
       printf("%d Is Circular Prime",a);
       else
       printf("%d Is Not Circular Prime",a);
   }
   else if(strcmp(ch,"unique")==0)
   {
       if(unique(a)==1)
       printf("%d Is Unique",a);
       else
       printf("%d Is Not Unique",a);
   }
   else if(strcmp(ch,"prime till input number")==0)
   {
       printf("Prime Number till %d are:\n",a);
       for(int i=1;i<=a;i++)
       {
           if(primetilln(i))
           printf("%d\n",i);
       }
   }
   else if(strcmp(ch,"heart")==0)
   {
       heart(a);
   }
   else
   printf("Wrong Input");
   return 0;
}
