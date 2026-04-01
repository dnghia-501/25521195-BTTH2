#include "GioPhutGiay.h"
#include <iostream>
using namespace std; 

// Hàm kiểm tra tính hợp lệ của thời gian
bool GioPhutGiay::KiemTraHopLe() {
	if (iGio < 0 || iGio > 23) return false;
	if (iPhut < 0 || iPhut > 59) return false;
	if (iGiay < 0 || iGiay > 59) return false;
	return true;
}

// Nhập dữ liệu và lặp lại nếu nhập sai
void GioPhutGiay::Nhap() {
	do {
		cout << "Nhap gio : phut : giay: ";
		cin >> iGio >> iPhut >> iGiay;
		
		if (!KiemTraHopLe()) {
			cout << "Thoi gian khong hop le. Vui long nhap lai!\n";
		}
	} while (!KiemTraHopLe());
}

// Xuất dữ liệu theo định dạng hh:mm:ss 
void GioPhutGiay::Xuat() {
    // In Giờ
	if (iGio < 10) cout << "0";
	cout << iGio << ":";
    
    // In Phút
	if (iPhut < 10) cout << "0";
	cout << iPhut << ":";
    
    // In Giây
	if (iGiay < 10) cout << "0";
	cout << iGiay;
}

// Cộng thêm 1 giây
GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() {
	GioPhutGiay kq = *this;
	kq.iGiay++;
	if (kq.iGiay >= 60) {
		kq.iGiay = 0;
		kq.iPhut++;
		if (kq.iPhut >= 60) {
			kq.iPhut = 0;
			kq.iGio++;
			if (kq.iGio >= 24) {
				kq.iGio = 0;
			}
		}
	}
	return kq;
}