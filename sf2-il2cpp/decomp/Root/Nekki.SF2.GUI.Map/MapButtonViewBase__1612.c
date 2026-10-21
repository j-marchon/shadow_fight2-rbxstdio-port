// TypeDefIndex 1612
// Namespace: Nekki.SF2.GUI.Map
// public abstract class MapButtonViewBase : IRaidKeysView
// Fields:
//   private GameObject _keyPanel1; // 0x30
//   private GameObject _keyPanel2; // 0x38
//   protected ResolutionButton _hintButton; // 0x40
//   private ResolutionImage _hintFlashing; // 0x48
//   private int _hintMinWidth; // 0x50
//   private int _hintWidthSpace; // 0x54
//   private CanvasGroup _hintRootCanvasGroup; // 0x58
//   private RectTransform _hintRoot; // 0x60
//   protected LabelAlias _hintTitle; // 0x68
//   private RectTransform _hintBackgndRoot; // 0x70
//   private List<RaidKey> KFCOGLMHJGN; // 0x78
//   private List<RaidKey> GPBMNMEDLKB; // 0x80
//   private HorizontalOrVerticalLayoutGroup EGCJJLLHGHM; // 0x88
//   private HorizontalOrVerticalLayoutGroup FHNILHOGNFF; // 0x90
//   private int AIBKGCEBLND; // 0x98
//   private IEnumerator OFAKKFOAPFD; // 0xA0

// ===== protected void .ctor()  [RVA 0x31B8204]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$.ctor @ RVA 0x31B8204

void Nekki_SF2_GUI_Map_MapButtonViewBase___ctor
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidKey__o *pSVar1;
  System_Collections_Generic_List_RaidKey__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bc6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidKey>_TypeInfo);
    DAT_04566bc6 = 1;
    method = extraout_x1;
  }
  (__this->fields)._hintMinWidth = 800;
  (__this->fields)._hintWidthSpace = 0x32;
  pSVar1 = (System_Collections_Generic_List_RaidKey__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<RaidKey>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<RaidKey>__ctor__);
  ppSVar2 = &(__this->fields).KFCOGLMHJGN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_RaidKey__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<RaidKey>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<RaidKey>__ctor__);
  ppSVar2 = &(__this->fields).GPBMNMEDLKB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  Nekki_SF2_GUI_Map_IRaidKeysView___ctor
            ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OPOJHCGBBBM()  [RVA 0x31B82BC]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$OPOJHCGBBBM @ RVA 0x31B82BC

void Nekki_SF2_GUI_Map_MapButtonViewBase__OPOJHCGBBBM
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_TouchPhase_array *MJPJJMNNMGC;
  
  if ((DAT_04566bc7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_TouchPhase___TypeInfo);
    DAT_04566bc7 = 1;
  }
  if ((__this->fields).AIBKGCEBLND < 1) {
    pUVar2 = (__this->fields)._hintRoot;
    if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
LAB_032b83ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      MJPJJMNNMGC = (UnityEngine_TouchPhase_array *)
                    FUN_01bab718(UnityEngine_TouchPhase___TypeInfo,1);
      bVar1 = HPHIGFJMKAC__ENKOEPDLPCP(MJPJJMNNMGC,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
        if ((!bVar1) || (bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0), !bVar1))
        goto LAB_032b8394;
      }
      pUVar2 = (__this->fields)._hintRoot;
      if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032b83ac;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      (__this->fields).AIBKGCEBLND = 0;
    }
  }
LAB_032b8394:
  (__this->fields).AIBKGCEBLND = (__this->fields).AIBKGCEBLND + -1;
  return;
}


// ===== private IEnumerator HGNIFFACGDI()  [RVA 0x31B83B0]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$HGNIFFACGDI @ RVA 0x31B83B0

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Map_MapButtonViewBase__HGNIFFACGDI
          (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bc8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapButtonViewBase_HHMKPEIPOFE_TypeInfo);
    DAT_04566bc8 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapButtonViewBase_HHMKPEIPOFE_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== protected override void GNMFDGIDOKJ()  [RVA 0x31B8444]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$GNMFDGIDOKJ @ RVA 0x31B8444

