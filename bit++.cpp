#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int n;
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
    for(int i=0;i<n;i++){
        if(arr[i][0] == '+'){
            x++;
        }
        else if (arr[i][2]=='+')
        {
            x++;
        }
        
    }
    for(int i=0;i<n;i++){
        if(arr[i][0] == '-'){
            x--;
        }
        else if (arr[i][2]=='-')
        {
            x--;
        }
    }
    cout << x;
}