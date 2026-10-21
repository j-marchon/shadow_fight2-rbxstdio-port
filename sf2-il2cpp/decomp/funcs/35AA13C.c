// EMBNHHOCCBH$$MergeFrom @ RVA 0x35AA13C

void EMBNHHOCCBH__MergeFrom
               (EMBNHHOCCBH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  EMBNHHOCCBH_Fields *pEVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KAMBBJFPLGM_o *pKVar5;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  
  if ((DAT_04568e41 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_AddEntriesFrom__);
    DAT_04568e41 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppKVar1 = &(__this->fields).OPHCNELIOLD;
    pEVar2 = &__this->fields;
    while( true ) {
      while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar3 != 10) {
        if (uVar3 == 0x12) {
          pKVar5 = *ppKVar1;
          if (pKVar5 == (KAMBBJFPLGM_o *)0x0) {
            pKVar5 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
            KAMBBJFPLGM___ctor(pKVar5,(MethodInfo *)0x0);
            *ppKVar1 = pKVar5;
            thunk_FUN_01c20e04(ppKVar1,pKVar5);
            pKVar5 = *ppKVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar5,(MethodInfo *)0x0);
        }
        else {
          if (uVar3 == 0) {
            return;
          }
          pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pEVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pEVar2->CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(pEVar2,pGVar4);
        }
      }
      __this_00 = (__this->fields).MJIIHOLHNCK;
      if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)EMBNHHOCCBH_TypeInfo->static_fields->EKPNGGCFBJH
                 ,Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

