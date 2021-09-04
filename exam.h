//
// Created by Gabriele on 01/09/2021.
//

#ifndef PROVA_CLAENDARIO_CON_CLASSI_EXAM_H
#define PROVA_CLAENDARIO_CON_CLASSI_EXAM_H
#define n_max_gruppo 5

#include <vector>

using namespace std;

/*struct Esame {
    int _durata_esame;
    int _t_ingresso;
    int _t_uscita;
    string _modalita;
    string _luogo;

};*/

class exam {

private:
    string _id;
    bool _piazzato;
    bool _gruppo_piazzato[n_max_gruppo]{};
    int _durata;
    int _t_ingresso, _t_uscita;
    string _prof;
    int _semestre;
    int _n_iscritti;
    int _n_gruppo;
    vector<string> _id_gruppo;

public:
    exam();

    exam(const string &id, int durata,const string &prof, int n_gruppo, const vector<string> &id_gruppo, int iscritti, int semestre,
         int t_ingresso, int t_uscita);

    void print_exam();

    void set_gruppo_piazzato(bool gruppo_piazzato, int n_gruppo);

    void set_piazzato(bool piazzato);

    string get_id() const;

    int get_durata() const;

    string get_prof() const;

    int get_n_iscritti() const;

    int get_t_ingresso() const;

    int get_t_uscita() const;

    int get_semestre() const;

    int get_n_gruppo() const;

    const vector<string> &get_id_gruppo() const;
};


#endif //PROVA_CLAENDARIO_CON_CLASSI_EXAM_H
