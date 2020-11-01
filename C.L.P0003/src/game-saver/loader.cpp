#include"loader.hpp"

GameLoader::GameLoader(User& user, std::string filename)
    :m_user(user), m_filename(filename)
{

}

GameLoader::GameLoader(const GameLoader& loader)
    :m_user(loader.m_user), m_filename(loader.m_filename)
{

}

GameLoader& GameLoader::operator=(const GameLoader& loader)
{
    m_user = loader.m_user;
    m_filename = loader.m_filename;
    return (*this);
}

GameLoader::~GameLoader()
{

}

void GameLoader::load()
{
    std::ifstream reader;
    reader.open(m_filename, std::ifstream::in);

    if(!reader.good())
        return;

    reader >> m_user.m_coin;
}
