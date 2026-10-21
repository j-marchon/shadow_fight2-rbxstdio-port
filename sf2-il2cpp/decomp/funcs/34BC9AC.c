// PBGDDCFGPJI$$.ctor @ RVA 0x34BC9AC

void PBGDDCFGPJI___ctor(PBGDDCFGPJI_o *__this,PBGDDCFGPJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  GLPEFEEGCPM_o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (PBGDDCFGPJI_o *)0x0) {
    pGVar1 = (IBKIPBJJCPG->fields).KEIBPDJHHBB;
    if (pGVar1 == (GLPEFEEGCPM_o *)0x0) {
      pGVar1 = (GLPEFEEGCPM_o *)0x0;
    }
    else {
      pGVar1 = GLPEFEEGCPM__Clone(pGVar1,(MethodInfo *)0x0);
    }
    if (__this != (PBGDDCFGPJI_o *)0x0) {
      (__this->fields).KEIBPDJHHBB = pGVar1;
      thunk_FUN_01c20e04();
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

