#include <iostream>
using namespace std;


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


