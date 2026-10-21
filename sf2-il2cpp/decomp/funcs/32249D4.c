// GLPEFEEGCPM$$MergeFrom @ RVA 0x32249D4

void GLPEFEEGCPM__MergeFrom
               (GLPEFEEGCPM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  FADHMEJJCPO_o **ppFVar1;
  GLPEFEEGCPM_Fields *pGVar2;
  uint32_t uVar3;
  int64_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  FADHMEJJCPO_o *pFVar6;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  
  if ((DAT_04566f6a & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_AddEntriesFrom__);
    DAT_04566f6a = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppFVar1 = &(__this->fields).PBBGNHKFEPG;
    pGVar2 = &__this->fields;
    do {
      while( true ) {
        while( true ) {
          while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
                (int)uVar3 < 0x10) {
            if (uVar3 != 10) {
              if (uVar3 == 0) {
                return;
              }
              goto LAB_03324b08;
            }
            pFVar6 = *ppFVar1;
            if (pFVar6 == (FADHMEJJCPO_o *)0x0) {
              pFVar6 = (FADHMEJJCPO_o *)thunk_FUN_01bda818(FADHMEJJCPO_TypeInfo);
              FADHMEJJCPO___ctor(pFVar6,(MethodInfo *)0x0);
              *ppFVar1 = pFVar6;
              thunk_FUN_01c20e04(ppFVar1,pFVar6);
              pFVar6 = *ppFVar1;
            }
            Google_Protobuf_CodedInputStream__ReadMessage
                      (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pFVar6,(MethodInfo *)0x0);
          }
          if (uVar3 != 0x10) break;
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LAEGCKIFDOC = iVar4;
        }
        if (uVar3 == 0x1a) break;
LAB_03324b08:
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pGVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pGVar2->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pGVar2,pGVar5);
      }
      __this_00 = (__this->fields).MPAIPMANDEO;
      if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB
                 ,Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_AddEntriesFrom__);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

