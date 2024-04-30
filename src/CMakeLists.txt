find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(bouncing_spheres bouncing_spheres.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(bouncing_spheres ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(bouncing_spheres PUBLIC ../include)

add_executable(checkered_spheres checkered_spheres.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(checkered_spheres ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(checkered_spheres PUBLIC ../include)

add_executable(earth earth.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(earth ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(earth PUBLIC ../include)

add_executable(perlin_spheres perlin_spheres.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(perlin_spheres ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(perlin_spheres PUBLIC ../include)

add_executable(quads quads.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(quads ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(quads PUBLIC ../include)
