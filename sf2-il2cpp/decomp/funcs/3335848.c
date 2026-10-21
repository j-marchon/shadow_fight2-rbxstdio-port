// FGKGKDEJCOG$$IALPNFOEEBP @ RVA 0x3335848

UnityEngine_Color_o FGKGKDEJCOG__IALPNFOEEBP(MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar7;
  System_Nullable_Color__Fields local_48;
  float fVar6;
  
  if ((DAT_04567944 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15989);
    DAT_04567944 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this,StringLiteral_15989,0,(MethodInfo *)0x0);
    fVar6 = 1.0;
    fVar3 = 0.0;
    if (pMVar2 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      fVar4 = 0.0;
      fVar5 = 0.0;
    }
    else {
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar2->fields).JAICMIMBIOA,(MethodInfo *)0x0);
      fVar4 = 0.0;
      fVar5 = 0.0;
      fVar6 = 1.0;
      fVar3 = 0.0;
      if (!bVar1) {
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value.fields.r = 0.0;
        local_48.value.fields.g = 0.0;
        local_48.value.fields.b = 0.0;
        local_48.value.fields.a = 0.0;
        UVar7 = CFBGPBCDAGA__HPBCENEFAMD
                          ((pMVar2->fields).JAICMIMBIOA,1.0,(System_Nullable_Color__o *)&local_48,
                           (MethodInfo *)0x0);
        fVar6 = UVar7.fields.a;
        fVar5 = UVar7.fields.b;
        fVar4 = UVar7.fields.g;
        fVar3 = UVar7.fields.r;
      }
    }
    UVar7.fields.g = fVar4;
    UVar7.fields.r = fVar3;
    UVar7.fields.a = fVar6;
    UVar7.fields.b = fVar5;
    return (UnityEngine_Color_o)UVar7.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

