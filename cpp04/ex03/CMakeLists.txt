cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")

macro(set_project_name NAME)
	set(PROJECT_NAME ${NAME})
	project(${PROJECT_NAME})
endmacro()

project(materia)

# Add all your source files
set(SOURCES
		src/main.cpp
		src/AMateria/AMateria.cpp
		src/ICharacter/ICharacter.h
		src/Cure/Cure.cpp
		src/Ice/Ice.cpp
		src/IMateriaSource/IMateriaSource.h
		src/Character/Character.cpp
		src/MateriaSource/MateriaSource.cpp
		src/MateriaSource/MateriaSource.h
		include/Project.h
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# link target directories
target_include_directories(${PROJECT_NAME} PRIVATE src include)