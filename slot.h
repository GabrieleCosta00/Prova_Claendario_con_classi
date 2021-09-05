//
// Created by Gabriele on 01/09/2021.
//

#ifndef PROVA_CLAENDARIO_CON_CLASSI_SLOT_H
#define PROVA_CLAENDARIO_CON_CLASSI_SLOT_H

#define n_max_slot 10

#include "giorno.h"

class slot : public giorno {

private:

    vector <string> _id_esami;

public:

    slot();
    bool set_id_esame_nello_slot(const string &id_esame, const vector <string> &id_professori, int n_vers_paral);
    const vector<string> &get_id_esami_dallo_slot() const;

};


#endif //PROVA_CLAENDARIO_CON_CLASSI_SLOT_H
