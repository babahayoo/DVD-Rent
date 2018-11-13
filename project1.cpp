#include <iostream>			//PROJECT SEMESTER 2 ALGORITMA DAN PEMOGRAMAN LANJUT
#include <iomanip>          //BAYU SAPUTRA 123160043
#include <string.h>         //RAHMAD YESA ALFARABI 123160050
#include <fstream>          //ARNI PUDYASTUTI 123160052

using namespace std;

struct datarental
{
	int nodvd,harga;
	string genre,judul;
};
struct datarental datadvd[200],tampung,x[200];

struct satu
{
    string nama;
    int belanja,kode;
};
struct satu jual[100];


void penjualan();
void outputpenjualan();
void inputdvd();				//KELAR
void outputdvd();				//KELAR
void searching();					//KELAR
	void sequential();				//KELAR
		void seqtidakurutnonsentinel();	//KELAR
			void searchnodvd_TUNS();		//KELAR
			void searchgenre_TUNS();		//KELAR
			void searchjudul_TUNS();		//KELAR
			void searchharga_TUNS();		//KELAR
		void seqtidakurutsentinel();	//KELAR
			void searchnodvd_TUS();			//KELAR
			void searchgenre_TUS();			//KELAR
			void searchjudul_TUS();			//KELAR
			void searchharga_TUS();			//KELAR
		void sequrutnonsentinel();		//KELAR
			void searchnodvd_UNS();			//KELAR
		void sequrutsentinel();			//KELAR
			void searchnodvd_US();		//KELAR
	void binary();				//OK TAPI HANYA BISA TEMUKAN 1 DATA YG SAMA
			void binnodvd(); //OK TAPI HANYA BISA TEMUKAN 1 DATA YG SAMA
			void bingenre(); //OK TAPI HANYA BISA TEMUKAN 1 DATA YG SAMA
			void binjudul(); //OK TAPI HANYA BISA TEMUKAN 1 DATA YG SAMA
			void binharga(); //OK TAPI HANYA BISA TEMUKAN 1 DATA YG SAMA
void sorting(); //LENGKAP
	void bubble(); //OK
		void ascbub(); //OK
			void ascbubnodvd(); //OK0
			void ascbubgenre(); //OK
			void ascbubjudul(); //OK
			void ascbubharga();	//OK
		void dscbub();	//OK
			void dscbubnodvd(); //OK
			void dscbubgenre(); //OK
			void dscbubjudul(); //OK
			void dscbubharga();	//OK
	void insertion(); //OK
		void ascins(); //OK
			void ascinsnodvd(); //OK
			void ascinsgenre(); //OK
			void ascinsjudul(); //OK
			void ascinsharga(); //OK
		void dscins(); //OK
			void dscinsnodvd(); //OK
			void dscinsgenre(); //OK
			void dscinsjudul(); //OK
			void dscinsharga(); //OK
    void selection(); //OK
        void ascsel(); //OK
            void ascselnodvd(); //OK
            void ascselgenre(); //OK
            void ascseljudul(); //OK
            void ascselharga(); //OK
        void dscsel(); //OK
            void dscselnodvd(); //OK
            void dscselgenre(); //OK
            void dscseljudul(); //OK
            void dscselharga(); //OK
    void shell(); // OTW
        void ascshell(); //OK
			void ascshellnodvd(); //OK
			void ascshellgenre(); //OK
			void ascshelljudul(); //OK
			void ascshellharga(); //OK
        void dscshell(); //OK
			void dscshellnodvd(); //OK
			void dscshellgenre(); //OK
			void dscshelljudul(); //OK
			void dscshellharga(); //OK
    void quick(); //OK
        void ascquick(); //OK
            void ascquicknodvd(int,int); //OK
            void ascquickgenre(int,int); //OK
            void ascquickjudul(int,int); //OK
            void ascquickharga(int,int); //OK
        void dscquick(); //OK
            void dscquicknodvd(int,int); //OK
            void dscquickgenre(int,int); //OK
            void dscquickjudul(int,int); //OK
            void dscquickharga(int,int); //OK
    void merg(); //OK
        void ascmerg(); //OK
            void ascmergnodvd(datarental x[],int first,int last);             //OK
                void s_ascmergnodvd(datarental x[],int low,int mid,int high); //OK
            void ascmerggenre(datarental x[],int first,int last);             //OK
                void s_ascmerggenre(datarental x[],int low,int mid,int high); //OK
            void ascmergjudul(datarental x[],int first,int last);             //OK
                void s_ascmergjudul(datarental x[],int low,int mid,int high); //OK
            void ascmergharga(datarental x[],int first,int last);             //OK
                void s_ascmergharga(datarental x[],int low,int mid,int high); //OK
        void dscmerg(); //OK
            void dscmergnodvd(datarental x[],int first,int last);             //OK
                void s_dscmergnodvd(datarental x[],int low,int mid,int high); //OK
            void dscmerggenre(datarental x[],int first,int last);             //OK
                void s_dscmerggenre(datarental x[],int low,int mid,int high); //OK
            void dscmergjudul(datarental x[],int first,int last);             //OK
                void s_dscmergjudul(datarental x[],int low,int mid,int high); //OK
            void dscmergharga(datarental x[],int first,int last);             //OK
                void s_dscmergharga(datarental x[],int low,int mid,int high); //OK

int jmldvd,ttl;
bool found;

FILE *file;

int main()
{
	int pilih;
	char yn;

	do{
	cout<<"\n\t\tPROJECT SEMESTER 1 PROGRAM PENYEWAAN DVD/CD FILM\n\n";

	cout<<"1. INPUT\n";
	cout<<"2. OUTPUT\n";
	cout<<"3. SEARCHING\n";
	cout<<"4. SORTING\n";
	cout<<"5. INPUT DATA PENYEWAAN\n";
	cout<<"6. OUTPUT DATA PENYEWAAN\n";
	cout<<"7. EXIT\n";


	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : inputdvd();
				 break;

		case 2 : outputdvd();
				 break;

		case 3 : searching();
				 break;

		case 4 : sorting();
				 break;

        case 5 : penjualan();
                 break;

        case 6 : outputpenjualan();
                 break;


	}
	cout<<"\nKembali Ke Menu Utama ? <Y/N> : "; cin>>yn;

	}while(yn == 'y' || yn == 'Y');

}

