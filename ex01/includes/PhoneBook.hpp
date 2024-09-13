#ifndef __PHONEBOOK__
#define __PHONEBOOK__

#include "Contact.hpp"


class Phonebook
{
    public :
    
    Contact contact[8];
    void PrintSearch(Contact *contact, int count) const;
    void SetAdd(Contact *contact);
    void PrintContact(Contact *contact) const;

    private :


};

#endif