
#include <iostream>  // Header
using namespace std;

int semeter[3] = {1, 3, 5}; // Array 1 Dimensi yang di tandai kurung siku

void data(){  // Method Void sebagai FUNCTION yang menandai  program data
	
	int grd, ket, dm, jml, smt; // variabel grd, ket, dm, jml, smt dengan tipe data Integer yang bersifat bil. bulat
	string nama, npm; // variabel nama dan npm dengan tipe data String
	float nh, uas, uts, rata; // variabel nh, uas, uts, rata dengan tipe data float
	const  float x = 3; // Variabel Konstanta dengan kata kunci "const" tipe data float dan variabel x dengan nilai 3 dan Beserta Operator Assignment dengan Operatur =(Sama Dengan)
	
	system (" cls "); // Membersihkan layar seperti awal program
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl; // Fungsi (endl;) adalah menambahkan baris baru 
	cout<<"Nama	: Ahmad Setiaji"<<endl;
	cout<<"NPM	: 19630170"<<endl;
	cout<<"Kelas	: 3E BJM"<<endl;
	cout<<"Program	: final_project.cpp"<<endl;
	cout<<"Dibuat	: Rabu, 20 Jan 2021"<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
	cout<<"   DATA NILAI MAHASISWA SEMESTER GENAP"<<endl;
	cout<<"========================================="<<endl;	
	cout<<"Masukan Semester Mahasiswa (1/3/5) : "; cin>>smt;
	
	switch (smt){ // Proses penyeleksian dengan menggunakan Switch dan variabel smt
			case 1 : // Kata kunci dengan konstanta nilai 1 
			cout<<"Masukan Jumlah Data Mahasiswa : "; cin>>dm;
	cout<<"========================================="<<endl<<endl;
	
	for (jml=1; jml<=dm; jml++){   // Program perulangan pertama yang menggunakan perulangan FOR_INCREMENT
		cout<<"   DATA NILAI MAHASISWA "<<"{"<<jml<<"}"<<endl; // Variabel jml adalah hasil Output dari program FOR_INCREMENT
		cout<<"==========================="<<endl;
		cout<<"Nama Mahasiswa = "; cin>>nama; // Jika karakter yang di masukan lebih dari 1 maka yang tampil hanya karakter pertama
		cout<<"NPM            = "; cin>>npm;
		cout<<"Nilai Harian   = "; cin>>nh;
		cout<<"Nilai UTS      = "; cin>>uts;
		cout<<"Nilai UAS      = "; cin>>uas;
		cout<<endl;
		
		rata = (nh + uts + uas) / x;  // Operator Binary (Aritmatika) + dan /
		grd = rata;  //  Merubah Variabel rata menjadi grd
		
		cout<<"       HASIL AKHIR"<<endl;
		cout<<"=========================="<<endl;
		cout<<"Nama Mahasiswa  : "<<nama<<endl;
		cout<<"NPM             : "<<npm<<endl;
		cout<<"Semester        : "<<smt<<endl;
		cout<<"Nilai Rata-Rata : "<<rata<<endl;
		cout<<"Grade : ";
	
		if(grd>=80){     // Proses percabangan IF TIGA KONDISI dengan pilihan A-D
			cout << "A";
		}else if(grd>=60){
			cout << "B";
		}else if(grd>=40){
			cout << "C";
		}else {
			cout << "D";
		}
	
		ket = rata; //  Merubah Variabel rata menjadi ket 
	
		cout<<endl;
		cout<<"Keterangan : ";
	
		if(ket>=60){   // Proses percabangan IF DUA KONDISI dengan pilihan LULUS/TIDAK LULUS
			cout << "LULUS"<<endl;
			cout<<endl<< "Selamat Anda Berhasil dan Silahkan Melanjutkan ke Semester Berikutnya !!!..."<<endl;
		} else {
			cout << "TIDAK LULUS"<<endl;
			cout<<endl<< "Mohon Maaf Anda Tidak Berhasil dan Silahkan Menggulang di Semester Berikutnya !!!..."<<endl;
		}
			cout<<endl<<"==========================="<<endl;
		}
			break;
			
		case 3 :  //  Barisan perulangan yang sama seperti CASE 1
			cout<<"Masukan Jumlah Data Mahasiswa : "; cin>>dm;
	cout<<"========================================="<<endl<<endl;
	
	for (jml=1; jml<=dm; jml++){   // Operator Post-Increment (nama_variabel++)
		cout<<"   DATA NILAI MAHASISWA "<<"{"<<jml<<"}"<<endl;
		cout<<"==========================="<<endl;
		cout<<"Nama Mahasiswa = "; cin>>nama;
		cout<<"NPM            = "; cin>>npm;
		cout<<"Nilai Harian   = "; cin>>nh;
		cout<<"Nilai UTS      = "; cin>>uts;
		cout<<"Nilai UAS      = "; cin>>uas;
		cout<<endl;
		
		rata = (nh + uts + uas) / x;
		grd = rata;
		
		cout<<"       HASIL AKHIR"<<endl;
		cout<<"=========================="<<endl;
		cout<<"Nama Mahasiswa  : "<<nama<<endl;
		cout<<"NPM             : "<<npm<<endl;
		cout<<"Semester        : "<<smt<<endl;
		cout<<"Nilai Rata-Rata : "<<rata<<endl;
		cout<<"Grade : ";
	
		if(grd>=80){
			cout << "A";
		}else if(grd>=60){
			cout << "B";
		}else if(grd>=40){
			cout << "C";
		}else {
			cout << "D";
		}
	
		ket = rata;
	
		cout<<endl;
		cout<<"Keterangan : ";
	
		if(ket>=60){
			cout << "LULUS"<<endl;
			cout<<endl<< "Selamat Anda Berhasil dan Silahkan Melanjutkan ke Semester Berikutnya !!!..."<<endl;
		} else {
			cout << "TIDAK LULUS"<<endl;
			cout<<endl<< "Mohon Maaf Anda Tidak Berhasil dan Silahkan Menggulang di Semester Berikutnya !!!..."<<endl;
		}
			cout<<endl<<"==========================="<<endl;
		}
			break;
		case 5 :
			cout<<"Masukan Jumlah Data Mahasiswa : "; cin>>dm;
	cout<<"========================================="<<endl<<endl;
	
	for (jml=1; jml<=dm; jml++){
		cout<<"   DATA NILAI MAHASISWA "<<"{"<<jml<<"}"<<endl;
		cout<<"==========================="<<endl;
		cout<<"Nama Mahasiswa = "; cin>>nama;
		cout<<"NPM            = "; cin>>npm;
		cout<<"Nilai Harian   = "; cin>>nh;
		cout<<"Nilai UTS      = "; cin>>uts;
		cout<<"Nilai UAS      = "; cin>>uas;
		cout<<endl;
		
		rata = (nh + uts + uas) / x; 
		grd = rata;
		
		cout<<"       HASIL AKHIR"<<endl;
		cout<<"=========================="<<endl;
		cout<<"Nama  Mahasiswa : "<<nama<<endl;
		cout<<"NPM             : "<<npm<<endl;
		cout<<"Semester        : "<<smt<<endl;
		cout<<"Nilai Rata-Rata : "<<rata<<endl;
		cout<<"Grade : ";
	
		if(grd>=80){
			cout << "A";
		}else if(grd>=60){
			cout << "B";
		}else if(grd>=40){
			cout << "C";
		}else {
			cout << "D";
		}
	
		ket = rata;
	
		cout<<endl;
		cout<<"Keterangan : ";
	
		if(ket>=60){
			cout << "LULUS"<<endl;
			cout<<endl<< "Selamat Anda Berhasil dan Silahkan Melanjutkan ke Semester Berikutnya !!!..."<<endl;
		} else {
			cout << "TIDAK LULUS"<<endl;
			cout<<endl<< "Mohon Maaf Anda Tidak Berhasil dan Silahkan Menggulang di Semester Berikutnya !!!..."<<endl;
		}
			cout<<endl<<"==========================="<<endl;
		};
			break;
			
		default : // Baris ini berfungsi jika inputan yang dimasukan tidak terdapat dari 3 pilihan {1,3,5} 
			cout << "Tidak Ada Pilihan" << endl << endl;
	}
}

int main(){	

	char bck;   // variabel bck dengan tipe data Char/Karakter
	
	do {    // Program perulangan Kedua dengan menggunakan perulangan D0...WHILE
		data();	// Baris ini berfungsi untuk kembali pada program yang telah di tandai di awal program
		cout<<endl;
		cout<<"Ingin Masukkan Data Kembali (Y/T) : "; cin>>bck; // pilihan program ingin di ulang atau tidak
	}
	while (bck == 'y'||bck == 'Y'); // Program yang bila inputan itu y/Y maka program di ulang kembali seperti awal 
	cout<<endl;
	cout<<"          +++ PROGRAM TELAH SELESAI +++"<<endl;
	
	return 0; // Mengirimkan nilai fungsi ke fungsi lainya
}
