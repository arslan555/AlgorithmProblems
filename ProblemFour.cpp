#include <iostream>
using namespace std;


int maxMeetings(int Start[], int End[],int N){
    int totalMeetings = 0;
    int lastMeetingTime = 0;
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
        if(Start[i]<= lastMeetingTime){
            if(End[i]<=lastMeetingTime){
                  lastMeetingTime = End[i];
            }
            continue;
        }
        lastMeetingTime = End[i];
        totalMeetings++;
    }
    return totalMeetings;
}


