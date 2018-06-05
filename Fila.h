/* ********************************************************************* */
/* Disciplina: Estruturas de Dados 2                                     */
/* Professor:Andr�                                                       */ 
/* Objetivo de Programa: Interface da TAD Fila (de float)                */
/* T�pico da Disciplina: Estrutura de Dados do Tipo Fila                 */
/* ********************************************************************* */

/* Estrutura de Dados que armazena a Fila*/
typedef struct fila Fila;

/* Fun��o que cria a Fila*/
Fila* cria (void);

/* Procedimento Inserir na Fila */
void insere (Fila* f, int v);

/* Fun��o Retirar da Fila */
int retira (Fila* f);

/* Fun��o que verifica se a Fila est� vazia*/
int vazia (Fila* f);

/* Procedimento para liberar a �rea de mem�ria reservada para a Fila*/
void libera (Fila* f);

/* Fun��o que retorna o tamanho da Fila */
int tamanho(Fila* p);

/* Listar elementos da Fila */
void imprime(Fila* p);
