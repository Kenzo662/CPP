#ifndef __CONTACT__
#define __CONTACT__


class Contact
{
    public :

    int VerifInputNumber(std::string input);
    int VerifInputString(std::string input);
    
    // Setters :
        int SetFirstName(std::string input);
        int SetLastName(std::string input);
        void SetNickname(std::string input);
        int SetNumber(std::string input);
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