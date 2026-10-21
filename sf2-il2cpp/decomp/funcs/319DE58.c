// GPKDMPJJEOO$$MergeFrom @ RVA 0x319DE58

void GPKDMPJJEOO__MergeFrom
               (GPKDMPJJEOO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  GPKDMPJJEOO_Fields *pGVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  PGICCMFLDPI_o *pPVar5;
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  
  if ((DAT_04566ac0 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_AddEntriesFrom__);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566ac0 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pGVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
          pPVar5 = *ppPVar1;
          if (pPVar5 == (PGICCMFLDPI_o *)0x0) {
            pPVar5 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
            PGICCMFLDPI___ctor(pPVar5,(MethodInfo *)0x0);
            *ppPVar1 = pPVar5;
            thunk_FUN_01c20e04(ppPVar1,pPVar5);
            pPVar5 = *ppPVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar5,(MethodInfo *)0x0);
        }
        if (uVar3 == 0x12) break;
        if (uVar3 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pGVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pGVar2->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pGVar2,pGVar4);
      }
      __this_00 = (__this->fields).PPDLPBMONBL;
      if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_MapField_string__string__o *)0x0) break;
      Google_Protobuf_Collections_MapField<object,_object>__AddEntriesFrom
                ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)
                 GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE,
                 Method_Google_Protobuf_Collections_MapField<string,_string>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

