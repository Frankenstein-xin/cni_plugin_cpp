# cni_plugin_cpp
- This is a demo cni plugin written by cpp
- This project use CPM for package management, refer to:
    - https://github.com/cpm-cmake/CPM.cmake
    - https://medium.com/swlh/cpm-an-awesome-dependency-manager-for-c-with-cmake-3c53f4376766

# How to build
```bash
cd cni_plugin_cpp
mkdir build && cd build
cmake -DCPM_SOURCE_CACHE=/tmp/deps ..

# CPM_SOURCE_CACHE indicates the dependencies directory where CPM pulled
```