#指定CMake构建本地库时所需的最小版本
cmake_minimum_required(VERSION 3.4.1)


add_library( # Sets the name of the library. 将资源文件生成动态链接库（so文件）的库名称(文件名称：“lib" +设置的名称)
             hello

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).资源文件（C或C++）的相对位置
             src/main/jni/NativeHelloJNI.cpp )

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

target_link_libraries( # Specifies the target library.将所有的add_library中的库链接起来，有多少个add_library成的库就将其添加到这里
                       hello  #这个和add_library中的指定的so库名称一致

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )
