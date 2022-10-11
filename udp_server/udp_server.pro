TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

win32 {
    BOOST_INCLUDE = C:/Boost/include/boost-1_67
    BOOST_LIB = C:/Boost/lib

    INCLUDEPATH += $$BOOST_INCLUDE
}

LIBS += -lws2_32

#LIBS += \
#    $$BOOST_LIB/libboost_thread-vc110-mt-gd-x64-1_67.lib \
#    $$BOOST_LIB/libboost_date_time-vc110-mt-gd-x64-1_67.lib \
#    $$BOOST_LIB/libboost_system-vc110-mt-gd-x64-1_67.lib \
#    $$BOOST_LIB/libboost_chrono-vc110-mt-gd-x64-1_67.lib \
#    $$BOOST_LIB/libboost_regex-vc110-mt-gd-x64-1_67.lib

SOURCES += main.cpp

