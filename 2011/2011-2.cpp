#include <iostream>
using namespace std;

class MayLoc {
private:
    float m_thoiGian; // Corrected variable name
public:
    void setThoiGian(float t) {
        m_thoiGian = t; // Corrected variable name
    }

    float getThoiGian() {
        return m_thoiGian; // Corrected variable name
    }
};

class MayXucTac : public MayLoc {
private:
    int luongHoaChat;
    float congSuatLoc;

public:
    static long DON_GIA_HOA_CHAT;
    static long DON_GIA_THUE;

    void nhap() {
        float thoiGian = 0;
        cout << "Nhap thoi gian hoat dong:";
        cin >> thoiGian;
        setThoiGian(thoiGian);
        cout << "Nhap luong hoa chat:";
        cin >> luongHoaChat; // Corrected variable name
    }

    float CongSuatThucTe() {
        if (getThoiGian() >= 10) {
            return congSuatLoc * (luongHoaChat / 100) / (getThoiGian() / 10);
        } else {
            return congSuatLoc * (luongHoaChat / 100);
        }
    }

    long tinhChiPhiThueMoiMay() {
        return DON_GIA_THUE * getThoiGian();
    }

    long tinhChiPhi() {
        return tinhChiPhiThueMoiMay() + luongHoaChat * 10000;
    }

    float tinhLuongNuoc() {
        return getThoiGian() * CongSuatThucTe();
    }
};

long MayXucTac::DON_GIA_HOA_CHAT = 10000;
long MayXucTac::DON_GIA_THUE = 80000;

int main() {
    cout << "Don gia hoa chat:" << MayXucTac::DON_GIA_HOA_CHAT << endl;
    MayXucTac m;
    m.nhap();
    cout << "Chi phi su dung may:" << m.tinhChiPhi() << endl;
    cout << "Luong nuoc loc duoc:" << m.tinhLuongNuoc() << endl;
    return 0;
}