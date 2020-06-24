#include <rclcpp/rclcpp.hpp>
#include "joystick_node.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JoystickSubscriber>());
    rclcpp::shutdown();
    return 0;
}