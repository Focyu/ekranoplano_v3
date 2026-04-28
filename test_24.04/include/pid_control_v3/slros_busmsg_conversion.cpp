#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <ros_gz_interfaces/msg/entity.hpp>
#include <ros_gz_interfaces/srv/set_entity_pose.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float64.hpp>
#include "pid_control_V3_types.h"
#include "slros_msgconvert_utils.h"


[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Point& msgPtr, SL_Bus_geometry_msgs_Point const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Point* busPtr, const geometry_msgs::msg::Point& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Pose& msgPtr, SL_Bus_geometry_msgs_Pose const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Pose* busPtr, const geometry_msgs::msg::Pose& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Quaternion& msgPtr, SL_Bus_geometry_msgs_Quaternion const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Quaternion* busPtr, const geometry_msgs::msg::Quaternion& msgPtr);

[[maybe_unused]] static void convertFromBus(ros_gz_interfaces::msg::Entity& msgPtr, SL_Bus_ros_gz_interfaces_Entity const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_ros_gz_interfaces_Entity* busPtr, const ros_gz_interfaces::msg::Entity& msgPtr);

[[maybe_unused]] static void convertFromBus(ros_gz_interfaces::srv::SetEntityPose::Request& msgPtr, SL_Bus_ros_gz_interfaces_SetEntityPoseRequest const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_ros_gz_interfaces_SetEntityPoseRequest* busPtr, const ros_gz_interfaces::srv::SetEntityPose::Request& msgPtr);

[[maybe_unused]] static void convertFromBus(ros_gz_interfaces::srv::SetEntityPose::Response& msgPtr, SL_Bus_ros_gz_interfaces_SetEntityPoseResponse const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_ros_gz_interfaces_SetEntityPoseResponse* busPtr, const ros_gz_interfaces::srv::SetEntityPose::Response& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Float64& msgPtr, SL_Bus_std_msgs_Float64 const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Float64* busPtr, const std_msgs::msg::Float64& msgPtr);



// Conversions between SL_Bus_geometry_msgs_Point and geometry_msgs::msg::Point

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Point& msgPtr, SL_Bus_geometry_msgs_Point const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Point* busPtr, const geometry_msgs::msg::Point& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_geometry_msgs_Pose and geometry_msgs::msg::Pose

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Pose& msgPtr, SL_Bus_geometry_msgs_Pose const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertFromBus(msgPtr.orientation, &busPtr->orientation);
  convertFromBus(msgPtr.position, &busPtr->position);
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Pose* busPtr, const geometry_msgs::msg::Pose& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertToBus(&busPtr->orientation, msgPtr.orientation);
  convertToBus(&busPtr->position, msgPtr.position);
}


// Conversions between SL_Bus_geometry_msgs_Quaternion and geometry_msgs::msg::Quaternion

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Quaternion& msgPtr, SL_Bus_geometry_msgs_Quaternion const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr.w =  busPtr->w;
  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Quaternion* busPtr, const geometry_msgs::msg::Quaternion& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->w =  msgPtr.w;
  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_ros_gz_interfaces_Entity and ros_gz_interfaces::msg::Entity

[[maybe_unused]] static void convertFromBus(ros_gz_interfaces::msg::Entity& msgPtr, SL_Bus_ros_gz_interfaces_Entity const* busPtr)
{
  const std::string rosMessageType("ros_gz_interfaces/Entity");

  msgPtr.id = (uint64_t) busPtr->id;
  convertFromBusVariablePrimitiveArray(msgPtr.name, busPtr->name, busPtr->name_SL_Info);
  msgPtr.type =  busPtr->type;
}

[[maybe_unused]] static void convertToBus(SL_Bus_ros_gz_interfaces_Entity* busPtr, const ros_gz_interfaces::msg::Entity& msgPtr)
{
  const std::string rosMessageType("ros_gz_interfaces/Entity");

  busPtr->id = (real_T) msgPtr.id;
  convertToBusVariablePrimitiveArray(busPtr->name, busPtr->name_SL_Info, msgPtr.name, slros::EnabledWarning(rosMessageType, "name"));
  busPtr->type =  msgPtr.type;
}


// Conversions between SL_Bus_ros_gz_interfaces_SetEntityPoseRequest and ros_gz_interfaces::srv::SetEntityPose::Request

[[maybe_unused]] static void convertFromBus(ros_gz_interfaces::srv::SetEntityPose::Request& msgPtr, SL_Bus_ros_gz_interfaces_SetEntityPoseRequest const* busPtr)
{
  const std::string rosMessageType("ros_gz_interfaces/SetEntityPoseRequest");

  convertFromBus(msgPtr.entity, &busPtr->entity);
  convertFromBus(msgPtr.pose, &busPtr->pose);
}

[[maybe_unused]] static void convertToBus(SL_Bus_ros_gz_interfaces_SetEntityPoseRequest* busPtr, const ros_gz_interfaces::srv::SetEntityPose::Request& msgPtr)
{
  const std::string rosMessageType("ros_gz_interfaces/SetEntityPoseRequest");

  convertToBus(&busPtr->entity, msgPtr.entity);
  convertToBus(&busPtr->pose, msgPtr.pose);
}


// Conversions between SL_Bus_ros_gz_interfaces_SetEntityPoseResponse and ros_gz_interfaces::srv::SetEntityPose::Response

[[maybe_unused]] static void convertFromBus(ros_gz_interfaces::srv::SetEntityPose::Response& msgPtr, SL_Bus_ros_gz_interfaces_SetEntityPoseResponse const* busPtr)
{
  const std::string rosMessageType("ros_gz_interfaces/SetEntityPoseResponse");

  msgPtr.success =  busPtr->success;
}

[[maybe_unused]] static void convertToBus(SL_Bus_ros_gz_interfaces_SetEntityPoseResponse* busPtr, const ros_gz_interfaces::srv::SetEntityPose::Response& msgPtr)
{
  const std::string rosMessageType("ros_gz_interfaces/SetEntityPoseResponse");

  busPtr->success =  msgPtr.success;
}


// Conversions between SL_Bus_std_msgs_Bool and std_msgs::msg::Bool

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  msgPtr.data =  busPtr->data;
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  busPtr->data =  msgPtr.data;
}


// Conversions between SL_Bus_std_msgs_Float64 and std_msgs::msg::Float64

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Float64& msgPtr, SL_Bus_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr.data =  busPtr->data;
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Float64* busPtr, const std_msgs::msg::Float64& msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->data =  msgPtr.data;
}



#endif
