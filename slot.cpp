//
// Created by Gabriele on 01/09/2021.
//

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include "slot.h"

using namespace std;

void slot::set_id_esame_nello_slot(const string &id_esame) {

    _id_esami.push_back(id_esame);

}

const vector<string> &slot::get_id_esami_dallo_slot() const {
    return _id_esami;
}
