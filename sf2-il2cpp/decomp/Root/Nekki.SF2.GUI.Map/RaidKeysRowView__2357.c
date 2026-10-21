// TypeDefIndex 2357
// Namespace: Nekki.SF2.GUI.Map
// public class RaidKeysRowView : IRaidKeysView
// Fields:
//   private float _minScreenRatio; // 0x2C
//   private float _maxScreenRatio; // 0x30
//   private float _minScreenRatioWidth; // 0x34
//   private float _maxScreenRatioWidth; // 0x38
//   private CanvasGroup _keyPanelCanvasGroup; // 0x40
//   private GameObject _keyPanel; // 0x48
//   private HorizontalOrVerticalLayoutGroup HJEECKHPNHC; // 0x50
//   private IEnumerator OFAKKFOAPFD; // 0x58

// ===== public bool IsSuitableToRender(List<NPKKNCCEIND> IFFLAAMFALK)  [RVA 0x33278D0]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$IsSuitableToRender @ RVA 0x33278D0

bool Nekki_SF2_GUI_Map_RaidKeysRowView__IsSuitableToRender
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,
               System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar3 = Util__EGNDHMHOPCG((__this->fields)._maxScreenRatio,(__this->fields)._minScreenRatioWidth,
                            *(float *)&(__this->fields).super.field_0x1c,
                            (__this->fields)._minScreenRatio,(float)iVar1 / (float)iVar2,
                            (MethodInfo *)0x0);
  fVar4 = Nekki_SF2_GUI_Map_RaidKeysRowView__GetApproxWidth(__this,IFFLAAMFALK,method);
  return fVar4 <= fVar3;
}


// ===== public void .ctor()  [RVA 0x3327AB4]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$.ctor @ RVA 0x3327AB4

void Nekki_SF2_GUI_Map_RaidKeysRowView___ctor
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  (__this->fields)._maxScreenRatio = 750.0;
  (__this->fields)._minScreenRatioWidth = 900.0;
  *(undefined8 *)&(__this->fields).super.field_0x1c = 0x3fc000003fa66666;
  Nekki_SF2_GUI_Map_IRaidKeysView___ctor
            ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void OnDestroyByPanel()  [RVA 0x3327AC8]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$OnDestroyByPanel @ RVA 0x3327AC8

void Nekki_SF2_GUI_Map_RaidKeysRowView__OnDestroyByPanel
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045678a4 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045678a4 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).OFAKKFOAPFD;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03427b64;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03427b64:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== protected override void DENKPLMPEDI()  [RVA 0x3327B90]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$DENKPLMPEDI @ RVA 0x3327B90

void Nekki_SF2_GUI_Map_RaidKeysRowView__DENKPLMPEDI
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void Init()  [RVA 0x3327B94]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$Init @ RVA 0x3327B94

void Nekki_SF2_GUI_Map_RaidKeysRowView__Init
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o **ppUVar2;
  
  if ((DAT_045678a2 & 1) == 0) {
    FUN_01bab630(&
                 Method_UnityEngine_Component_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                );
    DAT_045678a2 = 1;
  }
  Nekki_SF2_GUI_Map_IRaidKeysView__Init
            ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
           UnityEngine_Component__GetComponentInChildren<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                     );
  ppUVar2 = &(__this->fields).HJEECKHPNHC;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  __this_00 = (__this->fields)._keyPanelCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x3327C10]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$Update @ RVA 0x3327C10

