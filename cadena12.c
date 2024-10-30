#include <stdio.h>
#include <string.h>

int main(){
  char palabra[100];
  int letras[26]={0};
  int i, longitud;

  printf("Introduce una palabra ");
  scanf("%s", palabra);
  longitud=strlen(palabra);
  for(i=0;i<longitud;i++){
    letras[palabra[i]-'a']++;
  }
  printf("Ocurrencias de cada letra:\n");
  for(i=0;i<26;i++){
    if(letras[i]>0){
        
            printf("%c: %d\n",'a' + i, letras[i]);
        }
    }
  }
   

