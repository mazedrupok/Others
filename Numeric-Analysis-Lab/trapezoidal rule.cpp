
#include <bits//stdc++.h>
using namespace std;
int main()
{
    int n;
    float h, ans = 0.0, sans = 0.0;
    float a[10], b[10];
    cout <<"Enter total number: "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    h = 0.01;
    cout << "Initial value of x\n" << a[0] <<endl;
    cout << "Final value of x\n" << a[n-1] <<endl;
    cout << "Segment width\n" << h <<endl;
    for(int i=1; i<n-1; i++){
        sans+=b[i];
    }
    ans = (h/2)*(b[0] +2*sans + b[n-1]);
    cout <<ans <<endl;

}
