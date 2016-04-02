#include <iostream>
#include <windows.h>
#include <math.h>
#include <cstdio>
using namespace std;
class matrix
{
      int a[10][10],n;
public:
      matrix();
      void seeMat();
      void detmnt();
};

main()
{
   matrix m;
   m.seeMat();
   m.detmnt();
}

matrix::matrix() {
   int i,j;
   cout<<"Enter order f matrix : ";cin>>n;
   cout<<"Enter the elements \n";
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
         cin>>a[i][j];
}

void matrix::seeMat() {
   int i,j;
   cout<<"The Matrix is\n";
   for(i=0;i<n;i++) {
      for(j=0;j<n;j++) cout<<a[i][j]<<" ";
      cout<<"\n";
   }
}

void matrix::detmnt() {
     int det(int b[10][10],int m);
     cout<<"det is "<<det(a,n) << endl;
}

int det(int b[10][10],int m) {
   int sum=0,x=0,y=0,i=0,j,aa,bb,c[10][10];
   if(m==2)
      return(b[0][0]*b[1][1]-b[0][1]*b[1][0]);
   else{
      for(j=0;j<m;j++) {
         for(aa=0,y=0;aa<m;aa++) {
            if(y>0)x++;
            y=0;
         }
         sum=sum+b[i][j]*pow(-1,i+j)*det(c,m-1);
      }
   }
   return sum;
}

