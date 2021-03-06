//
// Created by mimoja on 19.06.17.
//

#include "opcodes.h"

namespace decode {
    utype _LUI     = {.opcode = 0b0110111};
    utype _AUIPC   = {.opcode = 0b0010111};
    jtype _JAL     = {.opcode = 0b1101111};
    itype _JALR    = {.opcode = 0b1100111, .funct3 = 0b000};
    btype _BEQ     = {.opcode = 0b1100011, .funct3 = 0b000};
    btype _BNE     = {.opcode = 0b1100011, .funct3 = 0b001};
    btype _BLT     = {.opcode = 0b1100011, .funct3 = 0b100};
    btype _BGE     = {.opcode = 0b1100011, .funct3 = 0b101};
    btype _BLTU    = {.opcode = 0b1100011, .funct3 = 0b110};
    btype _BGEU    = {.opcode = 0b1100011, .funct3 = 0b111};
    itype _LB      = {.opcode = 0b0000011, .funct3 = 0b000};
    itype _LH      = {.opcode = 0b0000011, .funct3 = 0b001};
    itype _LW      = {.opcode = 0b0000011, .funct3 = 0b010};
    itype _LBU     = {.opcode = 0b0000011, .funct3 = 0b100};
    itype _LHU     = {.opcode = 0b0000011, .funct3 = 0b101};
    stype _SB      = {.opcode = 0b0100011, .funct3 = 0b000};
    stype _SH      = {.opcode = 0b0100011, .funct3 = 0b001};
    stype _SW      = {.opcode = 0b0100011, .funct3 = 0b010};
    itype _ADDI    = {.opcode = 0b0010011, .funct3 = 0b000};
    itype _SLTI    = {.opcode = 0b0010011, .funct3 = 0b010};
    itype _SLTIU   = {.opcode = 0b0010011, .funct3 = 0b011};
    itype _XORI    = {.opcode = 0b0010011, .funct3 = 0b100};
    itype _ORI     = {.opcode = 0b0010011, .funct3 = 0b110};
    itype _ANDI    = {.opcode = 0b0010011, .funct3 = 0b111};
    rtype _SLLI    = {.opcode = 0b0010011, .funct3 = 0b001, .funct7 = 0b0000000};
    rtype _SRLI    = {.opcode = 0b0010011, .funct3 = 0b101, .funct7 = 0b0000000};
    rtype _SRAI    = {.opcode = 0b0010011, .funct3 = 0b101, .funct7 = 0b0100000};
    rtype _ADD     = {.opcode = 0b0110011, .funct3 = 0b000, .funct7 = 0b0000000};
    rtype _SUB     = {.opcode = 0b0110011, .funct3 = 0b000, .funct7 = 0b0100000};
    rtype _SLL     = {.opcode = 0b0110011, .funct3 = 0b001, .funct7 = 0b0000000};
    rtype _SLT     = {.opcode = 0b0110011, .funct3 = 0b010, .funct7 = 0b0000000};
    rtype _SLTU    = {.opcode = 0b0110011, .funct3 = 0b011, .funct7 = 0b0000000};
    rtype _XOR     = {.opcode = 0b0110011, .funct3 = 0b100, .funct7 = 0b0000000};
    rtype _SRL     = {.opcode = 0b0110011, .funct3 = 0b101, .funct7 = 0b0000000};
    rtype _SRA     = {.opcode = 0b0110011, .funct3 = 0b101, .funct7 = 0b0100000};
    rtype _OR      = {.opcode = 0b0110011, .funct3 = 0b110, .funct7 = 0b0000000};
    rtype _AND     = {.opcode = 0b0110011, .funct3 = 0b111, .funct7 = 0b0000000};
    itype _FENCE   = {.opcode = 0b0001111, .funct3 = 0b000, .rd = 0b00000, .rs1 = 0b00000};
    itype _FENCE_I = {.opcode = 0b0001111, .funct3 = 0b001, .rd = 0b00000, .rs1 = 0b00000, .imm0_11 = 0b000000000000};
    itype _ECALL   = {.opcode = 0b1110011, .funct3 = 0b000, .rd = 0b00000, .rs1 = 0b00000, .imm0_11 = 0b000000000000};
    itype _EBREAK  = {.opcode = 0b1110011, .funct3 = 0b001, .rd = 0b00000, .rs1 = 0b00000, .imm0_11 = 0b000000000001};
    itype _CSRRW   = {.opcode = 0b1110011, .funct3 = 0b001};
    itype _CSRRS   = {.opcode = 0b1110011, .funct3 = 0b010};
    itype _CSRRC   = {.opcode = 0b1110011, .funct3 = 0b011};
    itype _CSRRWI  = {.opcode = 0b1110011, .funct3 = 0b101};
    itype _CSRRSI  = {.opcode = 0b1110011, .funct3 = 0b110};
    itype _CSRRCI  = {.opcode = 0b1110011, .funct3 = 0b111};

}