void inputdvd()
{
    file = fopen("rentalxx.txt","w");


	cout<<"\n\tMENU SIMPAN DVD/CD FILM \n";
	cout<<"\nINPUT JUMLAH\t: "; cin>>jmldvd;
    fwrite(&jmldvd,sizeof(jmldvd),1,file);

	cout<<"\nSELALU INPUT DMENGGUNAKAN KAPITAL!!\n";

								cout<<"\t\t\t\t\tGENRE YANG TERSEDIA\n";
								cout<<"\t\t\t\t\t1.HORROR\n";
								cout<<"\t\t\t\t\t2.COMEDY\n";
								cout<<"\t\t\t\t\t3.ACTION\n";
								cout<<"\t\t\t\t\t4.SCI-FI\n";

	for(int a=0; a<jmldvd; a++)
	{
		cout<<"\nNOMOR DVD/CD (5A ANGKA)\t: "; cin>>datadvd[a].nodvd;
		cout<<"GENRE DVD/CD FILM\t: "; cin>>datadvd[a].genre;
		cout<<"JUDUL DVD/CD FILM\t: "; cin.ignore(); getline(cin,datadvd[a].judul);
		cout<<"HARGA SEWA DVD/CD FILM\t: "<<"Rp."; cin>>datadvd[a].harga;
        fwrite(&datadvd[a],sizeof(datadvd[a]),1,file);
	}

    fclose(file);

}

void outputdvd()
{
    file = fopen("rentalxx.txt","r");

	cout<<"\n\tMENU OUTPUT DVD/CD FILM \n\n";

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
    fread(&jmldvd,sizeof(jmldvd),1,file);

	for(int a=0; a<jmldvd; a++)
	{   fread(&datadvd[a],sizeof(datadvd[a]),1,file);
        cout<<setw(12)<<" "<<datadvd[a].nodvd<<"   "<<datadvd[a].genre<<" \t"<<datadvd[a].judul<<"        "<<"     Rp."<<datadvd[a].harga<<endl;
    }
    fclose(file);

}
void searching()
{
	int pilih;
    file = fopen("rentalxx.txt","r");
    fread(&jmldvd,sizeof(jmldvd),1,file);
    for(int a=0; a<jmldvd; a++)
    {
        fread(&datadvd[a],sizeof(datadvd[a]),1,file);
    }
	cout<<"\n\tMENU SEARCH DVD/CD FILM\n\n";

	cout<<"1. SEQUENTIAL SEARCH\n";
	cout<<"2. BINARY SEARCH\n";

	cout<<"\nPilih Menu Search\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : sequential();
				 break;

		case 2 : binary();
				 break;
	}
    fclose(file);
}

void sequential()
{
	int pilih;

	cout<<"\n\tMENU SEQUENTIAL SEARCH DVD/CD FILM\n\n";

	cout<<"1. SEQUENTIAL TIDAK URUT NONSENTINEL\n";
	cout<<"2. SEQUENTIAL TIDAK URUT SENTINEL\n";
	cout<<"3. SEQUENTIAL URUT NON SENTINEL\n";
	cout<<"4. SEQUENTIAL URUT SENTINEL\n";
	cout<<"5. EXIT\n";


	cout<<"\nPilih Menu Search\t: "; cin>>pilih;
		switch(pilih)
	{
		case 1 : seqtidakurutnonsentinel();
				 break;

		case 2 : seqtidakurutsentinel();
				 break;

		case 3 : sequrutnonsentinel();
				 break;

		case 4 : sequrutsentinel();
				 break;
	}
}

void seqtidakurutnonsentinel()
{
	int pilih;
	char ulg;

	do{
	cout<<"\n\tMENU SEARCH SEQUENTIAL TIDAK URUT NON SENTINEL\n\n";

	cout<<"1. CARI BERDASARKAN NO DVD\n";
	cout<<"2. CARI BERDASARKAN GENRE\n";
	cout<<"3. CARI BERDASARKAN JUDUL\n";
	cout<<"4. CARI BERDASARKAN HARGA\n";
	cout<<"5. EXIT\n";

	cout<<"\nPilih Menu\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : searchnodvd_TUNS();
				 break;
		case 2 : searchgenre_TUNS();
				 break;
		case 3 : searchjudul_TUNS();
				 break;
		case 4 : searchharga_TUNS();
				 break;
	}
	cout<<"\nCARI KEMBALI? <Y/N> : "; cin>>ulg;
	}while(ulg == 'y' || ulg == 'Y');
}

void searchnodvd_TUNS()
{
	int cari,a=0;

	found = false;

	cout<<"\n\tMENU SEARCH NO DVD/CD SEQUENTIAL TIDAK URUT NON SENTINEL\n";
	cout<<"\nCARI NO DVD\t: "; cin>>cari;

	while((a<jmldvd) & (!found))
	{
		if(datadvd[a].nodvd == cari )
			found = true;
		else
			a = a + 1;
	}

	if(found)
	{

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	cout<<setw(12)<<" "<<datadvd[a].nodvd<<"   "<<datadvd[a].genre<<" \t"<<datadvd[a].judul<<"        "<<"     Rp."<<datadvd[a].harga<<endl;


	}
	else
		cout<<"\nNOMOR DVD/CD FILM TERSEBUT TIDAK DITEMUKAN!";


}

