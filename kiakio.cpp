#include<bits/stdc++.h>
using namespace std;
long long nCr(int n, int r){
    if (r > n - r) r = n - r;
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1)/i;
    }
    return res;
}

int single_dig(int n){
    if(n<10) return n;
    else{
        int sum = 0;
        while(n>0){
            int dig = n%10;
            sum += dig*dig;
            n/=10;
        }
        return single_dig(sum);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, happy = 0; cin >> n;

        for(int i = 0; i < n; i++){
            int ele; cin >> ele;
            int res = single_dig(ele);
            if(res==1 || res==7) happy++;
        }
        if (happy >= 2){
            int ans = nCr(happy, 2);
        }
        if 
    }
}