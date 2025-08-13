add_executable(bouncing_spheres bouncing_spheres.cpp)
target_include_directories(bouncing_spheres PUBLIC ../include)

add_executable(checkered_spheres checkered_spheres.cpp)
target_include_directories(checkered_spheres PUBLIC ../include)

add_executable(earth earth.cpp)
target_include_directories(earth PUBLIC ../include)

add_executable(perlin_spheres perlin_spheres.cpp)
target_include_directories(perlin_spheres PUBLIC ../include)

add_executable(quads quads.cpp)
target_include_directories(quads PUBLIC ../include)

add_executable(simple_light simple_light.cpp)
target_include_directories(simple_light PUBLIC ../include)

add_executable(cornell_box cornell_box.cpp)
target_include_directories(cornell_box PUBLIC ../include)
