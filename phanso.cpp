#include "ps.h"
#include <iostream>
using namespace std;
// Input: Nhập vào 2 tử và mẫu. nếu mẫu !=0 thì nhập lại
void phanso::Nhap() {
	cout << "Nhap tu: ";
	cin >> iTu;
	do {
		cout << "Nhap mau: ";
		cin >> iMau;
	}
		while (iMau == 0);

};
// Output: xuất kết quả dưới dạng a/b
void phanso::Xuat() {
	cout << iTu << "/" << iMau;
};
// Tìm ước chung lớn nhất
int timucln(int a, int b) {
	if (b == 0) return a;
	return timucln(b, a % b);
}
//Rút gọn phân số
void phanso::RutGon() { 
	int ucln = timucln(abs(iTu), abs(iMau));
	iTu /= ucln;
	iMau /= ucln;
	// Đưa dấu về tử
	if (iMau < 0) {
		iTu = -iTu;
		iMau = -iMau;
	}
};
//Tính tổng phân số
phanso phanso::Tinhtong(phanso a) {
	phanso kq;
	kq.iTu = iTu * a.iMau + a.iTu * iMau;
	kq.iMau = iMau * a.iMau;
	kq.RutGon();
	return kq;
};

//Tính hiệu phân số
phanso phanso::Tinhhieu(phanso a) {
	phanso kq;
	kq.iTu = iTu * a.iTu;
	kq.iMau = iMau * a.iMau;
	kq.RutGon();
	return kq;
};
// Tính tích phân số
phanso phanso::Tinhtich(phanso a) {
	phanso kq;
	kq.iTu = iTu * a.iTu;
	kq.iMau = iMau * a.iMau;
	kq.RutGon();
	return kq;
};
// Tính thương phân số
phanso phanso::Tinhthuong(phanso a) {
	phanso kq;
	kq.iTu = iTu * a.iMau;
	kq.iMau = iMau * a.iTu;
	kq.RutGon();
	return kq;
};
// So sánh 
int phanso::SoSanh(phanso a) {
	int left = iTu * a.iMau;
	int right = a.iTu * iMau;
	if (left > right) return 1;
	if (left == right) return  0;
	return -1;
};
