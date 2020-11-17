# libcamera-native-apps

This repo includes native C++ applications implemented using libcamera library, on raspberry pi.

First, follow the steps described in the link below to make sure that libcamera is built and installed.

        https://github.com/raspberrypi/documentation/tree/master/linux/software/libcamera

On my system, library files are placed into:
        
        /usr/local/lib/arm-linux-gnueabihf/

Clone this repo and in the appropriate directory, for instance, in get_cameras:

        export PKG_CONFIG_PATH=/usr/local/lib/arm-linux-gnueabihf/pkgconfig/camera.pc
        cd get_cameras
        meson build && cd build
        ninja; sudo ./get-cameras

It is possible to increase the library debug output by using environment variables which control the library log filtering system:

        sudo LIBCAMERA_LOG_LEVELS=0 ./get-cameras