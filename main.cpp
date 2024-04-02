#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>             // Need std::cout
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "obj_dir/Vsingle_cycle_cpu.h"  //修改1头文件

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vsingle_cycle_cpu* top;  // 修改2
double sc_time_stamp() { return 0; }
void step_and_dump_wave(){
  top->eval();
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vsingle_cycle_cpu;    //修改3
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  delete top;
  tfp->close();
  delete contextp;
}

int main() {
  sim_init();
/*
    input         clk,
    input         resetn,
    input  [ 4:0] rf_addr,
    input  [31:0] mem_addr,
    output [31:0] rf_data,
    output [31:0] mem_data,
    output [31:0] cpu_pc,
    output [31:0] cpu_inst

);
*/
  int i,j;
  int clk=0;
  int resetn=0;
  int rf_addr,cpu_pc,cpu_inst;
  top->clk=clk; top->resetn=resetn; step_and_dump_wave();
  resetn = 1;
  top->clk=clk; top->resetn=resetn; step_and_dump_wave();  
  for(i=0;i<30;i++)
    {
      clk = 1;
      top->clk=clk; top->resetn=resetn; step_and_dump_wave();
      printf("PC = %x ,INST = %08x \n",top->cpu_pc,top->cpu_inst);
    
      clk = 0;
      top->clk=clk; top->resetn=resetn; step_and_dump_wave();
    }

  for(j=0;j<13;j++)
    {
      rf_addr=j;
     top->rf_addr=rf_addr;
     step_and_dump_wave();
      printf("RF%d = %08x  ",rf_addr,top->rf_data);
      if(j==7)    printf("\n");
    }
    printf("\n");

    
    int mem_addr;
    printf("mem info\n");
    for(j=0;j<16;j++)
    {
     mem_addr=j*4;
     top->mem_addr=mem_addr;
     step_and_dump_wave();
     printf("MEM%d = %08x  ",mem_addr,top->mem_data);
      if(j%8==7)    printf("\n");
    }
    printf("\n");

  printf("\n");

  sim_exit();
  return 0;
}

