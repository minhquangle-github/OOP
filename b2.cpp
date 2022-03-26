#include <iostream>
using namespace std;

class GiaoVien
{
    private:
    char HT[30];
    int Tuoi;
    char BC[15];
    char CN[20];
    float BL;

    public:
    void nhap()
    {
       
		 cout<<"\nNhap ho va ten: ";
           cin.getline(HT, 30);
           cout<<"\nNhap Tuoi: ";
           cin>>Tuoi;
           fflush(stdin);
           cout<<"\nNhap Bang Cap: ";
           cin.getline(BC ,15);
           cout<<"\nNhap Chuyen Nganh: ";
           cin.getline(CN ,20);
           fflush(stdin);
           cout<<"\nNhap Bac Luong: ";
           cin>>BL;
           
           fflush(stdin);
    }
    void inthongtin()
		{
        
		 cout<<"ho va ten :"<<HT<<endl;
		 cout<<"tuoi :"<<Tuoi<<endl;
		 cout<<"bang cap : "<<BC<<endl;
		 cout<<"Chuyen nganh : "<<CN<<endl;
         cout<<"Bac luong: "<<BL<<endl;
		}
    void TinhLuong()
    {
     float LCB;
     LCB=BL*610;
    }    
};

int main()
{
     int n;
     int i;
    cout<<"\nNhap so luong giao vien: ";
    cin>>n;
    GiaoVien a[n];
    fflush(stdin);
    for( i=0 ; i<n; i++)
    {
        cout<<"\nGiao vien thu "<<i+1<<endl;
        a[i].nhap();
    }

    for(  i=0 ; i<n; i++)
    {
        cout<<"\nGiao vien thu "<<i+1<<endl;
        a[i].inthongtin();
    }
    for(  i=0 ; i<n; i++)
    {
        cout<<"\nLuong co ban cua giao vien thu: "<<i+1<<endl;
        a[i].TinhLuong();
    }
   
}