//
// Created by Gabriele on 01/09/2021.
//

#ifndef PROVA_CLAENDARIO_CON_CLASSI_SLOT_H
#define PROVA_CLAENDARIO_CON_CLASSI_SLOT_H

#include "giorno.h"

class slot : public giorno {

private:

    vector <string> _id_esami;

public:

    slot();
    void set_id_esame_nello_slot(const string &id_esame);





};


#endif //PROVA_CLAENDARIO_CON_CLASSI_SLOT_H
