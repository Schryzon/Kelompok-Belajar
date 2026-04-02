#include <iostream>

// Program kalian ketika jalan, di mana sih? bagaimana sih?
// Dialokasi dalam memori (RAM)

// Deretan dari nilai berdasarkan tipe data tertentu (HANYA 1 JENIS)
// Semua nilainya pada satu "wadah" yang sama

// ARRAY 1 DIMENSI
// [1, 2, 3, 4, 5, 6, ...]
int a = 0;
int b = 1;
// a, b, abc_1, abc_2, abc_3, ...

// GAME_1, GAME_2, GAME_4 (ONGOING)
// Program selesai -> nilai di posisi memori kita ingin pakai belum diclear
// Init array, c_6 --> mungkin tetap setelah GAME_1 dimatikan!
// 4203765, 3565, 0, 1, ...

// ['j','a','y'] --> bagaimana sih cara menghapus 'a'? bagaimana cara mengubah "jay" jadi "yaj"?
// [42, 43, ???], 54
// ['a', 'b', 'c'] --> ubah isi array ini jadi ['x', 'y', 'z']? 'A' = 65 (ASCII)

int abc[] = {1, 2, 3, 4, 5}; // -> 1, 2, 3, 4, 5

int c[6] = {4, 7, 1, 5, 6}; // --> ??? kemungkinan besar dianggap 0 di posisi terakhir!

// Ambil posisi relatif dengan n-1
// 1-1 = 0 --> index nol
// 2-1 = 1 --> index ke-satu
// 7-1 = 6 --> index ke-enam

// Di dalam memori, array itu diisi: a, b, c_1, c_2, c_3, ...,  1, 2, 3, ...

// Fungsi array ini apaan sih?
// For loop!!!


// ARRAY 2 DIMENSI --> Simply matriks
int def[3][3] = {
	{1, 2, 3},
	{0, 0, 0},
	{1, 1, 1}
}; // 3 Baris, 3 Kolom!

// ARRAY N DIMENSI --> Infinite!!!
// int ghi[][][][][][] = {{{{{{}}}}}};

int main(){
	std::cout<<c[15]<<std::endl; // Kenapa sih boleh begini? --> kalian itu ngakses yang bukan milik kalian
	// Bahasa tingkat rendah? -> dia lebih percaya manusia yang ngoding
	// gak terlalu pinter dalam memahami masalahnya

	abc[3] = a;
	c[15] = 67; // Bisa jadi di posisi ini ada sebuah aplikasi yang dimiliki Windows

	std::cout<<c[15]<<std::endl;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			def[i][j] = 3 + def[i][j];
			std::cout<<def[i][j];
		}
		std::cout<<std::endl;
	}

	// Coba kalian bikin matriks 4x4 yang bisa rotasi 90 derajat sebanyak n kali
	
	return 0;
}
