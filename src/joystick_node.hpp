#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>

class JoystickSubscriber : public rclcpp::Node{
private:
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
    void joy_callback_(const sensor_msgs::msg::Joy::SharedPtr msg);
public:
    JoystickSubscriber();
};