/* Description
IND :
Hari ini anda mendapat undangan untuk mengikuti suatu permainan oleh Tuan X. Pada permainan tersebut,
anda berhak untuk berbelanja barang sebanyak mungkin dari sebuah toko. Tuan X yang akan membayar
seluruh belanjaan anda sampai nominal seluruh belanjaan anda mencapai batas penggunaan kartu kredit
Tuan X. Tentukan seberapa banyak belanjaan anda yang dibiayai oleh Tuan X.
Format Input:
● Baris pertama berisi jumlah dana kartu kredit Tuan X.
● Untuk baris selanjutnya, program akan terus meminta input angka dan akan berakhir jika jumlah
angka sudah melebihi batas kartu kredit Tuan X.
Format Output:
● Program mencetak jumlah barang yang dibayar oleh Tuan X.
---------------------------------------------------------------
ENG :
Today you are invited to a game by Lord X. In such a game, 
you are entitled to buy as many goods as possible from a store. 
Mr. X who will pay your entire expenditure until the nominal total of your expenditures reaches the limit of your credit card. 
Specify how much of your spending is financed by Mr X. 
Input format: 
● The first row contains the amount of funds from the credit card Mr.X. 
● For the next row, the program will continue to ask for the number input and will end if the number amount has already exceeded the number limit of Mr.X
Output fotmat :
● Program print the number of goods thats paid by Mr.X
---------------------------------------------------------------
Test Case Program:
Input :
10
1
2
3
4
5
Output = 4
//
Input :
25
10
10
10
Output = 2
//
Input :
1
2
Output = 0
*/

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

