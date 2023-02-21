#Saya Ellsya Nabella Nur'allifa 2009037 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman 
#Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#untuk kelas induk pertama yaitu kelas Human
class Human:
    def __init__(self, nik, nama, jenis_kelamin): #deklarasi atribut
        self.NIK = nik
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin

#untuk kelas induk kedua yaitu kelas SivitasAkademik
class SivitasAkademik(Human):
    def __init__(self, nik, nama, jenis_kelamin, asal_universitas, email_edu): #deklarasi Atribut
        super().__init__(nik, nama, jenis_kelamin)
        self.asal_universitas = asal_universitas
        self.email_edu = email_edu
        
#untuk kelas anak yaitu kelas Mahasiswa
class Mahasiswa(SivitasAkademik):
    def __init__(self, nim, nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas, prodi): #deklarasi atribut
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.NIM = nim
        self.fakultas = fakultas
        self.prodi = prodi

#untuk membuat tampilan list datanya
    def tampilkan_data(self):
        print("NIK: ", self.NIK)
        print("NIM: ", self.NIM)
        print("Nama: ", self.nama)
        print("Jenis Kelamin: ", self.jenis_kelamin)
        print("Fakultas: ", self.fakultas)
        print("Program Studi: ", self.prodi)
        print("Asal Universitas: ", self.asal_universitas)
        print("Email Pendidikan: ", self.email_edu)

# contoh penggunaan isinya
mhs = Mahasiswa("2009037", "1234556789", "Ellsya Nabella", "Perempuan", "Universitas Pendidikan Indonesia", "ellsyanabella13@upi.edu", "FPMIPA", "Ilmu Komputer")
mhs.tampilkan_data() #tampilkan data




