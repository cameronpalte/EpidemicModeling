#ifndef HUMAN_H
#define HUMAN_H


class Human
{
    public:
        Human();
        ~Human();
        Human(double w, double s, double m, double p, double c, double h, double t, double l);

        double weight;
        double sickness;
        double mobility;
        double pace;
        double socialClass;
        double health;
        double travel;
        double location;
        //extra

    protected:

    private:

};

#endif // HUMAN_H
