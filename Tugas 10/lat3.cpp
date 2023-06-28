#include <iostream>
#include <math.h>

using namespace std;

typedef struct hitung{
    float phi = 3.14;

    // Luas Persegi Panjang
    int lp(int p, int l){
        return p * l;
    }

    // Luas Lingkaran
    float ll(int r){
        return phi * r * r;
    }

    // Valume Kerucut
    float vk(int r, int t){
        return 0.3 * phi * pow(r,2) * t;
    }

    // Volume Bola
    double vb(int r){
        return 1.3 * phi * pow(r,3);
    }
}h;

h htng;

int main(){
    cout << "Luas persegi panjang : " << htng.lp(3,10) << endl;
    cout << "Luas lingkaran : " << htng.ll(5) << endl;
    cout << "Volume kerucut : " << htng.vk(6,8) << endl;
    cout << "Volume bola : " << htng.vb(10) << endl;

    return 0;
}
