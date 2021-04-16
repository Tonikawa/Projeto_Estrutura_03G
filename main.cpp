
//  Created by:
//  Gabriel Batista Cristiano
//  TIA: 32090722

//  Júlia Carvalho de Souza Castro
//  TIA: 32022298

#include <iostream>
#include "StaticDeque.h"

using namespace std;



int main()
{
    

    setlocale(LC_ALL, "pt_BR");

    StaticDeque deque = Create();
    InsertBack(deque, 'b');
    cout << "InsertBack: \n" << "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    InsertBack(deque, 'c');
    cout << "InsertBack: \n" << "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    InsertBack(deque, 'd');
    cout << "InsertBack: \n" << "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    InsertFront(deque, 'a');
    cout << "InsertFront: \n"<< "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    RemoveBack(deque);
    cout << "RemoveBack: \n"<< "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    RemoveFront(deque);
    cout << "RemoveFront: \n"<< "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    cout << "A fila esta vazia? " << IsEmpty(deque) << "\n";
    Clear(deque);
    cout << "Clear: \n"<< "Front: " << Front(deque) << "\nBack: " << Back(deque) << " (" << Count(deque) << "/" << Size(deque) << ")\n\n";
    


    
}


