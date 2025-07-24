#include <stdio.h>
#include <stdlib.h>


int main(){
  
  FILE *pnt_arquivo;
  
  char nome_completo [150] = "Joao da Programacaoo";
  
  char texto_do_arquivo[200];
  
  //abrindo o arquivo
  pnt_arquivo = fopen("programadores.txt", "w");
  fprintf(pnt_arquivo, "%s", nome_completo);
  
  // fechando arquivo
  fclose(pnt_arquivo);  
  
  //abrindo o arquivo
  pnt_arquivo = fopen("programadores.txt", "a");
  fprintf(pnt_arquivo, "%s", "\nMaria Programadora");
  
  //fechando arquivo
  fclose(pnt_arquivo);
  
  //Abrindo arquivo para leitura do conte�do e exibi��o no console
  pnt_arquivo = fopen("programadores.txt", "r");
  
   printf("Esse texto veio do arquivo:\n\n");
  while(fgets(texto_do_arquivo, sizeof(texto_do_arquivo), pnt_arquivo) != NULL)
   printf("%s\n", texto_do_arquivo);
  
  fclose(pnt_arquivo);
  
  
  return 0;
}