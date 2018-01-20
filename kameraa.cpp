#include <iostream>
#include <string>
using namespace std;

class kamera {
    public:
        void jeniskamera(string kamera);
        string merkkamera;
        void tipekamera(string tipe);
        void ukurankamera(string ukuran);
        void hargakamera (int harga);
    
                
        };
int main(){
    kamera pocket,slr,dslr,instax; 

	pocket.merkkamera	="Merk Sony ";
	slr.merkkamera		="Merk Canon ";
	dslr.merkkamera	    ="Merk Nikon ";
	instax.merkkamera	="Merk Pentax ";
	
	cout << "Kamera Pocket: \n\n";
	cout << (pocket.merkkamera);
	pocket.tipekamera("Ixus 160 ");
	pocket.ukurankamera("20 megapixels ");
	pocket.hargakamera(3000000);
	cout <<"===================================\n\n";
	
	cout << "Kamera SLR: \n\n";
	cout << (slr.merkkamera);
	slr.tipekamera("SX710 ");
	slr.ukurankamera("30 megapixels ");
	slr.hargakamera(60000000);
	cout <<"===================================\n\n";
	
	cout << "Kamera DSLR: \n\n";
	cout << (dslr.merkkamera);
	dslr.tipekamera("G7X ");
	dslr.ukurankamera("24 megapixels ");
	dslr.hargakamera(4000000);
	cout <<"===================================\n\n";
	
	cout << "Kamera Instax: \n\n";
	cout << (instax.merkkamera);
	instax.tipekamera("K 50 ");
	instax.ukurankamera("16 megapixels ");
	instax.hargakamera(2000000);
	cout <<"===================================\n\n";
	
	}
void kamera::jeniskamera(string kamera){
	cout <<"\n"<<"merk "<<kamera<<endl;
}
void kamera::tipekamera(string tipe){
	cout <<"\n"<<"tipe "<<tipe<<endl;

}
	
void kamera::ukurankamera(string ukuran){
	cout <<"\n"<<"ukuran "<<ukuran<<endl;

}
void kamera::hargakamera(int harga){
	cout <<"\n"<<"harga "<<harga<<endl;

}
