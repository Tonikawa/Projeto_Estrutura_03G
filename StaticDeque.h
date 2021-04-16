
//  Created by:
//  Gabriel Batista Cristiano
//  TIA: 32090722

//  Júlia Carvalho de Souza Castro
//  TIA: 32022298

#ifndef StaticDeque_h
#define StaticDeque_h

const int MAX_CAPACITY = 10;

struct StaticDeque
{
    int front, rear, count; // front e rear indicam os índices do primeiro e ultimo elemento respectivamente
    char value[MAX_CAPACITY];
};

// Insere o elemento elem no início da fila dupla deque, se deque não estiver cheia.
bool InsertFront (StaticDeque& deque, char elem);

//Insere o elemento elem no fim da fila dupla deque, se deque não estiver cheia.
bool InsertBack(StaticDeque& deque, char elem);

//Remove e retorna o primeiro elemento da fila dupla deque, se deque não estiver vazia.
char RemoveFront(StaticDeque& deque);

//Remove e retorna o último elemento da fila dupla deque, se deque não estiver vazia.
char RemoveBack(StaticDeque& deque);


//Retorna uma referência do elemento que está no começo da fila dupla (mas não o remove), se deque não estiver vazia.
char Front(StaticDeque& deque);

//Retorna uma referência do elemento que está no fim da fila dupla (mas não o remove), se deque não estiver vazia.
char Back(StaticDeque& deque);
  
//Cria e retorna uma fila dupla vazia.
StaticDeque Create();

//Esvazia a fila dupla (remove todos os elementos da fila).
bool Clear(StaticDeque& deque);

//Retorna a capacidade da fila dupla.
int Size(StaticDeque& deque);

//Retorna a quantidade de elementos na fila dupla.
int Count(StaticDeque& deque);

//Retorna true se a fila dupla estiver vazia ou false, caso contrário.
bool IsEmpty(StaticDeque& deque);


          
#endif /* StaticDeque_h */
