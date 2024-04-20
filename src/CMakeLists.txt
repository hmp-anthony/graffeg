find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(example example.cpp)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(example ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
target_include_directories(example PUBLIC ../include)
