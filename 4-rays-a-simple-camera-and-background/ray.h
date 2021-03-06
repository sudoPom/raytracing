#ifndef RAY_H
#define RAY_H

#include "../3-the-vec3-class/colour.h"
#include "../3-the-vec3-class/vec3.h"

class ray{
    public:
        ray() {}
        ray(const point3& origin, const vec3& direction)
            : orig(origin), dir(direction)
        {}

        point3 origin()  const {return orig; }
        point3 direction()  const {return dir; }

        point3 at(double t) const {
            return orig + dir * t;
        }

        public:
            point3 orig;
            vec3 dir;
};

#endif