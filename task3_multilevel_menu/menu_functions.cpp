#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const Dersw::MenuItem* Dersw::show_menu(const MenuItem* current) {
    std::cout << "Привет, это обучайка!" << std::endl;
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
    //TODO
    return current->parent->parent;
}

const Dersw::MenuItem* Dersw::study_summ(const MenuItem* current) {
    //TODO
    std::cout << current->title << std::endl;
    std::cout << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_substract(const MenuItem* current) {
    //TODO
    std::cout << current->title << std::endl;
    std::cout << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_multiply(const MenuItem* current) {
    //TODO
    std::cout << current->title << std::endl;
    std::cout << std::endl;
    return current->parent;
}

const Dersw::MenuItem* Dersw::study_devide(const MenuItem* current) {
    //TODO
    std::cout << current->title << std::endl;
    std::cout << std::endl;
    return current->parent;
}
