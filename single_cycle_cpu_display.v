`timescale 1ns / 1ps
//*************************************************************************
//   > 文件名: single_cycle_cpu_display.v
//   > 描述  ：单周期CPU显示模块，调用FPGA板上的IO接口和触摸屏
//   > 作者  : LOONGSON
//   > 日期  : 2016-04-14
//*************************************************************************
module single_cycle_cpu_display(
    //时钟与复位信号
    input clk,
    input resetn,    //后缀"n"代表低电平有效

    //脉冲开关，用于产生脉冲clk，实现单步执行
    input btn_clk,

    );
//-----{时钟和复位信号}begin
//不需要更改，用于单步调试
    wire cpu_clk;    //单周期CPU里使用脉冲开关作为时钟，以实现单步执行
	 reg btn_clk_r1;
	 reg btn_clk_r2;
    always @(posedge clk)
    begin
        if (!resetn)
        begin
            btn_clk_r1<= 1'b0;
        end
        else
        begin
            btn_clk_r1 <= ~btn_clk;
        end

        btn_clk_r2 <= btn_clk_r1;
    end
	 
	 wire clk_en;
    assign clk_en = !resetn || (!btn_clk_r1 && btn_clk_r2);
    BUFGCE cpu_clk_cg(.I(clk),.CE(clk_en),.O(cpu_clk));
//-----{时钟和复位信号}end

//-----{调用单周期CPU模块}begin

    //用于在FPGA板上显示结果
    wire [31:0] cpu_pc;    //CPU的PC
    wire [31:0] cpu_inst;  //该PC取出的指令
    wire [ 4:0] rf_addr;   //扫描寄存器堆的地址
    wire [31:0] rf_data;   //寄存器堆从调试端口读出的数据
    reg  [31:0] mem_addr;  //要观察的内存地址
    wire [31:0] mem_data;  //内存地址对应的数据
    single_cycle_cpu cpu(
        .clk     (cpu_clk   ),
        .resetn  (resetn    ),
        .rf_addr (rf_addr ),
        .mem_addr(mem_addr),
        .rf_data (rf_data ),
        .mem_data(mem_data),
        .cpu_pc  (cpu_pc  ),
        .cpu_inst(cpu_inst)
    );
//-----{调用单周期CPU模块}end


//-----{从触摸屏获取输入}begin
//根据实际需要输入的数修改此小节，
//建议对每一个数的输入，编写单独一个always块
    always @(posedge clk)
    begin
        if (!resetn)
        begin
            mem_addr <= 32'd0;
        end
    end

endmodule
