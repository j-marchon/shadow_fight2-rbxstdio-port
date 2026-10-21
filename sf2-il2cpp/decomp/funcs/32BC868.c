// MainMenuRaidRatingPanel$$ENOENFMAGCF @ RVA 0x32BC868

void MainMenuRaidRatingPanel__ENOENFMAGCF
               (MainMenuRaidRatingPanel_o *__this,KGBIBHEFBHA_o *HEHMPFLAEGE,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  EEGDOGKBLNG_o *__this_00;
  JMDPBFOCHHP_o *pJVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_RectTransform_o *rt;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  int32_t *piVar12;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_01;
  int index;
  float value;
  
  if ((DAT_045674a0 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_CMLEEJPGHNC>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_8799);
    FUN_01bab630(&StringLiteral_8798);
    DAT_045674a0 = 1;
  }
  pNVar11 = (__this->fields)._labelPosition;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (HEHMPFLAEGE == (KGBIBHEFBHA_o *)0x0) {
    if ((__this->fields).EGOLDJCOBFF == false) {
      (__this->fields).EGOLDJCOBFF = true;
      Util__IHPDCBOFHPA((__this->fields)._iconPositionUp,false,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA((__this->fields)._iconPositionDown,false,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA((__this->fields)._iconPositionNo,false,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA((__this->fields)._iconPositionSame,false,(MethodInfo *)0x0);
      pNVar11 = (__this->fields)._labelPosition;
      if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar8,false,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_8798,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_033bcd20;
  }
  iVar1 = (HEHMPFLAEGE->fields).HCBJCMDLODI;
  iVar2 = (HEHMPFLAEGE->fields).NCDPJGNAKPN;
  bVar3 = KGBIBHEFBHA__PIMMFPEOOJJ(HEHMPFLAEGE,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_033bcd20;
  iVar5 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar6 == (JMDPBFOCHHP_o *)0x0) goto LAB_033bcd20;
  if ((pJVar6->fields)._JMEOCLFDHMM_k__BackingField == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0) {
LAB_033bc9d8:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8799,(MethodInfo *)0x0);
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
       (pJVar10 = (pJVar6->fields)._JMEOCLFDHMM_k__BackingField,
       pJVar10 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) goto LAB_033bcd20;
    bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)(pJVar10->fields).NPPJFJBJLLG,
                       Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_CMLEEJPGHNC>__);
    if (bVar4) goto LAB_033bc9d8;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
      (pJVar10 = (pJVar6->fields)._JMEOCLFDHMM_k__BackingField,
      pJVar10 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) ||
     (__this_01 = (pJVar10->fields).NPPJFJBJLLG,
     __this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0))
  goto LAB_033bcd20;
  if (0 < (__this_01->fields)._size) {
    index = 0;
    do {
      pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_get_Item__
                         );
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033bcd20;
      if (*(int *)&pIVar7[1].klass == iVar5) {
        bVar4 = (HEHMPFLAEGE->fields).NLLKMEMKBAF < *(int *)&pIVar7[2].monitor;
        goto LAB_033bcb40;
      }
      index = index + 1;
    } while (index < (__this_01->fields)._size);
  }
  bVar4 = false;
LAB_033bcb40:
  piVar12 = &(__this->fields).EBKCENPDEIE;
  *piVar12 = iVar1;
  (__this->fields).EBOJFAMCEAN = bVar3;
  (__this->fields).NHCHEMBNCGK = iVar2;
  Util__IHPDCBOFHPA((__this->fields)._iconPositionUp,(bVar3 && iVar1 < iVar2) && !bVar4,
                    (MethodInfo *)0x0);
  if ((__this->fields).EBOJFAMCEAN == false) {
    bVar3 = false;
  }
  else {
    bVar3 = !bVar4 && (__this->fields).NHCHEMBNCGK < (__this->fields).EBKCENPDEIE;
  }
  Util__IHPDCBOFHPA((__this->fields)._iconPositionDown,bVar3,(MethodInfo *)0x0);
  if ((__this->fields).EBOJFAMCEAN == false) {
    bVar3 = false;
  }
  else {
    bVar3 = !bVar4 && (__this->fields).EBKCENPDEIE == (__this->fields).NHCHEMBNCGK;
  }
  Util__IHPDCBOFHPA((__this->fields)._iconPositionSame,bVar3,(MethodInfo *)0x0);
  Util__IHPDCBOFHPA((__this->fields)._iconPositionNo,bVar4,(MethodInfo *)0x0);
  pNVar11 = (__this->fields)._labelPosition;
  if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bcd20;
  pUVar8 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0);
  Util__IHPDCBOFHPA(pUVar8,!bVar4,(MethodInfo *)0x0);
  pNVar11 = (__this->fields)._labelPosition;
  pSVar9 = System_Int32__ToString((int32_t)piVar12,(MethodInfo *)0x0);
  if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bcd20;
  (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
            (pNVar11,pSVar9,(pNVar11->klass->vtable)._75_set_text.method);
  pNVar11 = (__this->fields)._labelPosition;
  if ((pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033bcd20;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar8 = (__this->fields)._iconPositionNo;
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
  value = (__this->fields)._labelPosition_Offset1;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
  if (bVar3) {
LAB_033bccb0:
    value = (__this->fields)._labelPosition_Offset2;
  }
  else {
    pUVar8 = (__this->fields)._iconPositionUp;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if (bVar3) goto LAB_033bccb0;
    pUVar8 = (__this->fields)._iconPositionDown;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if (bVar3) goto LAB_033bccb0;
    pUVar8 = (__this->fields)._iconPositionSame;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if (bVar3) goto LAB_033bccb0;
  }
  pNVar11 = (__this->fields)._labelPosition;
  if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    rt = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__get_transform((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0);
    if ((rt != (UnityEngine_RectTransform_o *)0x0) &&
       (rt->klass != UnityEngine_RectTransform_TypeInfo)) {
      rt = (UnityEngine_RectTransform_o *)0x0;
    }
    UnityEngine_TransformExtensions__SetAnchoredPositionX(rt,value,(MethodInfo *)0x0);
    return;
  }
LAB_033bcd20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

