cmake_minimum_required(VERSION 3.5)
project(sandbox_node)

# 의존성 찾기
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# 실행파일 추가
add_executable(pub src/pub.cpp)
ament_target_dependencies(pub rclcpp std_msgs)

add_executable(sub src/sub.cpp)
ament_target_dependencies(sub rclcpp std_msgs)

# 설치 규칙
install(TARGETS
  pub
  sub
  DESTINATION lib/${PROJECT_NAME})

ament_package()
