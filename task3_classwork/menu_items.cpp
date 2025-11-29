#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const Dersw::MenuItem Dersw::STUDY_OTHER_DB = {
    "1 - Хочу учить базы данных!", Dersw::study_other_db, &Dersw::STUDY_OTHER
};
const Dersw::MenuItem Dersw::STUDY_OTHER_MULTITHREAD_PROG = {
    "2 - Хочу учить многопоточное программирование!", Dersw::study_other_multithread_prog, &Dersw::STUDY_OTHER
};
const Dersw::MenuItem Dersw::STUDY_OTHER_NET_TECH = {
    "3 - Хочу учить сетевые технологии!", Dersw::study_other_net_tech, &Dersw::STUDY_OTHER
};
const Dersw::MenuItem Dersw::STUDY_OTHER_GO_BACK = {
    "0 - Вернуться назад", Dersw::study_go_back, &Dersw::STUDY_OTHER
};

namespace {
    const Dersw::MenuItem* study_other_children[] = {
        &Dersw::STUDY_OTHER_GO_BACK,
        &Dersw::STUDY_OTHER_DB,
        &Dersw::STUDY_OTHER_MULTITHREAD_PROG,
        &Dersw::STUDY_OTHER_NET_TECH,
    };
    const int study_other_size = sizeof(study_other_children) / sizeof(study_other_children[0]);
}

const Dersw::MenuItem Dersw::STUDY_LANG = {
    "1 - Хочу учить языки программирования!", Dersw::study_lang, &Dersw::STUDY
};
const Dersw::MenuItem Dersw::STUDY_ALGHORITHMS = {
    "2 - Хочу учить алгоритмы и структуры!", Dersw::study_alghorithms, &Dersw::STUDY
};
const Dersw::MenuItem Dersw::STUDY_OTHER = {
    "3 - Хочу учить другие технологии!", Dersw::show_menu, &Dersw::STUDY, study_other_children, study_other_size
};
const Dersw::MenuItem Dersw::STUDY_GO_BACK = {
    "0 - Вернуться назад", Dersw::study_go_back, &Dersw::STUDY
};

namespace {
    const Dersw::MenuItem* study_children[] = {
        &Dersw::STUDY_GO_BACK,
        &Dersw::STUDY_LANG,
        &Dersw::STUDY_ALGHORITHMS,
        &Dersw::STUDY_OTHER,
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Dersw::MenuItem Dersw::STUDY = {
    "1 - Хочу учить программирование!", Dersw::show_menu, &Dersw::MAIN, study_children, study_size
};
const Dersw::MenuItem Dersw::PLAY_SOCCER = {
    "0 - Хочу играть в футбол!", Dersw::exit, &Dersw::MAIN
};

namespace {
    const Dersw::MenuItem* main_children[] = {
        &Dersw::PLAY_SOCCER,
        &Dersw::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Dersw::MenuItem Dersw::MAIN = {
    nullptr, Dersw::show_menu, nullptr, main_children, main_size
};
