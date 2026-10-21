// TypeDefIndex 518
// Namespace: Nekki.SF2.GUI.Map
// public class MapButtonsPanel : UIModule
// Fields:
//   private Transform _ActionsPanel; // 0x28
//   private GameObject _MapButtonPrefab; // 0x30
//   private float _MaxImageSize; // 0x38
//   private MapButton APPEDOFGLKO; // 0x40
//   private MapButton LGOMKFIEBEH; // 0x48
//   private List<MapButton> KMGFNKKPGIH; // 0x50

// ===== public void UpdateNotificatorState(FKNCNNOOOIO MEOCIDLOMGD)  [RVA 0x3592CC0]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$UpdateNotificatorState @ RVA 0x3592CC0

void Nekki_SF2_GUI_Map_MapButtonsPanel__UpdateNotificatorState
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,FKNCNNOOOIO_o *MEOCIDLOMGD,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Func_TSource__bool__o *predicate;
  Nekki_SF2_GUI_Map_MapButton_o *__this_00;
  FKNCNNOOOIO_o *pFVar3;
  System_Collections_Generic_List_MapButton__o *source;
  
  if ((DAT_04568d85 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_MCJHBJAFAKI__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<MapButton>__);
    FUN_01bab630(&System_Func<MapButton,_bool>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d85 = 1;
  }
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapButtonsPanel_CLNHLGLONKI_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)MEOCIDLOMGD;
    thunk_FUN_01c20e04(pIVar2,MEOCIDLOMGD);
    source = (__this->fields).KMGFNKKPGIH;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<MapButton,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    __this_00 = (Nekki_SF2_GUI_Map_MapButton_o *)
                System_Linq_Enumerable__FirstOrDefault<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                           Method_System_Linq_Enumerable_FirstOrDefault<MapButton>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (((__this_00 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
        (pIVar2->klass != (Il2CppClass *)0x0)) &&
       (pFVar3 = (__this_00->fields).AEPNEAIEKOL, pFVar3 != (FKNCNNOOOIO_o *)0x0)) {
      (pFVar3->fields).IGOGFMFHLNK.fields =
           *(System_Nullable_bool__Fields *)&(pIVar2->klass->_1).events;
      Nekki_SF2_GUI_Map_MapButton__RefreshIndicator(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DMHJMHAKAGA()  [RVA 0x3592E38]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$DMHJMHAKAGA @ RVA 0x3592E38

void Nekki_SF2_GUI_Map_MapButtonsPanel__DMHJMHAKAGA
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar2;
  Nekki_SF2_GUI_Map_MapButton_o *x;
  
  if ((DAT_04568d86 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d86 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).LGOMKFIEBEH;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppNVar2 = (Nekki_SF2_GUI_Map_MapButton_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void ANDLONHJIGB()  [RVA 0x3592ED8]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$ANDLONHJIGB @ RVA 0x3592ED8

void Nekki_SF2_GUI_Map_MapButtonsPanel__ANDLONHJIGB
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar2;
  Nekki_SF2_GUI_Map_MapButton_o *x;
  
  if ((DAT_04568d87 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d87 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).APPEDOFGLKO;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppNVar2 = (Nekki_SF2_GUI_Map_MapButton_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void AddEventsButton()  [RVA 0x3592F78]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$AddEventsButton @ RVA 0x3592F78

void Nekki_SF2_GUI_Map_MapButtonsPanel__AddEventsButton
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  NCNJEIBHGBH_o *__this_00;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  KKEKKPIDGBK_o *pKVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar6;
  FKNCNNOOOIO_o *pFVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar10;
  UnityEngine_Transform_o *pUVar11;
  
  if ((DAT_04568d88 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15551/*"[MapButtonPanel]: Rework MapButtons creation!"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d88 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonsPanel__ANDLONHJIGB(__this,method);
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NCNJEIBHGBH_o *)0x0) goto LAB_03693214;
  pNVar3 = NCNJEIBHGBH__MKIGGEJHHMH(__this_00,(__this->fields)._MapButtonPrefab,(MethodInfo *)0x0);
  ppNVar10 = &(__this->fields).APPEDOFGLKO;
  *ppNVar10 = pNVar3;
  thunk_FUN_01c20e04(ppNVar10,pNVar3);
  pNVar3 = *ppNVar10;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_036931d0;
  pNVar3 = *ppNVar10;
  if ((pNVar3 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
     (pFVar7 = (pNVar3->fields).AEPNEAIEKOL, pFVar7 == (FKNCNNOOOIO_o *)0x0)) goto LAB_03693214;
  if ((pFVar7->fields).OEFBIKEMBOF == false) {
LAB_036930ac:
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    pUVar11 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03693214;
  }
  else {
    pUVar11 = (__this->fields)._ActionsPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    pNVar3 = *ppNVar10;
    if (!bVar2) {
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03693214;
      goto LAB_036930ac;
    }
    if ((pNVar3 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_03693214;
    pUVar11 = (__this->fields)._ActionsPanel;
  }
  UnityEngine_Transform__SetParent(__this_01,pUVar11,false,(MethodInfo *)0x0);
  if (*ppNVar10 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__Refresh(*ppNVar10,(MethodInfo *)0x0);
    if ((*ppNVar10 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
      if (bVar2) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar4 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar4 == (KKEKKPIDGBK_o *)0x0) goto LAB_03693214;
        pKVar6 = pKVar4->klass;
        uVar1._0_1_ = (pKVar6->_2).rank;
        uVar1._1_1_ = (pKVar6->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pKVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar5 = pKVar6->vtable + (*piVar9 + 6);
              goto LAB_036931ac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KKEKKPIDGBK_TypeInfo,6);
LAB_036931ac:
        uVar8 = (*pVVar5->methodPtr)(pKVar4,pVVar5->method);
        if ((uVar8 & 1) != 0) {
          if (*ppNVar10 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03693214;
          Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(*ppNVar10,true,(MethodInfo *)0x0);
        }
      }
LAB_036931d0:
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_15551/*"[MapButtonPanel]: Rework MapButtons creation!"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03693214:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddRouletteButton()  [RVA 0x3593218]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$AddRouletteButton @ RVA 0x3593218

void Nekki_SF2_GUI_Map_MapButtonsPanel__AddRouletteButton
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  NCNJEIBHGBH_o *__this_00;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar6;
  FKNCNNOOOIO_o *pFVar7;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar8;
  UnityEngine_Transform_o *pUVar9;
  float fVar10;
  
  if ((DAT_04568d89 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d89 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonsPanel__DMHJMHAKAGA(__this,method);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar10 = (float)iVar4 * 3.0 * 0.25;
  iVar1 = -0x80000000;
  if (fVar10 != INFINITY) {
    iVar1 = (int)fVar10;
  }
  if (iVar3 == iVar1) {
    return;
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar6 == (ACHLOMELAJE_o *)0x0) {
    return;
  }
  if ((pAVar6->fields).FCEBIJCGJOL == false) {
    return;
  }
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NCNJEIBHGBH_o *)0x0) goto LAB_03693444;
  pNVar5 = NCNJEIBHGBH__PMGKLOAHCJE(__this_00,(__this->fields)._MapButtonPrefab,(MethodInfo *)0x0);
  ppNVar8 = &(__this->fields).LGOMKFIEBEH;
  *ppNVar8 = pNVar5;
  thunk_FUN_01c20e04(ppNVar8,pNVar5);
  pNVar5 = *ppNVar8;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pNVar5 = *ppNVar8;
  if ((pNVar5 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
     (pFVar7 = (pNVar5->fields).AEPNEAIEKOL, pFVar7 == (FKNCNNOOOIO_o *)0x0)) goto LAB_03693444;
  if ((pFVar7->fields).OEFBIKEMBOF == false) {
LAB_036933d4:
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03693444;
  }
  else {
    pUVar9 = (__this->fields)._ActionsPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pNVar5 = *ppNVar8;
    if (!bVar2) {
      if (pNVar5 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03693444;
      goto LAB_036933d4;
    }
    if ((pNVar5 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_03693444;
    pUVar9 = (__this->fields)._ActionsPanel;
  }
  UnityEngine_Transform__SetParent(__this_01,pUVar9,false,(MethodInfo *)0x0);
  if (*ppNVar8 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__Refresh(*ppNVar8,(MethodInfo *)0x0);
    if ((*ppNVar8 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar8,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03693444:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddMapButtons()  [RVA 0x3593448]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$AddMapButtons @ RVA 0x3593448

/* WARNING: Removing unreachable block (ram,0x036938d8) */
/* WARNING: Removing unreachable block (ram,0x0369364c) */

void Nekki_SF2_GUI_Map_MapButtonsPanel__AddMapButtons
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  NCNJEIBHGBH_o *__this_00;
  System_Collections_Generic_List_MapButton__o *pSVar3;
  System_String_o *a;
  System_String_o *b;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  FKNCNNOOOIO_o *pFVar5;
  FKNCNNOOOIO_o *pFVar6;
  System_Collections_Generic_List_MapButton__o **ppSVar7;
  System_Collections_Generic_List_MapButton__o *__this_02;
  UnityEngine_Transform_o *pUVar8;
  Nekki_SF2_GUI_Map_MapButton_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568d8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Remove__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15551/*"[MapButtonPanel]: Rework MapButtons creation!"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d8a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  ppSVar7 = &(__this->fields).KMGFNKKPGIH;
  __this_02 = *ppSVar7;
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NCNJEIBHGBH_o *)0x0) {
    pSVar3 = NCNJEIBHGBH__LEOLPAJFBLF(__this_00,(__this->fields)._MapButtonPrefab,(MethodInfo *)0x0)
    ;
    (__this->fields).KMGFNKKPGIH = pSVar3;
    thunk_FUN_01c20e04(ppSVar7,pSVar3);
    pSVar3 = (__this->fields).KMGFNKKPGIH;
    if (pSVar3 != (System_Collections_Generic_List_MapButton__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                               ), pIVar1 = local_80.fields._current, bVar2) {
        if (__this_02 == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_a0,
                               Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                              );
            __this_03 = (Nekki_SF2_GUI_Map_MapButton_o *)local_a0.fields._current;
            if (!bVar2) {
              __this_03 = (Nekki_SF2_GUI_Map_MapButton_o *)0x0;
              goto LAB_03693630;
            }
            if ((Nekki_SF2_GUI_Map_MapButton_o *)pIVar1 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            a = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar1,(MethodInfo *)0x0);
            if (__this_03 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            b = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
          } while (bVar2);
          pFVar5 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)pIVar1 + 0x10))->AEPNEAIEKOL;
          if (pFVar5 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pFVar6 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)__this_03 + 0x10))->AEPNEAIEKOL;
          if (pFVar6 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Inequality
                            ((pFVar5->fields).KPDPJONADPJ,(pFVar6->fields).KPDPJONADPJ,
                             (MethodInfo *)0x0);
        } while (bVar2);
LAB_03693630:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((Nekki_SF2_GUI_Map_MapButton_o *)pIVar1 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
          if (__this_03 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)__this_03,
                     Method_System_Collections_Generic_List<MapButton>_Remove__);
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          Util__JODGPLBHHIA(pUVar4,false,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
      if (*ppSVar7 != (System_Collections_Generic_List_MapButton__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)*ppSVar7,
                   Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._list = local_b8.fields._list;
        local_80.fields._current = local_b8.fields._current;
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                            );
          pIVar1 = local_80.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
            if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_15551/*"[MapButtonPanel]: Rework MapButtons creation!"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            return;
          }
          if ((Nekki_SF2_GUI_Map_MapButton_o *)local_80.fields._current ==
              (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pFVar5 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)local_80.fields._current + 0x10))->
                   AEPNEAIEKOL;
          if (pFVar5 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pFVar5->fields).OEFBIKEMBOF == false) {
LAB_036937f0:
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_Transform__SetParent(pUVar8,parent,false,(MethodInfo *)0x0);
          }
          else {
            pUVar8 = (__this->fields)._ActionsPanel;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar2) goto LAB_036937f0;
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_Transform__SetParent
                      (pUVar8,(__this->fields)._ActionsPanel,false,(MethodInfo *)0x0);
          }
          Nekki_SF2_GUI_Map_MapButton__Refresh
                    ((Nekki_SF2_GUI_Map_MapButton_o *)pIVar1,(MethodInfo *)0x0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3593A28]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$.ctor @ RVA 0x3593A28

void Nekki_SF2_GUI_Map_MapButtonsPanel___ctor
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapButton__o *__this_00;
  System_Collections_Generic_List_MapButton__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d8b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568d8b = 1;
    method = extraout_x1;
  }
  (__this->fields)._MaxImageSize = 320.0;
  __this_00 = (System_Collections_Generic_List_MapButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MapButton>__ctor__);
  ppSVar1 = &(__this->fields).KMGFNKKPGIH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EnableStoryMapButtons(bool CMPKOOEKFKF)  [RVA 0x3593ADC]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$EnableStoryMapButtons @ RVA 0x3593ADC

void Nekki_SF2_GUI_Map_MapButtonsPanel__EnableStoryMapButtons
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_MapButton__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568d8c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    DAT_04568d8c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).KMGFNKKPGIH;
  if (__this_01 != (System_Collections_Generic_List_MapButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
      __this_00 = local_50.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
        return;
      }
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0)
      break;
      if (((UnityEngine_Component_o *)((long)local_50.fields._current + 0x168))->klass ==
          (UnityEngine_Component_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = FKNCNNOOOIO__MOAFEDFIIOA
                        ((FKNCNNOOOIO_o *)
                         ((UnityEngine_Component_o *)((long)local_50.fields._current + 0x168))->
                         klass,(MethodInfo *)0x0);
      if (bVar1) {
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(__this_02,CMPKOOEKFKF,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EnableRaidMapButtons(bool CMPKOOEKFKF)  [RVA 0x3593C74]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$EnableRaidMapButtons @ RVA 0x3593C74

void Nekki_SF2_GUI_Map_MapButtonsPanel__EnableRaidMapButtons
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_MapButton__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568d8d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    DAT_04568d8d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).KMGFNKKPGIH;
  if (__this_01 != (System_Collections_Generic_List_MapButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
      __this_00 = local_50.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
        return;
      }
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0)
      break;
      if (((UnityEngine_Component_o *)((long)local_50.fields._current + 0x168))->klass ==
          (UnityEngine_Component_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = FKNCNNOOOIO__JJEABBDIACM
                        ((FKNCNNOOOIO_o *)
                         ((UnityEngine_Component_o *)((long)local_50.fields._current + 0x168))->
                         klass,(MethodInfo *)0x0);
      if (bVar1) {
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(__this_02,CMPKOOEKFKF,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3593E0C]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$CLNAOMIIBLH @ RVA 0x3593E0C

void Nekki_SF2_GUI_Map_MapButtonsPanel__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Map_MapButtonsPanel__DMHJMHAKAGA(__this,method);
  Nekki_SF2_GUI_Map_MapButtonsPanel__ANDLONHJIGB(__this,method_00);
  Nekki_SF2_GUI_Map_MapButtonsPanel__RemoveMapButtons(__this,method_01);
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HideEventButtonNotificator()  [RVA 0x3593FC8]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$HideEventButtonNotificator @ RVA 0x3593FC8

void Nekki_SF2_GUI_Map_MapButtonsPanel__HideEventButtonNotificator
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *__this_00;
  
  __this_00 = (__this->fields).APPEDOFGLKO;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemoveMapButtons()  [RVA 0x3593E38]
// Nekki.SF2.GUI.Map.MapButtonsPanel$$RemoveMapButtons @ RVA 0x3593E38

void Nekki_SF2_GUI_Map_MapButtonsPanel__RemoveMapButtons
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_MapButton__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568d8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    DAT_04568d8e = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).KMGFNKKPGIH;
  if (pSVar2 != (System_Collections_Generic_List_MapButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    pSVar2 = (__this->fields).KMGFNKKPGIH;
    if (pSVar2 != (System_Collections_Generic_List_MapButton__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

