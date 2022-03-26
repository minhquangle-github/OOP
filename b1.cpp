#include <iostream>
using namespace std;

class KhachHang 
{
  private:
   char ht[30];
    struct ns
    {
       int day;
       int month;
       int year;
   };
   char cmt[10];
   char hk[50];

   public:
  void nhap(){
		ns s1;
		 cout<<"\nNhap ho va ten: ";
           cin.getline(ht, 30);
           cout<<"\nNhap cmt: ";
           cin.getline(cmt, 10);
           cout<<"\nNhap ho khau: ";
           cin.getline(hk ,50);
           cout<<"\nNhap ngay: ";
           cin>>s1.day;
           cout<<"\nNhap thang: ";
           cin>>s1.month;
           cout<<"\nNhap nam: ";
           cin>>s1.year;
           fflush(stdin);
		}
		void inthongtin()
		{
            ns s1;
		 cout<<"ho va ten :"<<ht<<endl;
		 cout<<"ngay thang nam sinh :"<<s1.day<<"/"<<s1.month<<"/"<<s1.year<<endl;
		 cout<<"chung minh thu : "<<cmt<<endl;
		 cout<<"ho khau : "<<hk<<endl;
		}
        void SXTheoTenKH(KhachHang a[],int n)
  {        
     char t[30];
    for(int i=0;i<n;i++)
    {    for(int j=i+1;j<n;j++)
        if(strcmp( a[i].ht , a[j].ht  )>0)
        {
             /*  char t=a[i].HoTen;
            a[i].HoTen=a[j].HoTen;
            a[j].HoTen=t; */
            strcpy(t,a[i].ht);    //la ham so sanh
            strcpy(a[j].ht,a[i].ht);
                        strcpy(a[j].ht,t);
        }
    }
  }
  

};

int main()
{
    
    int n;
    cout<<"\nNhap so luong khach hang: ";
    cin>>n;
    KhachHang a[n];
    fflush(stdin);
    for( int i=0 ; i<n; i++)
    {
        cout<<"\nKhach hang thu "<<i+1<<endl;
        a[i].nhap();
    }

    for( int i=0 ; i<n; i++)
    {
        cout<<"\nKhach hang thu "<<i+1<<endl;
        a[i].inthongtin();
    }
    for( int i=0 ; i<n; i++)
    {
        cout<<"\nSap xep "<<i+1<<endl;
        a[i].SXTheoTenKH(a,n);
    }
}