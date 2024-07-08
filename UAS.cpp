#include <iostream>
using namespace std;

class MasukUniversitas {
private:  // isi access modifier disini
    int uangPendaftaran;
    // isi daftar variable yang dibutuhkan di bawah ini
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    }

    virtual void namaJalurMasuk() { return; }
    // isi disini dengan fungsi virtual yang dibutuhkan
    virtual void hitungTotalBiaya() { return; }
    virtual void tampilanTotalBiaya() { return; }
    virtual void input() { return; }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    
    // isi setter dan getter variable yang dibutuhkan di bawah ini
    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama() {
        return uangSemesterPertama;
    }
    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getUangBangunan() {
        return uangBangunan;
    }
    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }
    float getTotalBiaya() {
        return totalBiaya;
    }
};

class SNBT : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

    void input () {
    cout << "Masukkan uang pendaftaran : ";
    cin >> uangPendaftaran;
    cout << "Masukkan uang semester pertama : ";
    cin >> uangSemesterPertama;
    cout << "Masukkan uang Bangunan : ";
    cin >> uangBangunan;
    }
    
    void hitungTotalBiaya () {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }

    void kategori () {
        if (totalBiaya < 1000000) {
            cout << "Kategori : Murah";
        } 
        else if (totalBiaya < 2000000) {
            cout << "Kategori : Sedang";
        }
        else {totalBiaya > 2000000;
            cout << "Kategori : Mahal";
        }
    }

    void rekomedasi () {
        if (totalBiaya < 1000000) {
            cout << "Rekomendasi : Direkomendasikan";
        } 
        else if (totalBiaya < 2000000) {
            cout << "Rekomendasi : Dipertimbangkan";
        }
        else {totalBiaya > 2000000;
            cout << "Rekomendasi : Tidak Direkomendasikan";
        }
    }

    void tampilanTotalBiaya () {
    cout << "Total biaya : " << totalBiaya << endl;
    cout << "Kategori : " << kategori << endl;
    cout << "Rekomendasi : " << rekomedasi << endl;
    }

    
};

class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

    void input() {
    cout << "Masukkan uang pendaftaran : ";
    cin >> uangPendaftaran;
    cout << "Masukkan uang semester pertama : ";
    cin >> uangSemesterPertama;
    }

    void hitungTotalBiaya () {
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }

    void kategori() {
        if (totalBiaya < 1000000) {
            cout << "Kategori : Murah";
        } 
        else if (totalBiaya < 2000000) {
            cout << "Kategori : Sedang";
        }
        else {totalBiaya > 2000000;
            cout << "Kategori : Mahal";
        }
    }

    void rekomedasi () {
        if (totalBiaya < 1000000) {
            cout << "Rekomendasi : Direkomendasikan";
        } 
        else if (totalBiaya < 2000000) {
            cout << "Rekomendasi : Dipertimbangkan";
        }
        else {totalBiaya > 2000000;
            cout << "Rekomendasi : Tidak Direkomendasikan";
        }
    }

    void tampilanTotalBiaya () {
    cout << "Total biaya : " << totalBiaya << endl;
    cout << "Kategori : " << kategori << endl;
    cout << "Rekomendasi : " << rekomedasi << endl;
    }
    
    
};

int main() {
    // isi disini untuk fungsi main
    
    int pilihan;

    do
    {
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih :" << endl;
        cin >> pilihan;

        switch(pilihan)
        {
            case 1 :
                SNBT();
                SNBT.input();
                SNBT.hitungTotalBiaya();
                break;
            case 2 :
                SNBP;
                SNBP.input();
                SNBP.hitungTotalBiaya();
                break;
            case 3 :
                break;
            default :
                cout << "PIlihan tidak ada" << endl;
                break;
        }

    } 
    while (pilihan != 3);
    system ("pause");
    system ("cls");
}   
