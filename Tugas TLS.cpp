//Program menghitung nilai mahasiswa
#include <iostream>
using namespace std;

int main ()
{
	//Deklarasi variabel
	float kuis, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	
	cout << "GradeCalcu" << endl;
	
	//Input
	cout << "Masukkan nilai kuis: ";
	cin >> kuis;
	
	cout << "Masukkan nilai tugas: ";
	cin >> tugas;
	
	cout << "Masukkan nilai UTS: ";
	cin >> uts;
	
	cout << "Masukkan nilai UAS: ";
	cin >> uas;
	
	//Menghitung rumus nilai akhir
	//Kuis = 10%
	//Tugas = 20%
	//UTS = 30%
	//UAS = 40%
	nilai_akhir = kuis*0.1 + tugas*0.2 + uts*0.3 + uas*0.4;
	
	//Menentukan rentang nilai huruf
	if (nilai_akhir >= 80) 
	{
		nilai_huruf = 'A';
	} else if (nilai_akhir >= 70) 
		{
			nilai_huruf = 'B';
		} else if (nilai_akhir >= 60)
			{
				nilai_huruf = 'C';
			} else if (nilai_akhir >= 50)
				{
					nilai_huruf = 'D';
				} else
					{
						nilai_huruf = 'E';
					}
	
	//Menampilkan output
	cout << "Nilai akhir mahasiswa adalah " << nilai_akhir << " dengan predikat " << nilai_huruf;
	
	return 0;
}
