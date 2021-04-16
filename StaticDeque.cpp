
//  Created by:
//  Gabriel Batista Cristiano
//  TIA: 32090722

//  Júlia Carvalho de Souza Castro
//  TIA: 32022298

#include <iostream>
#include "StaticDeque.h"

using namespace std;
StaticDeque Create()
{
    StaticDeque deque = {0, 0, 0, {0}};
    return deque;
}


bool InsertFront (StaticDeque& deque, char elem)
{
    if(deque.count == Size(deque))
    {
        return false;
    }
    for(int i = Size(deque)- 1; i>0; i--)
    {
        deque.value[i] = deque.value[i-1];
    }
    deque.value[deque.front] = elem;
    ++deque.count;
    ++deque.rear;
    return true;
    
}


bool InsertBack(StaticDeque& deque, char elem)
{
   
    if(deque.count == Size(deque))
    {
        return false;
    }
    deque.value[deque.rear] = elem;
    //deque.rear = (deque.rear + 1) % Size(deque);
    ++deque.rear;
    ++deque.count;

    return true;
}


char RemoveFront(StaticDeque& deque)
{
    if(deque.count == Size(deque))
    {
        return '\0';
    }
    char temp = deque.value[deque.front];
    deque.value[deque.front] = '\0';
    ++deque.front;
    --deque.count;
    return temp;
}


char RemoveBack(StaticDeque& deque)
{
    if(deque.count == Size(deque))
    {
        return '\0';
    }
    char temp = deque.value[deque.rear];
    deque.value[deque.rear] = '\0';
    --deque.rear;
    --deque.count;
    return temp;
}


char Front(StaticDeque& deque)
{
    if(IsEmpty(deque))
    {
        return '\0';
    }
    return deque.value[deque.front];
}


char Back(StaticDeque& deque)
{
    char value = deque.value[deque.rear-1];
    return value;
}
  

bool Clear(StaticDeque& deque)
{
    while (!IsEmpty(deque))
    {
        RemoveFront(deque);
    }

    return IsEmpty(deque);
}


int Size(StaticDeque& deque)
{
    return sizeof(deque.value) / sizeof(deque.value[0]);
}


int Count(StaticDeque& deque)
{
    return deque.count;
}


bool IsEmpty(StaticDeque& deque)
{
    return deque.count == 0;

}
