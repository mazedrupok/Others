#include <bits//stdc++.h>
using namespace std;
int main()
{
    int n;
    float h, ans = 0.0, sa = 0.0, sb = 0.0;
    float a[10], b[10];
    cout <<"Enter total number: "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    h = 0.2;
    cout << "Initial value of x\n" << a[0] <<endl;
    cout << "Final value of x\n" << a[n-1] <<endl;
    cout << "Segment width\n" << h <<endl;
    for(int i=1; i<n-1; i+=2){
        sa+=b[i];
    }
    for(int i=2; i<n-1; i+=2){
        sb+=b[i];
    }
    ans = (h/3)*(b[0] + 4*sa + 2*sb + b[n-1]);
    cout <<ans <<endl;

}
/*
7
4  1.3863
4.2 1.4351
4.4 1.4816
4.6 1.5260
4.8 1.5686
5.0 1.6094
5.2 1.6486
*/
