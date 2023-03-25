#include<iostream>
using namespace std;

bool isEven(int x){
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x,int f){
    return x % f == 0;
}

int maxArray(int arr[],int n){
    int result = arr[0];
    for(int i = 0; i < n; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[],int n){
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int maxx(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}

int minn(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int sumEven(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void swapp(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai a : " << a << "\nNilai b : " << b << endl;
}

bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}

int main(){

    int n;
    //isEven
    cout << "Masukan angka (genap) : ";
    cin >> n;
    string even = (isEven(n)==1) ? " termasuk angka genap." : " tidak termasuk angka genap.";
    cout << n << even << endl;

    //isOdd
    cout << "\nMasukan angka (ganjil) : ";
    cin >> n;
    string odd = (isOdd(n)==1) ? " termasuk angka ganjil." : " tidak termasuk angka ganjil.";
    cout << n << odd << endl;

    //isFactor
    int x,f;
    cout << "\nMasukan nilai x : ";
    cin >> x;
    cout << "Masukan nilai f : ";
    cin >> f;
    string faktor = (isFactor(x,f)==1) ? " termasuk faktor." : " tidak termasuk faktor.";
    cout << x << " dan " << f << faktor << endl;

    //Max Min Array
    cout << "\nMasukkan jumlah elemen array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen array : ";
        cin >> arr[i];
    }
    int maxArr = maxArray(arr,n);
    int minArr = minArray(arr,n);
    cout << "Nilai terbesar dari array : " << maxArr << endl;
    cout << "Nilai terkecil dari array : " << minArr << endl;

    //Max Min (a,b)
    int a,b;
    cout << "\nMasukan nilai a : ";
    cin >> a;
    cout << "Masukan nilai b : ";
    cin >> b;
    cout << "Nilai terbesar : " << maxx(a,b) << endl;
    cout << "Nilai terkecil : " << minn(a,b) << endl;

    //Sum Even Odd
    cout << "\nMasukkan jumlah elemen array : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen array : "; cin >> arr[i];
    }
    int sumGenap = sumEven(arr,n);
    int sumGanjil = sumOdd(arr,n);
    cout << "Jumlah nilai genap : " << sumGenap << endl;
    cout << "Jumlah nilai ganjil : " << sumGanjil << endl;

    //Swap
    cout << "\nMasukan nilai a : ";
    cin >> a;
    cout << "Masukan nilai b : ";
    cin >> b;
    swapp(a,b);

    //isFound
    cout << "\nMasukkan jumlah elemen array : ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka : ";
        cin >> ar[i];
    }
    cout << "Masukkan angka yang ingin dicari : ";
    cin >> x;
    string cari = (isFound(ar,x,n)==1) ? "Angka ditemukan." : "Angka tidak ditemukan.";
    cout << cari << endl;

return 0;
}
