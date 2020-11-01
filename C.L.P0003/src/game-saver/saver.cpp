#include"saver.hpp"

GameSaver::GameSaver(User& user, const std::string& filename)
    :m_user(user), m_filename(filename)
{

}

GameSaver::GameSaver(const GameSaver& saver)
    :m_user(saver.m_user), m_filename(saver.m_filename)
{

}

GameSaver GameSaver::operator=(const GameSaver& saver)
{
    m_user = saver.m_user;
    m_filename = saver.m_filename;

    return (*this);
}

GameSaver::~GameSaver()
{

}

void GameSaver::save()
{
    std::ofstream writer;
    writer.open(m_filename);

    if(!writer.is_open())
        return;

    writer << m_user.coin();
    writer.close();
}
