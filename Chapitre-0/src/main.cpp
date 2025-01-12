#include <iostream>
#include <string>

class Texture
{
    public:
    Textture()
    {
        std::cout << "Chargement de la texture \n"
        textureName = "randomTexture";
    }

    Texture(std::string textureName)
    {
        std::cout << "Chargement de la texture \n"
        texturName = textureName;
    }

    void Display()
    {
        std::cout << "Affichage texture\n";
    }

    private:
    std::string textureName;
};


class Unit
{
    public:
    Unit()
    {
        texture = new Texture();
    }

    Unit(std::string textureName)
    {
        texture = new Texture(textureName);
    }

    ~Unit()
    {
        delete texture;
    }

    void DisplayTexture()
    {
        texture->Display();
    }

    private:
    Texture* texture;
};

int main()
{
    Unit u1();
    u1.DisplayTexture();

    Unit u2();
    u2.DisplayTexture();
    
    return 0;
}