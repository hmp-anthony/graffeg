#include <graffeg/graffeg.hpp>

#include <graffeg/hittable.hpp>
#include <graffeg/hittable_list.hpp>
#include <graffeg/sphere.hpp>
#include <graffeg/camera.hpp>

#include <iostream>

int main() {
    hittable_list world;

    world.add(make_shared<sphere>(point3(0,0,-1), 0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100));

    camera cam;
    
    cam.samples_per_pixel = 10;
    cam.aspect_ratio      = 16.0 / 9.0;
    cam.image_width       = 800;

    cam.render(world);
}
