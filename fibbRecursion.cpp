#include <iostream>
using namespace std;


int nFibb(int n){
    int a, b;

    if(n == 1){
        return 1;
    }elif(n == 0){
        return 0;
    }

    a = nFibb(n-1);
    b = nFibb(n-2);
    return a + b;
}


int main(){

    int n;
    cin >> n;

    cout << nFibb(n);
    return 0;

}