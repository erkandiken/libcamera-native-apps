#include<iomanip>
#include<iostream>
#include<memory>

#include<libcamera/libcamera.h>

using namespace libcamera;

std::shared_ptr<Camera> camera;

int main(){
    CameraManager* cm = new CameraManager();
    cm->start();

    for (auto const& camera: cm->cameras())
        std::cout<< camera->id() << std::endl;

    cm->stop();
    return 0;
}
