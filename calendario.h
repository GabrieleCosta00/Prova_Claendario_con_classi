//
// Created by Gabriele on 02/09/2021.
//

#ifndef PROVA_CLAENDARIO_CON_CLASSI_CALENDARIO_H
#define PROVA_CLAENDARIO_CON_CLASSI_CALENDARIO_H

#include <vector>
#include "exam.h"

using namespace std;

class calendario {

    private:
        int _n_giorni, _n_slot, _n_aule, _n_celle;
        int _sessione;
        class cell {
            private:
                string _id_esame;
                int _durata_esame;
                string _prof_esame;

            public:
                cell();
                void set_cell(const string &id_esame, int durata_esame, const string &prof_esame);
                void print_cell() const;
                string get_id_esame() const;
                string get_prof_esame() const;
        };
        vector <cell> _celle;

    public:
        calendario();
        calendario(int n_giorni, int n_slot, int n_aule, int sessione);
        void print_calendario();
        void prova_setter();
        void ins_esame(exam* esame, int cont, int n_gruppo);
        bool mettibile(exam* esame, int cont);
        bool prof_libero(exam* esame, int cont);
        int get_aula_da_cont(int cont) const;

};


#endif //PROVA_CLAENDARIO_CON_CLASSI_CALENDARIO_H