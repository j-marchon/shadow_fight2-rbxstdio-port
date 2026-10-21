// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$DCHMMGBLHKD @ RVA 0x315AB78

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__DCHMMGBLHKD
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_TweenCallback_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar7;
  System_Collections_Generic_List_Sequence__o *pSVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  DG_Tweening_Sequence_array *pDVar10;
  
                    /* try { // try from 0325ab7c to 0335ab7f has its CatchHandler @ 0325ab8c */
                    /* catch() { ... } // from try @ 0325a9f8 with catch @ 0325ab80
                       try { // try from 0325ab80 to 0335abeb has its CatchHandler @ 0325a5f4 */
                    /* catch() { ... } // from try @ 0325ab7c with catch @ 0325ab8c */
                    /* catch() { ... } // from try @ 0325a978 with catch @ 0325ab90 */
  if ((DAT_04566865 & 1) == 0) {
                    /* catch() { ... } // from try @ 0325ab74 with catch @ 0325ab94 */
                    /* catch() { ... } // from try @ 0325ab70 with catch @ 0325ab98 */
                    /* catch() { ... } // from try @ 0325a91c with catch @ 0325ab9c */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* catch() { ... } // from try @ 0325a854 with catch @ 0325aba0 */
                    /* catch() { ... } // from try @ 0325a7c0 with catch @ 0325aba8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
                    /* catch() { ... } // from try @ 0325a820 with catch @ 0325abac */
                    /* catch() { ... } // from try @ 0325a810 with catch @ 0325abb0 */
                    /* catch() { ... } // from try @ 0325a800 with catch @ 0325abb4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_EAHCPJLBHEJ__);
                    /* catch() { ... } // from try @ 0325a7f0 with catch @ 0325abb8 */
                    /* catch() { ... } // from try @ 0325ab40 with catch @ 0325abbc */
                    /* catch() { ... } // from try @ 0325ab3c with catch @ 0325abc0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_KBIJGELKHEE__);
                    /* catch() { ... } // from try @ 0325a7e0 with catch @ 0325abc4 */
                    /* catch() { ... } // from try @ 0325a7c4 with catch @ 0325abc8 */
                    /* catch() { ... } // from try @ 0325a7d8 with catch @ 0325abcc */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
                    /* catch() { ... } // from try @ 0325ab38 with catch @ 0325abd0 */
                    /* catch() { ... } // from try @ 0325a798 with catch @ 0325abd4 */
    DAT_04566865 = 1;
  }
  pNVar3 = (__this->fields)._danImage;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 0325abec to 0335abef has its CatchHandler @ 0325ac18 */
                    /* try { // try from 0325abf0 to 0335ac27 has its CatchHandler @ 0325a5f4 */
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(pUVar4,0.3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0325abec with catch @ 0325ac18 */
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                    /* try { // try from 0325ac28 to 0335ac2f has its CatchHandler @ 0325ac44 */
                    /* try { // try from 0325ac30 to 0335ac3b has its CatchHandler @ 0325a5f4 */
    DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar5,0.55,(MethodInfo *)0x0);
                    /* try { // try from 0325ac3c to 0335ac43 has its CatchHandler @ 0325ac44 */
    pDVar6 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* catch() { ... } // from try @ 0325ab58 with catch @ 0325ac44
                       catch() { ... } // from try @ 0325ac28 with catch @ 0325ac44
                       catch() { ... } // from try @ 0325ac3c with catch @ 0325ac44 */
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar5,pDVar6,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._danImage;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      pDVar7 = DG_Tweening_ShortcutExtensions__DOScale(pUVar4,0.6,1.22,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar5,(DG_Tweening_Tween_o *)pDVar7,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
      pSVar8 = (__this->fields).super.HHEDCPBLJHD;
      if (pSVar8 != (System_Collections_Generic_List_Sequence__o *)0x0) {
        pDVar10 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pDVar10 != (DG_Tweening_Sequence_array *)0x0) {
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pDVar10->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pDVar10->m_Items[(int)uVar1] = pDVar5;
            thunk_FUN_01c20e04(pDVar10->m_Items + (int)uVar1,pDVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pDVar5,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pNVar9 = (__this->fields)._danNumber;
          if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalScale(pUVar4,0.001,(MethodInfo *)0x0);
            pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__AppendInterval(pDVar5,1.35,(MethodInfo *)0x0);
            pDVar6 = (DG_Tweening_TweenCallback_o *)
                     thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
            DG_Tweening_TweenCallback___ctor();
            DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar5,pDVar6,(MethodInfo *)0x0);
            pNVar9 = (__this->fields)._danNumber;
            if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
              pDVar7 = DG_Tweening_ShortcutExtensions__DOScale(pUVar4,1.0,0.1,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__Append
                        (pDVar5,(DG_Tweening_Tween_o *)pDVar7,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
              pSVar8 = (__this->fields).super.HHEDCPBLJHD;
              if (pSVar8 != (System_Collections_Generic_List_Sequence__o *)0x0) {
                pDVar10 = (pSVar8->fields)._items;
                (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                if (pDVar10 != (DG_Tweening_Sequence_array *)0x0) {
                  uVar1 = (pSVar8->fields)._size;
                  if (uVar1 < (uint)pDVar10->max_length) {
                    (pSVar8->fields)._size = uVar1 + 1;
                    pDVar10->m_Items[(int)uVar1] = pDVar5;
                    thunk_FUN_01c20e04(pDVar10->m_Items + (int)uVar1,pDVar5);
                    return;
                  }
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar8,
                             (Il2CppObject *)pDVar5,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  return;
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

