#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#define N 5

int main(){
	float m[N][N];
    int i, j;

	for ( i = 0; i < N; i++){
		for (j = 0; j < N; j++) {
			m[i][j] = rand() / 10;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			std::count << setw(8) << setprecisio(5) << m[i][j] << std::endl;
		}
	}
	getch();
}

