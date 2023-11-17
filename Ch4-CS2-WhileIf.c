//Deskripsi Soal
/*
Tuan X merasa bahwa permainan sebelumnya sangat menguras isi dompetnya, sehingga para peserta
diberikan batas maksimum barang yang dapat dibeli.
Format Input:
● Barisan pertama berisi jumlah dana kartu kredit Tuan X dan jumlah maksimum barang yang dapat
diambil.
● Untuk baris selanjutnya, program akan terus meminta input angka dan akan berakhir jika jumlah
angka sudah melebihi batas kartu kredit Tuan Buas atau jumlah input sudah melebihi batas
maksimum barang yang dapat dibeli peserta.
Format Output:
● Program mencetak jumlah barang yang dibayar oleh Tuan X.

Test case :
Input :
10 3
1
2
3
Output = 3
//
Input :
25 5
10
10
10
Output = 2
//
Input :
1 1
2
Output = 0
*/

#include <stdio.h>
//protoype
void paid(int m, int n);
//
int main (){
	int m, n;
	scanf("%d %d",&m,&n); //scan max kredit dan max barang
	paid(m,n);//panggil fungsi paid
	return 0;
}
//
void paid(int m, int n){
	int able=0,kredit=m,amount=n; //kredit untuk batasan uang, amount untuk batasan banyak barang, able untuk barang yg mampu dibayar
	int buy,spend=0; //buy untuk harga beli barang, spend untuk total harga barang
	while (amount>0 && kredit>=spend){ //selagi amount masih >0 dan kredit masih lebih besar atau sama dengan uang dipakai
		scanf("%d",&buy); //scan harga barang beli
		spend+=buy; //harga barang ditambahkan kedalam total
		if (kredit>=spend){ //selagi total harga tidak lebih besar atau sama dengan kredit
			able++; //tambahkan barang sebagaai mampu dibayar
		}
		amount--; //setelah satu barang dibeli, limit banyak barang berkurang
	}
	printf("%d",able); //print banyak barang yang mamou dibayar
}
