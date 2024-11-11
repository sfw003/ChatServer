cmake_minimum_required(VERSION 3.10)

project(Sprotobuf)

# 1. 使用 protoc 生成 .pb.h 和 .pb.cc 文件
set(proto_path ${CMAKE_CURRENT_SOURCE_DIR})   # 设置 proto 文件所在路径
set(proto_files contact.proto)                # 设置 proto 文件列表

set(proto_srcs "")                            # 用于存放生成的源代码文件
set(proto_hdrs "")                            # 用于存放生成的头文件

foreach(proto_file ${proto_files})
    # 3. 如果没有生成，则预定义生成指令 -- 用于在构建项目之间生成框架代码
    string(REPLACE ".proto" ".pb.cc" proto_cc ${proto_file})
    string(REPLACE ".proto" ".pb.h" proto_hh ${proto_file})

    if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${proto_cc})
        add_custom_command(
            PRE_BUILD
            COMMAND D:/chat/chatsystem/servers/third_party/vcpkg/installed/x64-windows/tools/protobuf/protoc.exe
            ARGS --cpp_out=${CMAKE_CURRENT_SOURCE_DIR} -I ${proto_path} --experimental_allow_proto3_optional ${proto_path}/${proto_file}
            DEPENDS ${proto_path}/${proto_file}
            OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/${proto_cc} ${CMAKE_CURRENT_SOURCE_DIR}/${proto_hh}
            COMMENT "生成Protobuf框架代码文件: ${CMAKE_CURRENT_BINARY_DIR}/${proto_cc}"
        )
    endif()
    
    # 将生成的 .pb.cc 文件添加到源文件列表
    list(APPEND proto_srcs ${CMAKE_CURRENT_SOURCE_DIR}/${proto_cc})
    
    # 将生成的 .pb.h 文件添加到头文件列表
    list(APPEND proto_hdrs ${CMAKE_CURRENT_SOURCE_DIR}/${proto_hh})
endforeach()



# 2. 生成可执行文件

add_executable(Sprotobuf)

# 指定头文件
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/include
    ${proto_hh}
)

# 添加源文件
target_sources(${PROJECT_NAME} PRIVATE
    main.cc
    ${proto_cc}
)

# 指定库
# -L 库目录
target_link_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/debug/lib
)
# -L 库名
target_link_libraries(${PROJECT_NAME} PRIVATE
    libprotobufd.lib  # Debug 版本的 protobuf 库
    abseil_dll.lib
)

