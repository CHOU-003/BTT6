#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Nhap(vector<string>& a, int n){
    cout << "Nhập các phần tử của mảng: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void Xuat(vector<string>& a, int n){
    cout << "Mảng đã nhập: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void xuatKyTuInHoa(string Names) {
    for (int i = 0; i < Names.length(); i++) {
        if (isupper(Names[i])) {
            cout << Names[i] << " ";
        }
    }
}

void XuatDaoNguoc(string Fall) {
    for (int i = Fall.length() - 1; i >= 0; i--) {
        cout << Fall[i];
    }
}

void XenKe(string Name){
    for(int i=0; i<Name.length(); i++){
        if(i % 2 == 0){
            cout << (char)toupper(Name[i]);
        }else{
            cout << (char)tolower(Name[i]);
        }
    }
}

int DemKT(string Lakes, char KT){
    int dem=0;
    for(int i=0; i<Lakes.length(); i++){
        if(Lakes[i] == KT){
            dem++;
        }
    }
    return dem;
}

bool KTChuoi(string Like){
    int Start = 0;
    int End = Like.length()-1;
    
    while(Start < End){
        if(Like[Start] != Like[End]){
            return false;
        }
        Start ++;
        End --;
    }
    
    return true;
}

void XuatDA(string Like){
    if(KTChuoi(Like)){
        cout << "Chuoi nay doi xung.";
    }else{
        cout << "Chuoi khong doi xung.";
    }
}

void XoaKT(string& Final, char KT){
    for(int i=0; i<Final.length(); i++){
        if(Final[i] == KT){
            Final.erase(i,1);
            i--;
        }
    }
}

void XuatC(string Final){
    for(int i=0; i<Final.length(); i++){
        cout << Final[i];
    }
}

int main() {
   int chon;
   cout << "Nhập số câu hỏi bạn buốn xem: ";
   cin >> chon;
   switch(chon){
       case 1: {
            int n;
            cout << "Nhập số lượng phần tử của mảng: ";
            cin >> n;
    
            vector<string> a(n);
            Nhap(a,n);
            Xuat(a,n);
            break;}
        case 2:{
            string Names = "Nguyen DinH hUY";
            xuatKyTuInHoa(Names);
            break;}
        case 3:{
            string Fall = "TuoiGi";
            XuatDaoNguoc(Fall);
            break;}
        case 4:{
            string Name = "KIm JisOo";
            XenKe(Name);
            break;}
        case 5:{
            string Lakes = "baby sharks doook";
            char K;
            cout << "Nhap ky tu ban muon dem: ";
            cin >> K;
            int KQ = DemKT(Lakes,K);
            cout << "So lan xuat hien của " << K << " LÀ " << KQ << " lần.";
            break;}
        case 6:{
            string Like = "GuiiuG";
            XuatDA(Like);
            break;}
        case 7:{
            string Final = "huuoi ham";
            char L;
            cout << "Nhap ky tu ban muon xoa: ";
            cin >> L;
            XoaKT(Final,L);
            XuatC(Final);
            break;}
   }
    
    
    
    return 0;
}

