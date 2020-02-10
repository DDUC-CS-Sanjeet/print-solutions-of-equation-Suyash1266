#include <iostream>
using namespace std;
int sum(int a[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += a[i];
  return sum;
}
void print(int a[], int n,int c)
{
  for (int i = 0; i < n; i++)
    cout<<" + "<<a[i];
  cout<<" = "<<c<<"\n";
}
void print_sol(int a[],int n,int c,int index)
{
  for(int i=0;i<=c;i++)
  {
    a[index]=i;
    if(index<n-1)
      print_sol(a,n,c,index+1);
    else
      if(sum(a,n)==c)
        print(a,n,c);
  }
}
int main()
{
  int n, c;
  cout<<"\nThis program finds solutions of x1+x2+x3....xn=c\nEnter the value of n : ";
  cin>>n;
  cout<<"\nEnter the sum(c) : ";
  cin>>c;
  int a[n];
  for(int i = 0; i < n; i++)
    a[i] = 0;
  cout<<"The solutions are : \n";
  print_sol(a, n, c, 0);
  return 0;
}