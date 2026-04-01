#include "SoPhuc.h"
#include <iostream>
using namespace std;
//Input: Nhập vào 2 số tự nhiên cho phần thực và phần ảo
void SoPhuc::Nhap() {
	cout << "Nhap vao phan thuc va phan ao ";
	cin >> iThuc >> iAo;
};
//Output: Xuất kết quả iThuc+iAoi hoặc iThuc-iAoi
void SoPhuc::Xuat() {
	if (iAo >= 0) { cout << iThuc << " + " << iAo << "i"; }
	else cout << iThuc << " " << iAo << "i";
};
//Tính tổng 2 số phức (Tổng phần thực và tổng phần ảo = kết quả)
SoPhuc SoPhuc::Tinhtong(SoPhuc a) {
	SoPhuc kq;
	kq.iThuc = iThuc + a.iThuc;
	kq.iAo = iAo + a.iAo;
	return kq;
};
//Tính hiệu hai số phức (Hiệu phần thực và hiệu phần quả = kết quả)
SoPhuc SoPhuc::Tinhhieu(SoPhuc a) {
	SoPhuc kq;
	kq.iThuc = iThuc - a.iThuc;
	kq.iAo = iAo - a.iAo;
	return kq;
};
// Tính tích hai số phức 
SoPhuc SoPhuc::Tinhtich(SoPhuc a) {
	SoPhuc kq;
	kq.iThuc = iThuc * a.iThuc - iAo * a.iAo;
	kq.iAo = iThuc * a.iAo + iAo * a.iThuc;
	return kq;
};
// Tính thương 2 số phức
SoPhuc SoPhuc::Tinhthuong(SoPhuc a) {
	SoPhuc kq;
	int mau = a.iThuc * a.iThuc + a.iAo * a.iAo;
	kq.iThuc = (iThuc * a.iThuc + iAo * a.iAo) / mau;
	kq.iAo = (iThuc * a.iThuc - iAo * a.iAo) / mau;
	return kq;
};