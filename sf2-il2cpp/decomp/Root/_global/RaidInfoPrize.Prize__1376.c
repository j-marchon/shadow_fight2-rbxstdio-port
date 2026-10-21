// TypeDefIndex 1376
// Namespace: 
// [Serializable]
// private class RaidInfoPrize.Prize
// Fields:
//   private RaidInfoPrize.Prize.FHNFNPJGOIP PrizeNumber; // 0x10
//   private ResolutionImage Line; // 0x18
//   private LabelAlias LineLabel; // 0x20
//   private LabelAlias PrizeLabel; // 0x28
//   private JKDFEBLBMOF <RaidReward>k__BackingField; // 0x30
//   private JKDFEBLBMOF <LastRaidReward>k__BackingField; // 0x38
//   private int <RaidSize>k__BackingField; // 0x40
//   private float BaseRating; // 0x44
//   private float PosRating; // 0x48

// ===== public void LLCONNGHGKD()  [RVA 0x3170120]
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
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_525/*" scale="*/);
    FUN_01bab630(&StringLiteral_252/*" /> + "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_2440/*"<quad name=TopPanel.rating_icon />"*/);
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
    pSVar2 = StringLiteral_1/*""*/;
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
      pSVar3 = StringLiteral_1/*""*/;
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
          values->m_Items[1] = StringLiteral_2422/*"<quad name="*/;
          thunk_FUN_01c20e04(values->m_Items + 1);
          if ((uint)values->max_length < 3) goto LAB_032704ac;
          values->m_Items[2] = pSVar2;
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar2);
          if ((uint)values->max_length < 4) goto LAB_032704ac;
          values->m_Items[3] = StringLiteral_525/*" scale="*/;
          fVar7 = (float)thunk_FUN_01c20e04(values->m_Items + 3);
          local_44 = 0x3f59999a;
          pSVar2 = System_Single__ToString(fVar7,(MethodInfo *)&stack0xffffffffffffffbc);
          if ((uint)values->max_length < 5) goto LAB_032704ac;
          values->m_Items[4] = pSVar2;
          thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
          if ((uint)values->max_length < 6) goto LAB_032704ac;
          values->m_Items[5] = StringLiteral_252/*" /> + "*/;
          thunk_FUN_01c20e04();
          pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
        }
        if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(pSVar3,StringLiteral_2440/*"<quad name=TopPanel.rating_icon />"*/,pSVar2,(MethodInfo *)0x0);
        if ((CJNHFNHJHPE_00 != CJNHFNHJHPE) && ((__this->fields).PrizeNumber == 2)) {
          pJVar5 = (__this->fields)._RaidReward_k__BackingField;
          if (pJVar5 == (JKDFEBLBMOF_o *)0x0) goto LAB_032704a8;
          if ((pJVar5->fields).OLGNPLGBNDJ < (__this->fields)._RaidSize_k__BackingField) {
            if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE_00,(MethodInfo *)0x0);
            pSVar2 = System_String__Concat(pSVar2,StringLiteral_1223/*"-"*/,pSVar3,(MethodInfo *)0x0);
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


// ===== public void GIENGNEGHPJ(float IJCKKCPBLGP, float LPJKDDIMOEK)  [RVA 0x3170050]
// RaidInfoPrize.Prize$$GIENGNEGHPJ @ RVA 0x3170050

void RaidInfoPrize_Prize__GIENGNEGHPJ
               (RaidInfoPrize_Prize_o *__this,float IJCKKCPBLGP,float LPJKDDIMOEK,MethodInfo *method
               )

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  
  if ((DAT_04566917 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10799/*"RaidBars.silver"*/);
    FUN_01bab630(&StringLiteral_10798/*"RaidBars.gold"*/);
    FUN_01bab630(&StringLiteral_10797/*"RaidBars.bronze"*/);
    DAT_04566917 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).PrizeNumber;
  (__this->fields).BaseRating = IJCKKCPBLGP;
  (__this->fields).PosRating = LPJKDDIMOEK;
  if (iVar1 == 2) {
    __this_00 = (__this->fields).Line;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327011c;
    puVar2 = &StringLiteral_10797/*"RaidBars.bronze"*/;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).Line;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327011c;
    puVar2 = &StringLiteral_10799/*"RaidBars.silver"*/;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    __this_00 = (__this->fields).Line;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_0327011c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    puVar2 = &StringLiteral_10798/*"RaidBars.gold"*/;
  }
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (__this_00,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return;
}


