project('my_project', 'cpp')

libsimple_proj = subproject('libsimple')
libsimple_dep = libsimple_proj.get_variable('libsimple_dep')

executable('demo',
  'my_project.cpp',
  dependencies : libsimple_dep,
  install : true)
