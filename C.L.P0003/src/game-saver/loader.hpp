#ifndef GAME_LOADER_HPP
    #define GAME_LOADER_HPP

#include<string>
#include<fstream>
#include"default.hpp"
#include"../object/user.hpp"

class User;

class GameLoader
{
public:
    GameLoader(User& user, std::string filename = DEFAULT_SAVE_PATH);
    GameLoader(const GameLoader& loader);
    GameLoader& operator=(const GameLoader& loader);
    virtual ~GameLoader();

    virtual void load();
protected:
    User& m_user;
    std::string m_filename; 
};

#endif //GAME_LOADER_HPP
