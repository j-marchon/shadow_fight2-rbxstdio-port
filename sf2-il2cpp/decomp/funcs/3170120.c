// RaidInfoPrize.Prize$$LLCONNGHGKD @ RVA 0x3170120

void RaidInfoPrize_Prize__LLCONNGHGKD(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  int CJNHFNHJHPE_00;
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_03;
  System_String_o *pSVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  MethodInfo *method_00;
  JKDFEBLBMOF_o *pJVar5;
  JKDFEBLBMOF_o *pJVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_44;
  
  if ((DAT_04566916 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1223);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_525);
    FUN_01bab630(&StringLiteral_252);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_2440);
    DAT_04566916 = 1;
  }
  local_44 = 0;
  if ((__this->fields)._RaidReward_k__BackingField == (JKDFEBLBMOF_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).Line;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    RaidInfoPrize_Prize__FGGBGOMEJKM(__this,method_00);
    pSVar2 = StringLiteral_1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pJVar5 = (__this->fields)._RaidReward_k__BackingField;
    if ((pJVar5 != (JKDFEBLBMOF_o *)0x0) && (__this_02 != (JMDPBFOCHHP_o *)0x0)) {
      __this_03 = JMDPBFOCHHP__OJOIAONADNG(__this_02,(pJVar5->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
      ;
      if (__this_03 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
        pSVar2 = JMDPBFOCHHP_FNILDHLJBBJ__PCPJDHIAAHO(__this_03,false,(MethodInfo *)0x0);
      }
      pSVar3 = StringLiteral_1;
      pJVar5 = (__this->fields)._RaidReward_k__BackingField;
      if (pJVar5 != (JKDFEBLBMOF_o *)0x0) {
        fVar8 = (__this->fields).BaseRating;
        fVar7 = (__this->fields).PosRating;
        pJVar6 = (__this->fields)._LastRaidReward_k__BackingField;
        fVar9 = fVar8 + fVar7 * (pJVar5->fields).CGBFEMGKFGC;
        CJNHFNHJHPE = -0x80000000;
        if (fVar9 != INFINITY) {
          CJNHFNHJHPE = (int)fVar9;
        }
        CJNHFNHJHPE_00 = CJNHFNHJHPE;
        if ((pJVar6 != (JKDFEBLBMOF_o *)0x0) &&
           (fVar8 = fVar8 + fVar7 * (pJVar6->fields).CGBFEMGKFGC, CJNHFNHJHPE_00 = -0x80000000,
           fVar8 != INFINITY)) {
          CJNHFNHJHPE_00 = (int)fVar8;
        }
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
          if (values == (System_String_array *)0x0) goto LAB_032704a8;
          if ((int)values->max_length == 0) {
LAB_032704ac:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[0] = pSVar3;
          thunk_FUN_01c20e04(values->m_Items,pSVar3);
          if ((uint)values->max_length < 2) goto LAB_032704ac;
          values->m_Items[1] = StringLiteral_2422;
          thunk_FUN_01c20e04(values->m_Items + 1);
          if ((uint)values->max_length < 3) goto LAB_032704ac;
          values->m_Items[2] = pSVar2;
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar2);
          if ((uint)values->max_length < 4) goto LAB_032704ac;
          values->m_Items[3] = StringLiteral_525;
          fVar7 = (float)thunk_FUN_01c20e04(values->m_Items + 3);
          local_44 = 0x3f59999a;
          pSVar2 = System_Single__ToString(fVar7,(MethodInfo *)&stack0xffffffffffffffbc);
          if ((uint)values->max_length < 5) goto LAB_032704ac;
          values->m_Items[4] = pSVar2;
          thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
          if ((uint)values->max_length < 6) goto LAB_032704ac;
          values->m_Items[5] = StringLiteral_252;
          thunk_FUN_01c20e04();
          pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
        }
        if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(pSVar3,StringLiteral_2440,pSVar2,(MethodInfo *)0x0);
        if ((CJNHFNHJHPE_00 != CJNHFNHJHPE) && ((__this->fields).PrizeNumber == 2)) {
          pJVar5 = (__this->fields)._RaidReward_k__BackingField;
          if (pJVar5 == (JKDFEBLBMOF_o *)0x0) goto LAB_032704a8;
          if ((pJVar5->fields).OLGNPLGBNDJ < (__this->fields)._RaidSize_k__BackingField) {
            if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE_00,(MethodInfo *)0x0);
            pSVar2 = System_String__Concat(pSVar2,StringLiteral_1223,pSVar3,(MethodInfo *)0x0);
          }
        }
        pNVar4 = (__this->fields).PrizeLabel;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
LAB_032704a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

