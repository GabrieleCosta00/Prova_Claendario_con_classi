//
// Created by Gabriele on 01/09/2021.
//
#include <iostream>
#include "exam.h"

#define LOGV(x) for(auto i: x) {std::cout << i <<" ";}

using namespace std;

exam::exam() {
    _id = '0';
    _piazzato = false;
    _durata = 1;
    _prof = '0';
    _n_gruppo = 1;
    _n_iscritti = 0;
    _semestre = 1;
    _t_ingresso = _t_uscita = 0;
    for (int j = 0; j < _n_gruppo; j++) {
        _gruppo_piazzato[j] = false;
    }
    for (int j = 0; j < _n_gruppo; j++) {
        _id_gruppo.push_back("0");
    }
    _id_gruppo[0] = _id;
}

exam::exam(const string &id, int durata,const string &prof, int n_gruppo, const vector<string> &id_gruppo, int iscritti,
           int semestre, int t_ingresso, int t_uscita) {
    _id = id;
    _durata = durata;
    _prof = prof;
    _n_iscritti = iscritti;
    _semestre = semestre;
    _t_ingresso = t_ingresso;
    _t_uscita = t_uscita;
    _n_gruppo = n_gruppo;

    _id_gruppo = id_gruppo;

    _piazzato = false;
    for (int j = 0; j < _n_gruppo; j++) {
        _gruppo_piazzato[j] = false;
    }
}

void exam::print_exam() {
    cout << "Esame id: " << _id << "\tStato: ";
    for (int j = 0; j < _n_gruppo; j++) {
        if (get_id_gruppo()[j] != "0") {
            cout << _gruppo_piazzato[j] << " ";
        } else {
            cout << "0 ";
        }
    }
    cout << "\tDurata: " << _durata <<
         "\t Prof: " << _prof << "\tGruppo: ";
        LOGV(get_id_gruppo());
    cout << endl;
}

void exam::set_gruppo_piazzato(bool gruppo_piazzato, int n_gruppo) {
    _gruppo_piazzato[n_gruppo] = gruppo_piazzato;
}

void exam::set_piazzato(bool piazzato) {
    _piazzato = piazzato;
}

string exam::get_id() const {
    return _id;
}

int exam::get_durata() const {
    return _durata;
}

string exam::get_prof() const {
    return _prof;
}

int exam::get_n_iscritti() const {
    return _n_iscritti;
}

int exam::get_t_ingresso() const {
    return _t_ingresso;
}

int exam::get_t_uscita() const {
    return _t_uscita;
}

int exam::get_n_gruppo() const {
    return _n_gruppo;
}

int exam::get_semestre() const {
    return _semestre;
}

const vector<string> &exam::get_id_gruppo() const {
    return _id_gruppo;
}
