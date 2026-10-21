// NLPJLHOEAOE$$KFNAHLEHHMJ @ RVA 0x31FBBD4

bool NLPJLHOEAOE__KFNAHLEHHMJ(IGFGDDANEPE_o *IKKAMAMLIKA,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04566dea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5770);
    FUN_01bab630(&StringLiteral_5846);
    DAT_04566dea = 1;
  }
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    iVar2 = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (iVar2 < DFIBGGDJPLM) {
      DFIBGGDJPLM = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
    }
    pHVar3 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
    if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
      bVar1 = System_String__op_Equality
                        ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_5770,
                         (MethodInfo *)0x0);
      if (bVar1) {
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
        if (__this == (ACHLOMELAJE_o *)0x0) goto LAB_032fbd3c;
        ACHLOMELAJE__CJILDLNPPCI(__this,(MethodInfo *)0x0);
        iVar2 = IGFGDDANEPE__LDJLMEFOMLG(IKKAMAMLIKA,(MethodInfo *)0x0);
        IGFGDDANEPE__PICGGLNNJFA(IKKAMAMLIKA,iVar2 - DFIBGGDJPLM,(MethodInfo *)0x0);
      }
      else {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__Log(StringLiteral_5846,(MethodInfo *)0x0);
      }
      return bVar1;
    }
  }
LAB_032fbd3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

