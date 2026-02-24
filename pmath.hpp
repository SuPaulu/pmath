#ifndef pmath_hpp
#define pmath_hpp


//For cmath functions and M_PI
#define _USE_MATH_DEFINES
#include <cmath>

inline double ProjDist(double velocity, double angle)
{
    // time in seconds, velocity in ms

    //angle in degrees converted to radians for cmatha
    double rad = angle * M_PI / 180.0;

    return (pow(velocity, 2) * sin(2 * rad)) / 9.81;;
}

inline double SimpDist(double velocity, double time)
{
    // time in seconds, velocity in ms
    return time * velocity;
}

inline double SimpTime(double distance, double velocity)
{
    //distance in meters
    return distance / velocity;
}

inline double SimpVelo(double distance, double time)
{
    // time in seconds
    return distance / time;
}

inline double vToSpeed(double velocity)
{
    // speed in km/h
    return velocity * 3.6;
}

#endif // pmath
