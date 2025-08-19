#include <graffeg/graffeg.hpp>

#include <graffeg/hittable.hpp>
#include <graffeg/hittable_list.hpp>
#include <graffeg/sphere.hpp>
#include <graffeg/camera.hpp>
#include <graffeg/material.hpp>
#include <graffeg/bvh.hpp>

#include <iostream>

int main() {
    hittable_list world;

    auto checker = make_shared<checker_texture>(0.32, color(.2, .3, .1), color(.9, .9, .9));

    world.add(make_shared<sphere>(point3(0,-10, 0), 10, make_shared<lambertian>(checker)));
    world.add(make_shared<sphere>(point3(0, 10, 0), 10, make_shared<lambertian>(checker)));

    camera cam;

    cam.aspect_ratio      = 16.0 / 9.0;
    cam.image_width       = 1000;
    cam.samples_per_pixel = 50;
    cam.max_depth         = 10;
    cam.background        = color(0.70, 0.80, 1.00);

    cam.vfov     = 20;
    cam.lookfrom = point3(13,2,3);
    cam.lookat   = point3(0,0,0);
    cam.vup      = vec3(0,1,0);

    cam.defocus_angle = 0;

    cam.render(world);
}
