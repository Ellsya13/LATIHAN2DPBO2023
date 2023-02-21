<?php

/*Saya Ellsya Nabella Nur'allifa 2009037 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman 
Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

//untuk kelas induk pertama yaitu kelas Human
class Human {
    //deklarasi atribut
    protected $NIK;
    protected $nama;
    protected $jenis_kelamin;

    public function __construct($nik, $nama, $jenis_kelamin) {
        $this->NIK = $nik;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }
}

//untuk kelas induk kedua yaitu kelas SivitasAkademik
class SivitasAkademik extends Human {
    //deklarasi atribut
    protected $asal_universitas;
    protected $email_edu;

    public function __construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu) {
        parent::__construct($nik, $nama, $jenis_kelamin);
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }
}

//untuk kelas anak yaitu kelas Mahasiswa
class Mahasiswa extends SivitasAkademik {
    //deklarasi atribut
    protected $NIM;
    protected $fakultas;
    protected $prodi;

    public function __construct($nim, $nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu, $fakultas, $prodi) {
        parent::__construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu);
        $this->NIM = $nim;
        $this->fakultas = $fakultas;
        $this->prodi = $prodi;
    }
//untuk menampilkan 
    public function tampilkan_data() {
        echo "NIK: " . $this->NIK . "<br>";
        echo "NIM: " . $this->NIM . "<br>";
        echo "Nama: " . $this->nama . "<br>";
        echo "Jenis Kelamin: " . $this->jenis_kelamin . "<br>";
        echo "Fakultas: " . $this->fakultas . "<br>";
        echo "Program Studi: " . $this->prodi . "<br>";
        echo "Asal Universitas: " . $this->asal_universitas . "<br>";
        echo "Email Pendidikan: " . $this->email_edu . "<br>";
    }
}

// contoh penggunaan
$mhs = new Mahasiswa("2009037", "1234567890", "Ellsya Nabella", "Perempuan", "Universitas Pendidikan Indonesia", "ellsyanabella13@upi.edu", "FPMIPA", "Ilmu Komputer");
$mhs->tampilkan_data();

?>