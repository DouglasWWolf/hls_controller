############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_controller
set_top controller
add_files hls_controller/uart.cpp
add_files hls_controller/controller.cpp
add_files hls_controller/axi4lite.cpp
add_files -tb hls_controller/testbench.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vivado
set_part {xc7a100t-csg324-1}
create_clock -period 10 -name default
config_export -display_name hls_controller -format ip_catalog -output C:/fpga/ip_repo/hls_controller.zip -rtl verilog
config_unroll -tripcount_threshold 1
source "./hls_controller/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -output C:/fpga/ip_repo/hls_controller.zip
