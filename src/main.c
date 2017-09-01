/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

  char string[100];
  char *word = (char *)malloc(100 * sizeof(char)); 
  int palavras;
  size_t bufferSize = 100;
  int letters;
  int i;
  int flag = 0;
   palavras = 0;
  

  printf("entre com as palavras \n");
  
  
	letters = getline(&word,&bufferSize , stdin);	
        for (i = 0; i < letters; i++)
	{	
		if ((int) (word[i] - '0') <= 9 && (int)(word[i] - '0') > 0) {
			flag = 1;
		} else if (word[i] ==  ' ' || word[i] == '\n') {
	 		if (flag == 0) 
        			palavras++;
			flag = 0;        
	         }
    	}
  
  printf("tem %d palavras aqui! \n", palavras );

 
   return 0;
}



