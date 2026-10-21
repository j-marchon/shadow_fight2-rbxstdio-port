// Nekki.SF2.GUI.Fight.EndFightContent$$GPCOJMMLMLG @ RVA 0x309B434

void Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *pNVar7;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  IGPDCHBJAPD_o *pIVar8;
  GOJLGHMMDBO_o *pGVar9;
  ILHHCILGBCB_o *pIVar10;
  System_Object_array *pSVar11;
  LabelButton_o *pLVar12;
  int64_t DCDLMCEEOCC;
  UnityEngine_UI_Button_o *pUVar13;
  UnityEngine_Object_o *pUVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  UnityEngine_Events_UnityEvent_o *__this_01;
  System_String_o *pSVar16;
  int64_t iVar17;
  float fVar18;
  
  if ((DAT_04566118 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566118 = 1;
    method = extraout_x1;
  }
  pIVar8 = (__this->fields).CIKGADOJJMG;
  if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
      (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
     (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
  DCDLMCEEOCC = (pIVar10->fields).JLANKGCLFPC;
  pUVar13 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar13 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar13 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319bac4;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
  }
  pUVar14 = (UnityEngine_Object_o *)(__this->fields)._textAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
                       (__this,(__this->fields).goldPrizeAlias,(pIVar10->fields).HBJALEJFBAA,
                        (pIVar10->fields).OANNDNBNCOC,StringLiteral_1,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldPerfectAlias;
    iVar17 = (pIVar10->fields).CBBHLGAPOCB;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x20,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldFirstStrikeAlias;
    iVar17 = (pIVar10->fields).CKGOPICDKMO;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x28,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldComboAlias;
    iVar17 = (pIVar10->fields).MDEJIIBDAIE;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x34,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    pSVar16 = (__this->fields).goldShockAlias;
    iVar17 = (pIVar10->fields).NLFJFKCJEAC;
    pSVar6 = System_Int32__ToString((int)pGVar9 + 0x38,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,pSVar16,iVar17,0,pSVar6,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (((pIVar8 == (IGPDCHBJAPD_o *)0x0) ||
        (pGVar9 = (pIVar8->fields).NOKHDHCKCPH, pGVar9 == (GOJLGHMMDBO_o *)0x0)) ||
       (pIVar10 = (pGVar9->fields).BHPMOKPBIOL, pIVar10 == (ILHHCILGBCB_o *)0x0)) goto LAB_0319bac4;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    in_x3 = (MethodInfo *)0x0;
    pIVar5 = (Il2CppObject *)
             Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
                       (__this,(pGVar9->fields).IMHCBMGEIDH,(pIVar10->fields).PDDMIAGJHBA,0,
                        StringLiteral_1,in_x5);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = pIVar5;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,pIVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar14 = (UnityEngine_Object_o *)(__this->fields)._expAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pIVar8 = (__this->fields).CIKGADOJJMG;
    if (pIVar8 == (IGPDCHBJAPD_o *)0x0) goto LAB_0319bac4;
    fVar18 = (pIVar8->fields).BHHLEDAOGDH;
    iVar17 = -0x8000000000000000;
    if (fVar18 != INFINITY) {
      iVar17 = (long)fVar18;
    }
    pNVar7 = Nekki_SF2_GUI_Fight_EndFightContent__CreateLine(__this,iVar17,DCDLMCEEOCC,in_x3);
    (__this->fields).JMLBADBINID = pNVar7;
    thunk_FUN_01c20e04(&(__this->fields).JMLBADBINID);
    lVar2 = Method_System_Collections_Generic_List<MCNGELCOMNG>_Add__;
    pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0319bac4;
    pNVar7 = (__this->fields).JMLBADBINID;
    pSVar11 = (pSVar15->fields)._items;
    (pSVar15->fields)._version = (pSVar15->fields)._version + 1;
    if (pSVar11 == (System_Object_array *)0x0) goto LAB_0319bac4;
    uVar1 = (pSVar15->fields)._size;
    if (uVar1 < (uint)pSVar11->max_length) {
      (pSVar15->fields)._size = uVar1 + 1;
      pSVar11->m_Items[(int)uVar1] = (Il2CppObject *)pNVar7;
      thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar15,(Il2CppObject *)pNVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pLVar12 = (__this->fields)._buttonOk;
  if (pLVar12 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar12->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      pLVar12 = (__this->fields)._buttonOk;
      if ((pLVar12 != (LabelButton_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        pLVar12 = (__this->fields)._buttonRetry;
        if ((pLVar12 != (LabelButton_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          pLVar12 = (__this->fields)._buttonShop;
          if ((pLVar12 != (LabelButton_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            pLVar12 = (__this->fields)._buttonVideoAD;
            if ((pLVar12 != (LabelButton_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar12,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              method_01 = (MethodInfo *)0x0;
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_EndFightContent__AHMEFFAFJKA(__this,DCDLMCEEOCC,method_01);
              __this_00 = (__this->fields)._buttonPanel;
              if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Fight_EndFightContent__IOOPGJBHPKK(__this,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0319bac4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

