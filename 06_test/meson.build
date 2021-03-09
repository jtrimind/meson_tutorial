project('tutorial', 'cpp')

test('simple test', executable('simple_test', 'simple_test.cpp'))

gtest_dep = dependency('gtest')
exe = executable('gtest_test', 'gtest_test.cpp', dependencies: gtest_dep)
test('gtest test', exe)
