#include "fixedeye_calibration/pose_cov_listener.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/executors/multi_threaded_executor.hpp"

using namespace fixed_eye_calibration;

int main( int argc,char** argv)
{
    rclcpp::init(argc,argv);
    
    auto node = std::make_shared<TransformListener>();
    
    rclcpp::executors::MultiThreadedExecutor executor;

    executor.add_node(node);
    executor.spin();
    rclcpp::shutdown();
    return 0;
}