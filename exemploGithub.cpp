#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int nota=0, contador=10;
	
	while(contador < 5){
		
		printf("Coloque sua a nota do aluno %d :", contador);
		scanf("%d", &nota);
		printf("A nota do aluno %d eh %d: \n", contador, nota);		
		contador++;	
			
	}
	system("pause");
	
}

