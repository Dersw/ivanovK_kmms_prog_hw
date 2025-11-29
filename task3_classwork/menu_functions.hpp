#pragma once

#include "menu.hpp"

namespace Dersw {
    const Dersw::MenuItem* show_main_menu(const MenuItem* current);
    const Dersw::MenuItem* show_2lvl_menu(const MenuItem* current);
    const Dersw::MenuItem* show_3lvl_menu(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);

    const MenuItem* study_go_back(const MenuItem* current);

    const MenuItem* study_lang(const MenuItem* current);
    const MenuItem* study_alghorithms(const MenuItem* current);
    const MenuItem* study_other(const MenuItem* current);

    const MenuItem* study_other_db(const MenuItem* current);
    const MenuItem* study_other_multithread_prog(const MenuItem* current);
    const MenuItem* study_other_net_tech(const MenuItem* current);
}
