//
// Created by mimoja on 19.06.17.
//

#ifndef RISCV_BNE_H
#define RISCV_BNE_H

#include "Instruction.h"

namespace instructions {
    class BNE : public Instruction {
    public:
        BNE(const decode::instruction_type &decoded) : Instruction(decoded) {
            sprintf(disas_buffer, "BNE %d, %d %08X", instr.B.rs1, instr.B.rs2, instr.B.getImm());
        }
        void execute(registers* reg, memory* mem) {
            if(reg->getReg32(instr.B.rs1) != reg->getReg32(instr.B.rs2))
                reg->setPC32(reg->getPC32()+instr.B.getImm());
        }
    };

}

#endif //RISCV_BNE_H
