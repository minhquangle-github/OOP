#include<iostream>
#include<math.h>
using namespace std;
class DATHUC1
{
	public: 
		int bac;
		float *heso;
	public: 
		DATHUC1()
		{
			bac=0;
			heso=NULL;
		}
		~DATHUC1()
		{
			
		}
		void nhap()
		{
			cout<<"\nNhap vao so bac cua da thuc: "; cin>>bac;
			if(bac<1)
			{
				cout<<"\nSo bac cua da thuc >=1. Xin kiem tra lai!";
			}
			heso=new float(bac+1);
			for(int i=0; i<=bac; i++)
			{
				cout<<"\nNhap vao he so thu " <<i<<"=";
				cin>>heso[i];
			}
		}
		void xuat()
		{
			if(heso[0]!=0)
				cout<<heso[0]<<"+";
			if(heso[1]!=0) 
				cout<<heso[1]<<"*x^1"<<"+";
			
			for(int i=2; i<bac; i++) 
			{
				if(heso[i]!=0)
				cout<<heso[i]<<"*x^"<<i<<"+";
			}
			if(heso[bac]!=0)
			cout<<heso[bac]<<"*x^"<<bac;
		}	
};
 class DATHUC2 : public DATHUC1	
{		
	public:
	DATHUC2 operator -(DATHUC2);
    DATHUC2 operator +(DATHUC2);
    DATHUC2 operator *(DATHUC2);
};
DATHUC2  DATHUC2:: operator +(DATHUC2 a)
{
	DATHUC2 tong;
		if(bac<=a.bac)
			{
				tong.bac=a.bac;
				tong.heso=new float[a.bac];
				for(int i=0; i<=bac; i++)
				{
					tong.heso[i]=heso[i]+a.heso[i];
				}
				for(int j=bac+1; j<=a.bac; j++)
				{
					tong.heso[j]=a.heso[j];
				}
			}
		else 
			{
				tong.bac=a.bac;
				tong.heso=new float[bac];
				for(int i=0; i<=a.bac; i++)
				{
					tong.heso[i]=heso[i]+a.heso[i];
				}
				for(int j=a.bac+1; j<=bac; j++)
				{
					tong.heso[j]=a.heso[j];
				}
					return tong;
			}
}
DATHUC2  DATHUC2:: operator -(DATHUC2 a)
{
	DATHUC2 hieu;
		if(bac>=a.bac)
			{
				hieu.bac=a.bac;
				hieu.heso=new float[a.bac];
				for(int i=0; i<=bac; i++)
				{
					hieu.heso[i]=heso[i]-a.heso[i];
				}
				for(int j=bac+1; j<=a.bac; j++)
				{
					hieu.heso[j]=a.heso[j];
				}
			}
		else 
			{
				hieu.bac=a.bac;
				hieu.heso=new float[bac];
				for(int i=0; i<=a.bac; i++)
				{
					hieu.heso[i]=heso[i]-a.heso[i];
				}
				for(int j=a.bac+1; j<=bac; j++)
				{
					hieu.heso[j]=a.heso[j];
				}
					return hieu;
			}
}
DATHUC2 DATHUC2::operator *(DATHUC2 a)
{
	DATHUC2 tich;
	int k;
	tich.bac=a.bac;
	tich.heso=new float[bac];
	for(int i=0;i<=a.bac;i++)
	{
		tich.heso[i]=heso[i]*k;
	}
	return tich;
}
int main()
{
	DATHUC2 b,c,d,tong,hieu,tich;
	int k;
	cout<<"Nhap da thuc 1: "; b.nhap();
	cout<<"\nNhap da thuc 2: "; c.nhap();
	cout<<"\nNhap k= ";cin>>k;
	cout<<"\n da thuc 1 la: \n ";
	b.xuat();
	cout<<"\n da thuc 2 la: \n ";
	c.xuat();
	tong=b+c;
	cout<<"\nTong hai da thuc la: "; tong.xuat();
	hieu=b-c;
	cout<<"\nHieu hai da thuc la: "; hieu.xuat();
	cout<<"\nTich da thuc 2 voi so k la: ";tich.xuat();
	return 0;
}