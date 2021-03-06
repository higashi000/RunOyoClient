cmake_minimum_required(VERSION 2.8)

find_package(PkgConfig)

project(RunOyoClient CXX)
enable_language(C)

set(CMAKE_CXX_COMPILER "clang++")
#set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-std=c++1z -Wall -Wextra -Wno-unknown-pragmas")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG -march=x86-64")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-g3 -Og -pg -DDEBUG")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG -march=x86-64")

#set(CMAKE_BUILD_TYPE Release)

#add_definitions(-D)

include_directories(
	"/usr/include"
	"../OpenSiv3D/Siv3D/include"
	"../OpenSiv3D/Siv3D/include/ThirdParty"
)

link_directories(
	"/usr/lib"
)

add_executable(RunOyoClient
	"../source/Main.cpp"
	"../source/Button.cpp"
        "../source/InputText.cpp"
        "../source/GetTweetText.cpp"
        "../source/LoadTL.cpp"
        "../source/TweetBox.cpp"
)

target_link_libraries(RunOyoClient
	-lstdc++
	-lm
	-lpthread
	-lboost_filesystem
	-lboost_system
	-lGL
	-lGLEW
	-lglib-2.0
	-lgobject-2.0
	-lgio-2.0
	-lpng
	-lturbojpeg
	-lX11
	-lXi
	-lXrandr
	-lXinerama
	-lXcursor
	-ldl
	-lgif
	-lfreetype
	-lharfbuzz
	-lopenal
	-ludev
	-lopencv_core
	-lopencv_imgproc
	-lBox2D
	-lfontconfig

        ${PROJECT_SOURCE_DIR}/../OpenSiv3D/Linux/libSiv3D.a
	${PROJECT_SOURCE_DIR}/../OpenSiv3D/Siv3D/lib/Linux/angelscript/libangelscript.a
)

