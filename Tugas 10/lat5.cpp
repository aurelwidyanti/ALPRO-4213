#include <iostream>
#include <string>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};

int main() {
    sepeda spd;
    sepeda* ptrSepeda = &spd;

    // Mengisi nilai dgn pointer
    ptrSepeda->merk = "Polygon Path E5 Lady";
    ptrSepeda->type = "Sepeda City";
    ptrSepeda->tahun = 2020;
    ptrSepeda->harga = "22.500.000";

    cout << "Merk: " << ptrSepeda->merk << endl;
    cout << "Type: " << ptrSepeda->type << endl;
    cout << "Tahun: " << ptrSepeda->tahun << endl;
    cout << "Harga: " << ptrSepeda->harga << endl;

    return 0;
}
