// Nekki.SF2.GUI.Map.MapButton$$MPHBBKIMAFB @ RVA 0x34A1700

void Nekki_SF2_GUI_Map_MapButton__MPHBBKIMAFB
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  undefined3 uVar1;
  undefined4 uVar2;
  bool bVar3;
  Nekki_SF2_GUI_TimerLabel_o *pNVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  LAMJOHEKJNJ_o *__this_02;
  LPEBBHNDFCG_o *pLVar5;
  UnityEngine_GameObject_o *__this_03;
  FKNCNNOOOIO_o *pFVar6;
  int64_t *piVar7;
  ACHLOMELAJE_o *pAVar8;
  long lVar9;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456849d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_13800);
    FUN_01bab630(&StringLiteral_13796);
    FUN_01bab630(&StringLiteral_13805);
    DAT_0456849d = 1;
  }
  if ((__this->fields).AEPNEAIEKOL == (FKNCNNOOOIO_o *)0x0) {
    return;
  }
  pNVar4 = (__this->fields)._Timer;
  if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
  if ((__this->fields).UseEventTimerPos == false) {
    __this_01 = (__this->fields).TimerPos;
  }
  else {
    __this_01 = (__this->fields).EventTimerPos;
  }
  if ((__this_01 == (UnityEngine_RectTransform_o *)0x0) ||
     (value = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_035a19c8;
  UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
  pFVar6 = (__this->fields).AEPNEAIEKOL;
  if (pFVar6 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a19c8;
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((pFVar6->fields).AOOKMODPLGM,(MethodInfo *)0x0);
  if (bVar3) {
    pFVar6 = (__this->fields).AEPNEAIEKOL;
    if (pFVar6 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a19c8;
    piVar7 = &(pFVar6->fields).ALLCFABAGOB;
LAB_035a1870:
    lVar9 = *piVar7;
    if (lVar9 < 1) goto LAB_035a1998;
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(pNVar4,StringLiteral_13795,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias(pNVar4,StringLiteral_13796,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias(pNVar4,StringLiteral_13800,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias(pNVar4,StringLiteral_13805,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    uVar1 = StringLiteral_167._1_3_;
    uVar2 = StringLiteral_167._4_4_;
    (pNVar4->fields).UseDaysDelimiter = (bool_conflict)(undefined1)StringLiteral_167;
    *(undefined3 *)&(pNVar4->fields).field_0x1f1 = uVar1;
    (pNVar4->fields).SegmentsDate = uVar2;
    thunk_FUN_01c20e04(&(pNVar4->fields).UseDaysDelimiter);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    *(undefined1 *)((long)&(pNVar4->fields).super._Alias + 4) = 1;
    *(undefined4 *)&(pNVar4->fields).super.field_0x1e4 = 2;
    *(undefined2 *)((long)&(pNVar4->fields).super._Alias + 7) = 0;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_TimerLabel__set_CurrentTime
              (pNVar4,lVar9 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,(MethodInfo *)0x0);
    bVar3 = true;
  }
  else {
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
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar8 == (ACHLOMELAJE_o *)0x0) ||
        (pFVar6 = (__this->fields).AEPNEAIEKOL, pFVar6 == (FKNCNNOOOIO_o *)0x0)) ||
       (__this_02 = (pAVar8->fields)._DDGPMHMNKNA_k__BackingField, __this_02 == (LAMJOHEKJNJ_o *)0x0
       )) goto LAB_035a19c8;
    pLVar5 = LAMJOHEKJNJ__FENHANFAIND(__this_02,(pFVar6->fields).AOOKMODPLGM,(MethodInfo *)0x0);
    if (pLVar5 != (LPEBBHNDFCG_o *)0x0) {
      piVar7 = &(pLVar5->fields)._PGKPHJLHJCO_k__BackingField;
      goto LAB_035a1870;
    }
LAB_035a1998:
    bVar3 = false;
  }
  pNVar4 = (__this->fields)._Timer;
  if ((pNVar4 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,bVar3,(MethodInfo *)0x0);
    return;
  }
LAB_035a19c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

