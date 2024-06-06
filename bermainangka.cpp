#include <iostream>
#include <algorithm>
using namespace std;

//fungsi untuk memeriksa apakah bi
bool isPrime(int num){
    if(num<=1)return false;
    for(int i=1; i*i<=num;i++){
        if(num%i == 0)return false;
    }
    return true;
}

//fungsi untuk mecari nilai diarray menggunakan linear search
int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i == x])return i;
    }
    return -1;
}

int main(){
    int n,m;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    //input array A
    for(int i=0;i<n;i++){
        cin>>array_A[i];
    }

    
    //input array B
    for(int i=0;i<m;i++){
        cin>>array_B[i];
    }

    int result[n+m];//menggunakan array untuk hasil
    int result_count=0;//counter untuk hasil

    //cari nilai yang memenuhi syarat
    for (int i = 0; i < n; i++){
        if(isPrime(i)){
            
        }
    }
    //cari nilai di array b
    for(int i = 0; i<n; i++){
        if(i%2 == 1){
            result[result_count++]=array_B[i];
        }
    }

    //urutkan hasil pencarian
    sort(result,result+result_count);

    //cetak hasil pencarian
    if(result_count==0){
        cout<<"TIDAK ADA"<<endl;
    }else{
        cout <<endl;
    }
    
    return 0;
}