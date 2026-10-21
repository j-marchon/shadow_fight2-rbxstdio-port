// GLPEFEEGCPM$$.ctor @ RVA 0x3224F68

void GLPEFEEGCPM___ctor(GLPEFEEGCPM_o *__this,GLPEFEEGCPM_o *IBKIPBJJCPG,MethodInfo *method)

{
  FADHMEJJCPO_o *pFVar1;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  FADHMEJJCPO_o **ppFVar4;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566f72 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Clone__);
    DAT_04566f72 = 1;
    method_00 = extraout_x1;
  }
  GLPEFEEGCPM___ctor(__this,method_00);
  if (IBKIPBJJCPG != (GLPEFEEGCPM_o *)0x0) {
    pFVar1 = (IBKIPBJJCPG->fields).PBBGNHKFEPG;
    if (pFVar1 == (FADHMEJJCPO_o *)0x0) {
      pFVar1 = (FADHMEJJCPO_o *)0x0;
    }
    else {
      pFVar1 = FADHMEJJCPO__Clone(pFVar1,(MethodInfo *)0x0);
    }
    if (__this != (GLPEFEEGCPM_o *)0x0) {
      ppFVar4 = &(__this->fields).PBBGNHKFEPG;
      *ppFVar4 = pFVar1;
      thunk_FUN_01c20e04(ppFVar4);
      (__this->fields).LAEGCKIFDOC = (IBKIPBJJCPG->fields).LAEGCKIFDOC;
      pGVar2 = (IBKIPBJJCPG->fields).MPAIPMANDEO;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Clone__);
        (__this->fields).MPAIPMANDEO = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(&__this->fields,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

