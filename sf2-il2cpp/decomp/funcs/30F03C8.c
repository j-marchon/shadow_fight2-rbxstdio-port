// HOOAAGABMBL$$HCLEGBKJBCC @ RVA 0x30F03C8

void HOOAAGABMBL__HCLEGBKJBCC
               (HOOAAGABMBL_o *__this,FJIFBJMMKHG_o *LIPGCBPEKFO,DEFIPIDEFOO_o *OAOLCGAIILM,
               bool *ALBCNGFNGPH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04566420 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6546);
    FUN_01bab630(&StringLiteral_19738);
    FUN_01bab630(&StringLiteral_6548);
    FUN_01bab630(&StringLiteral_16742);
    FUN_01bab630(&StringLiteral_6547);
    DAT_04566420 = 1;
  }
  *ALBCNGFNGPH = false;
  if (LIPGCBPEKFO != (FJIFBJMMKHG_o *)0x0) {
    (__this->fields)._CIEBCKIBJHL_k__BackingField =
         (LIPGCBPEKFO->fields)._CIEBCKIBJHL_k__BackingField;
    thunk_FUN_01c20e04();
    pSVar2 = System_String__Concat
                       ((LIPGCBPEKFO->fields)._DGKHEMIDIFL_k__BackingField,
                        (LIPGCBPEKFO->fields)._PBKJNFIKPOM_k__BackingField,(MethodInfo *)0x0);
    (__this->fields).KPKHGGOBOJG = pSVar2;
    thunk_FUN_01c20e04();
    (__this->fields).AAEIONBBBBF = (LIPGCBPEKFO->fields)._DGKHEMIDIFL_k__BackingField;
    thunk_FUN_01c20e04();
    (__this->fields).BEJKCHFCABF = (LIPGCBPEKFO->fields)._BMEHGOBKKFI_k__BackingField;
    thunk_FUN_01c20e04();
    (__this->fields)._ILMMODKJGFK_k__BackingField =
         (LIPGCBPEKFO->fields)._PEGBMAEONOE_k__BackingField;
    thunk_FUN_01c20e04();
    if (OAOLCGAIILM != (DEFIPIDEFOO_o *)0x0) {
      pSVar2 = (OAOLCGAIILM->fields).JMGIACHBIKG;
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_19738,(MethodInfo *)0x0);
      if (bVar1) {
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_50,(LIPGCBPEKFO->fields)._HFPMLGFDOKC_k__BackingField,(MethodInfo *)0x0);
        (__this->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue =
             local_50.fields.hiddenValue;
        (__this->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey =
             local_50.fields.currentCryptoKey;
        (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive =
             local_50.fields.fakeValueActive;
        (__this->fields)._DILLJMLCPON_k__BackingField.fields.inited = local_50.fields.inited;
        *(undefined6 *)&(__this->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a =
             local_50.fields._26_6_;
        (__this->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue = local_50.fields.fakeValue;
        *ALBCNGFNGPH = true;
      }
      else {
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_16742,(MethodInfo *)0x0);
        if (bVar1) {
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                    (&local_50,(LIPGCBPEKFO->fields)._HFPMLGFDOKC_k__BackingField,(MethodInfo *)0x0)
          ;
          (__this->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue =
               local_50.fields.hiddenValue;
          (__this->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey =
               local_50.fields.currentCryptoKey;
          (__this->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive =
               local_50.fields.fakeValueActive;
          (__this->fields)._OFDIEEPACGC_k__BackingField.fields.inited = local_50.fields.inited;
          *(undefined6 *)&(__this->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a =
               local_50.fields._26_6_;
          (__this->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue = local_50.fields.fakeValue
          ;
        }
        else {
          bVar1 = System_String__op_Equality(pSVar2,StringLiteral_6546,(MethodInfo *)0x0);
          if (bVar1) {
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                      (&local_50,(LIPGCBPEKFO->fields)._HFPMLGFDOKC_k__BackingField,
                       (MethodInfo *)0x0);
            (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue =
                 local_50.fields.hiddenValue;
            (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey =
                 local_50.fields.currentCryptoKey;
            (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive =
                 local_50.fields.fakeValueActive;
            (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.inited = local_50.fields.inited;
            *(undefined6 *)&(__this->fields)._EAOJFBDIFLL_k__BackingField.fields.field_0x1a =
                 local_50.fields._26_6_;
            (__this->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue =
                 local_50.fields.fakeValue;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar2,StringLiteral_6547,(MethodInfo *)0x0);
            if (bVar1) {
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_50,(LIPGCBPEKFO->fields)._HFPMLGFDOKC_k__BackingField,
                         (MethodInfo *)0x0);
              (__this->fields)._GNFNOKJDGFH_k__BackingField.fields.hiddenValue =
                   local_50.fields.hiddenValue;
              (__this->fields)._GNFNOKJDGFH_k__BackingField.fields.currentCryptoKey =
                   local_50.fields.currentCryptoKey;
              (__this->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValueActive =
                   local_50.fields.fakeValueActive;
              (__this->fields)._GNFNOKJDGFH_k__BackingField.fields.inited = local_50.fields.inited;
              *(undefined6 *)&(__this->fields)._GNFNOKJDGFH_k__BackingField.fields.field_0x1a =
                   local_50.fields._26_6_;
              (__this->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValue =
                   local_50.fields.fakeValue;
            }
            else {
              bVar1 = System_String__op_Equality(pSVar2,StringLiteral_6548,(MethodInfo *)0x0);
              if (bVar1) {
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_50,(LIPGCBPEKFO->fields)._HFPMLGFDOKC_k__BackingField,
                           (MethodInfo *)0x0);
                (__this->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue =
                     local_50.fields.hiddenValue;
                (__this->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey =
                     local_50.fields.currentCryptoKey;
                (__this->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive =
                     local_50.fields.fakeValueActive;
                (__this->fields)._JMHDOFLEICP_k__BackingField.fields.inited = local_50.fields.inited
                ;
                *(undefined6 *)&(__this->fields)._JMHDOFLEICP_k__BackingField.fields.field_0x1a =
                     local_50.fields._26_6_;
                (__this->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue =
                     local_50.fields.fakeValue;
              }
            }
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

