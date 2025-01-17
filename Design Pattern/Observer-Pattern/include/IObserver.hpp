#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void Update(int score) = 0;
};

#endif // IOBSERVER_HPP