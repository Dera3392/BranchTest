`timescale 1ns / 1ps
//*************************************************************************
//   > �ļ���: inst_rom.v
//   > ����  ���첽ָ��洢��ģ�飬���üĴ�������ɣ����ƼĴ�����
//   >         ��Ƕ��ָ�ֻ�����첽��
//   > ����  : LOONGSON
//   > ����  : 2016-04-14
//*************************************************************************
module inst_rom(
    input      [4 :0] addr, // ָ���ַ
    output reg [31:0] inst       // ָ��
    );

    wire [31:0] inst_rom[19:0];  // ָ��洢�����ֽڵ�ַ7'b000_0000~7'b111_1111
    //------------- ָ����� ---------|ָ���ַ|--- ���ָ�� -----|- ָ���� -----//
    assign inst_rom[ 0] = 32'h2401000A; // 00H: addiu $1 ,$0,#10   | $1 = 0000_000AH
    assign inst_rom[ 1] = 32'h00011082; // 04H: srl   $2 ,$1,#2   | $2 = 0000_0002H
    assign inst_rom[ 2] = 32'h00411821; // 08H: addu  $3 ,$2,$1   | $3 = 0000_000CH
    assign inst_rom[ 3] = 32'h00032100; // 0CH: sll   $4 ,$3,#4   | $4 = 0000_00C0H
    assign inst_rom[ 4] = 32'h00822823; // 10H: subu  $5 ,$4,$2   | $5 = 0000_00BEH
    assign inst_rom[ 5] = 32'hAC250016; // 14H: sw    $5 ,#24($1) | Mem[0000_0020H] = 0000_00BEH
    assign inst_rom[ 6] = 32'h00A23027; // 18H: nor   $6 ,$5,$2   | $6 = FFFF_FF41H
    assign inst_rom[ 7] = 32'h00C33825; // 1CH: or    $7 ,$6,$3   | $7 = FFFF_FF4DH
    assign inst_rom[ 8] = 32'h00E64026; // 20H: xor   $8 ,$7,$6   | $8 = 0000_000CH
    assign inst_rom[ 9] = 32'hAC08001C; // 24H: sw    $8 ,#28($0) | Mem[0000_0020H] = 0000_00BEH
    assign inst_rom[10] = 32'h00C7482A; // 28H: slt   $9 ,$6,$7   | $9 = 0000_0001H
    assign inst_rom[11] = 32'h11210002; // 2CH: beq   $9 ,$1,#2   | ��ִ��
    assign inst_rom[12] = 32'h24010004; // 30H: addiu $1 ,$0,#4   | $1= 0000_0004H
    assign inst_rom[13] = 32'h8C2A0016; // 34H: lw    $10,#24($1) | $10 = 0000_0000H
    assign inst_rom[14] = 32'h15450003; // 38H: bne   $10,$5,#3   | ��ת��44H
    assign inst_rom[15] = 32'h00415824; // 3CH: and   $11,$2,$1   | $11= 0000_000CH
    assign inst_rom[16] = 32'hAC0B001C; // 40H: sw    $11,#28($0) | Mem[0000_0020H] = 0000_000CH
    assign inst_rom[17] = 32'hAC040010; // 44H: sw    $4 ,#16($0) | Mem[0000_0010H] = 0000_00C0H
    assign inst_rom[18] = 32'h3C0C000C; // 48H: lui   $12,#12     | [R12] = 000C_0000H
    assign inst_rom[19] = 32'h08000000; // 4CH: j     00H         | ��תָ��00H
    //0010 0100 0000 0001 0000 0000 0000 1010
    //0000 0000 0000 0001 0001 0000 1000 0010
    //0000 0000 0000 0011 0010 0001 0000 0000
    //0000 0000 1000 0010 0010 1000 0010 0011
    //1010 1100 0010 0101 0000 0000 0001 0110
    //1000 1100 0010 1010 0000 0000 0001 0110 
    //0001 0101 0100 0101 0000 0000 0000 0011
    //��ָ��,ȡ4�ֽ�
    always @(*)
    begin
        case (addr)
            5'd0 : inst = inst_rom[0 ];
            5'd1 : inst = inst_rom[1 ];
            5'd2 : inst = inst_rom[2 ];
            5'd3 : inst = inst_rom[3 ];
            5'd4 : inst = inst_rom[4 ];
            5'd5 : inst = inst_rom[5 ];
            5'd6 : inst = inst_rom[6 ];
            5'd7 : inst = inst_rom[7 ];
            5'd8 : inst = inst_rom[8 ];
            5'd9 : inst = inst_rom[9 ];
            5'd10: inst = inst_rom[10];
            5'd11: inst = inst_rom[11];
            5'd12: inst = inst_rom[12];
            5'd13: inst = inst_rom[13];
            5'd14: inst = inst_rom[14];
            5'd15: inst = inst_rom[15];
            5'd16: inst = inst_rom[16];
            5'd17: inst = inst_rom[17];
            5'd18: inst = inst_rom[18];
            5'd19: inst = inst_rom[19];
            default: inst = 32'd0;
        endcase
    end
    //test string2
    //test string
    //�ֶ������ͻ
endmodule