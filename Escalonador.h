#define TAM_LOG 100

/*OBS: toda estratégia de escalonamento de tarefas gerar um log no arquivo logExec.txt*/

typedef struct escalonador Escalonador;

/*
<<Nome>>: carregarProcessos 
<<Objetivo>>: Permitir que os dados do arquivo de entrada para o escalonador 
			  de processos seja lido para a estrutura de memória (vetor de structs)
<<Entrada>> : nenhuma (void) - o arquivo de processo terá sempre o nome "processos.txt"
<<Saída>>   : Vetor de structs de Processos 
*/
Escalonador *carregarProcessos(void);

/*
<<Nome>>: setarConfiguracoes 
<<Objetivo>>: setar todas as configurações do escalonador de tarefas.
<<Entrada>> : struct escalonador com as configurações atuais.
<<Saída>>   : struct escalonador com as novas configurações.
*/
void setarConfiguracoes(Escalonador* e);

/* 
<<Nome>>: executarFCFC 
<<Objetivo>>: Executar as estratégia de escalonamento FCFC (First Come First Served)			  
<<Entrada>> : Struct Escalonador com todos os dados dos processos a serem escalonados e as configurações do 
			  escalonamento
<<Saída>>   : tempo médio de execução, tempo médio de espera e gravação no arquivo de logs
*/
void executarFCFS(Escalonador* e);

/* 
<<Nome>>: executarRoundRobin 
<<Objetivo>>: Executar as estratégias de escalonamento Round Robin			  
<<Entrada>> : Struct Escalonador com todos os dados dos processos a serem escalonados e as configurações do 
			  escalonamento
<<Saída>>   : tempo médio de execução, tempo médio de espera e gravação no arquivo de logs
*/
void executarRoundRobin(Escalonador * e);

/* 
<<Nome>>: executarSJF 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Saída>>   : ????
*/
void executarSJF(Escalonador * e);
/* 
<<Nome>>: executarSRTF 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Saída>>   : ????
*/
void executarSRTF(Escalonador * e);
/* 
<<Nome>>: executarPrioridadeCooperativa 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Saída>>   : ????
*/
void executarPrioridadePreemptiva(Escalonador * e);
/* 
<<Nome>>: executarPrioridadePreemptiva 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Saída>>   : ????
*/
void executarPrioridadePreemptiva(Escalonador * e);

/* 
<<Nome>>: executarPrioridadePreemptivaEnvTarefas 
<<Objetivo>>: ????			  
<<Entrada>> : ????
<<Saída>>   : ????
*/
void executarPrioridadePreemptivaEnvTarefas(Escalonador * e);


