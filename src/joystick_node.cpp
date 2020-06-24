#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include "joystick_node.hpp"

void JoystickSubscriber::joy_callback_(const sensor_msgs::msg::Joy::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "A : %d, B : %d, X : %d, Y : %d", msg->buttons[0], msg->buttons[1], msg->buttons[2], msg->buttons[3]);
}

JoystickSubscriber::JoystickSubscriber()
: Node("joystick_subscriber")
{
    subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
        "joy", 10,
        std::bind(&JoystickSubscriber::joy_callback_, this, std::placeholders::_1)
    );
}