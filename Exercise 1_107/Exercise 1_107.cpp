#include <iostream>
using namespace std;

int a[20];
int n;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Lia Lulus";
	else
		return "Lia Gagal";
}

string status2(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Asroni Lulus";
	else
		return "Asroni Gagal";
}

string status3(double rata, double nil) {
	if (rata >= 70 || nil >= 80)
		return "Joko Lulus";
	else
		return "Joko Gagal";
}

void display() {
	cout << endl;
	cout << "================";
	cout << "Masukkan Array";
	cout << "================";
}

int main() {
	double nilM, nilB;
	cout << "Masukan nilai Matematika = ";
	cin >> nilM;
	cout << "Masukkan nilai Bahasa Inggris = ";
	cin >> nilB;
	cout << "Status kelulusan = " << status(rerata(nilM, nilB));
	return 0;
}
