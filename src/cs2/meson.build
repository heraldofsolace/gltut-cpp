cs2_sources = ['cs2_moving.cpp']

cs2_exe = executable('cs2-moving', cs2_sources, dependencies : [glfw_dep, glew_dep]) 

test('cs2', cs2_exe, is_parallel : false, workdir : meson.current_build_dir())

