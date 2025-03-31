include_directories("/opt/homebrew/include/libusb-1.0")

link_directories("/opt/homebrew/lib")
set(DRIVER_SRC ${DRIVER_SRC} 
	${CMAKE_CURRENT_SOURCE_DIR}/driver.c
)

add_executable(driver ${DRIVER_SRC})
target_include_directories(driver PUBLIC
	usb-1.0
)
target_link_libraries(driver
    usb-1.0
)
