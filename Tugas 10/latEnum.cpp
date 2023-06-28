#include <iostream>

using namespace std;

// Enum untuk status cuaca
enum class Cuaca {
    Cerah,
    Berawan,
    Hujan,
    Badai
};

// Enum untuk gear kendaraan
enum class Gear {
    Neutral,
    First,
    Second,
    Third,
    Fourth,
    Fifth
};

// Enum untuk nilai
enum class Nilai {
    A,
    B,
    C,
    D,
    E
};

int main() {
    // Contoh penggunaan enum cuaca
    Cuaca cuacaHariIni = Cuaca::Cerah;
    if (cuacaHariIni == Cuaca::Cerah) {
        cout << "Cuaca hari ini cerah." << endl;
    } else if (cuacaHariIni == Cuaca::Hujan) {
        cout << "Hari ini hujan." << endl;
    }

    // Contoh penggunaan enum gear 
    Gear currentGear = Gear::Neutral;
    if (currentGear == Gear::Neutral) {
        cout << "Kendaraan sedang di gigi netral." << endl;
    } else if (currentGear == Gear::First) {
        cout << "Kendaraan sedang di gigi pertama." << endl;
    } 

    // Contoh penggunaan enum nilai
    Nilai hasilTest = Nilai::B;
    if (hasilTest == Nilai::A) {
        cout << "Anda mendapatkan nilai A." << endl;
    } else if (hasilTest == Nilai::C) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else {
        cout << "Tidak valid" << endl;
    }

    return 0;
}
