#include <iostream>
#include <string>

/*Saya Ellsya Nabella Nur'allifa 2009037 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman 
Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

using namespace std;

// untuk kelas induk pertama yaitu kelas human
class Human {
    protected:
        string NIK;
        string nama;
        string jenis_kelamin;
    
    public:
        Human(string nik, string nama, string jenis_kelamin) {
            this->NIK = nik;
            this->nama = nama;
            this->jenis_kelamin = jenis_kelamin;
        }
};

// untuk kelas Induk Kedua yaitu kelasSivitasAkademik
class SivitasAkademik : public Human { //turunan dari kelas human
    protected:
        string asal_universitas;
        string email_edu;
    
    public:
        SivitasAkademik(string nik, string nama, string jenis_kelamin, string universitas, string email) : Human(nik, nama, jenis_kelamin) {
            this->asal_universitas = universitas;
            this->email_edu = email;
        }
};

// untuk kelas Anak yaitu kelasMahasiswa
class Mahasiswa : public SivitasAkademik { //turunan dari kelas SivitasAkademik
    protected:
        string NIM;
        string fakultas;
        string prodi;
    
    public:
        Mahasiswa(string nim, string nik, string nama, string jenis_kelamin, string universitas, string email, string fakultas, string prodi) : SivitasAkademik(nik, nama, jenis_kelamin, universitas, email) {
            this->NIM = nim;
            this->fakultas = fakultas;
            this->prodi = prodi;
        }
        
        // method untuk menampilkan data mahasiswa
        void tampilkanData() {
            cout << "NIK\t: " << this->NIK << endl;
            cout << "NIM\t: " << this->NIM << endl;
            cout << "Nama\t: " << this->nama << endl;
            cout << "Jenis Kelamin\t: " << this->jenis_kelamin << endl;
            cout << "Fakultas\t: " << this->fakultas << endl;
            cout << "Program Studi\t: " << this->prodi << endl;
            cout << "Asal Universitas\t: " << this->asal_universitas << endl;
            cout << "Email Pendidikan\t: " << this->email_edu << endl;
        }
};

int main() {
    // membuat objek mahasiswa
    Mahasiswa mhs("2009037", "12361252461", "Ellsya Nabella", "Perempuan", "Universitas Pendidikan Indonesia", "ellsyanabella13@upi.edu", "FPMIPA", "Ilmu Komputer");
    
    // memanggil method untuk menampilkan data mahasiswa
    mhs.tampilkanData();
    
    return 0;
}