// ===== private void FGGBGOMEJKM()  [RVA 0x31704B8]
// RaidInfoPrize.Prize$$FGGBGOMEJKM @ RVA 0x31704B8

void RaidInfoPrize_Prize__FGGBGOMEJKM(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar5;
  JKDFEBLBMOF_o *pJVar6;
  int local_2c;
  ulong local_28;
  
  if ((DAT_04566918 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1944/*"2 "*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_1607/*"1 "*/);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    FUN_01bab630(&StringLiteral_20417/*"raid_reward_places"*/);
    FUN_01bab630(&StringLiteral_1950/*"2-"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_20416/*"raid_reward_place"*/);
    DAT_04566918 = 1;
    method = extraout_x1;
  }
  local_28 = 0;
  local_2c = 0;
  iVar1 = (__this->fields).PrizeNumber;
  if (iVar1 == 2) {
    pJVar6 = (__this->fields)._RaidReward_k__BackingField;
    if (pJVar6 == (JKDFEBLBMOF_o *)0x0) goto LAB_032707ac;
    uVar2 = (pJVar6->fields).OLGNPLGBNDJ;
    local_2c = (__this->fields)._RaidSize_k__BackingField;
    local_28 = (ulong)uVar2;
    if ((int)uVar2 < local_2c) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto LAB_032707ac;
      if ((int)values->max_length == 0) {
LAB_032707b0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items,pSVar3);
      if ((uint)values->max_length < 2) goto LAB_032707b0;
      values->m_Items[1] = StringLiteral_1223/*"-"*/;
      thunk_FUN_01c20e04(values->m_Items + 1);
      pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto LAB_032707b0;
      values->m_Items[2] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
      if ((uint)values->max_length < 4) goto LAB_032707b0;
      values->m_Items[3] = StringLiteral_167/*" "*/;
      thunk_FUN_01c20e04(values->m_Items + 3);
      pSVar3 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20417/*"raid_reward_places"*/,method_00);
      if ((uint)values->max_length < 5) goto LAB_032707b0;
      values->m_Items[4] = pSVar3;
      thunk_FUN_01c20e04();
      pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      pSVar4 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20416/*"raid_reward_place"*/,method_01);
      pSVar3 = System_String__Concat(pSVar3,StringLiteral_167/*" "*/,pSVar4,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 1) {
    pJVar6 = (__this->fields)._RaidReward_k__BackingField;
    if (pJVar6 == (JKDFEBLBMOF_o *)0x0) goto LAB_032707ac;
    uVar2 = (pJVar6->fields).OLGNPLGBNDJ;
    local_28 = (ulong)uVar2 << 0x20;
    if ((int)uVar2 < 3) {
      pSVar3 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20416/*"raid_reward_place"*/,method);
      puVar5 = &StringLiteral_1944/*"2 "*/;
      goto LAB_032706cc;
    }
    pSVar3 = System_Int32__ToString((int)&local_28 + 4,(MethodInfo *)0x0);
    pSVar4 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20417/*"raid_reward_places"*/,method_02);
    pSVar3 = System_String__Concat
                       (StringLiteral_1950/*"2-"*/,pSVar3,StringLiteral_167/*" "*/,pSVar4,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = StringLiteral_1/*""*/;
    if (iVar1 == 0) {
      pSVar3 = RaidInfoPrize_Prize__IOILCEFNJMA(StringLiteral_20416/*"raid_reward_place"*/,method);
      puVar5 = &StringLiteral_1607/*"1 "*/;
LAB_032706cc:
      pSVar3 = System_String__Concat((System_String_o *)*puVar5,pSVar3,(MethodInfo *)0x0);
    }
  }
  __this_00 = (__this->fields).LineLabel;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar3,(MethodInfo *)0x0);
    return;
  }
