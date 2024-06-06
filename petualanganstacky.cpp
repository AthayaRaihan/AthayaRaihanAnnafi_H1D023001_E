#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cout << "masukan n : ";
    cin >> n;

    stack<int>BilanganGanjil;

   int i = 1;
   while(BilanganGanjil.size()<n){
    if(i%2 == 1 ){
        BilanganGanjil.push(i);
    }
    i++;
   }

    cout << "Bilangan ganjil yang ada di stack : ";
    while(!BilanganGanjil.empty()){
        cout << BilanganGanjil.top() << " ";
        BilanganGanjil.pop();
    }
    cout << endl;

    return 0;
}