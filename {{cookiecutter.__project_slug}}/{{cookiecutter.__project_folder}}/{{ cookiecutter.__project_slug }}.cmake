set(GUI_NAME "{{ cookiecutter.__project_slug }}")
set(GUI_DISPLAY "{{ cookiecutter.display_driver }}")


# Do not modify
file(GLOB_RECURSE GUI_SRCS
    ${CMAKE_CURRENT_LIST_DIR}/*.c
    ${CMAKE_CURRENT_LIST_DIR}/*.cpp
)

include_directories(
"${CMAKE_CURRENT_LIST_DIR}"
)