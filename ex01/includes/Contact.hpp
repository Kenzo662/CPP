#ifndef __CONTACT__
#define __CONTACT__


class Contact
{
    public :
    
    // Setters :
        void SetFirstName(std::string input);
        void SetLastName(std::string input);
        void SetNickname(std::string input);
        void SetNumber(std::string input);
        void SetDarkSecret(std::string input);


    // Getters :
        std::string GetFirstName() const;
        std::string GetLastName() const;
        std::string GetNickname() const;
        std::string GetNumber() const;
        std::string GetDarkSecret() const;



    private :

    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _number;
    std::string _dark_secret;

};


#endif