LAB_032707ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ()  [RVA 0x316FAAC]
// RaidInfoPrize.Prize$$GIENGNEGHPJ @ RVA 0x316FAAC

void RaidInfoPrize_Prize__GIENGNEGHPJ(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  JKDFEBLBMOF_o **ppJVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04566919 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566919 = 1;
  }
  ppJVar1 = &(__this->fields)._RaidReward_k__BackingField;
  *ppJVar1 = (JKDFEBLBMOF_o *)0x0;
  thunk_FUN_01c20e04(ppJVar1,0);
  ppJVar1 = &(__this->fields)._LastRaidReward_k__BackingField;
  *ppJVar1 = (JKDFEBLBMOF_o *)0x0;
  thunk_FUN_01c20e04(ppJVar1,0);
  (__this->fields)._RaidSize_k__BackingField = 0;
  pNVar4 = (__this->fields).LineLabel;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
              ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
               (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
               (pNVar4->klass->vtable)._23_set_color.method);
    pNVar4 = (__this->fields).LineLabel;
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).PrizeLabel;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                   (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
                   (pNVar4->klass->vtable)._23_set_color.method);
        pNVar4 = (__this->fields).PrizeLabel;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__Clear(pNVar4,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).Line;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            pNVar2 = (__this->fields).Line;
            if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_RaidSize()  [RVA 0x3170804]
// RaidInfoPrize.Prize$$get_RaidSize @ RVA 0x3170804

int32_t RaidInfoPrize_Prize__get_RaidSize(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  return (__this->fields)._RaidSize_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x317080C]
// RaidInfoPrize.Prize$$.ctor @ RVA 0x317080C

void RaidInfoPrize_Prize___ctor(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_RaidReward(JKDFEBLBMOF CJNHFNHJHPE)  [RVA 0x3170814]
// RaidInfoPrize.Prize$$set_RaidReward @ RVA 0x3170814

void RaidInfoPrize_Prize__set_RaidReward
               (RaidInfoPrize_Prize_o *__this,JKDFEBLBMOF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._RaidReward_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void set_LastRaidReward(JKDFEBLBMOF CJNHFNHJHPE)  [RVA 0x317081C]
// RaidInfoPrize.Prize$$set_LastRaidReward @ RVA 0x317081C

void RaidInfoPrize_Prize__set_LastRaidReward
               (RaidInfoPrize_Prize_o *__this,JKDFEBLBMOF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LastRaidReward_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public JKDFEBLBMOF get_RaidReward()  [RVA 0x3170824]
// RaidInfoPrize.Prize$$get_RaidReward @ RVA 0x3170824

JKDFEBLBMOF_o *
RaidInfoPrize_Prize__get_RaidReward(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  return (__this->fields)._RaidReward_k__BackingField;
}


// ===== public JKDFEBLBMOF get_LastRaidReward()  [RVA 0x317082C]
// RaidInfoPrize.Prize$$get_LastRaidReward @ RVA 0x317082C

JKDFEBLBMOF_o *
RaidInfoPrize_Prize__get_LastRaidReward(RaidInfoPrize_Prize_o *__this,MethodInfo *method)

{
  return (__this->fields)._LastRaidReward_k__BackingField;
}


// ===== private static string IOILCEFNJMA(string JCLPIKHEKBB)  [RVA 0x31707B4]
// RaidInfoPrize.Prize$$IOILCEFNJMA @ RVA 0x31707B4

System_String_o * RaidInfoPrize_Prize__IOILCEFNJMA(System_String_o *JCLPIKHEKBB,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456691a & 1) == 0) {
    FUN_01bab630(&StringLiteral_15810/*"^"*/);
    DAT_0456691a = 1;
  }
  pSVar1 = System_String__Concat
                     (StringLiteral_15810/*"^"*/,JCLPIKHEKBB,StringLiteral_15810/*"^"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void set_RaidSize(int CJNHFNHJHPE)  [RVA 0x3170834]
// RaidInfoPrize.Prize$$set_RaidSize @ RVA 0x3170834

void RaidInfoPrize_Prize__set_RaidSize
               (RaidInfoPrize_Prize_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._RaidSize_k__BackingField = CJNHFNHJHPE;
  return;
}

