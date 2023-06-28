#include <iostream>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};
struct sepeda spd;

int main(){
    spd.merk = "Polygon Path E5 Lady";
    spd.type = "Sepeda City";
    spd.harga = "22.500.000";
    spd.tahun = 20120;

    cout << "Merk : " << spd.merk << endl;
    cout << "Type : " << spd.type << endl;
    cout << "Tahun : " << spd.tahun << endl;
    cout << "Harga : " << spd.harga << endl;

    return 0;
}
