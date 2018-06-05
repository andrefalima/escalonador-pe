/* ********************************************************************* */
/* Disciplina:  Estrutura de Dados 2                                      */
/* Professor:Andr�                                                       */ 
/* Objetivo de Programa: Implementa��o da TAD Fila (V1 - com vetor)      */
/*                       implementado como fila circular                 */
/* T�pico da Disciplina: Estrutura de Dados do Tipo Fila                 */
/* ********************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

#define N 100

/* Estutura de Dados ULtilizada */
struct fila {
   int ini, fim, total;
   int vet[N];
};

/*Fun��o Auxiliar para retornar o pr�ximo indice dispon�vel na fila
- implementa��o circular */

int incr (int i)
{
   if (i == (N-1)){  
      return 0;
   }
   else
   {
      return i+1;
   }
}

/* Fun��o para criar a Fila */
Fila* cria (void)
{
   Fila* f = (Fila*) malloc(sizeof(Fila));
   f->ini = 0;
   f->fim = -1;
   f->total = 0;   /* inicializa fila vazia */
   return f;
}

/* Procedimento para inserir um elemento na Fila */
void insere (Fila* f, int v)
{
   if (incr(f->fim) == f->ini) {    /* fila cheia: capacidade esgotada */
      if(f->total > 0)
      {
          printf("Fila Cheia.\n");
          getchar();
          exit(1);  /* aborta programa */
      }
   }
   /* insere elemento na pr�xima posi��o livre */
   f->fim = incr(f->fim); //fim guarda o pr�ximo ponto de insers�o
   f->vet[f->fim] = v;
   f->total++;
}

/* Fun��o para inserir na Fila */
int retira (Fila* f)
{
   int v;
   if (vazia(f)) {
      printf("Fila vazia.\n");
      getchar();
      exit(1);         /* aborta programa */
   }
   /* retira elemento do in�cio */
   v = f->vet[f->ini];
   f->ini = incr(f->ini);
   
   f->total--;
   
   if(f->total == 0){
   	f->ini = 0;
   	f->fim = -1;
   }
   
   return v;
}

/* Fun��o para verificar se a Fila est� vazia */
int vazia (Fila* f)
{
   return (f->total == 0);
}

int tamanho (Fila* f)
{
   return (f->total);
}

/* Procedimento para liberar a Fila */
void libera (Fila* f)
{
   free(f);
}

/* Procedimento para imprimir os elementos da Fila */
void imprime (Fila* f)
{
   int i;
   int fim = 0;
   if(!vazia(f)){       
       i = f->ini;
       while (!fim){            
             if(i == f->fim)
                 fim = 1;
             printf("%d\n",f->vet[i]);
             i = incr(i);       
       } 
   }
   else
   {
      printf("Fila vazia.\n");
      getchar();
      exit(1);      
   }    
}
