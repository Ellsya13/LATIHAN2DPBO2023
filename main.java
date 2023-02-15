//class human
class Human
{
    void NIK()
    {
        System.out.println("NIK :20092781927229");
    }

    void nama()
    {
        System.out.println("Nama    : Ellsya Nabella Nur'allifa");
    }

    void jenis_kelamin()
    {
        System.out.println("Perempuan");
    }
}

//class sivitas akademik
class SivitasAkademik extends Human
{
    void asal_universitas()
    {
        System.out.println("Asal Universitas    : UPI");
    }

    void email_edu()
    {
        System.out.println("Email   : ellsyanabella13@upi.edu");
    }
}

//class mahasiswa
class Mahasiswa extends SivitasAkademik
{
    void NIM()
    {
        System.out.println("NIM : 2009037!");
    }

    void nama()
    {
        System.out.println("Nama    : Ellsya Nabella Nur'allifa");
    }

    void jenis_kelamin()
    {
        System.out.println("Jenis Kelamin   : Perempuan");
    }

    void fakultas()
    {
        System.out.println("iFakultas   : FPMIPA");
    }

    void prodi()
    {
        System.out.println("Prodi   : Ilmu Komputer");
    }
}


class Main
{
    public static void main(String[] args)
    {
        Mahasiswa mahasiswa = new Mahasiswa();

        //menampilkan
       mahasiswa.NIK();
       mahasiswa.nama();
        mahasiswa.jenis_kelamin();
        mahasiswa.NIM();
       mahasiswa.fakultas();
       mahasiswa.prodi();
       mahasiswa.asal_universitas();
        mahasiswa.email_edu();

    }
}