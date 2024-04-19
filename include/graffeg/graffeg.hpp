#ifndef GRAFFEG_H
#define GRAFFEG_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>


// C++ Std Usings

using std::make_shared;
using std::shared_ptr;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers

#include <graffeg/vec3.hpp>
#include <graffeg/interval.hpp>
#include <graffeg/color.hpp>
#include <graffeg/ray.hpp>

#endif
