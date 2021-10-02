/*
** EPITECH PROJECT, 2020
** WarpSystem
** File description:
** cpp
*/

#include <iostream>
#include <string>

namespace WarpSystem {
    class WarpSystem::QuantumReactor {
        bool _stability;
    public:
        QuantumReactor();
        ~QuantumReactor();
        bool isStable();
        void setStability(bool);
    };
    class WarpSystem::Core {
        QuantumReactor *_coreReactor;
    public:
        Core(QuantumReactor *reactor);
        ~Core();
        QuantumReactor* checkReactor();
    };
}