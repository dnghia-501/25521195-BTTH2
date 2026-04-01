#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main() {
	GioPhutGiay t, next_t;

	t.Nhap();

	cout << "\nThoi gian hien tai: ";
	t.Xuat();

	next_t = t.TinhCongThemMotGiay();
	cout << "\nSau 1 giay: ";
	next_t.Xuat();
	cout << "\n";

	return 0;
}