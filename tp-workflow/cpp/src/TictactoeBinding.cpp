#include "Tictactoe.hpp"

#include <pybind11/pybind11.h>

PYBIND11_MODULE(tictactoe, m) {
        
     /// \brief inclusions des modules c++ vers python des enumerations du Cell
    pybind11::enum_<Cell>(m, "Cell")
        .value("Vide", Cell::Vide)
        .value("Rouge", Cell::Rouge)
        .value("Vert", Cell::Vert)
        ;

    /// \brief inclusions des modules c++ vers python du  Status
    pybind11::enum_<Status>(m, "Status")
        .value("RougeGagne", Status::RougeGagne)
        .value("VertGagne", Status::VertGagne)
        .value("RougeJoue", Status::RougeJoue)
        .value("VertJoue", Status::VertJoue)
        .value("Egalite", Status::Egalite)
        ;


    /// \brief inclusions des modules c++ vers python pour la classe Jeu et ses methodes
    pybind11::class_<Jeu>(m, "Jeu")
        .def(pybind11::init<>())
        .def("getStatus", &Jeu::getStatus)
        .def("getCell", &Jeu::getCell)
        .def("raz", &Jeu::raz)
        .def("jouer", &Jeu::jouer)
        .def("playerWin", &Jeu::playerWin)
        .def("playerEquality", &Jeu::playerEquality)
        ;

}

