# MPM csv to HDF5 convertor

## Dependencies

```
HDF5
```

### Fedora installation (recommended)

Please run the following command:

```
dnf install -y clang clang-analyzer clang-tools-extra cmake cppcheck dnf-plugins-core \
               findutils gcc gcc-c++ git hdf5 hdf5-devel kernel-devel make ninja-build
```                   

### TACC Stampede2/Frontera

```
module load cmake/3.16.1 intel hdf5 
```

## Compile

### Clone the code locally

```
git clone https://github.com/kks32/mpm-csv-hdf5
cd mpm-csv-hdf5
```

### Compile and build
```
mkdir build && cd build && cmake ..
make clean && make -j 8
```

### Run MPM CSV to HDF5 convertor

```
./csv-hdf5 particles0000.csv
```

### Notes
* If the cell_id is unknown set it to the max value of unsigned long long `18446744073709551615`.
* When solving for a 2D system, set z-coordinates and nsize_z to 0.
