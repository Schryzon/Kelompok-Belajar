#include <iostream>

// Apa sih itu looping??
// Fungsinya ngapain??

// Ngitung hasil dari perkalian 1 miliar angka...?
// Bisa aja, tapi kapan selesainya?

// Solve masalah terkait hal hal "monoton" atau yang ruwet kalo kita ngerjain sendiri
// Dia itu stepnya simpel, cuma banyak


// global vs local
int counter = 99; // --> tingkatannya lebih tinggi dan dapat diakses di mana aja
// dianggap global dalam keseluruhan program, lebih tinggi kastanya

// break, continue ...?

int main(){

	// FOR --> Loop yang terbatas atau ada akhiran pasti
	// Sigma a sampai b untuk kalkulasi n * i ...
	for(int counter = 0; counter < 10; counter++){ // --> counter menjadi variable local
		// Lakukan apa aja sampai counter tidak kurang dari 10
		std::cout<<counter<<" ";
	}
	std::cout<<std::endl;

	for(int counter = 0; counter < 10; counter++){ // --> counter menjadi variable local
			// Lakukan apa aja sampai counter tidak kurang dari 10
			if(counter > 5) continue; // --> Reset, tapi counter++ dijalanin 6, 7, 8, 9 KESKIP semua!
			std::cout<<counter<<" ";
		}
	std::cout<<std::endl;

	std::cout<<counter<<std::endl;

	std::cin.get();

	/*
	for(; ;){
			std::cout<<"a"<<" ";
		}
	std::cout<<std::endl;
	*/

	// WHILE
	float nilai_approximate = 0; // --> i dianggap global dalam fungsi main
	float pi = 3.14;
	while(nilai_approximate < pi){ // --> bagian kondisi
		std::cout<<nilai_approximate<<std::endl;
		if(nilai_approximate == 3){
			// countinue; --> reset
			break; // --> AKHIRI LOOP saat ini
		}
		nilai_approximate += 1; // --> bagian pergantian nilai i setelah loop
	}
	std::cout<<nilai_approximate<<std::endl;

	// DO WHILE
	// Kenapa sih ada While vs Do while?
	// Pada tahun 1990an program harus mulai dengan nampilin menu langsung
	int again = true; // Gak bisa negative
	do{
		std::cout<<"Selamat datang di program kami"<<std::endl;
		std::cout<<"Tampilin lagi?";
		std::cin>>again;
	}while(again != false);

	// Di sisdig kita diajarin kalo sinyal digital HANYA ada 2
	// HIGH (1), true --> Semua yang gak 0 itu TRUE; -99, 120, 60, 1, 67 --> TRUE!!
	// LOW (0), false

	return 0;
}
