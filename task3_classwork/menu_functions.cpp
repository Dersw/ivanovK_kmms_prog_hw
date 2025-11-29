#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const Dersw::MenuItem* Dersw::show_menu(const MenuItem* current) {
    std::cout << "Привет!!!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const Dersw::MenuItem* Dersw::exit(const MenuItem* current) {
    std::exit(0);
}

const Dersw::MenuItem* Dersw::study_go_back(const MenuItem* current) {
    return current->parent->parent;
}

const Dersw::MenuItem* Dersw::study_lang(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_alghorithms(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_other_db(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_other_multithread_prog(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_other_net_tech(const MenuItem* current){
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
