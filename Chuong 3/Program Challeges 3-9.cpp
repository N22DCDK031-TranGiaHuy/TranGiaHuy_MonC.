#include <iostream>

int main() {
    const int so_banh_quy_tren_tui = 30;
    const int calo_tren_tui = 3000; 
    int so_banh_quy_an;
    std::cout << "Nhap so luong banh quy ban da an: ";
    std::cin >> so_banh_quy_an;
    double tong_calo_tieu_thu = (static_cast<double>(so_banh_quy_an) / so_banh_quy_tren_tui) * calo_tren_tui;
    std::cout << "Tong luong calo da tieu thu la: " << static_cast<int>(tong_calo_tieu_thu) << " calo" << std::endl;

    return 0;
}