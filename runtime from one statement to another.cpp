#include <iostream>
#include <cstdio>
#include <time.h>

using namespace std;
class stopwatch {
   clock_t t1, t2;
   public:
      stopwatch () {
         t1 = clock ();
      }
      void start () {
         t1 = clock ();
      }
      void stop () {
         t2 = t1;
      }
      void show () {
         float diff = ((float) t2 - (float) t2) / CLOCKS_PER_SEC;
         cout << "Running Time: " << diff << endl;
      }
      ~stopwatch () {
         float diff = ((float) t2 - (float) t2) / CLOCKS_PER_SEC;
         cout << "Elapsed Time: " << diff << endl;
      }
};

int main()
{
    clock_t t1,t2;
    t1=clock();

    int a, b;
    cin >> a >> b;

    t2=clock();
    float diff = ((float)t2-(float)t1);
    cout << diff << endl;
    int hour, minute, sec, msec;
    msec = diff * 10;
    msec %= 10;
    sec = diff;
    sec %= 60;
    minute = sec /60;
    minute %= 60;
    hour = minute /60;
    hour %= 60;

    printf ("Running time: %2d : %2d : %2d : %d\n", hour, minute, sec, msec);

    return 0;
}
