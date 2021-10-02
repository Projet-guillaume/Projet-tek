/*
** EPITECH PROJECT, 2020
** Federation.hpp
** File description:
** Federation.hpp
*/

#include "WarpSystem.hpp"
#include <iostream>
#include <string>

namespace Federation {
	namespace Starfleet {
		class Ship {
			int _length;
			int _width;
			std::string	_name;
			short _maxWrap;
			WarpSystem::Core *_core;
		public:
			Ship(int length, int width, std::string name, short maxWrap);
			void getName();
			void setupCore(WarpSystem::Core *);
			void checkCore();
		};
	};
	class Ship {
		int _length;
		int _width;
		std::string _name;
		short _maxWrap;
		WarpSystem::Core *_core;
	public:
		Ship(int length, int width, std::string name);
		void getName();
		void setupCore(WarpSystem::Core *);
		void checkCore();		
	};
};
