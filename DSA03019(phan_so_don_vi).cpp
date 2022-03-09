#include<bits/stdc++.h>
using namespace std;


void phan_so()
{
	long long tu, mau;
	cin >> tu >> mau;
	long long s;
	while(1)
	{
		if(mau % tu == 0)
		{
			cout << "1/" << mau/tu;    // truong hop cuoi cung
			 cout << endl;
			break;
			
		}
		
		else
		{
		
			s = mau / tu + 1;			
			cout << "1/" << s << " + ";
			
									// sau khi tim dc 
			tu = tu * s - mau;		// tinh lai phan so moi
			mau = mau * s;
			
			// 2/3 = 1/(3/2)
			// 3/2 + 1 = 2,5 => lay phan nguyen = 2
			// => 2/3 -1/2 duoc lay o ben tren => 1/6
		}
	}
	
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		phan_so();
	}
	return 0;
}

//done