void searchgenre_TUNS()
{
	string cari;
	int x=0,c,bantu,arraybantuan[100];

	found = false;

	cout<<"\n\tMENU SEARCH GENRE SEQUENTIAL TIDAK URUT NON SENTINEL\n";
	cout<<"\nCARI GENRE\t: "; cin>>cari;

	for(int b=0; b<jmldvd; b++)
	{
		if(datadvd[b].genre == cari )
		{
			arraybantuan[x] = b ;
			x = x + 1;
			found = true;
		}
		else
			cout<<"";

	}

	if(found)
	{

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

		for(int a=0; a<x; a++)
		{
			c = arraybantuan[a];
			bantu = c;
			cout<<setw(12)<<" "<<datadvd[bantu].nodvd<<"   "<<datadvd[bantu].genre<<" \t"<<datadvd[bantu].judul<<"        "<<"     Rp."<<datadvd[bantu].harga<<endl;
		}

	}
	else
		cout<<"\nGENRE DVD/CD FILM TERSEBUT TIDAK DITEMUKAN!";

}

void searchjudul_TUNS()
{
	char cari[30];
	int x=0,c,bantu,arraybantuan[100];

	found = false;

	cout<<"\n\tMENU SEARCH JUDUL SEQUENTIAL TIDAK URUT NON SENTINEL\n";
	cout<<"\nCARI JUDUL\t: "; cin.ignore(); cin.getline(cari,sizeof(cari));

	for(int b=0; b<jmldvd; b++)
	{
		if(datadvd[b].judul == cari )
		{
			arraybantuan[x] = b ;
			x = x + 1;
			found = true;
		}
		else
			cout<<"";

	}

	if(found)
	{

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

		for(int a=0; a<x; a++)
		{
			c = arraybantuan[a];
			bantu = c;
			cout<<setw(12)<<" "<<datadvd[bantu].nodvd<<"   "<<datadvd[bantu].genre<<" \t"<<datadvd[bantu].judul<<"        "<<"     Rp."<<datadvd[bantu].harga<<endl;
		}

	}
	else
		cout<<"\nJUDUL DVD/CD FILM TERSEBUT TIDAK DITEMUKAN!";


}

void searchharga_TUNS()
{
	int cari;
	int x=0,c,bantu,arraybantuan[100];

	found = false;

	cout<<"\n\tMENU SEARCH HARGA SEQUENTIAL TIDAK URUT SENTINEL\n";
	cout<<"\nCARI HARGA\t: Rp."; cin>>cari;

	for(int b=0; b<jmldvd; b++)
	{
		if(datadvd[b].harga == cari )
		{
			arraybantuan[x] = b ;
			x = x + 1;
			found = true;
		}
		else
			cout<<"";

	}

	if(found)
	{

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

		for(int a=0; a<x; a++)
		{
			c = arraybantuan[a];
			bantu = c;
			cout<<setw(12)<<" "<<datadvd[bantu].nodvd<<"   "<<datadvd[bantu].genre<<" \t"<<datadvd[bantu].judul<<"        "<<"     Rp."<<datadvd[bantu].harga<<endl;
		}

	}
	else
		cout<<"\nHARGA DVD/CD FILM TERSEBUT TIDAK DITEMUKAN!";
}

void seqtidakurutsentinel()
{
	int pilih;
	char ulg;

	do{
	cout<<"\n\tMENU SEARCH SEQUENTIAL TIDAK URUT SENTINEL\n";

	cout<<"\n1. CARI BERDASARKAN NO DVD\n";
	cout<<"2. CARI BERDASARKAN GENRE\n";
	cout<<"3. CARI BERDASARKAN JUDUL\n";
	cout<<"4. CARI BERDASARKAN HARGA\n";
	cout<<"5. EXIT\n";

	cout<<"\nPilih Menu\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : searchnodvd_TUS();
				 break;

		case 2 : searchgenre_TUS();
				 break;

		case 3 : searchjudul_TUS();
				 break;

		case 4 : searchharga_TUS();
				 break;
	}
	cout<<"\nCARI LAGI ? <Y/N> : "; cin>>ulg;
	}while(ulg == 'y' || ulg =='Y');
}

void searchnodvd_TUS()
{
	int cari;
	int a=0;

	found = false;

	cout<<"\nCARI NO DVD/CD FILM\t: "; cin>>cari;

	datadvd[jmldvd+1].nodvd = cari;

	while(!found)
	{
		if(datadvd[a].nodvd == cari)
		{
			found = true;
		}
		else
			a++;
	}

	if(a == jmldvd+1)
	{
		cout<<"\nNO DVD/CD FILM TERSEBUT TIDAK DITEMUKAN";
	}
	else
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<datadvd[a].nodvd<<"   "<<datadvd[a].genre<<" \t"<<datadvd[a].judul<<"        "<<"     Rp."<<datadvd[a].harga<<endl;
	}



}

void searchgenre_TUS()
{
	string cari;
	int a=0;
	int arraybantuan[100],x=0;



	found = false;

	cout<<"\nCARI GENRE FILM\t: "; cin>>cari;

	datadvd[jmldvd+1].genre = cari;

	for(int a=0; a<jmldvd; a++)
	{
		if(datadvd[a].genre == cari)
		{
			arraybantuan[x]=a;
			x++;
			found = true;
		}
		else
			cout<<"";
	}

	if(a == jmldvd+1)
	{
		cout<<"\nGENRE FILM TERSEBUT TIDAK DITEMUKAN";
	}
	else
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		for(int c=0; c<x; c++)
		{
		cout<<setw(12)<<" "<<datadvd[arraybantuan[c]].nodvd<<"   "<<datadvd[arraybantuan[c]].genre<<" \t"<<datadvd[arraybantuan[c]].judul<<"        "<<"     Rp."<<datadvd[arraybantuan[c]].harga<<endl;
		}
	}
}

