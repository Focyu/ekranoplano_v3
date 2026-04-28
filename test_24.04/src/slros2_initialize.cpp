// Copyright 2022-2024 The MathWorks, Inc.
// Generated 28-Apr-2026 13:57:02
#include "slros2_initialize.h"
const std::string SLROSNodeName("pid_control_V3");
// pid_control_V3/SUBSYSTEM_MODEL/Subscribe1_TURBULENCIA1
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_pid_control_V3_423;
// pid_control_V3/SUBSYSTEM_MODEL/Subscribe_HEAVE
SimulinkSubscriber<std_msgs::msg::Float64,SL_Bus_std_msgs_Float64> Sub_pid_control_V3_443;
// pid_control_V3/SUBSYSTEM_MODEL/Subscribe_RATE
SimulinkSubscriber<std_msgs::msg::Float64,SL_Bus_std_msgs_Float64> Sub_pid_control_V3_445;
// pid_control_V3/SUBSYSTEM_MODEL/Subscribe_TURBULENCIA
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_pid_control_V3_417;
// pid_control_V3/Subscribe-ALTURA1
SimulinkSubscriber<std_msgs::msg::Float64,SL_Bus_std_msgs_Float64> Sub_pid_control_V3_435;
// pid_control_V3/Subscribe-YAW
SimulinkSubscriber<std_msgs::msg::Float64,SL_Bus_std_msgs_Float64> Sub_pid_control_V3_377;
// pid_control_V3/Call Service
SimulinkServiceCaller<ros_gz_interfaces::srv::SetEntityPose,SL_Bus_ros_gz_interfaces_SetEntityPoseRequest,SL_Bus_ros_gz_interfaces_SetEntityPoseResponse> ServCall_pid_control_V3_326;
