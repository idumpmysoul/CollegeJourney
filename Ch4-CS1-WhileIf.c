#include <stdio.h>
//prototype
void paid(int n);
//
int main (void){
	int n;
	scanf("%d",&n); //scan max kredit dan max barang
	paid(n); //panggil fungsi paid
	return 0;
}
//
void paid(int kredit){
	int able=0, buy, spend=0; //buy untuk barang yang dibeli, spend untuk total harga barang keseluruhan
	while (kredit>=spend){
		scanf("%d",&buy); //scan harga barang
		spend+=buy; //harga barang ditambahkan kedalam total
		if (kredit>=spend){ //selagi total harga tidak lebih besar atau sama dengan kredit
		able++; //tambahkan barang sebagaai mampu dibayar
		}
		
	}
	printf("%d",able); //print banyak barang yang mamou dibayar
}

