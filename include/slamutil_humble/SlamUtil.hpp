#ifndef SLAMUTIL_HPP
#define SLAMUTIL_HPP

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/mag/laser_scan.hpp"
#include "visualization_msgs/msg/marker.hpp"


class SlamUtil : public rclcpp::Node {

    public:
        SlamUtil();
        ~SlamUtil();
    private:
}