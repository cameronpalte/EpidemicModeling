#include "Human.h"

Human::Human()
{

}

Human::~Human()
{

}

Human::Human(double w, double s, double m, double p, double c, double h, double t, double l)
{
    weight = w;
    sickness = s;
    mobility = m;
    pace = p;
    socialClass = c;
    health = h;
    travel = t;
    location = l;
    //extra
}

double getWeight(Human h)
{
    double weight = h.weight;
    return weight;
}

void setWeight(Human h, double weightValue)
{
    h.weight = weightValue;
}

double getSickness(Human h)
{
    double sickness = h.sickness;
    return sickness;
}

void setSickness(Human h, double sicknessValue)
{
    h.sickness = sicknessValue;
}
