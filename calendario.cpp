//
// Created by Gabriele on 02/09/2021.
//

#include <iostream>
#include "calendario.h"

using namespace std;

calendario::calendario() {
    _n_giorni=0;
    _n_slot=0;
    _n_aule=0;
    _n_celle=0;
    _sessione=0;
    _celle.resize(int (_n_celle));
}

calendario::calendario(int n_giorni, int n_slot, int n_aule, int sessione) {
    _n_giorni=n_giorni;
    _n_slot=n_slot;
    _n_aule=n_aule;
    _sessione=sessione;
    _n_celle = _n_giorni * _n_slot * _n_aule;
    _celle.resize(int (_n_celle));
}

void calendario::print_calendario() {
    cout<<endl<<"Calendario: "<<endl<<endl;
    cout<<"Id esame - Durata - Prof     > Aule"<<endl<<endl<<"             v"<<endl<<"      Slot e Giorni"<<endl<<endl<<endl;

    int cont = 0;
    for(int i=0; i<_n_giorni; i++)
    {
        for(int j=0; j<_n_slot; j++)
        {
            for(int k=0; k<_n_aule; k++)
            {
                _celle[cont].print_cell();
                cont++;
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}

void calendario::prova_setter() {
    _celle[0].set_cell("AC03", 3, "D10");
    _celle[31].set_cell("AC04", 4, "D11");
}

void calendario::ins_esame(exam* esame, int cont, int n_gruppo) {
    bool parall_piazzato = true;
    esame->set_gruppo_piazzato(parall_piazzato, n_gruppo);
    for(int i=0; i<esame->get_durata(); i++)
    {
        _celle[cont + (i * _n_aule)].set_cell(esame->get_id(), esame->get_durata(), esame->get_prof());
    }
}

bool calendario::mettibile(exam *esame, int cont) {
    bool Mettibile = true;
    for(int j=0; j<esame->get_durata(); j++)
    {
        if (_celle[cont + (j * _n_aule)].get_id_esame() != "0")
            Mettibile = false;
    }
    return Mettibile;
}

bool calendario::prof_libero(exam *esame, int cont) {
    bool Prof_lbero = true;
    for(int j=0; j<esame->get_durata(); j++)
    {
        for (int k=0; k<_n_aule; k++)
        {
            if(_celle[cont + (j * _n_aule) + k].get_prof_esame() == esame->get_prof() && get_aula_da_cont(cont) != k)
                Prof_lbero = false;
        }
    }
    return Prof_lbero;
}

int calendario::get_aula_da_cont(int cont) const {
    int aula;
    aula = (cont % _n_slot) -1;
    return aula;
}

calendario::cell::cell() {
    _id_esame="0";
    _durata_esame=0;
    _prof_esame="0";
}

void calendario::cell::set_cell(const string &id_esame, int durata_esame, const string &prof_esame) {
    _id_esame=id_esame;
    _durata_esame=durata_esame;
    _prof_esame=prof_esame;
}

void calendario::cell::print_cell() const {
    cout<<"\t"<<_id_esame<<" - "<<_durata_esame<<" - "<<_prof_esame;
}

string calendario::cell::get_id_esame() const {
    return _id_esame;
}

string calendario::cell::get_prof_esame() const {
    return _prof_esame;
}
