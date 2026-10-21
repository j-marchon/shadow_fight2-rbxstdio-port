// EAJJPPPJENA$$MergeFrom @ RVA 0x32D5A30

void EAJJPPPJENA__MergeFrom
               (EAJJPPPJENA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  JMCDPBKILIN_o **ppJVar1;
  EAJJPPPJENA_Fields *pEVar2;
  uint32_t uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  JMCDPBKILIN_o *pJVar6;
  
  if ((DAT_04567585 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04567585 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppJVar1 = &(__this->fields).NCFPAHCCDBB;
    pEVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).EMOLIBOCKJK = iVar4;
        }
        if (uVar3 != 0x12) break;
        pJVar6 = *ppJVar1;
        if (pJVar6 == (JMCDPBKILIN_o *)0x0) {
          pJVar6 = (JMCDPBKILIN_o *)thunk_FUN_01bda818(JMCDPBKILIN_TypeInfo);
          JMCDPBKILIN___ctor(pJVar6,(MethodInfo *)0x0);
          *ppJVar1 = pJVar6;
          thunk_FUN_01c20e04(ppJVar1,pJVar6);
          pJVar6 = *ppJVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pJVar6,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pEVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pEVar2->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pEVar2,pGVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

