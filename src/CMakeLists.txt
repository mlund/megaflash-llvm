include_directories(SYSTEM ${CMAKE_CURRENT_SOURCE_DIR})

add_definitions(-DA200T -DFIRMWARE_UPGRADE -DQSPI_FLASH_SLOT0)

add_executable(megaflash megaflash.c qspicommon.c qspireconfig.c crc32accl.s)
target_link_libraries(megaflash mega65libc)


