# include <stdio.h>

int hanoi(int n){
	 if(n == 1){
		return 1;
	 }
	 else {
	      	return 2 * hanoi(n-1)+1;
	}
}
int main() {
	int n;
	printf("Numero de discos: ");
	scanf("%d", &n);
	printf("Numero de movientos %i \n", hanoi(n));
    	return 0;
}
