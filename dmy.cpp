#include "dmy.h"
#include <iostream>
using namespace std;

// Kiểm tra năm nhuận 
bool ngay::Kiemtranamnhuan(int iNam) {
	return (iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0);
}

// Tìm số ngày trong tháng 
int ngay::Timsongaytrongthang(int iThang, int iNam) {
	switch (iThang) {
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		return Kiemtranamnhuan(iNam) ? 29 : 28;
	default:
		return 31;
	}
}

// Kiểm tra ngày hợp lệ
bool ngay::Kiemtrangayhople() {
	if (iNam <= 0) return false;
	if (iThang < 1 || iThang > 12) return false;
	if (iNgay < 1 || iNgay > Timsongaytrongthang(iThang, iNam)) return false;
	return true;
}

// Input: Nhập vào ngày tháng năm
void ngay::Nhap() {
	do {
		cout << "Nhap ngay, thang, nam: ";
		cin >> iNgay >> iThang >> iNam;
		if (!Kiemtrangayhople()) {
			cout << "=> Ngay thang nam khong hop le. Vui long nhap lai!" << endl;
		}
	} while (!Kiemtrangayhople()); 
}

// Output: xuất kết quả dưới dạng d/m/y
void ngay::Xuat() {
	cout << iNgay << "/" << iThang << "/" << iNam;
}

// Tìm ngày kế tiếp
ngay ngay::Timngayketiep() {
	ngay kt = *this;
	kt.iNgay++;
	if (kt.iNgay > Timsongaytrongthang(kt.iThang, kt.iNam)) {
		kt.iNgay = 1;
		kt.iThang++;
		if (kt.iThang > 12) {
			kt.iThang = 1;
			kt.iNam++;
		}
	}
	return kt; 
}