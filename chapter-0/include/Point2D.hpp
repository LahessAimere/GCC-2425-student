#ifndef _CHAPTER_O_POINT_2D_HPP_
#define _CHAPTER_O_POINT_2D_HPP_

#include <iostream>
#include <string>

class Point2D
{
private:
    /**
     * @brief Coordonnée x du point dans le plan
     */
    float x;

    /**
     * @brief Coordonnée y du point dans le plan
     */
    float y;

    /**
     * @brief Numéro unique du point créé
     */
    int num;

    /**
     * @brief Nombre de points créés (statique)
     */
    static int count;

    /**
     * @brief Étiquette du point (label)
     */
    std::string label;

public:
    /**
     * @brief Constructeur par défaut
     */
    Point2D();

    /**
     * @brief Constructeur paramétré
     * @param x Abscisse du point
     * @param y Ordonnée du point
     * @param _label Etiquette du point
     */
    Point2D(float x, float y, std::string _label = "unknown");

    /**
     * @brief Constructeur par copie
     * @param point2D Référence au point à copier
     */
    Point2D(const Point2D& point2D);

    /**
     * @brief Destructeur par défaut
     */
    ~Point2D() = default;

    /**
     * @brief Une translation du point en fonction de 2 arguments donnés en entrée
     */
    void Translate(float x, float y);

    /**
     * @brief Agrandit ou rétrécit une figure en gardant ses proportions
     * @param p Un point de la figure
     * @param o Le centre de la figure
     * @param ratio Le rapport de l'homothétie, un nombre réel qui détermine l'ampleur de la transformation
     */
    void Homothety(Point2D p, Point2D o, float ratio);

    /**
     * @brief Une rotation avec un angle dans un repère polaire
     * @param radiant L'angle de rotation en radians
     */
    void Rotation(float radiant);

    /**
     * @brief Obtenir l'abscisse du point
     * @return Abscisse x
     */
    float Absciss();

    /**
     * @brief Obtenir l'ordonnée du point
     * @return Ordonnée y
     */
    float Ordinate();

    /**
     * @brief La distance d'un point à l'origine (aussi appelée rayon)
     */
    float Rho();

    /**
     * @brief L'angle formé par le point avec l'axe horizontal
     */
    float Theta();

    /**
     * @brief Retourne une représentation textuelle du point
     * @return Une chaîne de caractères contenant l'abscisse et l'ordonnée
     */
    std::string toString();

    /**
     * @brief Surcharge de l'opérateur d'affichage
     * @param ostream Flux de sortie
     * @param point2D Point à afficher
     * @return Flux de sortie avec les informations du point
     */
    friend std::ostream& operator<<(std::ostream& ostream, Point2D& point2D);

    /**
    * @brief Surcharge de l'opérateur d'extraction pour lire les coordonnées d'un Point2D à partir d'un flux d'entrée
    * @param istream Flux d'entrée (std::istream) utilisé pour extraire les coordonnées
    * @param point2D Point2D dans lequel les coordonnées extraites seront stockées
    * @return Référence au flux d'entrée
     */
    friend std::istream& operator>>(std::istream& istream, Point2D& point2D);

    /**
     * @brief Surcharge de l'opérateur d'affectation
     * @param P Point à affecter
     * @return Référence vers l'objet actuel
     */
    Point2D& operator=(Point2D P);

    /**
     * @brief Retourne le numéro du point courant
     * @return Numéro unique du point
     */
    int getNum() const;

    /**
     * @brief Retourne le nombre total de points créés
     * @return Nombre de points
     */
    static int getCount();
};

#endif // _CHAPTER_O_POINT_2D_HPP_