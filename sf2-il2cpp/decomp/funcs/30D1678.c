// BECIPDJBAOG$$MergeFrom @ RVA 0x30D1678

void BECIPDJBAOG__MergeFrom
               (BECIPDJBAOG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BECIPDJBAOG_Fields *pBVar1;
  uint uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_04566307 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04566307 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar2 != 0) {
      pBVar1 = &__this->fields;
      do {
        if (uVar2 < 0x13) {
          if (uVar2 == 10) {
            CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString
                                    (AIGOBLJEBCA,(MethodInfo *)0x0);
            BECIPDJBAOG__AOFFLABEAGC(__this,CJNHFNHJHPE,method);
          }
          else {
            if (uVar2 == 0x12) {
              __this_00 = (__this->fields).LEJBLHJFJHP;
              if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                method = (MethodInfo *)BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE;
                goto LAB_031d17b4;
              }
              goto LAB_031d17fc;
            }
LAB_031d1750:
            method = (MethodInfo *)0x0;
            pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pBVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pBVar1->CKFPENBPNML = pGVar4;
            thunk_FUN_01c20e04(pBVar1,pGVar4);
          }
        }
        else if (uVar2 == 0x1a) {
          __this_00 = (__this->fields).AKFPFIHIHOC;
          if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
          goto LAB_031d17fc;
          method = (MethodInfo *)BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB;
LAB_031d17b4:
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)method,
                     Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__)
          ;
        }
        else if (uVar2 == 0x20) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).EMOLIBOCKJK = iVar3;
        }
        else {
          if (uVar2 != 0x28) goto LAB_031d1750;
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).NLLKMEMKBAF = iVar3;
        }
        uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar2 != 0);
    }
    return;
  }
LAB_031d17fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