void Nekki_SF2_GUI_Map_RaidKeysRowView__Update
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((__this->fields).super.DFGLKIENEIH != false) {
    pUVar2 = (__this->fields)._keyPanel;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (__this->fields)._keyPanel;
      (__this->fields).super.DFGLKIENEIH = false;
      Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== protected override void GNMFDGIDOKJ()  [RVA 0x3327C54]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$GNMFDGIDOKJ @ RVA 0x3327C54

void Nekki_SF2_GUI_Map_RaidKeysRowView__GNMFDGIDOKJ
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ((__this->fields)._keyPanel,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._keyPanelCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetApproxWidth(List<NPKKNCCEIND> IFFLAAMFALK)  [RVA 0x332793C]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$GetApproxWidth @ RVA 0x332793C

float Nekki_SF2_GUI_Map_RaidKeysRowView__GetApproxWidth
                (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,
                System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045678a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Count__);
    DAT_045678a3 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IFFLAAMFALK != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
    iVar1 = (IFFLAAMFALK->fields)._size;
    if (iVar1 < 1) {
      fVar5 = 0.0;
    }
    else {
      pUVar3 = (__this->fields).HJEECKHPNHC;
      if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_03427a48;
      fVar5 = *(float *)&(pUVar3->fields).m_ChildScaleWidth * (float)(iVar1 + -1);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)IFFLAAMFALK,
                 Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__
                               ), bVar2) {
        fVar4 = Nekki_SF2_GUI_Map_RaidKey__GetApproxWidth
                          ((NPKKNCCEIND_o *)local_48.fields._current,(MethodInfo *)0x0);
        fVar5 = fVar5 + fVar4;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__)
      ;
    }
    return fVar5;
  }
LAB_03427a48:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BBLKJEBBBJH()  [RVA 0x3327ACC]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$BBLKJEBBBJH @ RVA 0x3327ACC

void Nekki_SF2_GUI_Map_RaidKeysRowView__BBLKJEBBBJH
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045678a4 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045678a4 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).OFAKKFOAPFD;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03427b64;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03427b64:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void BGOAPKAMKOK()  [RVA 0x3327C84]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$BGOAPKAMKOK @ RVA 0x3327C84

void Nekki_SF2_GUI_Map_RaidKeysRowView__BGOAPKAMKOK
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_045678a5 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045678a5 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_RaidKeysRowView__BBLKJEBBBJH(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_Map_RaidKeysRowView__HGNIFFACGDI(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_03427d28;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03427d28:
  pSVar3 = (System_Collections_IEnumerator_o *)(*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  ppSVar8 = &(__this->fields).OFAKKFOAPFD;
  *ppSVar8 = pSVar3;
  thunk_FUN_01c20e04(ppSVar8,pSVar3);
  return;
}


// ===== protected override void OLOBIPCHMCC()  [RVA 0x3327DC4]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$OLOBIPCHMCC @ RVA 0x3327DC4

void Nekki_SF2_GUI_Map_RaidKeysRowView__OLOBIPCHMCC
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  System_Collections_Generic_List_NPKKNCCEIND__o *__this_01;
  Nekki_SF2_GUI_Map_RaidKey_o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045678a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
    DAT_045678a6 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._keyPanelCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.001,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super.ADHBPAAHOKK;
    if (__this_01 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__);
          Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB((__this->fields)._keyPanel,(MethodInfo *)0x0)
          ;
          Nekki_SF2_GUI_Map_RaidKeysRowView__BGOAPKAMKOK(__this,method_00);
          return;
        }
        if ((NPKKNCCEIND_o *)local_38.fields._current == (NPKKNCCEIND_o *)0x0) break;
        if (0 < ((NPKKNCCEIND_Fields *)((long)local_38.fields._current + 0x10))->JAICMIMBIOA) {
          __this_02 = Nekki_SF2_GUI_Map_IRaidKeysView__ANMOLCFIIJK
                                ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,
                                 (NPKKNCCEIND_o *)local_38.fields._current,
                                 (__this->fields)._keyPanel,(MethodInfo *)0x0);
          if (__this_02 == (Nekki_SF2_GUI_Map_RaidKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Map_RaidKey__InitButton(__this_02,(MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator HGNIFFACGDI()  [RVA 0x3327D58]
// Nekki.SF2.GUI.Map.RaidKeysRowView$$HGNIFFACGDI @ RVA 0x3327D58

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Map_RaidKeysRowView__HGNIFFACGDI
          (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678a7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_TypeInfo);
    DAT_045678a7 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

