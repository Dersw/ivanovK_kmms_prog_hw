#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const Dersw::MenuItem Dersw::STUDY_SUMM = {
    "1 - Хочу научиться складывать!", Dersw::study_summ, &Dersw::STUDY
};
const Dersw::MenuItem Dersw::STUDY_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", Dersw::study_substract, &Dersw::STUDY
};
const Dersw::MenuItem Dersw::STUDY_MULTIPLY = {
    "3 - Хочу научиться умножать!", Dersw::study_multiply, &Dersw::STUDY
};
const Dersw::MenuItem Dersw::STUDY_DEVIDE = {
    "4 - Хочу научиться делить!", Dersw::study_devide, &Dersw::STUDY
};
const Dersw::MenuItem Dersw::STUDY_GO_BACK = {
    "0 - Вернуться назад", Dersw::study_go_back, &Dersw::STUDY
};

namespace {
    const Dersw::MenuItem* study_children[] = {
        &Dersw::STUDY_GO_BACK,
        &Dersw::STUDY_SUMM,
        &Dersw::STUDY_SUBSTRACT,
        &Dersw::STUDY_MULTIPLY,
        &Dersw::STUDY_DEVIDE,
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Dersw::MenuItem Dersw::STUDY = {
    "1 - Хочу научиться математике!", Dersw::show_menu, &Dersw::MAIN, study_children, study_size
};
const Dersw::MenuItem Dersw::EXIT = {
    "0 - Я лучше пойду посплю...", Dersw::exit, &Dersw::MAIN
};

namespace {
    const Dersw::MenuItem* main_children[] = {
        &Dersw::EXIT,
        &Dersw::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Dersw::MenuItem Dersw::MAIN = {
    nullptr, Dersw::show_menu, nullptr, main_children, main_size
};
