#ifndef GAME_SAVER_HPP
    #define GAME_SAVER_HPP

#include<fstream>
#include<string>
#include"default.hpp"
#include"../object/user.hpp"

class GameSaver
{
public:
    GameSaver(User& user, const std::string& filename = DEFAULT_SAVE_PATH);
    GameSaver(const GameSaver& saver);
    GameSaver operator=(const GameSaver& saver);
    virtual ~GameSaver();

    virtual void save();
protected:
    User& m_user;
    std::string m_filename;
};

#endif //GAME_SAVER_HPP
