cmake_minimum_required(VERSION 3.16)

project(Qt_design_patterns VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Qt_design_patterns
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        singleton/singletonmaindialog.h singleton/singletonmaindialog.cpp singleton/singletonmaindialog.ui
        singleton/singletonauxdialog.h singleton/singletonauxdialog.cpp singleton/singletonauxdialog.ui
        singleton/logger.h singleton/logger.cpp
        factory_method_v1/factorymethodclient.h factory_method_v1/factorymethodclient.cpp
        factory_method_v1/toyota.h factory_method_v1/toyota.cpp
        factory_method_v1/honda.h factory_method_v1/honda.cpp
        factory_method_v1/fiat.h factory_method_v1/fiat.cpp
        factory_method_v1/basecar.h factory_method_v1/basecar.cpp
        factory_method_v1/carfactory.h factory_method_v1/carfactory.cpp
        abstract_factory/shape.h abstract_factory/shape.cpp
        abstract_factory/square.h abstract_factory/square.cpp
        abstract_factory/rectangle.h abstract_factory/rectangle.cpp
        abstract_factory/roundedsquare.h abstract_factory/roundedsquare.cpp
        abstract_factory/roundedrectangle.h abstract_factory/roundedrectangle.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Qt_design_patterns APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Qt_design_patterns SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Qt_design_patterns
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Qt_design_patterns PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Qt_design_patterns)
endif()
set_target_properties(Qt_design_patterns PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Qt_design_patterns
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Qt_design_patterns)
endif()
