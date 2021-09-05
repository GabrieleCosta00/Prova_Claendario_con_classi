//
// Created by Gabriele on 01/09/2021.
//

#ifndef PROVA_CLAENDARIO_CON_CLASSI_GIORNO_H
#define PROVA_CLAENDARIO_CON_CLASSI_GIORNO_H


class giorno{

private:

    vector <slot> _fasce_orarie;
    vector <string> _id_cds_inseriti;
    vector <int> _anni_inseriti;

public:

    giorno();
    bool set_id_esame_nel_giorno(const string &id_esame, const string &id_cds, const int anno,
                                 const int n_slot_necessari, const vector<string> &id_professori, int n_vers_paral);

};


#endif //PROVA_CLAENDARIO_CON_CLASSI_GIORNO_H
