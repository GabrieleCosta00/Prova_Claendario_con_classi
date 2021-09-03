#include <iostream>
#include <vector>
#include "exam.h"
#include "calendario.h"

#define LOGV(x) for(auto i: x){std::cout << i << endl;}

#define n_giorni 5
#define n_slot 6
#define n_aule 4
#define n_esami 20

using namespace std;

int main() {

    /*Ho fatto un vettore di esami (di tipo exam) e una classe calendario che contiene la classe cella,
    identificativa di giorno, slot e aula, contenente i dati dell'esame che verrà inserito.
    L'idea è di creare un vettore (vector) di celle univocamente determinate nel calendario da giorno, slot e aula,
    ed utilizzare il fatto che la classe cella sia all'interno della classe calendario per ottimizzare
    tutte le varie procedure*/

    vector<exam> esame(n_esami);

    exam e("AB01", 3, "D001", 2, {"EX01", "EX02"}, 100, 1, 30, 25);
    esame.push_back(e);

    exam esame_2("AB02", 2, "D002", 3, {"EX02","EX01","EX03"}, 200, 2, 20, 15);
    esame.push_back(esame_2);

    calendario cal(n_giorni, n_slot, n_aule, 1);

    cout << endl << "Esami raggruppati:\n";
    LOGV(e.get_id_gruppo());
    cout<<endl;

    for(auto & i : esame)
    {
        i.print_exam();
    }

    cal.prova_setter();

    cal.ins_esame(&esame[0], 25, 0);
    cal.ins_esame(&esame[1], 26, 0);
    cal.print_calendario();

    for(auto & i : esame)
    {
        i.print_exam();
    }
}