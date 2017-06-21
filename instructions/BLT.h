//
// Created by mimoja on 19.06.17.
//

#ifndef RISCV_BLT_H
#define RISCV_BLT_H

#include "Instruction.h"

namespace instructions {
    class BLT : public Instruction {
    public:
        BLT(const decode::instruction_type &decoded) : Instruction(decoded) {
            sprintf(disas_buffer, "BLT %d, %d %08X", instr.B.rs1, instr.B.rs2, instr.B.getImm());
        }
        void execute(registers* reg, memory* mem) {
            if(((int32_t )reg->getReg32(instr.B.rs1)) < ((int32_t )reg->getReg32(instr.B.rs2)))
                reg->setPC32(reg->getPC32() + instr.B.getImm());
        }
    };

}

#endif //RISCV_BLT_H
