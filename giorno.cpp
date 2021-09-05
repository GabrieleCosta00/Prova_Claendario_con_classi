//
// Created by Gabriele on 01/09/2021.
//

#include <vector>
#include <string>
#include "exam.h"
#include "slot.h"
#include "giorno.h"


bool giorno::set_id_esame_nel_giorno(const string &id_esame, const string &id_cds, const int anno, const int n_slot_necessari) {

    bool esame_inserito;
    int ins_nello_slot = 0;

    while((ins_nello_slot + n_slot_necessari -1) < n_slot)
    {
        for(int i=0; i < n_slot_necessari; i++)
        {
            if (_fasce_orarie[i].set_id_esame_nello_slot(const string &id_esame, const vector<string> &id_professori,
            int n_vers_paral))
            {
                esame_inserito = true;
            }
            else
            {
                esame_inserito = false;
            }
        }

        if (esame_inserito)
        {
            _id_cds_inseriti.push_back(id_cds);
            _anni_inseriti.push_back(anno);
            return true;
        }
        else
        {
            ins_nello_slot++;
        }
    }

    return false;

}
