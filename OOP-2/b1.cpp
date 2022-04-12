#include <iostream>
using namespace std;

class khachhang 
{
    private :
	
	char ht [30];
	struct ns
	{
	   int day;
	   int month;
	   int year;	
	};
	char cmt [10];
	char hk[50];
	public:
		void nhap(){
		ns s1;
		cout<<"nhap ho va ten : ";
		cin>>ht;
        fflush(stdin); 
		cout<<"\nnhap ngày sinh :";
		cin>>s1.day;
		cout<<"\n nhap tháng sinh :";
		cin>>s1.month;
		cout<<"\n nhap nam sinh : ";
		cin>>s1.year;
		cout<<"\n nhap chung minh thu :";
		cin>>cmt;
		cout<<"\nnhap ho khau :";
		cin>>hk;
		}
		void inthongtin()
		{
         ns s1;
		 cout<<"ho va ten :"<<ht<<endl;
		 cout<<"ngay thang nam sinh :"<<s1.day<<"/"<<s1.month<<"/"<<s1.year<<endl;
		 cout<<"chung minh thu : "<<cmt<<endl;
		 cout<<"ho khau : "<<hk<<endl;
		}
		
};
int main()
{

int n;
cout<<"\nnhap so khach hang: ";cin>>n;
khachhang *h=new khachhang[n];
for(int i=0;i<n;i++)
{
	cout<<"\nnhap thong tin khach hang : "<<i+1 <<endl;
	h[i].nhap();
}
for(int i=0;i<n;i++)
{
	h[i].inthongtin();
}
return 0;
}
