#include <iostream>
#include <boost/asio.hpp>

using namespace std;

int main()
{
//    boost::asio::io_service io_service;
//    boost::asio::ip::udp::socket socket(io_service);
//    boost::asio::ip::udp::endpoint end_point(boost::asio::ip::address::from_string("172.27.124.90"),7474);
//    socket.open(end_point.protocol());

//    char receive_buffer[1024] = {0};

//    while (true) {
//        cout << "input:";
//        string input_data;
//        cin >> input_data;
//        cout << endl;

//        try {
//            socket.send_to(boost::asio::buffer(input_data.c_str(),input_data.size()),end_point);

//            socket.receive_from(boost::asio::buffer(receive_buffer,1024),end_point);

//            cout << "recv:" << receive_buffer << endl;
//        } catch (boost::system::system_error &e) {
//            cout << "process failed:" << e.what() << endl;
//        }
//    }
    boost::asio::io_service io_service;
    boost::asio::ip::udp::socket socket(io_service);
    boost::asio::ip::udp::endpoint end_point(boost::asio::ip::address::from_string("192.168.1.6"),7474);
    socket.open(end_point.protocol());

    char receive_buffer[1024] = {0};

    while (true) {
        cout << "input:";
        string input_data;
        cin >> input_data;
        cout << endl;

        try {
            socket.send_to(boost::asio::buffer(input_data.c_str(),input_data.size()),end_point);
            socket.receive_from(boost::asio::buffer(receive_buffer,1024),end_point);
            cout << "recv:" << receive_buffer << endl;
        } catch (boost::system::system_error &e) {
            cout << "process failed:" << e.what() << endl;
        }
    }

    return 0;
}

