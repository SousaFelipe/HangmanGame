cmake_minimum_required (VERSION 3.8)


project ("HangmanGame" VERSION 1.0.0)


file(COPY
	"res/body-black.bmp" "res/body.bmp"
	"res/head-black.bmp" "res/head.bmp"
	"res/legs-black.bmp" "res/legs.bmp"
	DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/res/")


add_executable (HangmanGame "main.cpp"
				"src/utils/console.h" "src/utils/console.cpp"
				"src/core/game.h" "src/core/game.cpp"
				"src/utils/files.h" "src/utils/files.cpp"
				"src/game/hud.h" "src/game/hud.cpp"
				"src/game/man.h" "src/game/man.cpp"
				"src/game/member.h" "src/game/member.cpp"
				"src/core/sprite.cpp" "src/core/sprite.h")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HangmanGame PROPERTY CXX_STANDARD 20)
endif()
