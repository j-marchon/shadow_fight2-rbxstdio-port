// DBIINAFCKME$$FHDNKIFDNPD @ RVA 0x31BB2C4

void DBIINAFCKME__FHDNKIFDNPD(DBIINAFCKME_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  System_String_o **ppSVar2;
  
  if ((DAT_04566bdf & 1) == 0) {
    FUN_01bab630(&StringLiteral_9079);
    DAT_04566bdf = 1;
  }
  ppSVar2 = &(__this->fields).MEMLDPNJDBK;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields).MEMLDPNJDBK = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  DBIINAFCKME__MLDEHFFGJDP(__this,StringLiteral_9079,(__this->fields).MEMLDPNJDBK,in_x3);
  return;
}

