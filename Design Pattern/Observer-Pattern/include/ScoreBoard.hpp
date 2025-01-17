#ifndef SCOREBOARD_HPP
#define SCOREBOARD_HPP

#include "IObserver.hpp"
#include <iostream>

class Scoreboard : public IObserver 
{
private:
    ISubject& _subject;

public:
    Scoreboard(ISubject& subject) : _subject(subject) 
    {
        _subject.Attach(this);
    }

    ~Scoreboard() override 
    {
        _subject.Detach(this);
    }

    void Update(int score) override 
    {
        std::cout << "Scoreboard Updated: " << score << std::endl;
    }
};

#endif // SCOREBOARD_HPP