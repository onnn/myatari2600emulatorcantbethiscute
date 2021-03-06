#pragma once
class CPU {

	//unsigned char carry = (status >> 0) & 1U;
	//unsigned char zero = (status >> 1) & 1U;
	//unsigned char interruptDisable = (status >> 2) & 1U;
	//unsigned char decimalMode = (status >> 3) & 1U;
	//unsigned char breakCommand = (status >> 4) & 1U;
	//unsigned char expansion = (status >> 5) & 1U;
	//unsigned char overflow = (status >> 6) & 1U;
	//unsigned char negative = (status >> 7) & 1U;
	//to set:status |= 1U << 0;
	//to clear: status &= ~(1UL << 0); 
	//to check: ((status >> 0) & 1U) 


private:
	static bool negative;
	static bool zero;
	static bool carry;
	static bool overflow;
	static bool interruptDisable;
	static bool decimalMode;
	static bool breakCommand;
	static unsigned char status;

	static unsigned short programCounter;
	static unsigned short stackPointer;
	static unsigned char accumulator;
	static unsigned char indexRegisterX;
	static unsigned char indexRegisterY;
	static unsigned char addressBus;
	static unsigned int step;
public:
	static void Init();
	void Step();
	static void PrintValues();
	static void LDAImmediate();
	static void LDAZeroPage();
	static void LDAZeroPageX();
	static void LDAAbsolute();
	static void LDAAbsoluteX();
	static void LDAAbsoluteY();
	static void LDAIndirectX();
	static void LDAIndirectY();
	static void STAAbsolute();
	static void STAZeroPage();
	static void STAZeroPageX();
	static void STAAbsoluteX();
	static void STAAbsoluteY();
	static void STAIndirectX();
	static void STAIndirectY();
	static void ADCImmediate();
	static void ADCZeroPage();
	static void ADCZeroPageX();
	static void ADCAbsolute();
	static void ADCAbsoluteX();
	static void ADCAbsoluteY();
	static void ADCIndirectX();
	static void ADCIndirectY();
	static void SBCImmediate();
	static void SBCZeroPage();
	static void SBCZeroPageX();
	static void SBCAbsolute();
	static void SBCAbsoluteX();
	static void SBCAbsoluteY();
	static void SBCIndirectX();
	static void SBCIndirectY();
	static void ANDImmediate();
	static void ANDZeroPage();
	static void ANDZeroPageX();
	static void ANDAbsolute();
	static void ANDAbsoluteX();
	static void ANDAbsoluteY();
	static void ANDIndirectX();
	static void ANDIndirectY();
	static void ORAImmediate();
	static void ORAZeroPage();
	static void ORAZeroPageX();
	static void ORAAbsolute();
	static void ORAAbsoluteX();
	static void ORAAbsoluteY();
	static void ORAIndirectX();
	static void ORAIndirectY();
	static void EORImmediate();
	static void EORZeroPage();
	static void EORZeroPageX();
	static void EORAbsolute();
	static void EORAbsoluteX();
	static void EORAbsoluteY();
	static void EORIndirectX();
	static void EORIndirectY();
	static void SECImplied();
	static void CLCImplied();
	static void SEIImplied();
	static void CLIImplied();
	static void SEDImplied();
	static void CLDImplied();
	static void CLVImplied();
	static void JMPAbsolute();
	static void JMPIndirect();
	static void BMIRelative();
	static void BPLRelative();
	static void BCCRelative();
	static void BCSRelative();
	static void BEQRelative();
	static void BNERelative();
	static void BVSRelative();
	static void BVCRelative();
	static void CMPImmediate();
	static void CMPZeroPage();
	static void CMPZeroPageX();
	static void CMPAbsolute();
	static void CMPAbsoluteX();
	static void CMPAbsoluteY();
	static void CMPIndirectX();
	static void CMPIndirectY();
	static void BITZeroPage();
	static void BITAbsolute();
	static void LDXImmediate();
	static void LDXZeroPage();
	static void LDXZeroPageY();
	static void LDXAbsolute();
	static void LDXAbsoluteY();
	static void LDYImmediate();
	static void LDYZeroPage();
	static void LDYZeroPageX();
	static void LDYAbsolute();
	static void LDYAbsoluteX();
	static void STXZeroPage();
	static void STXZeroPageY();
	static void STXAbsolute();
	static void STYZeroPage();
	static void STYZeroPageX();
	static void STYAbsolute();
	static void INCZeroPage();
	static void INCZeroPageX();
	static void INCAbsolute();
	static void INCAbsoluteX();
	static void INXImplied();
	static void INYImplied();
	static void DECZeroPage();
	static void DECZeroPageX();
	static void DECAbsolute();
	static void DECAbsoluteX();
	static void DEXImplied();
	static void DEYImplied();
	static void CPXImmediate();
	static void CPXZeroPage();
	static void CPXAbsolute();
	static void CPYImmediate();
	static void CPYZeroPage();
	static void CPYAbsolute();
	static void TAXImplied();
	static void TXAImplied();
	static void TAYImplied();
	static void TYAImplied();
	static void JSRAbsolute();
	static void RTSImplied();
	static void PHAImplied();
	static void PLAImplied();
	static void TXSImplied();
	static void TSXImplied();
	static void PHPImplied();
	static void PLPImplied();
	static void RTIImplied();
	static void BRKImplied();
	static void LSRAccumulator();
	static void LSRZeroPage();
	static void LSRZeroPageX();
	static void LSRAbsolute();
	static void LSRAbsoluteX();
	static void ASLAccumulator();
	static void ASLZeroPage();
	static void ASLZeroPageX();
	static void ASLAbsolute();
	static void ASLAbsoluteX();
	static void ROLAccumulator();
	static void ROLZeroPage();
	static void ROLZeroPageX();
	static void ROLZeroPageY();
	static void ROLAbsolute();
	static void ROLAbsoluteX();
	static void RORAccumulator();
	static void RORZeroPage();
	static void RORZeroPageX();
	static void RORAbsolute();
	static void RORAbsoluteX();
	static void NOPImplied();
	static void NOPRealImplied();
	static void interrupt();
};

