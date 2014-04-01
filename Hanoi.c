# include <stdio.h>

void hanoi(int n, char a, char b, char c){
	 if(n == 1){
		printf("Mover de %c a %c \n",a,c);
		return;
	 }
	 else {
	      	hanoi(n-1, a, c, b);
	      	printf("Mover de %c a %c \n",a,c);
	      	hanoi(n-1, b, a, c);
	}
}
int main() {
	int n;
	printf("Numero de discos: ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B' , 'C');
    	return 0;
}
