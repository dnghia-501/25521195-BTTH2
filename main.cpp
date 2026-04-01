#include <iostream>
#include"ps.h"
using namespace std;
int main() {
	phanso a, b;
	cout << "Nhap phan so A: \n";
	a.Nhap();
	cout << "Nhap phan so B: \n";
	b.Nhap();
	cout << "\n Phan so A: ";
	a.RutGon();
	a.Xuat();
	cout << "\n Phan so B: ";
	b.RutGon();
	b.Xuat();
	// Tính toán
	phanso tong = a.Tinhtong(b);
	phanso hieu = a.Tinhhieu(b);
	phanso tich = a.Tinhtich(b);
	phanso thuong = a.Tinhthuong(b);
	cout << "\n Tong: ";
	tong.Xuat();
	cout << "\n Hieu: ";
	hieu.Xuat();
	cout << "\n Tich: ";
	tich.Xuat();
	cout << "\n Thuong: ";
	thuong.Xuat();

	//So sánh
	int res = a.SoSanh(b);
	if (res == 1)
		cout << "\n A > B";
	else if (res == 0)
		cout << "\n A = B";
	else
		cout << "\n A < B";
	return 0;
}