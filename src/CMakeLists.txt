find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(color_gradient color_gradient.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(color_gradient ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(color_gradient PUBLIC ../include)

add_executable(basic_sphere basic_sphere.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(basic_sphere ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(basic_sphere PUBLIC ../include)

add_executable(sphere_shaded sphere_shaded.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(sphere_shaded ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(sphere_shaded PUBLIC ../include)

add_executable(new_sphere_shaded new_sphere_shaded.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(new_sphere_shaded ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(new_sphere_shaded PUBLIC ../include)
