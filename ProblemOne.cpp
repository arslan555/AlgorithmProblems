#include <iostream>
using namespace std;

/*
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day. 
Note: Duration of the activity includes both starting and ending day.
Example 1:
Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}
Output:
1
Explanation:
A person can perform only one of the
given activities.
Example 2:
Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
Output:
3
Explanation:
A person can perform activities 1, 3
and 4.
Your Task :You don't need to read input or print anything.
Your task is to complete the function activityselection() which takes array start[ ], array end[ ] and integer N
as input parameters and returns the maximum number of activities that can be done.

Expected Time Complexity : O(N * Log(N)) Expected Auxilliary Space : O(N)
Constraints: 1 ≤ N ≤ 2*1051 ≤ start[i] ≤ end[i] ≤ 109

*/

int activitySelection(int Start[], int End[],int N){
    int totalActivities = 0;
    int lastWorkingDay = 0;
    int temp=0;
    for(int i=0;i<N;i++){   // Sort Start and end arrays in case of unsorted arrays
        for(int j=i+1;j<N;j++){
            if(Start[i]>Start[j]){
                temp=Start[i];
                Start[i]=Start[j];
                Start[j]=temp;
                temp=End[i];
                End[i]=End[j];
                End[j]=temp;
            }
        }
    }
    for(int i = 0; i<N; i++){
        if(Start[i]<= lastWorkingDay){
            continue;
        }
        lastWorkingDay = End[i];
        totalActivities++;
    }
    return totalActivities;
}


