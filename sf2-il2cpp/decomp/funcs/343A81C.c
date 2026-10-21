// AGIEIAOHIFK$$HLCMLOBHLDA @ RVA 0x343A81C

void AGIEIAOHIFK__HLCMLOBHLDA
               (AGIEIAOHIFK_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *pMVar1;
  FCJBEKHDLAF_o *pFVar2;
  NHBBOEHHEKG_o *pNVar3;
  OLKKAIFGGAK_o *pOVar4;
  UnityEngine_Color_o EFJKPCADGJH;
  System_Nullable_Color__Fields local_48;
  
  if ((DAT_045681ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_9171);
    DAT_045681ca = 1;
  }
  if (LOPENELMPML) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
      return;
    }
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      pOVar4 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (((pFVar2 != (FCJBEKHDLAF_o *)0x0) &&
          (pNVar3 = (pFVar2->fields).CNHHLPPHNCO, pNVar3 != (NHBBOEHHEKG_o *)0x0)) &&
         (pOVar4 != (OLKKAIFGGAK_o *)0x0)) {
        OLKKAIFGGAK__HLCMLOBHLDA
                  (pOVar4,(UnityEngine_Color_o)(pNVar3->fields).GLECOLINCIH.fields,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    __this_00 = (__this->fields)._JNIFJMNMCFA_k__BackingField;
    if (__this_00 == (NILLKLHKLHG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9171,(MethodInfo *)0x0);
      return;
    }
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      pOVar4 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      pMVar1 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
      if (pMVar1 != (MMFIDKMDADC_o *)0x0) {
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value.fields.r = 0.0;
        local_48.value.fields.g = 0.0;
        local_48.value.fields.b = 0.0;
        local_48.value.fields.a = 0.0;
        EFJKPCADGJH = CFBGPBCDAGA__HPBCENEFAMD
                                ((pMVar1->fields).HPACPFLKHPK,1.0,
                                 (System_Nullable_Color__o *)&local_48,(MethodInfo *)0x0);
        if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
          OLKKAIFGGAK__HLCMLOBHLDA(pOVar4,EFJKPCADGJH,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

