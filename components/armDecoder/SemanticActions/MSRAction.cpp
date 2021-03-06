//  DO-NOT-REMOVE begin-copyright-block
// QFlex consists of several software components that are governed by various
// licensing terms, in addition to software that was developed internally.
// Anyone interested in using QFlex needs to fully understand and abide by the
// licenses governing all the software components.
//
// ### Software developed externally (not by the QFlex group)
//
//     * [NS-3] (https://www.gnu.org/copyleft/gpl.html)
//     * [QEMU] (http://wiki.qemu.org/License)
//     * [SimFlex] (http://parsa.epfl.ch/simflex/)
//     * [GNU PTH] (https://www.gnu.org/software/pth/)
//
// ### Software developed internally (by the QFlex group)
// **QFlex License**
//
// QFlex
// Copyright (c) 2020, Parallel Systems Architecture Lab, EPFL
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimer in the documentation
//       and/or other materials provided with the distribution.
//     * Neither the name of the Parallel Systems Architecture Laboratory, EPFL,
//       nor the names of its contributors may be used to endorse or promote
//       products derived from this software without specific prior written
//       permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE PARALLEL SYSTEMS ARCHITECTURE LABORATORY,
// EPFL BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//  DO-NOT-REMOVE end-copyright-block

//#include <iostream>
//#include <iomanip>

//#include <core/boost_extensions/intrusive_ptr.hpp>
//#include <boost/throw_exception.hpp>
//#include <boost/function.hpp>
//#include <boost/lambda/lambda.hpp>
// namespace ll = boost::lambda;

//#include <boost/none.hpp>

//#include <boost/dynamic_bitset.hpp>

//#include <core/target.hpp>
//#include <core/debug/debug.hpp>
//#include <core/types.hpp>

//#include <components/uArchARM/uArchInterfaces.hpp>

//#include "../SemanticInstruction.hpp"
//#include "../Effects.hpp"
//#include "../SemanticActions.hpp"
//#include "PredicatedSemanticAction.hpp"

//#include <components/uArchARM/systemRegister.hpp>

//#define DBG_DeclareCategories armDecoder
//#define DBG_SetDefaultOps AddCat(armDecoder)
//#include DBG_Control()

// namespace narmDecoder {

// using namespace nuArchARM;

// struct MSRAction : public PredicatedSemanticAction {
//  uint8_t theOp1, theOp2, theCRm;

//  MSRAction( SemanticInstruction * anInstruction,
//                  eOperandCode anOperandCode,
//                  uint8_t op0,
//                  uint8_t op1,
//                  uint8_t crn,
//                  uint8_t crm,
//                  uint8_t op2,
//                  bool hasCP )
//    : PredicatedSemanticAction( anInstruction, 1, true )
//    , theOp1( op1 )
//    , theOp2( op2 )
//    , theCRm( crm )
//  {
//    setReady( 0, true );
//  }

//  void doEvaluate() {

//    uint8_t op = theOp1 << 3 | theOp2;

//    switch (op) {
//    case 0x3: // FIXME: find out which model of uarch were modelling

//      break;
//    default:
//      break;
//    }

//      // further access checks
//      SysRegInfo& ri = theInstruction->core()->getSysRegInfo(theOp0, theOp1,
//      theOp2, theCRn, theCRm, thehasCP); if
//      (ri->accessfn(theInstruction->core()) == kACCESS_OK){
//          Operand val = ri->readfn(theInstruction->core());
//            theInstruction->setOperand(theOperandCode, val);
//      }
//    satisfyDependants();
//  }

//  void describe( std::ostream & anOstream) const {
//    anOstream << theInstruction->identify() << " Read SYS store in " <<
//    theOperandCode;
//  }

//};

// predicated_action MSRAction
//( SemanticInstruction * anInstruction, uint8_t op1, uint8_t op2, uint8_t crm
//) {
//  MSRAction * act = new MSRAction( anInstruction, op1,
//  op2, crm);
//  anInstruction->addNewComponent(act);

//  return predicated_action( act, act->predicate() );
//}

//} //narmDecoder
