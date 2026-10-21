// DBIINAFCKME$$DLLHOLJPNNJ @ RVA 0x31BB354

void DBIINAFCKME__DLLHOLJPNNJ(DBIINAFCKME_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  System_String_o **ppSVar2;
  
  if ((DAT_04566be0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8335);
    DAT_04566be0 = 1;
  }
  ppSVar2 = &(__this->fields).MIGGLEOLMPE;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields).MIGGLEOLMPE = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  DBIINAFCKME__MLDEHFFGJDP(__this,StringLiteral_8335,(__this->fields).MIGGLEOLMPE,in_x3);
  return;
}

