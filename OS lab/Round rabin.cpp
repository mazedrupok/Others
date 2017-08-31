#include <bits/stdc++.h>
using namespace std;
struct node {
    int at; //arrival time
    int bt; //burst time
    int rt; //remaining time
    int p;  //process number
    bool operator < (const node &p) const {
        if (at == p.at) return p.bt < bt;
        else return p.at < at;
    } //small to large
};
node t[100]; int wt[100], tt[100];
void reset () {
    for (int i = 0; i < 100; i++) {
        wt[i] = 0; //waiting time
        tt[i] = 0; //turnaround time
    }
}
int main ()
{
    reset ();
    int n, time_q;
    cout << "Enter Process Number: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for Process Process Number %d :",i+1);
        scanf(" %d", &t[i].at);
        scanf(" %d", &t[i].bt);
        t[i].p = i+1;
        t[i].rt = t[i].bt;
    }
    sort (t, t+n);
    printf("Enter Time Quantum:\t");
    scanf("%d",&time_q);

    printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
    int cnt = 0, time = 0, flag = 0;
    for (int i = 0; cnt < n; i++) {
        if (i == n) {
            i = 0;
            if (flag == 0) time++;
        }
        if (time >= t[i].at && t[i].rt > 0) {
            cout << time << " " << t[i].p << endl;
            time += min (time_q, t[i].rt);
            t[i].rt -= min (time_q, t[i].rt);
            flag = 1;
            if (t[i].rt == 0) {
                wt[i] += (time-t[i].at-t[i].bt);
                tt[i] += (time-t[i].at);
                printf("P[%d]\t|\t%d\t|\t%d\n", t[i].p, tt[i], wt[i]);
                cnt++;
            }
        }
    }
    printf ("Total time needed to complete: %d\n", time);
    int turn_time = 0, wait_time = 0;
    for (int i = 0; i < n; i++) {
        turn_time += tt[i];
        wait_time += wt[i];
    }
    printf("Average Waiting Time: %f\n", wait_time*1.0/n);
    printf("Avg Turnaround Time: %f\n", turn_time*1.0/n);
    return 0;
}
