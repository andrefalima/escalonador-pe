#define TAM_LOG 100

/*OBS: toda estrat�gia de escalonamento de tarefas gerar um log no arquivo logExec.txt*/

typedef struct escalonador Escalonador;

/*
<<Nome>>: carregarProcessos 
<<Objetivo>>: Permitir que os dados do arquivo de entrada para o escalonador 
			  de processos seja lido para a estrutura de mem�ria (vetor de structs)
<<Entrada>> : nenhuma (void) - o arquivo de processo ter� sempre o nome "processos.txt"
<<Sa�da>>   : Vetor de structs de Processos 
*/
Escalonador *carregarProcessos(void);

/*
<<Nome>>: setarConfiguracoes 
<<Objetivo>>: setar todas as configura��es do escalonador de tarefas.
<<Entrada>> : struct escalonador com as configura��es atuais.
<<Sa�da>>   : struct escalonador com as novas configura��es.
*/
void setarConfiguracoes(Escalonador* e);

/* 
<<Nome>>: executarFCFC 
<<Objetivo>>: Executar as estrat�gia de escalonamento FCFC (Fisrt Come First Served)			  
<<Entrada>> : Struct Escalonador com todos os dados dos processos a serem escalonados e as configura��es do 
			  escalonamento
<<Sa�da>>   : tempo m�dio de execu��o, tempo m�dio de espera e grava��o no arquivo de logs
*/
void executarFCFS(Escalonador* e);

/* 
<<Nome>>: executarRoundRobin 
<<Objetivo>>: alterar			  
<<Entrada>> : alterar
<<Sa�da>>   : alterar
*/
void executarRoundRobin(Escalonador * e);

/* 
<<Nome>>: executarSJF 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Sa�da>>   : ????
*/
void executarSJF(Escalonador * e);
/* 
<<Nome>>: executarSRTF 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Sa�da>>   : ????
*/
void executarSRTF(Escalonador * e);
/* 
<<Nome>>: executarPrioridadeCooperativa 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Sa�da>>   : ????
*/
void executarPrioridadePreemptiva(Escalonador * e);
/* 
<<Nome>>: executarPrioridadePreemptiva 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Sa�da>>   : ????
*/
void executarPrioridadePreemptiva(Escalonador * e);

/* 
<<Nome>>: executarPrioridadePreemptivaEnvTarefas 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Sa�da>>   : ????
*/
void executarPrioridadePreemptivaEnvTarefas(Escalonador * e);