void searchjudul_TUS()
{
	char cari[30];
	int a=0;
	int arraybantuan[100],x=0;



	found = false;

	cout<<"\nCARI JUDUL FILM\t: "; cin.ignore(); cin.getline(cari,sizeof(cari));;

	datadvd[jmldvd+1].judul = cari;

	for(int a=0; a<jmldvd; a++)
	{
		if(datadvd[a].judul == cari)
		{
			arraybantuan[x]=a;
			x++;
			found = true;
		}
		else
			cout<<"";
	}

	if(a == jmldvd+1)
		cout<<"JUDUL FILM TERSEBUT TIDAK DITEMUKAN";
	else
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		for(int c=0; c<x; c++)
		{
		cout<<setw(12)<<" "<<datadvd[arraybantuan[c]].nodvd<<"   "<<datadvd[arraybantuan[c]].genre<<" \t"<<datadvd[arraybantuan[c]].judul<<"        "<<"     Rp."<<datadvd[arraybantuan[c]].harga<<endl;
		}
	}
}

void searchharga_TUS()
{
	int cari;
	int a=0;
	int arraybantuan[100],x=0;



	found = false;

	cout<<"\nCARI HARGA FILM\t: Rp."; cin>>cari;

	datadvd[jmldvd+1].harga = cari;

	for(int a=0; a<jmldvd; a++)
	{
		if(datadvd[a].harga == cari)
		{
			arraybantuan[x]=a;
			x++;
			found = true;
		}
		else
			cout<<"";
	}

	if(a == jmldvd+1)
	{
		cout<<"\nDVD/CD FILM DENGAN HARGA TERSEBUT TIDAK DITEMUKAN\n";
	}
	else
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		for(int c=0; c<x; c++)
		{
		cout<<setw(12)<<" "<<datadvd[arraybantuan[c]].nodvd<<"   "<<datadvd[arraybantuan[c]].genre<<" \t"<<datadvd[arraybantuan[c]].judul<<"        "<<"     Rp."<<datadvd[arraybantuan[c]].harga<<endl;
		}
	}
}

void sequrutnonsentinel()
{
	char ulg;

	do{
	cout<<"\n\tMENU SEARCH SEQUENTIAL URUT NONSENTINEL\n";

	cout<<"\n CARI BERDASARKAN NO DVD\n";

	searchnodvd_UNS();

	cout<<"\nCARI KEMBALI? <Y/N> : "; cin>>ulg;

	}while(ulg == 'y' || ulg == 'Y');

}

void searchnodvd_UNS()
{
	int cari,a=0,out=0;

	found = false;

	cout<<"\nCARI NO DVD/CD FILM\t: "; cin>>cari;

	while((a<jmldvd) & (!found) & (cari>=x[a].nodvd))
	{
		if(x[a].nodvd == cari)
			{
				out = a;
				found = true;
			}
		else
			a++;
	}

	if(found)
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<x[out].nodvd<<"   "<<x[out].genre<<" \t"<<x[out].judul<<"        "<<"     Rp."<<x[out].harga<<endl;
	}
	else
		cout<<"\nNOMOR DVD/CD FILM YANG ANDA CARI TIDAK DITEMUKAN";

}

void sequrutsentinel()
{
	char ulg;

	do{
	cout<<"\nMENU SEARCHING URUT SENTINEL\n";

	searchnodvd_US();

	cout<<"\nCARI KEMBALI? <Y/N> : "; cin>>ulg;
	}
	while(ulg == 'y' || ulg == 'Y');
}

void searchnodvd_US()
{
	int cari,a=0,out;

	cout<<"\nCARI BERDASARKAN NO DVD/CD FILM\t: "; cin>>cari;

	x[jmldvd+1].nodvd = cari;
	found = false;

	while((!found) & (x[a].nodvd <= cari))
	{
		if(x[a].nodvd == cari)
		{
			out = a;
			found = true;
		}
		else
			a = a + 1;
	}

	if(a == jmldvd + 1)
	{
		cout<<"\nNO DVD/CD FILM TERSEBUT TIDAK DITEMUKAN\n";
	}
	else
	{
		if(found)
		{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<x[out].nodvd<<"   "<<x[out].genre<<" \t"<<x[out].judul<<"        "<<"     Rp."<<x[out].harga<<endl;
		}
		else
			cout<<"\nNO DVD/CD FILM TERSEBUT TIDAK DITEMUKAN\n";

	}

}

void binary()
{
	int pilih;
	char ulg;

	do{
	cout<<"\n\tMENU BINARY SEAARCH\n";

	cout<<"\n1. CARI BERDASARKAN NO DVD\n";
	cout<<"2. CARI BERDASARKAN GENRE\n";
	cout<<"3. CARI BERDASARKAN JUDUL\n";
	cout<<"4. CARI BERDASARKAN HARGA\n";
	cout<<"5. EXIT\n";

	cout<<"\nPilih Menu\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : binnodvd();
				 break;
		case 2 : bingenre();
				 break;
		case 3 : binjudul();
				 break;
		case 4 : binharga();
				 break;


	}
	cout<<"\nCARI LAGI ? <Y/N> : "; cin>>ulg;
	}while(ulg == 'y' || ulg =='Y');
}

void binnodvd()
{
	int cari;
	int awal,akhir,tengah;


	awal=0;
	akhir = jmldvd;

	found = false;
	cout<<"\nBINARY SEARCH\n";
	cout<<"\nCARI NO DVD/CD FILM YANG INGIN DICARI\t: "; cin>>cari;

	while((!found) & (awal <= akhir))
	{
		tengah = (awal+akhir)/2;

		if(cari == x[tengah].nodvd)
		{
			found = true;
		}
		else
		{
			if(cari<x[tengah].nodvd)
			{
				akhir = tengah - 1;
			}
			else
			{
					awal = tengah +1;
			}
		}
	}

	if(found)
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<x[tengah].nodvd<<"   "<<x[tengah].genre<<" \t"<<x[tengah].judul<<"        "<<"     Rp."<<x[tengah].harga<<endl;
	}
	else
		cout<<"\nDATA TIDAK DITEMUKAN ATAU DATA BELUM DISORTING !\n";
}

