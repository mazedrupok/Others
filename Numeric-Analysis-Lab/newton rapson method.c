#include <stdio.h>
#include <math.h>
double f(double x)
{
    double y=x*x*x-2*x-5;
    return y;
}
int main()
{
  double a,b,x1,y1,y2, x2;
  scanf("%lf%lf",&a,&b);
       for(;;) {
           x2 = x1;
          //x1=(a*f(b)-b*f(a))/(f(b)-f(a)); //false position method
          x1 = x2 - (x2*x2*x2-2*x2-5) / (3*x*x-2); //Newton Rapson method
        // x1=(a+b)/2;
        x1=x2- ( (x2*x2*x2-2*x2-5)/(3*x2*x2-2));
          printf("a=%10lf\t b=%10lf\t x1=%10lf\t y=%10lf\n",a,b,x1,f(x1));
          if((f(x1))<0)
          {
              a=x1;
          }
          else
          {
              b=x1;
          }
//          if (abs (b-a) <= 0.001) { //bisection method..
//            break;
//          }
          if(fabs(x1-x2)<=0.0001) //false position or Newton rapson method..
            break;
      }
      printf("Final root of the equation is: %lf\n",x1);
  }

