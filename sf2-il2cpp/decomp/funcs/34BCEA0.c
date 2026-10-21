// PBGDDCFGPJI$$MergeFrom @ RVA 0x34BCEA0

void PBGDDCFGPJI__MergeFrom
               (PBGDDCFGPJI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GLPEFEEGCPM_o **ppGVar1;
  PBGDDCFGPJI_Fields *pPVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  GLPEFEEGCPM_o *pGVar5;
  
  if ((DAT_045685f2 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_045685f2 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppGVar1 = &(__this->fields).KEIBPDJHHBB;
    pPVar2 = &__this->fields;
    while( true ) {
      while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar3 == 10) {
        pGVar5 = *ppGVar1;
        if (pGVar5 == (GLPEFEEGCPM_o *)0x0) {
          pGVar5 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
          GLPEFEEGCPM___ctor(pGVar5,(MethodInfo *)0x0);
          *ppGVar1 = pGVar5;
          thunk_FUN_01c20e04(ppGVar1,pGVar5);
          pGVar5 = *ppGVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pGVar5,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pPVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pPVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pPVar2,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

