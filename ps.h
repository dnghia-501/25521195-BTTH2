#pragma once
class phanso
{
private:
	int iTu;
	int iMau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	phanso Tinhtong(phanso a);
	phanso Tinhhieu(phanso a);
	phanso Tinhtich(phanso a);
	phanso Tinhthuong(phanso a);
	int SoSanh(phanso a);

};

