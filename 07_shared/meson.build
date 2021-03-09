project('tutorial', 'cpp')

libmy = shared_library('libadd', 'add.cpp')
libmy_dep = declare_dependency(link_with: libmy)
executable('demo', 'main.cpp', dependencies: libmy_dep)
