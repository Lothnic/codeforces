#include<iostream>
using namespace std;

int main(){
    int n,s;
    int c = 0;
    cin >> n >> s;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int x = arr[s-1];
    for(int i = 0;i<n;i++){
        if(arr[i]>=x && arr[i]>0) c++;
    }
    cout << c;
    return 0;
}