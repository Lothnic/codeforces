#include<iostream>
using namespace std;

void qToAteempt(int n){
    int qcount = 0;
    for(int i=0;i<n;i++){
        int arr[n];
        int count = 0;
        for(int j=0;j<3;j++){
            cin >> arr[j];
            if(arr[j] == 1){
                count +=1;
            }
        }
        if(count >= 2){
            qcount += 1;
        }
    }
    cout << qcount << endl;
}

int main(){
    int n;
    cin >> n;
    qToAteempt(n);
    return 0;
}