void bingenre()
{
	string cari;
	int awal,akhir,tengah;


	awal=0;
	akhir = jmldvd;

	found = false;
	cout<<"\nBINARY SEARCH\n";
	cout<<"\nCARI GENRE DVD/CD FILM YANG INGIN DICARI\t: "; cin.ignore(); getline(cin,cari);

	while((!found) & (awal <= akhir))
	{
		tengah = (awal+akhir)/2;

		if(cari == x[tengah].genre)
		{
			found = true;
		}
		else
		{
			if(cari<x[tengah].genre)
			{
				akhir = tengah - 1;
			}
			else
			{
					awal = tengah +1;
			}
		}
	}

	if(found)
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<x[tengah].nodvd<<"   "<<x[tengah].genre<<" \t"<<x[tengah].judul<<"        "<<"     Rp."<<x[tengah].harga<<endl;
	}
	else
		cout<<"\nDATA TIDAK DITEMUKAN ATAU DATA BELUM DISORTING !\n";
}

void binjudul()
{
	string cari;
	int awal,akhir,tengah;


	awal=0;
	akhir = jmldvd;

	found = false;
	cout<<"\nBINARY SEARCH\n";
	cout<<"\nCARI JUDUL DVD/CD FILM YANG INGIN DICARI\t: "; cin.ignore(); getline(cin,cari);

	while((!found) & (awal <= akhir))
	{
		tengah = (awal+akhir)/2;

		if(cari == x[tengah].judul)
		{
			found = true;
		}
		else
		{
			if(cari<x[tengah].judul)
			{
				akhir = tengah - 1;
			}
			else
			{
					awal = tengah +1;
			}
		}
	}

	if(found)
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<x[tengah].nodvd<<"   "<<x[tengah].genre<<" \t"<<x[tengah].judul<<"        "<<"     Rp."<<x[tengah].harga<<endl;
	}
	else
		cout<<"\nDATA TIDAK DITEMUKAN ATAU DATA BELUM DISORTING !\n";
}

void binharga()
{
	int cari;
	int awal,akhir,tengah;


	awal=0;
	akhir = jmldvd;

	found = false;
	cout<<"\nBINARY SEARCH\n";
	cout<<"\nCARI HARGA DVD/CD FILM YANG INGIN DICARI\t: "; cin>>cari;

	while((!found) & (awal <= akhir))
	{
		tengah = (awal+akhir)/2;

		if(cari == x[tengah].harga)
		{
			found = true;
		}
		else
		{
			if(cari<x[tengah].harga)
			{
				akhir = tengah - 1;
			}
			else
			{
					awal = tengah +1;
			}
		}
	}

	if(found)
	{
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
		cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
		cout <<setw(12)<<"\t===============================================================" <<endl;

		cout<<setw(12)<<" "<<x[tengah].nodvd<<"   "<<x[tengah].genre<<" \t"<<x[tengah].judul<<"        "<<"     Rp."<<x[tengah].harga<<endl;
	}
	else
		cout<<"\nDATA TIDAK DITEMUKAN ATAU DATA BELUM DISORTING !\n";
}

void sorting()
{
    file = fopen("rentalxx.txt","r");
    fread(&jmldvd,sizeof(jmldvd),1,file);
    for(int a=0; a<jmldvd; a++)
    {
        fread(&datadvd[a],sizeof(datadvd[a]),1,file);
        x[a] = datadvd[a];
    }

	int pilih;
	char ulg;

	do{
	cout<<"1. BUBBLE SORT\n";
	cout<<"2. INSERTION SORT\n";
	cout<<"3. SELECTION SORT\n";
	cout<<"4. SHELL SORT\n";
	cout<<"5. QUICK SORT\n";
	cout<<"6. MERGE SORT\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : bubble();
				 break;
		case 2 : insertion();
				 break;
        case 3 : selection();
                 break;
        case 4 : shell();
				 break;
        case 5 : quick();
                 break;
        case 6 : merg();
                 break;
	}
	cout<<"\nSORTING LAGI ? <Y/N> : "; cin>>ulg;
	}while(ulg == 'y' || ulg =='Y');

	fclose(file);
}

void bubble()
{
	int pilih;

	cout<<"\nPILIH CARA SORTING\n";

	cout<<"\n1. ASCENDING\n";
	cout<<"2. DESCENDING\n";

	cout<<"\nPILIH CARA\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascbub();
				 break;
		case 2 : dscbub();
				 break;

	}

}

void ascbub()
{
	int pilih;

	cout<<"\t\tMENU SORTING ASCENDING METODE BUBBLE SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n\n";

	cout<<"PILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascbubnodvd();
				 break;
		case 2 : ascbubgenre();
				 break;
		case 3 : ascbubjudul();
				 break;
		case 4 : ascbubharga();
				 break;
	}

}

void ascbubnodvd()
{
	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].nodvd > x[b+1].nodvd)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}
}

void ascbubgenre()
{
	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].genre > x[b+1].genre)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void ascbubjudul()
{


	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].judul > x[b+1].judul)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void ascbubharga()
{


	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].harga > x[b+1].harga)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscbub()
{
	int pilih;

	cout<<"\t\tMENU SORTING DESCENDING METODE BUBBLE SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n\n";

	cout<<"PILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : dscbubnodvd();
				 break;
		case 2 : dscbubgenre();
				 break;
		case 3 : dscbubjudul();
				 break;
		case 4 : dscbubharga();
				 break;
	}
}

