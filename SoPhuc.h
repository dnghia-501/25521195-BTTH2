#pragma once
class SoPhuc
{
private:
	int iThuc, iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tinhtong(SoPhuc a);
	SoPhuc Tinhhieu(SoPhuc a);
	SoPhuc Tinhtich(SoPhuc a);
	SoPhuc Tinhthuong(SoPhuc a);		
};

