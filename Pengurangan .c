#include <stdio.h>

int addition(float a,float b) {
  return a + b;
}
int subtraction(float a,float b) {
  return a - b;
}

int main() {
	float a,b; 
	float subtract,add; 
	int pilihan; 
	
	printf ("Silahkan pilih operasi yang diinginkan: \n[1]Pengurangan \n[2]Penjumlahan \n[3]Pembagian \n[4]Pembagian \n Pilihan:"); 
	scanf("%d",&pilihan);
	switch(pilihan){
		case 1:
				subtract=subtraction(a,b); 
				printf("Hasil pengurangan adalah:%.2f  \n",subtract); 
				break;
	}


	
	
	
	
 return 0;
}
