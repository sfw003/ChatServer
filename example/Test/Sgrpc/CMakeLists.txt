cmake_minimum_required(VERSION 3.10)

project(Sgrpc)

set(target "Sgrpc")

# 1. 使用 protoc 生成 .pb.h 和 .pb.cc 文件
set(proto_path ${CMAKE_CURRENT_SOURCE_DIR})         # 设置 proto 文件所在路径
set(proto_output_path ${CMAKE_CURRENT_SOURCE_DIR})  # proto文件输出路径
set(proto_files message.proto)                      # 设置 proto 文件列表

set(proto_grpc_srcs "")                             # 用于存放生成的grpc.pd.cc
set(proto_grpc_hdrs "")                             # 用于存放生成的grpc.pd.h

set(proto_srcs "")                                  # 用于存放生成的pd.cc
set(proto_hdrs "")                                  # 用于存放生成的pd.h


foreach(proto_file ${proto_files})
    # protoc 生成 grpc.pd
    string(REPLACE ".proto" ".grpc.pb.cc" proto_grpc_cc ${proto_file})
    string(REPLACE ".proto" ".grpc.pb.h" proto_grpc_hh ${proto_file})
    if (NOT EXISTS ${proto_output_path}/${proto_grpc_cc})
        add_custom_command(
            PRE_BUILD 
            COMMAND ${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/tools/protobuf/protoc.exe
            ARGS --cpp_out="${proto_output_path}" -I="${proto_output_path}" --grpc_out="${proto_output_path}" --plugin=protoc-gen-grpc="${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/tools/grpc/grpc_cpp_plugin.exe" ${proto_path}/${proto_file}
            DEPENDS ${proto_path}/${proto_file}
            OUTPUT ${proto_output_path}/${proto_grpc_cc} ${proto_output_path}/${proto_grpc_hh}
            COMMENT "生成grpc框架代码文件: ${CMAKE_CURRENT_BINARY_DIR}/${proto_grpc_cc}"
        )

        # 将生成的 .pb.cc 文件添加到源文件列表
        list(APPEND proto_grpc_srcs ${proto_output_path}/${proto_grpc_cc})
    
        # 将生成的 .pb.h 文件添加到头文件列表
        list(APPEND proto_grpc_hdrs ${proto_output_path}/${proto_grpc_hh})
    endif()
    # 执行protoc
    string(REPLACE ".proto" ".pb.cc" proto_cc ${proto_file})
    string(REPLACE ".proto" ".pb.h" proto_hh ${proto_file})

    if (NOT EXISTS ${proto_output_path}/${proto_cc})
        add_custom_command(
            PRE_BUILD
            COMMAND ${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/tools/protobuf/protoc.exe
            ARGS --cpp_out="${proto_output_path}" -I="${proto_path}" --experimental_allow_proto3_optional ${proto_path}/${proto_file}
            DEPENDS ${proto_path}/${proto_file}
            OUTPUT ${proto_output_path}/${proto_cc} ${proto_output_path}/${proto_hh}
            COMMENT "生成Protobuf框架代码文件: ${CMAKE_CURRENT_BINARY_DIR}/${proto_cc}"
        )
    endif()
    
    # 将生成的 .pb.cc 文件添加到源文件列表
    list(APPEND proto_srcs ${proto_output_path}/${proto_cc})
    
    # 将生成的 .pb.h 文件添加到头文件列表
    list(APPEND proto_hdrs ${proto_output_path}/${proto_hh})
endforeach()




# 2. 生成可执行文件

add_executable(${target})

# 指定头文件
target_include_directories(${target} PRIVATE
    ${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/include
    ${proto_hdrs}
    ${proto_grpc_hdrs}
)

# 添加源文件
target_sources(${target} PRIVATE
    main.cc
    ${proto_srcs}
    ${proto_grpc_srcs}
)

# 指定库
# -L 库目录
target_link_directories(${target} PRIVATE
    ${CMAKE_SOURCE_DIR}/../third_party/vcpkg/installed/x64-windows/debug/lib
)
# -L 库名
target_link_libraries(${target} PRIVATE
    libprotobufd.lib  # Debug 版本的 protobuf 库
    abseil_dll.lib
    grpc++.lib       # GRPC 的 Debug 库
    grpc.lib         # GRPC 的核心库
)

