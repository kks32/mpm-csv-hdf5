#include <iostream>
#include <vector>

#include "csv.h"
#include "hdf5_particle.h"

int main() {
  std::vector<mpm::HDF5Particle> pdata;  // = new HDF5Particle[nparticles];

  io::CSVReader<53> in("particles0000.csv");
  in.read_header(
      io::ignore_extra_column, "id", "mass", "volume", "pressure", "coord_x",
      "coord_y", "coord_z", "displacement_x", "displacement_y",
      "displacement_z", "nsize_x", "nsize_y", "nsize_z", "velocity_x",
      "velocity_y", "velocity_z", "stress_xx", "stress_yy", "stress_zz",
      "tau_xy", "tau_yz", "tau_xz", "strain_xx", "strain_yy", "strain_zz",
      "gamma_xy", "gamma_yz", "gamma_xz", "epsilon_v", "status", "cell_id",
      "material_id", "nstate_vars", "svars_0", "svars_1", "svars_2", "svars_3",
      "svars_4", "svars_5", "svars_6", "svars_7", "svars_8", "svars_9",
      "svars_10", "svars_11", "svars_12", "svars_13", "svars_14", "svars_15",
      "svars_16", "svars_17", "svars_18", "svars_19");

  unsigned id;
  double mass;
  double volume;
  double pressure;
  double coord_x;
  double coord_y;
  double coord_z;
  double displacement_x;
  double displacement_y;
  double displacement_z;
  double nsize_x;
  double nsize_y;
  double nsize_z;
  double velocity_x;
  double velocity_y;
  double velocity_z;
  double stress_xx;
  double stress_yy;
  double stress_zz;
  double tau_xy;
  double tau_yz;
  double tau_xz;
  double strain_xx;
  double strain_yy;
  double strain_zz;
  double gamma_xy;
  double gamma_yz;
  double gamma_xz;
  double epsilon_v;
  unsigned status;
  unsigned cell_id;
  unsigned material_id;
  unsigned nstate_vars;
  double svars_0;
  double svars_1;
  double svars_2;
  double svars_3;
  double svars_4;
  double svars_5;
  double svars_6;
  double svars_7;
  double svars_8;
  double svars_9;
  double svars_10;
  double svars_11;
  double svars_12;
  double svars_13;
  double svars_14;
  double svars_15;
  double svars_16;
  double svars_17;
  double svars_18;
  double svars_19;
  while (in.read_row(
      id, mass, volume, pressure, coord_x, coord_y, coord_z, displacement_x,
      displacement_y, displacement_z, nsize_x, nsize_y, nsize_z, velocity_x,
      velocity_y, velocity_z, stress_xx, stress_yy, stress_zz, tau_xy, tau_yz,
      tau_xz, strain_xx, strain_yy, strain_zz, gamma_xy, gamma_yz, gamma_xz,
      epsilon_v, status, cell_id, material_id, nstate_vars, svars_0, svars_1,
      svars_2, svars_3, svars_4, svars_5, svars_6, svars_7, svars_8, svars_9,
      svars_10, svars_11, svars_12, svars_13, svars_14, svars_15, svars_16,
      svars_17, svars_18, svars_19)) {

    mpm::HDF5Particle particle;
    particle.id = id;
    particle.mass = mass;
    particle.volume = volume;
    particle.pressure = pressure;

    particle.coord_x = coord_x;
    particle.coord_y = coord_y;
    particle.coord_z = coord_z;

    particle.displacement_x = displacement_x;
    particle.displacement_y = displacement_y;
    particle.displacement_z = displacement_z;

    particle.nsize_x = nsize_x;
    particle.nsize_y = nsize_y;
    particle.nsize_z = nsize_z;

    particle.velocity_x = velocity_x;
    particle.velocity_y = velocity_y;
    particle.velocity_z = velocity_z;

    particle.stress_xx = stress_xx;
    particle.stress_yy = stress_yy;
    particle.stress_zz = stress_zz;
    particle.tau_xy = tau_xy;
    particle.tau_yz = tau_yz;
    particle.tau_xz = tau_xz;

    particle.strain_xx = strain_xx;
    particle.strain_yy = strain_yy;
    particle.strain_zz = strain_zz;
    particle.gamma_xy = gamma_xy;
    particle.gamma_yz = gamma_yz;
    particle.gamma_xz = gamma_xz;

    particle.epsilon_v = epsilon_v;
    particle.status = status;
    particle.cell_id = cell_id;
    particle.material_id = material_id;
    particle.nstate_vars = nstate_vars;

    particle.svars[0] = svars_0;
    particle.svars[1] = svars_1;
    particle.svars[2] = svars_2;
    particle.svars[3] = svars_3;
    particle.svars[4] = svars_4;
    particle.svars[5] = svars_5;
    particle.svars[6] = svars_6;
    particle.svars[7] = svars_7;
    particle.svars[8] = svars_8;
    particle.svars[9] = svars_9;
    particle.svars[10] = svars_10;
    particle.svars[11] = svars_11;
    particle.svars[12] = svars_12;
    particle.svars[13] = svars_13;
    particle.svars[14] = svars_14;
    particle.svars[15] = svars_15;
    particle.svars[16] = svars_16;
    particle.svars[17] = svars_17;
    particle.svars[18] = svars_18;
    particle.svars[19] = svars_19;
  }
}
