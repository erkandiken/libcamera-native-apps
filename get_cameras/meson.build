project('get_cameras', 'c', 'cpp',
	default_options : [
		'werror=true',
		'warning_level=2',
		'cpp_std=c++17',
	])

src_files = files([
	'get_cameras.cpp',
])

# Point your PKG_CONFIG_PATH environment variable to the
# libcamera install path camera.pc file ($prefix/lib/pkgconfig/camera.pc)
libcamera_deps = [
      dependency('camera', required : true),
]

cpp_arguments = [ '-Wno-unused-parameter', ]

add_project_arguments(cpp_arguments, language : 'cpp')

#executable
get_cameras = executable('get-cameras', src_files,
                        dependencies : libcamera_deps)