void dscbubnodvd()
{


	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].nodvd < x[b+1].nodvd)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscbubgenre()
{


	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].genre < x[b+1].genre)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscbubjudul()
{


	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].judul < x[b+1].judul)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscbubharga()
{


	for(int a=0; a<jmldvd-1; a++)
		{
			for(int b=0; b<jmldvd-1-a; b++)
			{
				if(x[b].harga < x[b+1].harga)
				{
					tampung = x[b];
					x[b] = x[b+1];
					x[b+1] = tampung;
				}
			}
		}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void insertion()
{
	int pilih;

	cout<<"\nPILIH CARA SORTING\n";

	cout<<"\n1. ASCENDING\n";
	cout<<"2. DESCENDING\n";

	cout<<"\nPILIH CARA\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascins();
				 break;
		case 2 : dscins();
				 break;

	}
}

void ascins()
{
	int pilih;

	cout<<"\t\tMENU SORTING ASCENDING METODE INSERTION SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n\n";

	cout<<"PILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascinsnodvd();
				 break;
		case 2 : ascinsgenre();
				 break;
		case 3 : ascinsjudul();
				 break;
		case 4 : ascinsharga();
				 break;
	}
}

void ascinsnodvd()
{
	int a,b;
	int bantu;


	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu = x[a].nodvd;

		b=a-1;

		while((bantu<x[b].nodvd)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;

		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void ascinsgenre()
{
	int a,b;
	string bantu2;

	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu2 = x[a].genre;

		b=a-1;
		while((bantu2<x[b].genre)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void ascinsjudul()
{
	int a,b;
	string bantu3;

	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu3 = x[a].judul;

		b=a-1;
		while((bantu3<x[b].judul)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void ascinsharga()
{
	int a,b;
	int bantu4;


	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu4 = x[a].harga;

		b=a-1;
		while((bantu4<x[b].harga)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscins()
{
	int pilih;

	cout<<"\t\tMENU SORTING DESCENDING METODE INSERTION SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n\n";

	cout<<"PILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : dscinsnodvd();
				 break;
		case 2 : dscinsgenre();
				 break;
		case 3 : dscinsjudul();
				 break;
		case 4 : dscinsharga();
				 break;
	}
}

void dscinsnodvd()
{
	int a,b;
	int bantu;

	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu = x[a].nodvd;

		b=a-1;
		while((bantu>x[b].nodvd)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscinsgenre()
{
	int a,b;
	string bantu2;

	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu2 = x[a].genre;

		b=a-1;
		while((bantu2>x[b].genre)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscinsjudul()
{
	int a,b;
	string bantu3;

	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu3 = x[a].judul;

		b=a-1;
		while((bantu3>x[b].judul)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
	cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}

}

void dscinsharga()
{
	int a,b;
	int bantu4;

	for(a=1; a<jmldvd; a++)
	{
		tampung = x[a];
		bantu4 = x[a].harga;

		b=a-1;
		while((bantu4>x[b].harga)&(b>=0))
		{
			x[b+1] = x[b];
			b=b-1;
			x[b+1] = tampung;
		}
	}

	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(int a=0; a<jmldvd; a++)
	{
        cout<<setw(12)<<" "<<x[a].nodvd<<"   "<<x[a].genre<<" \t"<<x[a].judul<<"        "<<"     Rp."<<x[a].harga<<endl;
	}
}

void selection()
{
	int pilih;

	cout<<"\nPILIH CARA SORTING\n";

	cout<<"\n1. ASCENDING\n";
	cout<<"2. DESCENDING\n";

	cout<<"\nPILIH CARA\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascsel();
				 break;
        case 2 : dscsel();
                 break;
	}
}
void ascsel()
{
	int pilih;

	cout<<"\n\t\tMENU SORTING ASCENDING METODE SELECTION SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascselnodvd();
				 break;
        case 2 : ascselgenre();
                 break;
        case 3 : ascseljudul();
                 break;
        case 4 : ascselharga();
                 break;
	}
}


void ascselnodvd()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].nodvd > x[b].nodvd)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}

void ascselgenre()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].genre > x[b].genre)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}
void ascseljudul()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].judul > x[b].judul)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}

void ascselharga()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].harga > x[b].harga)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}
void dscsel()
{
	int pilih;

	cout<<"\n\t\tMENU SORTING DESCENDING METODE SELECTION SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : dscselnodvd();
				 break;
        case 2 : dscselgenre();
                 break;
        case 3 : dscseljudul();
                 break;
        case 4 : dscselharga();
                 break;
	}
}

void dscselnodvd()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].nodvd < x[b].nodvd)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}

void dscselgenre()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].genre < x[b].genre)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}
void dscseljudul()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].judul < x[b].judul)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}

void dscselharga()
{ int a,b,c;
    for(a=0; a<jmldvd; a++)
    {
        for (b=a+1; b<jmldvd; b++)
        {
            if(x[a].harga < x[b].harga)
            {
                tampung = x[a];
                x[a]=x[b];
                x[b]=tampung;
            }
        }
    }
    cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;

	for(c=0; c<jmldvd; c++)
	{
        cout<<setw(12)<<" "<<x[c].nodvd<<"   "<<x[c].genre<<" \t"<<x[c].judul<<"        "<<"     Rp."<<x[c].harga<<endl;
	}
}

void shell()
{
	int pilih;

	cout<<"\nPILIH CARA SORTING\n";

	cout<<"\n1. ASCENDING\n";
	cout<<"2. DESCENDING\n";

	cout<<"\nPILIH CARA\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascshell();
				 break;
        case 2 : dscshell();
                 break;

	}

}

void ascshell()
{
	int pilih;

	cout<<"\n\t\tMENU SORTING ASCENDING METODE SHELL SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascshellnodvd();
				 break;
        case 2 : ascshellgenre();
				 break;
        case 3 : ascshelljudul();
				 break;
        case 4 : ascshellharga();
				 break;
	}
}