void Nekki_SF2_GUI_Map_MapButtonViewBase__GNMFDGIDOKJ
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_RaidKey__o *pSVar2;
  
  if ((DAT_04566bc9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_Clear__);
    DAT_04566bc9 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonViewBase__BBLKJEBBBJH(__this,method);
  __this_00 = (__this->fields)._hintRootCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).KFCOGLMHJGN;
    if (pSVar2 != (System_Collections_Generic_List_RaidKey__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).GPBMNMEDLKB;
      if (pSVar2 != (System_Collections_Generic_List_RaidKey__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ((__this->fields)._keyPanel1,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ((__this->fields)._keyPanel2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x31B85CC]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$Update @ RVA 0x31B85CC

void Nekki_SF2_GUI_Map_MapButtonViewBase__Update
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  Nekki_SF2_GUI_Map_MapButtonViewBase__OPOJHCGBBBM(__this,method);
  if ((__this->fields).super.DFGLKIENEIH == false) {
    return;
  }
  pUVar2 = (__this->fields)._hintRoot;
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._hintRoot;
    (__this->fields).super.DFGLKIENEIH = false;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BBLKJEBBBJH()  [RVA 0x31B8508]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$BBLKJEBBBJH @ RVA 0x31B8508

void Nekki_SF2_GUI_Map_MapButtonViewBase__BBLKJEBBBJH
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566bca & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566bca = 1;
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
        goto LAB_032b85a0;
      }
                    /* try { // try from 032b8574 to 033b870f has its CatchHandler @ 032b8574
                       catch() { ... } // from try @ 032b8574 with catch @ 032b8574
                       catch() { ... } // from try @ 032b8bcc with catch @ 032b8574
                       catch() { ... } // from try @ 032b8c8c with catch @ 032b8574
                       catch() { ... } // from try @ 032b8ce8 with catch @ 032b8574
                       catch() { ... } // from try @ 032b8d28 with catch @ 032b8574 */
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_032b85a0:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void BGOAPKAMKOK()  [RVA 0x31B862C]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$BGOAPKAMKOK @ RVA 0x31B862C

void Nekki_SF2_GUI_Map_MapButtonViewBase__BGOAPKAMKOK
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

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
  
  if ((DAT_04566bcb & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566bcb = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonViewBase__BBLKJEBBBJH(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_Map_MapButtonViewBase__HGNIFFACGDI(__this,method_00);
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
        goto LAB_032b86d0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_032b86d0:
  pSVar3 = (System_Collections_IEnumerator_o *)(*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  ppSVar8 = &(__this->fields).OFAKKFOAPFD;
  *ppSVar8 = pSVar3;
  thunk_FUN_01c20e04(ppSVar8,pSVar3);
  return;
}


// ===== public override void OnDestroyByPanel()  [RVA 0x31B8700]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$OnDestroyByPanel @ RVA 0x31B8700

void Nekki_SF2_GUI_Map_MapButtonViewBase__OnDestroyByPanel
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566bca & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566bca = 1;
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
        goto LAB_032b85a0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_032b85a0:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private float OIGHNFJGHEO(List<RaidKey> IFFLAAMFALK, float GCDIOJKMKIN)  [RVA 0x31B8704]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$OIGHNFJGHEO @ RVA 0x31B8704

float Nekki_SF2_GUI_Map_MapButtonViewBase__OIGHNFJGHEO
                (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,
                System_Collections_Generic_List_RaidKey__o *IFFLAAMFALK,float GCDIOJKMKIN,
                MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 032b8710 to 033b8717 has its CatchHandler @ 032b8cc4 */
                    /* try { // try from 032b8724 to 033b873f has its CatchHandler @ 032b8cbc */
  if ((DAT_04566bcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidKey>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidKey>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidKey>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_GetEnumerator__);
    __this = (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_get_Count__);
    DAT_04566bcc = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IFFLAAMFALK != (System_Collections_Generic_List_RaidKey__o *)0x0) {
    iVar1 = (IFFLAAMFALK->fields)._size;
    if (iVar1 < 1) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)(iVar1 + -1) * GCDIOJKMKIN;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)IFFLAAMFALK,
                 Method_System_Collections_Generic_List<RaidKey>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<RaidKey>_MoveNext__
                               ), bVar2) {
        if ((Nekki_SF2_GUI_Map_RaidKey_o *)local_48.fields._current ==
            (Nekki_SF2_GUI_Map_RaidKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar4 = Nekki_SF2_GUI_Map_RaidKey__GetBoundingSize
                          ((Nekki_SF2_GUI_Map_RaidKey_o *)local_48.fields._current,(MethodInfo *)0x0
                          );
        fVar3 = fVar3 + UVar4.fields.x;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<RaidKey>_Dispose__);
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public override void Init()  [RVA 0x31B888C]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$Init @ RVA 0x31B888C

void Nekki_SF2_GUI_Map_MapButtonViewBase__Init
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *__this_03;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o **ppUVar4;
  
  if ((DAT_04566bcd & 1) == 0) {
                    /* try { // try from 032b88a8 to 033b88af has its CatchHandler @ 032b8cb0 */
    FUN_01bab630(&
                 Method_UnityEngine_GameObject_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                );
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b88bc to 033b88bf has its CatchHandler @ 032b8ca0 */
    DAT_04566bcd = 1;
  }
  pNVar3 = (__this->fields)._hintButton;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = (pNVar3->fields).super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._hintButton;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(pNVar3->fields).super.super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b88f8 to 033b8933 has its CatchHandler @ 032b8cb8 */
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._hintButton;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          (pNVar3->fields).super.FlashingImage = (__this->fields)._hintFlashing;
          thunk_FUN_01c20e04(&(pNVar3->fields).super.FlashingImage);
                    /* try { // try from 032b893c to 033b893f has its CatchHandler @ 032b8ca8 */
          pNVar3 = (__this->fields)._hintButton;
          if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            SFButton__set_IsFlashing((SFButton_o *)pNVar3,false,(MethodInfo *)0x0);
            __this_01 = (__this->fields)._hintRoot;
            if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar1 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Map_MapButtonViewBase__BGOAPKAMKOK(__this,method_00);
                    /* try { // try from 032b8978 to 033b899f has its CatchHandler @ 032b8cb4 */
              pUVar1 = (__this->fields)._keyPanel1;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                         UnityEngine_GameObject__GetComponentInChildren<object>
                                   (pUVar1,
                                    Method_UnityEngine_GameObject_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                                   );
                ppUVar4 = &(__this->fields).EGCJJLLHGHM;
                *ppUVar4 = pUVar2;
                thunk_FUN_01c20e04(ppUVar4,pUVar2);
                pUVar1 = (__this->fields)._keyPanel2;
                if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                           UnityEngine_GameObject__GetComponentInChildren<object>
                                     (pUVar1,
                                      Method_UnityEngine_GameObject_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                                     );
                  ppUVar4 = &(__this->fields).FHNILHOGNFF;
                    /* try { // try from 032b89b4 to 033b89b7 has its CatchHandler @ 032b8c94 */
                  *ppUVar4 = pUVar2;
                  thunk_FUN_01c20e04(ppUVar4,pUVar2);
                  __this_02 = (__this->fields)._hintRootCanvasGroup;
                  if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
                    UnityEngine_CanvasGroup__set_alpha(__this_02,0.0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OLOBIPCHMCC()  [RVA 0x31B89E4]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$OLOBIPCHMCC @ RVA 0x31B89E4

void Nekki_SF2_GUI_Map_MapButtonViewBase__OLOBIPCHMCC
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  System_Collections_Generic_List_NPKKNCCEIND__o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Map_RaidKey_o *item;
  System_Collections_Generic_List_RaidKey__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Nekki_SF2_GUI_Map_RaidKey_array *pNVar3;
  uint index;
  
                    /* try { // try from 032b89f0 to 033b8a23 has its CatchHandler @ 032b8c98 */
  if ((DAT_04566bce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Item__);
    DAT_04566bce = 1;
  }
                    /* try { // try from 032b8a3c to 033b8a53 has its CatchHandler @ 032b8cc0 */
  (*(__this->klass->vtable)._4_GNMFDGIDOKJ.methodPtr)
            (__this,(__this->klass->vtable)._4_GNMFDGIDOKJ.method);
  __this_00 = (__this->fields).super.ADHBPAAHOKK;
  if (__this_00 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
    index = 0;
    method_00 = extraout_x1;
    do {
      if ((__this_00->fields)._size <= (int)index) {
        Nekki_SF2_GUI_Map_MapButtonViewBase__BGOAPKAMKOK(__this,method_00);
        return;
      }
      method_00 = (MethodInfo *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Item__);
      if (method_00 == (MethodInfo *)0x0) break;
      if (0 < *(int *)&method_00->return_type) {
        lVar1 = 0x30;
        if (4 < index) {
          lVar1 = 0x38;
        }
        item = Nekki_SF2_GUI_Map_IRaidKeysView__ANMOLCFIIJK
                         ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(NPKKNCCEIND_o *)method_00,
                          *(UnityEngine_GameObject_o **)((long)&__this->klass + lVar1),
                          (MethodInfo *)0x0);
        lVar1 = Method_System_Collections_Generic_List<RaidKey>_Add__;
        if (index < 5) {
          __this_01 = (__this->fields).KFCOGLMHJGN;
        }
        else {
          __this_01 = (__this->fields).GPBMNMEDLKB;
        }
        if (__this_01 == (System_Collections_Generic_List_RaidKey__o *)0x0) break;
        pNVar3 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pNVar3 == (Nekki_SF2_GUI_Map_RaidKey_array *)0x0) break;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pNVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pNVar3->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar2);
          method_00 = extraout_x1_00;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          method_00 = extraout_x1_01;
        }
      }
      __this_00 = (__this->fields).super.ADHBPAAHOKK;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void DFAIHDKINDN()  [RVA 0x31B8B44]
// Nekki.SF2.GUI.Map.MapButtonViewBase$$DFAIHDKINDN @ RVA 0x31B8B44

void Nekki_SF2_GUI_Map_MapButtonViewBase__DFAIHDKINDN
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  __this_00 = (__this->fields)._hintButton;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    SFButton__set_IsFlashing((SFButton_o *)__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._hintRoot;
    if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      (__this->fields).super.DFGLKIENEIH = true;
      (__this->fields).AIBKGCEBLND = 2;
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

