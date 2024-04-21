#include <graffeg/graffeg.hpp>

#include <graffeg/hittable.hpp>
#include <graffeg/hittable_list.hpp>
#include <graffeg/sphere.hpp>
#include <graffeg/camera.hpp>
#include <graffeg/material.hpp>

#include <iostream>

int main() {
    hittable_list world;

    auto R = cos(pi/4);

    auto material_left  = make_shared<lambertian>(color(0,0,1));
    auto material_right = make_shared<lambertian>(color(1,0,0));

    world.add(make_shared<sphere>(point3(-R, 0, -1), R, material_left));
    world.add(make_shared<sphere>(point3( R, 0, -1), R, material_right));

    camera cam;

    cam.aspect_ratio      = 16.0 / 9.0;
    cam.image_width       = 400;
    cam.samples_per_pixel = 100;
    cam.max_depth         = 50;

    cam.vfov = 90;

    cam.render(world);
}

