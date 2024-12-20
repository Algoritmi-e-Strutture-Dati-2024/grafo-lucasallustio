#include <iostream>
#include "Grafo.cpp"

using namespace std;

int main() {
    Grafo<int> grafo;

    grafo.aggiungiNodo(Terlizzi);
    grafo.aggiungiNodo(Molfetta);
    grafo.aggiungiNodo(Bisceglie);
    grafo.aggiungiNodo(Trani);
    grafo.aggiungiNodo(Corato);

    grafo.aggiungiArco(Terlizzi, Molfetta, 10);
    grafo.aggiungiArco(Terlizzi, Bisceglie, 18);
    grafo.aggiungiArco(Molfetta, Trani, 20);
    grafo.aggiungiArco(Bisceglie, Corato, 17);
    grafo.aggiungiArco(Trani, Corato, 14);
    grafo.aggiungiArco(Corato, Molfetta, 24);

    grafo.stampa();

   if (grafo.verificaNodo(Bisceglie)) {
    cout << "Esiste il nodo Bisceglie? Sì" << endl;
} else {
    cout << "Esiste il nodo Bisceglie? No" << endl;
}


 if (grafo.verificaArco(Terlizzi, Molfetta)) {
    cout << "Esiste un arco tra Terlizzi e Molfetta? Sì" << endl;
} else {
    cout << "Esiste un arco tra Terlizzi e Molfetta? No" << endl;
}

   if (grafo.verificaArco(Terlizzi, Trani)) {
    cout << "Esiste un arco tra Terlizzi e Trani? Sì" << endl;
} else {
    cout << "Esiste un arco tra Terlizzi e Trani? No" << endl;
}

    grafo.nodiAdiacenti(Terlizzi);

    grafo.rimuoviArco(Terlizzi, Molfetta);
    cout << "Matrice di Adiacenza dopo la rimozione dell'arco tra Terlizzi e Molfetta:" << endl;
    grafo.stampa();

    grafo.rimuoviNodo(Bisceglie);
    cout << "Matrice di Adiacenza dopo la rimozione del nodo Bisceglie:" << endl;
    grafo.stampa();

    grafo.aggiungiNodo(Bitonto);
    grafo.aggiungiArco(Corato, Bitonto, Ruvo);
    cout << "Matrice di Adiacenza dopo l'aggiunta del nodo Bitonto e dell'arco tra Corato e Bitonto:" << endl;
    grafo.stampa();

    cout << "Il nodo Terlizzi è connesso al nodo Corato? " << (grafo.verificaArco(Terlizzi, Corato) ? "Sì" : "No") << endl;

    int arcoMinimo = grafo.arcoConPesoMinore(5);
    if (arcoMinimo != -1) {
        cout << "L'arco con il peso minimo da Corato ha peso: " << arcoMinimo << endl;
    } else {
        cout << "Non ci sono archi uscenti da Corato." << endl;
    }

    return 0;
}
