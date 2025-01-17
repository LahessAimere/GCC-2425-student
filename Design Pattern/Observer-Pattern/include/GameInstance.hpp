#ifndef GAMEINSTANCE_HPP
#define GAMEINSTANCE_HPP

#include "ISubject.hpp"
#include <algorithm>

class GameInstance : public ISubject 
{
private:
    std::vector<IObserver*> _observers;
    int _score = 0;
    
public:
    ~GameInstance() override 
    {
        for (auto* observer : _observers) 
        {
            delete observer;
        }
        _observers.clear();
    }

    void SetScore(int score) {
        _score = score;
        Notify();
    }

    void Attach(IObserver* observer) override 
    {
        if (observer && std::find(_observers.begin(), _observers.end(), observer) == _observers.end()) 
        {
            _observers.push_back(observer);
        }
    }

    void Detach(IObserver* observer) override 
    {
        _observers.erase(std::remove(_observers.begin(), _observers.end(), observer), _observers.end());
    }

    void Notify() override 
    {
        for (auto* observer : _observers) 
        {
            observer->Update(_score);
        }
    }
};

#endif // GAMEINSTANCE_HPP