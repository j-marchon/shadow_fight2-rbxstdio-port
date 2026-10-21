// TypeDefIndex 2336
// Namespace: Nekki.SF2.GUI.Fight
// public class RewardPanel : MonoBehaviour
// Fields:
//   private RectTransform _Panel; // 0x20
//   private HorizontalLayoutGroup _PanelLayout; // 0x28
//   private RewardPanelItem _RewardPanelItemPrefab; // 0x30
//   private readonly List<RewardPanelItem> MAHKJDKCNPC; // 0x38
//   private readonly List<MGNDHCBAPEN<int, int>> LHHEINBMMKE; // 0x40
//   private int OIPNKIIBMFE; // 0x48

// ===== private void OPPKHGDPGDD(int BFHPCEALPGF, bool GHDKGJNBHCM)  [RVA 0x3320338]
// Nekki.SF2.GUI.Fight.RewardPanel$$OPPKHGDPGDD @ RVA 0x3320338

void Nekki_SF2_GUI_Fight_RewardPanel__OPPKHGDPGDD
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,int32_t BFHPCEALPGF,bool GHDKGJNBHCM,
               MethodInfo *method)

{
  int32_t length;
  System_Action_RewardPanelItem__o **ppSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar2;
  System_Collections_Generic_List_RewardPanelItem__o *__this_00;
  System_Action_RewardPanelItem__o *action;
  
  if ((DAT_04567845 & 1) == 0) {
    FUN_01bab630(&System_Action<RewardPanelItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_DBDJKMNAAKP__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
    DAT_04567845 = 1;
  }
  pSVar2 = (__this->fields).LHHEINBMMKE;
  (__this->fields).OIPNKIIBMFE = -1;
  if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (GHDKGJNBHCM) {
      return;
    }
    __this_00 = (__this->fields).MAHKJDKCNPC;
    if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03420410 to 03520437 has its CatchHandler @ 03420690 */
    action = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__10_0;
    if (action == (System_Action_RewardPanelItem__o *)0x0) {
      if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_RewardPanelItem__o *)
               thunk_FUN_01bda818(System_Action<RewardPanelItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__10_0;
                    /* try { // try from 0342046c to 03520497 has its CatchHandler @ 0342068c */
      *ppSVar1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_00 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
      method_01 = Method_System_Collections_Generic_List<RewardPanelItem>_ForEach__;
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,(MethodInfo_26E57EC *)
                  Method_System_Collections_Generic_List<RewardPanelItem>_ForEach__);
      Nekki_SF2_GUI_Fight_RewardPanel__GetRanges((__this->fields).LHHEINBMMKE,BFHPCEALPGF,method_01)
      ;
      Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GetRanges(List<MGNDHCBAPEN<int, int>> EOIJMGHCGLP, int LANCNMIELKF)  [RVA 0x33204B8]
// Nekki.SF2.GUI.Fight.RewardPanel$$GetRanges @ RVA 0x33204B8

void Nekki_SF2_GUI_Fight_RewardPanel__GetRanges
               (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *EOIJMGHCGLP,
               int32_t LANCNMIELKF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MGNDHCBAPEN_int__int__o *pMVar3;
  int32_t NANHIJPKIAP;
  MGNDHCBAPEN_int__int__array *pMVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
                    /* try { // try from 034204d0 to 035204df has its CatchHandler @ 03420694 */
  if ((DAT_04567846 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__);
                    /* try { // try from 034204ec to 035204f7 has its CatchHandler @ 0342067c */
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 03420508 to 0352050f has its CatchHandler @ 03420678 */
    DAT_04567846 = 1;
  }
  uVar8 = LANCNMIELKF - 1;
  if (LANCNMIELKF < 1) {
    return;
  }
  if (LANCNMIELKF < 0xb) {
    iVar6 = 0;
  }
  else {
    iVar6 = LANCNMIELKF + 4;
    iVar5 = 0;
    do {
      NANHIJPKIAP = iVar5;
      iVar7 = iVar6;
      pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 0342054c to 0352056f has its CatchHandler @ 03420684 */
      MGNDHCBAPEN<int,_int>___ctor
                (pMVar3,NANHIJPKIAP,NANHIJPKIAP + 4,Method_MGNDHCBAPEN<int,_int>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
      if (EOIJMGHCGLP == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
      goto LAB_03420780;
      pMVar4 = (EOIJMGHCGLP->fields)._items;
                    /* try { // try from 03420570 to 0352064f has its CatchHandler @ 0342023c */
      (EOIJMGHCGLP->fields)._version = (EOIJMGHCGLP->fields)._version + 1;
      if (pMVar4 == (MGNDHCBAPEN_int__int__array *)0x0) goto LAB_03420780;
      uVar8 = (EOIJMGHCGLP->fields)._size;
      if (uVar8 < (uint)pMVar4->max_length) {
        (EOIJMGHCGLP->fields)._size = uVar8 + 1;
        pMVar4->m_Items[(int)uVar8] = pMVar3;
        thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar8,pMVar3);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)EOIJMGHCGLP,(Il2CppObject *)pMVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar7 + -5;
      iVar5 = NANHIJPKIAP + 5;
    } while (0xe < iVar6);
    iVar6 = NANHIJPKIAP + 5;
    uVar8 = iVar7 - 10;
  }
  if ((int)uVar8 < 5) {
    pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
    MGNDHCBAPEN<int,_int>___ctor(pMVar3,iVar6,uVar8 + iVar6,Method_MGNDHCBAPEN<int,_int>__ctor__);
    if (EOIJMGHCGLP == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
    goto LAB_03420780;
    iVar5 = (EOIJMGHCGLP->fields)._version;
    pMVar4 = (EOIJMGHCGLP->fields)._items;
  }
  else {
                    /* try { // try from 03420650 to 03520657 has its CatchHandler @ 03420688 */
    pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 03420658 to 0352065b has its CatchHandler @ 03420698 */
                    /* try { // try from 0342065c to 0352065f has its CatchHandler @ 03420680 */
                    /* try { // try from 03420660 to 03520663 has its CatchHandler @ 03420698 */
    iVar7 = iVar6 + (uVar8 >> 1);
                    /* try { // try from 03420664 to 03520667 has its CatchHandler @ 0342023c */
                    /* try { // try from 03420668 to 0352066b has its CatchHandler @ 03420674 */
                    /* try { // try from 0342066c to 035206a7 has its CatchHandler @ 0342023c */
                    /* catch() { ... } // from try @ 03420668 with catch @ 03420674 */
    MGNDHCBAPEN<int,_int>___ctor(pMVar3,iVar6,iVar7,Method_MGNDHCBAPEN<int,_int>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
                    /* catch() { ... } // from try @ 03420508 with catch @ 03420678 */
    if (EOIJMGHCGLP == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
    goto LAB_03420780;
                    /* catch() { ... } // from try @ 034204ec with catch @ 0342067c */
                    /* catch() { ... } // from try @ 0342065c with catch @ 03420680 */
                    /* catch() { ... } // from try @ 0342054c with catch @ 03420684 */
                    /* catch() { ... } // from try @ 03420650 with catch @ 03420688 */
    pMVar4 = (EOIJMGHCGLP->fields)._items;
                    /* catch() { ... } // from try @ 0342046c with catch @ 0342068c */
                    /* catch() { ... } // from try @ 03420410 with catch @ 03420690 */
                    /* catch() { ... } // from try @ 034204d0 with catch @ 03420694 */
    (EOIJMGHCGLP->fields)._version = (EOIJMGHCGLP->fields)._version + 1;
                    /* catch() { ... } // from try @ 03420658 with catch @ 03420698
                       catch() { ... } // from try @ 03420660 with catch @ 03420698 */
    if (pMVar4 == (MGNDHCBAPEN_int__int__array *)0x0) goto LAB_03420780;
    uVar1 = (EOIJMGHCGLP->fields)._size;
                    /* try { // try from 034206a8 to 035206ab has its CatchHandler @ 034206bc */
    if (uVar1 < (uint)pMVar4->max_length) {
      (EOIJMGHCGLP->fields)._size = uVar1 + 1;
                    /* catch() { ... } // from try @ 034206a8 with catch @ 034206bc */
      pMVar4->m_Items[(int)uVar1] = pMVar3;
      thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar1,pMVar3);
    }
    else {
                    /* try { // try from 034206cc to 03520733 has its CatchHandler @ 03420748 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)EOIJMGHCGLP,(Il2CppObject *)pMVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
    MGNDHCBAPEN<int,_int>___ctor
              (pMVar3,iVar7 + 1,uVar8 + iVar6,Method_MGNDHCBAPEN<int,_int>__ctor__);
    iVar5 = (EOIJMGHCGLP->fields)._version;
    pMVar4 = (EOIJMGHCGLP->fields)._items;
  }
  lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
  (EOIJMGHCGLP->fields)._version = iVar5 + 1;
  if (pMVar4 != (MGNDHCBAPEN_int__int__array *)0x0) {
    uVar8 = (EOIJMGHCGLP->fields)._size;
    if (uVar8 < (uint)pMVar4->max_length) {
      (EOIJMGHCGLP->fields)._size = uVar8 + 1;
                    /* try { // try from 03420734 to 0352073f has its CatchHandler @ 0342023c */
      pMVar4->m_Items[(int)uVar8] = pMVar3;
                    /* try { // try from 03420740 to 03520747 has its CatchHandler @ 03420748 */
                    /* catch() { ... } // from try @ 034206cc with catch @ 03420748
                       catch() { ... } // from try @ 03420740 with catch @ 03420748 */
      thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar8,pMVar3);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)EOIJMGHCGLP,(Il2CppObject *)pMVar3,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_03420780:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Clear()  [RVA 0x3320854]
// Nekki.SF2.GUI.Fight.RewardPanel$$Clear @ RVA 0x3320854

/* WARNING: Removing unreachable block (ram,0x03420aac) */
/* WARNING: Removing unreachable block (ram,0x03420b34) */

void Nekki_SF2_GUI_Fight_RewardPanel__Clear
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  long *plVar8;
  undefined8 *puVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  System_Collections_Generic_List_RewardPanelItem__o *pSVar12;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  UnityEngine_RectTransform_o *pUVar17;
  
  if ((DAT_04567847 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_04567847 = 1;
    method = extraout_x1;
  }
  pUVar17 = (__this->fields)._Panel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pUVar17 = (__this->fields)._Panel;
  if ((pUVar17 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar6 = UnityEngine_Transform__GetEnumerator(__this_00,(MethodInfo *)0x0);
    if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar6->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar14 = (ulong)uVar3;
      if (uVar14 != 0) {
        piVar15 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar10->vtable + *piVar15;
            goto LAB_03420970;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03420970:
      uVar14 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
        if (plVar8 == (long *)0x0) goto LAB_03420aa0;
        lVar11 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_03420a78;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03420a60;
      }
      pSVar10 = pSVar6->klass;
      uVar4._0_1_ = (pSVar10->_2).rank;
      uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar14 = (ulong)uVar4;
      if (uVar14 != 0) {
        piVar15 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar10->vtable + (*piVar15 + 1);
            goto LAB_034209d0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_034209d0:
      __this_01 = (UnityEngine_Component_o *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar2) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_03420b2c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_03420a60:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03420a94;
    }
  }
LAB_03420a78:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_03420a94:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03420aa0:
  pSVar12 = (__this->fields).MAHKJDKCNPC;
  if (pSVar12 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
    iVar1 = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar13 = (__this->fields).LHHEINBMMKE;
    if (pSVar13 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
      iVar1 = (pSVar13->fields)._size;
      (pSVar13->fields)._size = 0;
      (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
      if (iVar1 < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar13->fields)._items,0,iVar1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03420b2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(List<IGPDCHBJAPD.AKGCHFPLJEC> GMCEHJAIFBJ, float EAMGNFEIFKB, float PFIFJCMHGGB, int ABMDLEIKNBO)  [RVA 0x3320C04]
// Nekki.SF2.GUI.Fight.RewardPanel$$Init @ RVA 0x3320C04

/* WARNING: Removing unreachable block (ram,0x03420fb0) */
/* WARNING: Removing unreachable block (ram,0x03421008) */

void Nekki_SF2_GUI_Fight_RewardPanel__Init
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,
               System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *GMCEHJAIFBJ,
               float EAMGNFEIFKB,float PFIFJCMHGGB,int32_t ABMDLEIKNBO,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_Collections_Generic_IEnumerable_TResult__c *pSVar9;
  long lVar10;
  System_Collections_Generic_List_RewardPanelItem__o *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o *selector;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_04567848 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>__);
    FUN_01bab630(&System_Func<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_HBJOIOKGNKP__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_10831/*"RaidCurrencyForge"*/);
    FUN_01bab630(&StringLiteral_9080/*"MiscSprites"*/);
    DAT_04567848 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  selector = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__6_0;
  if (selector == (System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    selector = (System_Func_IGPDCHBJAPD_AKGCHFPLJEC__BNKBGIIJNLF__o *)
               thunk_FUN_01bda818(System_Func<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>_TypeInfo);
    method = (MethodInfo *)0x0;
    System_Func<object,_object>___ctor();
    ppSVar3 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar3 = selector;
    thunk_FUN_01c20e04(ppSVar3,selector);
  }
  pSVar4 = System_Linq_Enumerable__Select<object,_object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)GMCEHJAIFBJ,
                      (System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<IGPDCHBJAPD_AKGCHFPLJEC,_BNKBGIIJNLF>__);
  if (pSVar4 != (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
    pSVar9 = pSVar4->klass;
    uVar1._0_1_ = (pSVar9->_2).rank;
    uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<BNKBGIIJNLF>_TypeInfo) {
          pVVar5 = pSVar9->vtable + *piVar13;
          goto LAB_03420dc8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<BNKBGIIJNLF>_TypeInfo,0);
LAB_03420dc8:
    plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03420e50;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03420e50:
      uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03420fa4;
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_03420f7c;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03420f64;
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_BNKBGIIJNLF__c **)(piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<BNKBGIIJNLF>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03420eac;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<BNKBGIIJNLF>_TypeInfo,0);
LAB_03420eac:
      lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = *(System_String_o **)(*(long *)(lVar10 + 0x10) + 0x20);
      if (pSVar8 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method_00 = StringLiteral_10831/*"RaidCurrencyForge"*/;
      pSVar8 = System_String__Replace
                         (pSVar8,StringLiteral_9080/*"MiscSprites"*/,(System_String_o *)StringLiteral_10831/*"RaidCurrencyForge"*/,
                          (MethodInfo *)0x0);
      uStack_78 = *(undefined8 *)(lVar10 + 0x20);
      local_80 = *(undefined8 *)(lVar10 + 0x18);
      __this_01.fields.fakeValue = 0;
      __this_01.fields.fakeValueActive = false;
      __this_01.fields.inited = false;
      __this_01.fields._14_2_ = 0;
      __this_01.fields._0_8_ = &local_80;
      EHNFGMGKCHO = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_01,method_00);
      method = (MethodInfo *)(ulong)(uint)ABMDLEIKNBO;
      __this_00 = Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN
                            (__this,pSVar8,EHNFGMGKCHO,PFIFJCMHGGB,ABMDLEIKNBO,in_x4);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(lVar10 + 0x18),
                         (MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_RewardPanelItem__SetTextLerpValue
                (__this_00,EAMGNFEIFKB,0.0,(float)iVar2,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_03421000;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_03420f64:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03420f98;
    }
  }
LAB_03420f7c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03420f98:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03420fa4:
  pSVar11 = (__this->fields).MAHKJDKCNPC;
  if (pSVar11 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
    Nekki_SF2_GUI_Fight_RewardPanel__OPPKHGDPGDD(__this,(pSVar11->fields)._size,true,method);
    return;
  }
LAB_03421000:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ShowNextGroupIfNeed()  [RVA 0x3320784]
// Nekki.SF2.GUI.Fight.RewardPanel$$ShowNextGroupIfNeed @ RVA 0x3320784

bool Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int index;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  MGNDHCBAPEN_int__int__o *pMVar3;
  MethodInfo *in_x3;
  
  if ((DAT_04567849 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
    DAT_04567849 = 1;
  }
  __this_00 = (__this->fields).LHHEINBMMKE;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
    iVar2 = (__this_00->fields)._size;
    if (iVar2 != 0) {
      index = (__this->fields).OIPNKIIBMFE;
      iVar1 = index + 1;
      (__this->fields).OIPNKIIBMFE = iVar1;
      if (iVar1 < iVar2) {
        if (0 < iVar1) {
          pMVar3 = (MGNDHCBAPEN_int__int__o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                             );
          Nekki_SF2_GUI_Fight_RewardPanel__BBJFKDOCEGL(__this,pMVar3,false,in_x3);
          __this_00 = (__this->fields).LHHEINBMMKE;
          if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
          goto LAB_03420850;
        }
        pMVar3 = (MGNDHCBAPEN_int__int__o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (__this->fields).OIPNKIIBMFE,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                           );
        Nekki_SF2_GUI_Fight_RewardPanel__BBJFKDOCEGL(__this,pMVar3,true,in_x3);
        return true;
      }
    }
    return false;
  }
LAB_03420850:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(BECIPDJBAOG KJADEEFANAL, bool GHDKGJNBHCM = True)  [RVA 0x33214BC]
// Nekki.SF2.GUI.Fight.RewardPanel$$Init @ RVA 0x33214BC

void Nekki_SF2_GUI_Fight_RewardPanel__Init
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,BECIPDJBAOG_o *KJADEEFANAL,
               bool GHDKGJNBHCM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Func_PIADCKMDDAK__bool__o **ppSVar7;
  System_Func_PIADCKMDDAK__string__o **ppSVar8;
  System_Collections_Generic_List_TSource__o *pSVar9;
  RaidConfig_o *pJVar10;
  RaidConfig_ODJJOAOCFKO_o *pJVar11;
  RaidConfig_HJLEKMDIDPO_o *pJVar12;
  Item_o *__this_00;
  HOOAAGABMBL_o *pHVar13;
  Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  MethodInfo *in_x4;
  uint BFHPCEALPGF;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar14;
  System_Func_PIADCKMDDAK__bool__o *pSVar15;
  System_Func_PIADCKMDDAK__string__o *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_64;
  
                    /* try { // try from 034214cc to 035214d3 has its CatchHandler @ 03421530 */
                    /* try { // try from 034214e0 to 035214eb has its CatchHandler @ 03421528 */
                    /* try { // try from 034214ec to 0352151f has its CatchHandler @ 0342143c */
  if ((DAT_0456784a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1553);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1554);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1555);
                    /* try { // try from 03421520 to 03521523 has its CatchHandler @ 0342152c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1556);
                    /* try { // try from 03421524 to 03521547 has its CatchHandler @ 0342143c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034214e0 with catch @ 03421528
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03421520 with catch @ 0342152c
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1557);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034214cc with catch @ 03421530
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1558);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1559);
                    /* try { // try from 03421548 to 0352154b has its CatchHandler @ 0342157c */
                    /* try { // try from 0342154c to 0352158b has its CatchHandler @ 0342143c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1560);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1561);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1562);
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 03421548 with catch @ 0342157c */
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
                    /* try { // try from 0342158c to 03521593 has its CatchHandler @ 034215a8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03421594 to 0352159f has its CatchHandler @ 0342143c */
    FUN_01bab630(&Method_System_Linq_Enumerable_All<PIADCKMDDAK>__);
                    /* try { // try from 034215a0 to 035215a7 has its CatchHandler @ 034215a8 */
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<PIADCKMDDAK,_string>__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342158c with catch @ 034215a8
                       catch(type#2 @ 00000000) { ... } // from try @ 034215a0 with catch @ 034215a8
                        */
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<PIADCKMDDAK>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_get_Current__);
    FUN_01bab630(&System_Func<PIADCKMDDAK,_string>_TypeInfo);
    FUN_01bab630(&System_Func<PIADCKMDDAK,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIADCKMDDAK>_GetEnumerator__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_EGHJBDMDBBE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_FHAKJHLHLLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_JGKOIBIAPPI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanel_<>c_KJADJCHPMIM__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
    DAT_0456784a = 1;
  }
  local_64 = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (KJADEEFANAL == (BECIPDJBAOG_o *)0x0) {
LAB_03421f10:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = BECIPDJBAOG__HMCAGKEIIGO(KJADEEFANAL,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1553,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1554,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    local_64 = (KJADEEFANAL->fields).NLLKMEMKBAF;
    pSVar6 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN(__this,pSVar5,pSVar6,0.73,0,in_x4);
  }
  BFHPCEALPGF = (uint)bVar2;
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_IList_T__o *)(KJADEEFANAL->fields).LEJBLHJFJHP,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
  if (!bVar2) {
    pGVar14 = (KJADEEFANAL->fields).LEJBLHJFJHP;
    if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_0;
    if (pSVar15 == (System_Func_PIADCKMDDAK__bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar15 = (System_Func_PIADCKMDDAK__bool__o *)
                thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_bool>_TypeInfo);
      method = (MethodInfo *)0x0;
      System_Func<object,_bool>___ctor();
      ppSVar7 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_0;
      *ppSVar7 = pSVar15;
      thunk_FUN_01c20e04(ppSVar7,pSVar15);
    }
    bVar2 = System_Linq_Enumerable__All<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar14,
                       (System_Func_TSource__bool__o *)pSVar15,
                       Method_System_Linq_Enumerable_All<PIADCKMDDAK>__);
    pGVar14 = (KJADEEFANAL->fields).LEJBLHJFJHP;
    if (bVar2) {
      if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar16 = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_1;
      if (pSVar16 == (System_Func_PIADCKMDDAK__string__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar16 = (System_Func_PIADCKMDDAK__string__o *)
                  thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_string>_TypeInfo);
        method = (MethodInfo *)0x0;
        System_Func<object,_object>___ctor();
        ppSVar8 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_1;
        *ppSVar8 = pSVar16;
        thunk_FUN_01c20e04(ppSVar8,pSVar16);
      }
      pGVar14 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                System_Linq_Enumerable__OrderBy<object,_object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar14,
                           (System_Func_TSource__TKey__o *)pSVar16,
                           Method_System_Linq_Enumerable_OrderBy<PIADCKMDDAK,_string>__);
    }
    pSVar9 = System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar14,
                        Method_System_Linq_Enumerable_ToList<PIADCKMDDAK>__);
    if (pSVar9 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03421f10;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar9,
               Method_System_Collections_Generic_List<PIADCKMDDAK>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_MoveNext__
                             ), pIVar1 = local_90.fields._current, bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pJVar10 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar11 = RaidConfig__DOKLIOAMCCO(pJVar10,pIVar1[1].monitor,(MethodInfo *)0x0);
      if (pJVar11 == (RaidConfig_ODJJOAOCFKO_o *)0x0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1555,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1556,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,pIVar1[1].monitor,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      }
      else {
        local_64 = *(int32_t *)&pIVar1[2].klass;
        pSVar6 = (pJVar11->fields).KPDPJONADPJ;
        pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN(__this,pSVar6,pSVar5,0.73,0,in_x4);
        BFHPCEALPGF = BFHPCEALPGF + 1;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_Dispose__);
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_IList_T__o *)(KJADEEFANAL->fields).AKFPFIHIHOC,
                     Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
  if (!bVar2) {
    pGVar14 = (KJADEEFANAL->fields).LEJBLHJFJHP;
    if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_2;
    if (pSVar15 == (System_Func_PIADCKMDDAK__bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar15 = (System_Func_PIADCKMDDAK__bool__o *)
                thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_bool>_TypeInfo);
      method = (MethodInfo *)0x0;
      System_Func<object,_bool>___ctor();
      ppSVar7 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_2;
      *ppSVar7 = pSVar15;
      thunk_FUN_01c20e04(ppSVar7,pSVar15);
    }
    bVar2 = System_Linq_Enumerable__All<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar14,
                       (System_Func_TSource__bool__o *)pSVar15,
                       Method_System_Linq_Enumerable_All<PIADCKMDDAK>__);
    pGVar14 = (KJADEEFANAL->fields).AKFPFIHIHOC;
    if (bVar2) {
      if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar16 = Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_3;
      if (pSVar16 == (System_Func_PIADCKMDDAK__string__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar16 = (System_Func_PIADCKMDDAK__string__o *)
                  thunk_FUN_01bda818(System_Func<PIADCKMDDAK,_string>_TypeInfo);
        method = (MethodInfo *)0x0;
        System_Func<object,_object>___ctor();
        ppSVar8 = &Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9__7_3;
        *ppSVar8 = pSVar16;
        thunk_FUN_01c20e04(ppSVar8,pSVar16);
      }
      pGVar14 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                System_Linq_Enumerable__OrderBy<object,_object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar14,
                           (System_Func_TSource__TKey__o *)pSVar16,
                           Method_System_Linq_Enumerable_OrderBy<PIADCKMDDAK,_string>__);
    }
    pSVar9 = System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar14,
                        Method_System_Linq_Enumerable_ToList<PIADCKMDDAK>__);
    if (pSVar9 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03421f10;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar9,
               Method_System_Collections_Generic_List<PIADCKMDDAK>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_MoveNext__
                             ), pIVar1 = local_90.fields._current, bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pJVar10 == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar12 = RaidConfig__FPPDGOEOJCH(pJVar10,pIVar1[1].monitor,(MethodInfo *)0x0);
      if (pJVar12 == (RaidConfig_HJLEKMDIDPO_o *)0x0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1557,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1558,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,pIVar1[1].monitor,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
LAB_03421d2c:
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_00 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar13 = Item__CKKIPBAIEMN(__this_00,pIVar1[1].monitor,(MethodInfo *)0x0);
        if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
        if (pHVar13 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = System_String__Concat
                           (pSVar5,(pHVar13->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0)
        ;
        method = (MethodInfo *)0x0;
        __this_01 = Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN
                              (__this,pSVar5,(System_String_o *)0x0,0.8,0,in_x4);
        if (__this_01 == (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetAsFirstSibling(__this_02,(MethodInfo *)0x0);
      }
      else {
        pSVar6 = (pJVar12->fields).BGHFADDGPAD;
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1559,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1560,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        bVar2 = System_String__op_Inequality(pSVar6,pSVar5,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_03421d2c;
        local_64 = *(int32_t *)&pIVar1[2].klass;
        pSVar6 = (pJVar12->fields).super.APBICPEOMOM;
        pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN(__this,pSVar6,pSVar5,0.8,0,in_x4);
      }
      BFHPCEALPGF = BFHPCEALPGF + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<PIADCKMDDAK>_Dispose__);
  }
  bVar2 = BECIPDJBAOG__BODMFFONFKC(KJADEEFANAL,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1561,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1562,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    local_64 = (KJADEEFANAL->fields).EMOLIBOCKJK;
    pSVar6 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN(__this,pSVar5,pSVar6,0.45,0,in_x4);
    BFHPCEALPGF = BFHPCEALPGF + 1;
  }
  Nekki_SF2_GUI_Fight_RewardPanel__OPPKHGDPGDD(__this,BFHPCEALPGF,GHDKGJNBHCM,method);
  return;
}


// ===== private RewardPanelItem GKJKNKCEMPN(string HCAAAAMDCNO, string EHNFGMGKCHO, float PFIFJCMHGGB, int ABMDLEIKNBO = 0)  [RVA 0x33210DC]
// Nekki.SF2.GUI.Fight.RewardPanel$$GKJKNKCEMPN @ RVA 0x33210DC

Nekki_SF2_GUI_Fight_RewardPanelItem_o *
Nekki_SF2_GUI_Fight_RewardPanel__GKJKNKCEMPN
          (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,System_String_o *HCAAAAMDCNO,
          System_String_o *EHNFGMGKCHO,float PFIFJCMHGGB,int32_t ABMDLEIKNBO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_RewardPanelItem__o *__this_00;
  Nekki_SF2_GUI_Fight_RewardPanelItem_array *pNVar4;
  Nekki_SF2_GUI_Fight_RewardPanelItem_o *pNVar5;
  UnityEngine_RectTransform_o *pUVar6;
  
  if ((DAT_0456784b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<RewardPanelItem>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456784b = 1;
  }
  pNVar5 = (__this->fields)._RewardPanelItemPrefab;
  pUVar6 = (__this->fields)._Panel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar6 = (__this->fields)._Panel;
  }
  else {
    pUVar6 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar5,(UnityEngine_Transform_o *)pUVar6,false,
                      Method_UnityEngine_Object_Instantiate<RewardPanelItem>__);
  if (pNVar5 != (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) {
    Nekki_SF2_GUI_Fight_RewardPanelItem__Init
              (pNVar5,HCAAAAMDCNO,EHNFGMGKCHO,PFIFJCMHGGB,ABMDLEIKNBO,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<RewardPanelItem>_Add__;
    __this_00 = (__this->fields).MAHKJDKCNPC;
    if (__this_00 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
      pNVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar4 != (Nekki_SF2_GUI_Fight_RewardPanelItem_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = pNVar5;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return pNVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33220AC]
// Nekki.SF2.GUI.Fight.RewardPanel$$.ctor @ RVA 0x33220AC

void Nekki_SF2_GUI_Fight_RewardPanel___ctor
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RewardPanelItem__o *__this_00;
  System_Collections_Generic_List_RewardPanelItem__o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034220b4 to 03522153 has its CatchHandler @ 034220b4
                       catch() { ... } // from try @ 034220b4 with catch @ 034220b4
                       catch() { ... } // from try @ 03422180 with catch @ 034220b4
                       catch() { ... } // from try @ 034221b0 with catch @ 034220b4
                       catch() { ... } // from try @ 034221d8 with catch @ 034220b4
                       catch() { ... } // from try @ 03422218 with catch @ 034220b4 */
  if ((DAT_0456784c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<RewardPanelItem>_TypeInfo);
    DAT_0456784c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_RewardPanelItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RewardPanelItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RewardPanelItem>__ctor__);
  ppSVar1 = &(__this->fields).MAHKJDKCNPC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
                    /* try { // try from 03422154 to 0352215b has its CatchHandler @ 034221bc */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
  ppSVar2 = &(__this->fields).LHHEINBMMKE;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).OIPNKIIBMFE = -1;
                    /* try { // try from 0342217c to 0352217f has its CatchHandler @ 034221b8 */
                    /* try { // try from 03422180 to 035221a7 has its CatchHandler @ 034220b4 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void BBJFKDOCEGL(MGNDHCBAPEN<int, int> EBDBJJKINIM, bool LFKDFCGLHLC)  [RVA 0x3321260]
// Nekki.SF2.GUI.Fight.RewardPanel$$BBJFKDOCEGL @ RVA 0x3321260

void Nekki_SF2_GUI_Fight_RewardPanel__BBJFKDOCEGL
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MGNDHCBAPEN_int__int__o *EBDBJJKINIM,
               bool LFKDFCGLHLC,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_RewardPanelItem__o *pSVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  undefined8 uVar6;
  int index;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_0456784d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_7449/*"Inconsistent range vs rewards count. Rewards count: {0}, Range: [{1} - {2}]"*/);
    DAT_0456784d = 1;
  }
  if ((EBDBJJKINIM != (MGNDHCBAPEN_int__int__o *)0x0) &&
     (pSVar3 = (__this->fields).MAHKJDKCNPC,
     pSVar3 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0)) {
    index = (EBDBJJKINIM->fields).PHPELPFMOII;
    iVar2 = (pSVar3->fields)._size + -1;
    if ((iVar2 < index) || (iVar1 = (EBDBJJKINIM->fields).DOKHHBGJICA, iVar2 < iVar1)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
      pSVar3 = (__this->fields).MAHKJDKCNPC;
      if (pSVar3 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
        local_34 = (pSVar3->fields)._size;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
LAB_034214b0:
            uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(args->m_Items,pIVar4);
            local_38 = (EBDBJJKINIM->fields).PHPELPFMOII;
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_034214b0;
            if (1 < (uint)args->max_length) {
              args->m_Items[1] = pIVar4;
              thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
              local_3c = (EBDBJJKINIM->fields).DOKHHBGJICA;
              pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
              if ((pIVar4 != (Il2CppObject *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_034214b0;
              if (2 < (uint)args->max_length) {
                args->m_Items[2] = pIVar4;
                thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 0342143c to 035214cb has its CatchHandler @ 0342143c
                       catch() { ... } // from try @ 0342143c with catch @ 0342143c
                       catch() { ... } // from try @ 034214ec with catch @ 0342143c
                       catch() { ... } // from try @ 03421524 with catch @ 0342143c
                       catch() { ... } // from try @ 0342154c with catch @ 0342143c
                       catch() { ... } // from try @ 03421594 with catch @ 0342143c */
                UnityEngine_Debug__LogErrorFormat(StringLiteral_7449/*"Inconsistent range vs rewards count. Rewards count: {0}, Range: [{1} - {2}]"*/,args,(MethodInfo *)0x0);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
    else {
      if (iVar1 < index) {
        return;
      }
      do {
        __this_00 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               Method_System_Collections_Generic_List<RewardPanelItem>_get_Item__);
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) break;
        UnityEngine_GameObject__SetActive(__this_01,LFKDFCGLHLC,(MethodInfo *)0x0);
        index = index + 1;
        if ((EBDBJJKINIM->fields).DOKHHBGJICA < index) {
          return;
        }
        pSVar3 = (__this->fields).MAHKJDKCNPC;
      } while (pSVar3 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

