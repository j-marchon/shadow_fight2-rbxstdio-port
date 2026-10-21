// LKPNOBFEAKD$$ODPPMDEEHEA @ RVA 0x31594BC

void LKPNOBFEAKD__ODPPMDEEHEA(LKPNOBFEAKD_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_0456685a & 1) == 0) {
    FUN_01bab630(&StringLiteral_11431);
    FUN_01bab630(&StringLiteral_6310);
    DAT_0456685a = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11431,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6310,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).OADCIDFJCOE = 0;
      return;
    }
    iVar2 = 2;
  }
  (__this->fields).OADCIDFJCOE = iVar2;
  return;
}

