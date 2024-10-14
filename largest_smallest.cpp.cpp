#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, count = 0;
    int largest, smallest;
    cout << "Type positive numbers [-1 to finish]" << endl;
    while (n != -1){
        cin >> n;
        if(count == 0){
            smallest = n;
            largest = n;
            count++;
            continue;
        }

        if (n == -1){
            break;
        } 
        if (n < smallest){
            smallest = n;
        }
        if (n > largest){
            largest = n;
        }
    }
    cout << "The largest value is: " << largest << endl;
    cout << "The smallest value is: " << smallest << endl;
    return 0;
}