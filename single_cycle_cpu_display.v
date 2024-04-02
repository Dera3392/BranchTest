`timescale 1ns / 1ps
//*************************************************************************
//   > �ļ���: single_cycle_cpu_display.v
//   > ����  ��������CPU��ʾģ�飬����FPGA���ϵ�IO�ӿںʹ�����
//   > ����  : LOONGSON
//   > ����  : 2016-04-14
//*************************************************************************
module single_cycle_cpu_display(
    //ʱ���븴λ�ź�
    input clk,
    input resetn,    //��׺"n"����͵�ƽ��Ч

    //���忪�أ����ڲ�������clk��ʵ�ֵ���ִ��
    input btn_clk,

    );
//-----{ʱ�Ӻ͸�λ�ź�}begin
//����Ҫ���ģ����ڵ�������
    wire cpu_clk;    //������CPU��ʹ�����忪����Ϊʱ�ӣ���ʵ�ֵ���ִ��
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
//-----{ʱ�Ӻ͸�λ�ź�}end

//-----{���õ�����CPUģ��}begin

    //������FPGA������ʾ���
    wire [31:0] cpu_pc;    //CPU��PC
    wire [31:0] cpu_inst;  //��PCȡ����ָ��
    wire [ 4:0] rf_addr;   //ɨ��Ĵ����ѵĵ�ַ
    wire [31:0] rf_data;   //�Ĵ����Ѵӵ��Զ˿ڶ���������
    reg  [31:0] mem_addr;  //Ҫ�۲���ڴ��ַ
    wire [31:0] mem_data;  //�ڴ��ַ��Ӧ������
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
//-----{���õ�����CPUģ��}end


//-----{�Ӵ�������ȡ����}begin
//����ʵ����Ҫ��������޸Ĵ�С�ڣ�
//�����ÿһ���������룬��д����һ��always��
    always @(posedge clk)
    begin
        if (!resetn)
        begin
            mem_addr <= 32'd0;
        end
    end

endmodule
