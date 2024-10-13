#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>


class Brain
{
	public:

		Brain();
		Brain(Brain &copy);
		virtual ~Brain();

		Brain &operator=(Brain &assign);

		std::string ideas[100];
};

#endif
