#include <iostream>
using namespace std;
/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array.
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements
after it.
Example 1:
Input:
n = 1
A[] = {1}
Output: 1
Explanation: Since its the only
element hence its the only equilibrium
point.
Example 2:
Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case
equilibrium point is at position 3
as elements before it (1+3) =
elements after it (2+2).

Your Task:The task is to complete the function equilibriumPoint() which takes the array and n as input
parameters and returns the point of equilibrium. Return -1 if no such point exists.

Expected Time Complexity: O(n) Expected Auxiliary Space: O(1)
Constraints:1 <= n <= 1061 <= A[i] <= 108

*/


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


