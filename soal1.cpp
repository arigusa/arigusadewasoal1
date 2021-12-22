#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int i;
  int n;
  int cari,ketemu=0;
  int A[20];
  
  cout<<"kaos kaki\n";
  cout<<"--------------------------"<<endl;
  cout<<"berapa ukuran pasang kaos kaki : ";
  cin>>n;
  cout<<endl;

  for (i=1;i<=n;i++)
  {
	cout<<"kaos kaki ukuran ke-"<<i<<" : ";
	cin>>A[i];
  }
  cout<<endl;
  cout<<"Input ukuran kaos kaki yang dicari : ";
  cin>>cari;
  cout<<"--------------------------"<<endl;
  cout<<endl;
  
  for(i=0;i<=n;i++)
  {
	  if (A[i]==cari)
	  {
		  ketemu=1;
		  cout<<"ditemukan di ukuran-"<<i;
	  }
  }
  if (ketemu==0)
  {
  	cout<<"tidak ditemukan";
  }
  getch();
  }
