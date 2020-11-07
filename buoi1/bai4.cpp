#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"nhap ngay trong tuan: ";cin>>n;
		if (n<1||n>7)
		{
			cout<<"khong phai ngay trong tuan, nhap lai \n";
		}
	}
	while (n<1||n>7);
	switch ??
	{
		case 1:cout<<"CN";break;
		case 2:cout<<"T2";break;
		case 3:cout<<"T3";break;
		case 4:cout<<"T4";break;
		case 5:cout<<"T5";break;
		case 6:cout<<"T6";break;
		case 7:cout<<"T7";break;
	}
	return 0;
}