void ascshellnodvd()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].nodvd > x[c+a].nodvd; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void ascshellgenre()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].genre> x[c+a].genre; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void ascshelljudul()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].judul> x[c+a].judul; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void ascshellharga()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].harga> x[c+a].harga; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}

void dscshell()
{
	int pilih;

	cout<<"\n\t\tMENU SORTING DESCENDING METODE SHELL SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : dscshellnodvd();
				 break;
        case 2 : dscshellgenre();
				 break;
        case 3 : dscshelljudul();
				 break;
        case 4 : dscshellharga();
				 break;
	}
}

void dscshellnodvd()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].nodvd < x[c+a].nodvd; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void dscshellgenre()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].genre < x[c+a].genre; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void dscshelljudul()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].judul < x[c+a].judul; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void dscshellharga()
{ int a,b,c;
	for(a=jmldvd/2; a>0; a/=2)
	{
		for(b=a; b<jmldvd; b++)
		{
			for(c=b-a; c>=0 && x[c].harga < x[c+a].harga; c-=a)
			{
					tampung = x[c];
					x[c] = x[c+a];
					x[c+a] = tampung;
			}
		}
	}
	cout <<setw(12)<<"\n\t===============================================================" <<endl;
	cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
	cout <<setw(12)<<"\t===============================================================" <<endl;
	for(int d=0; d<jmldvd; d++)
	{
        cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
	}
}
void quick()
{
	int pilih;

	cout<<"\nPILIH CARA SORTING\n";

	cout<<"\n1. ASCENDING\n";
	cout<<"2. DESCENDING\n";

	cout<<"\nPILIH CARA\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascquick();
				 break;
        case 2 : dscquick();
                 break;

	}

}

void ascquick()
{   int first,last;
	int pilih;
	first = 0;
	last = jmldvd;

	cout<<"\n\t\tMENU SORTING ASCENDING METODE QUICK SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascquicknodvd(first,last-1);
        cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 2 : ascquickgenre(first,last-1);
                cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
                 break;
        case 3 : ascquickjudul(first,last-1);
                cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
                 break;
        case 4 : ascquickharga(first,last-1);
                cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
                 break;

	}
}

void ascquicknodvd(int first, int last)
{
    int low,high,ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].nodvd;
    do{
        while(x[low].nodvd<ls) low++;
        while(x[high].nodvd>ls) high--;
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);

    if(first<high) ascquicknodvd(first,high);
    if(low<last) ascquicknodvd(low,last);
}

void ascquickgenre(int first, int last)
{
    int low,high;
    string ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].genre;
    do{
        while(x[low].genre<ls) low++;
        while(x[high].genre>ls) high--;
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);
    if(first<high) ascquickgenre(first,high);
    if(low<last) ascquickgenre(low,last);
}

void ascquickjudul(int first, int last)
{
    int low,high;
    string ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].judul;
    do{
        while(x[low].judul<ls) {low++;}
        while(x[high].judul>ls) {high--;}
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);
    if(first<high) ascquickjudul(first,high);
    if(low<last) ascquickjudul(low,last);
}
void ascquickharga(int first, int last)
{
    int low,high,ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].harga;
    do{
        while(x[low].harga<ls) low++;
        while(x[high].harga>ls) high--;
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);
    if(first<high) ascquickharga(first,high);
    if(low<last) ascquickharga(low,last);
}

void dscquick()
{   int first,last;
	int pilih;
	first = 0;
	last = jmldvd;

	cout<<"\n\t\tMENU SORTING ASCENDING METODE QUICK SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n";

	cout<<"\nPILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : dscquicknodvd(first,last-1);
        cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 2 : dscquickgenre(first,last-1);
                cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
                 break;
        case 3 : dscquickjudul(first,last-1);
                cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
                 break;
        case 4 : dscquickharga(first,last-1);
                cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
                 break;

	}
}

void dscquicknodvd(int first, int last)
{
    int low,high,ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].nodvd;
    do{
        while(x[low].nodvd>ls) low++;
        while(x[high].nodvd<ls) high--;
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);

    if(first<high) dscquicknodvd(first,high);
    if(low<last) dscquicknodvd(low,last);
}

void dscquickgenre(int first, int last)
{
    int low,high;
    string ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].genre;
    do{
        while(x[low].genre>ls) low++;
        while(x[high].genre<ls) high--;
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);
    if(first<high) dscquickgenre(first,high);
    if(low<last) dscquickgenre(low,last);
}

void dscquickjudul(int first, int last)
{
    int low,high;
    string ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].judul;
    do{
        while(x[low].judul>ls) {low++;}
        while(x[high].judul<ls) {high--;}
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);
    if(first<high) dscquickjudul(first,high);
    if(low<last) dscquickjudul(low,last);
}
void dscquickharga(int first, int last)
{
    int low,high,ls;
    low = first;
    high = last;
    ls = x[(first+last)/2].harga;
    do{
        while(x[low].harga>ls) low++;
        while(x[high].harga<ls) high--;
        if(low<=high)
        {
            tampung = x[low];
            x[low++] = x[high];
            x[high--] = tampung;
        }
    }while(low<=high);
    if(first<high) dscquickharga(first,high);
    if(low<last) dscquickharga(low,last);
}

void merg()
{

	int pilih;

	cout<<"\nPILIH CARA SORTING\n";

	cout<<"\n1. ASCENDING\n";
	cout<<"2. DESCENDING\n";

	cout<<"\nPILIH CARA\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascmerg();
				 break;
        case 2 : dscmerg();
                 break;
	}

}

void ascmerg()
{
	int pilih;

	cout<<"\t\tMENU SORTING ASCENDING METODE MERGE SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n\n";

	cout<<"PILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : ascmergnodvd(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 2 : ascmerggenre(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 3 : ascmergjudul(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 4 : ascmergharga(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
	}

}
void ascmergnodvd(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        ascmergnodvd(x,low,mid);
        ascmergnodvd(x,mid+1,high);
        s_ascmergnodvd(x,low,mid,high);
    }
}

