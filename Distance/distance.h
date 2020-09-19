#ifndef DISTANCE_H_INCLUDED
#define DISTANCE_H_INCLUDED


class Distance {
    int m_feets;
    int m_inches;
  public:


    Distance();
    Distance(int,int);
    Distance(int );

    // members
    Distance operator+(const Distance &ref);

    Distance operator-(const Distance &ref);
    Distance operator*(const Distance &ref);
    Distance& operator++();
    Distance operator++(int dummy);
    bool operator< (const Distance &ref);
    bool operator> (const Distance &ref);


    bool operator==(const Distance &ref);

    void display();



};

#endif // DISTANCE_H_INCLUDED
