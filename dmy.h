#pragma once

class ngay {
private:
    int iNgay, iThang, iNam;
    bool Kiemtranamnhuan(int iNam);
    int Timsongaytrongthang(int iThang, int iNam);
    bool Kiemtrangayhople();

public:
    // Các phương thức công khai
    void Nhap();
    void Xuat();
    ngay Timngayketiep();
};