void s_ascmergnodvd(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].nodvd<=x[z].nodvd){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}

void ascmerggenre(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        ascmerggenre(x,low,mid);
        ascmerggenre(x,mid+1,high);
        s_ascmerggenre(x,low,mid,high);
    }
}

void s_ascmerggenre(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].genre<=x[z].genre){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}
void ascmergjudul(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        ascmergjudul(x,low,mid);
        ascmergjudul(x,mid+1,high);
        s_ascmergjudul(x,low,mid,high);
    }
}

void s_ascmergjudul(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].judul<=x[z].judul){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}
void ascmergharga(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        ascmergharga(x,low,mid);
        ascmergharga(x,mid+1,high);
        s_ascmergharga(x,low,mid,high);
    }
}

void s_ascmergharga(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].harga<=x[z].harga){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}

// START DESCENDING


void dscmerg()
{
	int pilih;

	cout<<"\t\tMENU SORTING DESCENDING METODE MERGE SORT\n";
	cout<<"\n1. SORTING NO DVD/CD FILM\n";
	cout<<"2. SORTING GENRE DVD/CD FILM\n";
	cout<<"3. SORTING JUDUL DVD/CD FILM\n";
	cout<<"4. SORTING HARGA DCD/CD FILM\n\n";

	cout<<"PILIH MENU\t: "; cin>>pilih;

	switch(pilih)
	{
		case 1 : dscmergnodvd(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 2 : dscmerggenre(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 3 : dscmergjudul(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
        case 4 : dscmergharga(x,0,jmldvd-1);
		cout <<setw(12)<<"\n\t===============================================================" <<endl;
        cout <<setw(12)<<"\t| No DVD " << " | " << "  Genre " << " |" << "        Judul   " << " \t| " << "Harga Sewa Per Hari |\n";
        cout <<setw(12)<<"\t===============================================================" <<endl;
        for(int d=0; d<jmldvd; d++)
        {
            cout<<setw(12)<<" "<<x[d].nodvd<<"   "<<x[d].genre<<" \t"<<x[d].judul<<"        "<<"     Rp."<<x[d].harga<<endl;
        }
				 break;
	}

}
void dscmergnodvd(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        dscmergnodvd(x,low,mid);
        dscmergnodvd(x,mid+1,high);
        s_dscmergnodvd(x,low,mid,high);
    }
}

void s_dscmergnodvd(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].nodvd>=x[z].nodvd){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}

void dscmerggenre(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        dscmerggenre(x,low,mid);
        dscmerggenre(x,mid+1,high);
        s_dscmerggenre(x,low,mid,high);
    }
}

void s_dscmerggenre(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].genre>=x[z].genre){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}
void dscmergjudul(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        dscmergjudul(x,low,mid);
        dscmergjudul(x,mid+1,high);
        s_dscmergjudul(x,low,mid,high);
    }
}

void s_dscmergjudul(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].judul>=x[z].judul){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}
void dscmergharga(datarental x[],int first, int last)
{
    int mid,low,high;
    low = first; high = last;
    if(low<high)
    {
        mid = (low+high)/2;
        dscmergharga(x,low,mid);
        dscmergharga(x,mid+1,high);
        s_dscmergharga(x,low,mid,high);
    }
}

void s_dscmergharga(datarental x[],int low,int mid,int high)
{
    int w,y,z,a;
    datarental temp[100];
    w=low;
    y=low;
    z=mid+1;
    while((w<=mid) && (z<=high))
    {
        if(x[w].harga>=x[z].harga){
            temp[y]=x[w];
            w++;
        }else{
            temp[y]=x[z]; z++;
        }
        y++;
    }

    if(w>mid){
        for(a=z;a<=high;a++){
            temp[y]=x[a]; y++;
        }
    }else{
        for(a=w;a<=mid;a++){
            temp[y]=x[a]; y++;
        }
    }

    for(a=low;a<=high;a++){
        x[a]=temp[a];
    }
}

void penjualan()
{   file = fopen("penjualan.txt","w");
    int p,ttl=0;
    cout<<"\n\nMENU PENJUALAN HARI INI\n\n";

    cout<<"BANYAK PEMBELI\t: "; cin>>p;
    fwrite(&p,sizeof(p),1,file);

    for(int a=0; a<p; a++)
    {
        cout<<"\nKODE PEMBELI\t: "; cin>>jual[a].kode;
        cout<<"NAMA PEMBELI\t: "; cin.ignore(); getline(cin,jual[a].nama);
        cout<<"TOTAL BELANJA\t: "; cin>>jual[a].belanja;
        fwrite(&jual[a],sizeof(jual[a]),1,file);
    }
    for(int b=0; b<p; b++)
    {
        ttl=ttl + jual[b].belanja;
    }
    fwrite(&ttl,sizeof(ttl),1,file);
    cout<<"\n";
    fclose(file);
}

void outputpenjualan()
{   int p;
    file = fopen("penjualan.txt","r");
    fread(&p,sizeof(p),1,file);
    cout <<setw(12)<<"\n\t=============================================================" <<endl;
        cout <<setw(12)<<"\t| Kode Pembeli " << " |    " << "  Nama Pembeli " << "    |" << "      Total Belanja |\n";
        cout <<setw(12)<<"\t=============================================================" <<endl;
        for(int d=0; d<p; d++)
        {   fread(&jual[d],sizeof(jual[d]),1,file);
            cout<<setw(12)<<" "<<jual[d].kode<<"     \t"<<jual[d].nama<<"            \t"<<jual[d].belanja<<endl;
        }cout <<setw(12)<<"\t============================================================" <<endl;
        fread(&ttl,sizeof(ttl),1,file);
        cout<<"\nTOTAL PENDAPATAN\t: "<<ttl<<endl;

    fclose(file);
}
