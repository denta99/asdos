#include <iostream>
using namespace std;

struct barang{
    char nama[50];
    int harga;
}brg;

int main(){
    cout<<"Masukkan nama barang = ";
    cin>>brg.nama;
    cout<<"Masukkan harga barang = ";
    cin>>brg.harga;
    cout<<endl;
    cout<<"--------------------------";
    cout<<"nama barang : "<<brg.nama<<endl;
    cout<<"harga barang : "<<brg.harga<<endl;
    cin.get();
}