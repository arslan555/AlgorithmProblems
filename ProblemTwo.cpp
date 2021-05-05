#include <iostream>
using namespace std;

int equilibriumPoint(int Array[], int n){

int midOfArray = n/2;
int current = midOfArray;

if(n== 1) {
    return Array[0];
}

while(current< n && current >=0){
    cout<<"\n Curret pointer at : "<<current<<"\n";
 int sumPrevious = 0;
 int sumNext = 0;
 int i = 0;
    while( i < current){
        if(i+1 == current){
            sumPrevious += Array[i];
            cout<<"sumPrevious : "<<sumPrevious<<"\n";
            break;
        }
        sumPrevious = sumPrevious + Array[i] + Array[i+1];
        cout<<"sumPrevious : "<<sumPrevious<<"\n";
        i = i+2;
    }
    i= current+1;
    while(i < n ){
        if(i+1 == n){
            sumNext += Array[i];
             cout<<"sumNext : "<<sumNext<<"\n";
            break;
        }

        sumNext += Array[i];
        sumNext += Array[i+1];
                 cout<<"sumNext : "<<sumNext<<"\n";
        i = i+2;
    }
    cout<<"sumPrevious : "<<sumPrevious<<"    VS    "<<"sumNext : "<<sumNext<<"\n";
    if(sumPrevious == sumNext){

        return current;
    }else if(sumPrevious > sumNext){
      current--;
    }else{
        current++;
    }

}

}


