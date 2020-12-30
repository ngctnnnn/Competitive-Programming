#pragma once 
class DonHang(){
protected:
    string maDonHang;
    KhachHang khachHang;
    string ngayBan;
    int giaTri;
    DanhSachSanPham *danhsach;
public:
    DonHang();
    DonHang(DonHang &a);
    ~DonHang();
    virtual void nhap();
    virtual void xuat();
    void luuThongTinDonHang();
};

class KhachHang(){
protected: 
    string maKhachHang;
    string tenKhachHang;
    string soDienThoai;
    string diaChi;
public:
    KhachHang();
    KhachHang(KhachHang &a);
    ~KhachHang();
    void nhap();
    void xuat();
};

class SanPham(){
protected:
    string maSanPham;
    string tenSanPham;
    int giaBan;
    string ngayNhap;
public:
    SanPham();
    SanPham(DanhSachSanPham &a);
    ~SanPham();
    void nhap();
    void xuat();
}