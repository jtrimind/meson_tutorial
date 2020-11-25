project('libsimple', 'cpp')

inc = include_directories('include')
libsimple = shared_library('simple',
  'simple.cpp',
  include_directories : inc,
  install : true)

libsimple_dep = declare_dependency(include_directories : inc,
  link_with : libsimple)
