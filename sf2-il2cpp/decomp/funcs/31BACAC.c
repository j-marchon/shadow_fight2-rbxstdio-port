// DBIINAFCKME$$LCLOIIOOOMB @ RVA 0x31BACAC

void DBIINAFCKME__LCLOIIOOOMB(DBIINAFCKME_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566bda & 1) == 0) {
    FUN_01bab630(&StringLiteral_11871);
    DAT_04566bda = 1;
  }
  piVar1 = &(__this->fields).GLNNPKDAIPI;
  if (*piVar1 == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).GLNNPKDAIPI = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
  DBIINAFCKME__MLDEHFFGJDP(__this,StringLiteral_11871,CJNHFNHJHPE_00,in_x3);
  return;
}

