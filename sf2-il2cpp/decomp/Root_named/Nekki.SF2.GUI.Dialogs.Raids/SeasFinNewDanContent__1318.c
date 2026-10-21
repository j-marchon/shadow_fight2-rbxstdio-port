// TypeDefIndex 1318
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinNewDanContent : SeasFinBaseContent
// Fields:
//   private LabelAlias _newDanHeader; // 0x40
//   private ResolutionImage _danImage; // 0x48
//   private LabelAlias _danNumber; // 0x50
//   private CocosAnimation _animationBottomEffect; // 0x58
//   private CocosAnimation _animationTopEffect; // 0x60
//   private CocosAnimation _animationCycleEffect; // 0x68

// ===== private void HJGPHOABPFO()  [RVA 0x315A714]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$HJGPHOABPFO @ RVA 0x315A714

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__HJGPHOABPFO
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._animationBottomEffect;
  if ((__this_00 != (CocosAnimation_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(int LDIJJJNLEII)  [RVA 0x315A740]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$Init @ RVA 0x315A740

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,int32_t LDIJJJNLEII,
               MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  BHEDGAKGKPO_StaticFields *pBVar6;
  int32_t local_24;
  
  local_24 = LDIJJJNLEII;
  if ((DAT_04566863 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_10887/*"RaidLeaderboard.danBgNew"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
                    /* try { // try from 0325a798 to 0335a79f has its CatchHandler @ 0325abd4 */
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_9408/*"NewDan"*/);
    DAT_04566863 = 1;
  }
                    /* try { // try from 0325a7c0 to 0335a7c3 has its CatchHandler @ 0325aba8 */
                    /* try { // try from 0325a7c4 to 0335a7cb has its CatchHandler @ 0325abc8 */
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,1,StringLiteral_9679/*"OK"*/,
             false,1,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
                    /* try { // try from 0325a7d8 to 0335a7df has its CatchHandler @ 0325abcc */
  pCVar1 = (__this->fields)._animationCycleEffect;
                    /* try { // try from 0325a7e0 to 0335a7e7 has its CatchHandler @ 0325abc4 */
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0325a7f0 to 0335a7f7 has its CatchHandler @ 0325abb8 */
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationBottomEffect;
                    /* try { // try from 0325a800 to 0335a80b has its CatchHandler @ 0325abb4 */
    if ((pCVar1 != (CocosAnimation_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0325a810 to 0335a81b has its CatchHandler @ 0325abb0 */
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._animationTopEffect;
                    /* try { // try from 0325a820 to 0335a82b has its CatchHandler @ 0325abac */
      if ((pCVar1 != (CocosAnimation_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._danImage;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,StringLiteral_10887/*"RaidLeaderboard.danBgNew"*/,(MethodInfo *)0x0);
                    /* try { // try from 0325a854 to 0335a85f has its CatchHandler @ 0325aba0 */
          pNVar3 = (__this->fields)._danImage;
          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 0325a874 to 0335a87b has its CatchHandler @ 0325a9d4 */
            pNVar4 = (__this->fields)._newDanHeader;
            if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,StringLiteral_9408/*"NewDan"*/,(MethodInfo *)0x0);
                    /* try { // try from 0325a898 to 0335a89f has its CatchHandler @ 0325a9cc */
              pNVar4 = (__this->fields)._newDanHeader;
              if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 0325a8b8 to 0335a903 has its CatchHandler @ 0325a9d8 */
                (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                          ((pBVar6->ODGAJIBDACC).fields.r,(pBVar6->ODGAJIBDACC).fields.g,
                           (pBVar6->ODGAJIBDACC).fields.b,(pBVar6->ODGAJIBDACC).fields.a,pNVar4,
                           (pNVar4->klass->vtable)._23_set_color.method);
                pNVar4 = (__this->fields)._danNumber;
                pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                            (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
                  pNVar4 = (__this->fields)._danNumber;
                  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 0325a91c to 0335a927 has its CatchHandler @ 0325ab9c */
                    (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                              ((pBVar6->FHIAKPJBBCB).fields.r,(pBVar6->FHIAKPJBBCB).fields.g,
                               (pBVar6->FHIAKPJBBCB).fields.b,(pBVar6->FHIAKPJBBCB).fields.a,pNVar4,
                               (pNVar4->klass->vtable)._23_set_color.method);
                    pNVar4 = (__this->fields)._danNumber;
                    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                       (pUVar2 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__HFPABPLHLPF
                                (__this,method_00);
                      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__DCHMMGBLHKD
                                (__this,method_01);
                      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__DPDOFBODHNH
                                (__this,method_02);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DPDOFBODHNH()  [RVA 0x315AE2C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$DPDOFBODHNH @ RVA 0x315AE2C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__DPDOFBODHNH
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  CocosAnimation_o *pCVar3;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_TweenCallback_o *callback;
  System_Collections_Generic_List_Sequence__o *__this_00;
  DG_Tweening_Sequence_array *pDVar4;
  
  if ((DAT_04566864 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_GLGJNACDPEM__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&StringLiteral_12925/*"Textures/Sequences/RaidEffectNewShowTop"*/);
    DAT_04566864 = 1;
  }
  pCVar3 = (__this->fields)._animationTopEffect;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    (pCVar3->fields)._autoSize = false;
    CocosAnimation__Init(pCVar3,StringLiteral_12925/*"Textures/Sequences/RaidEffectNewShowTop"*/,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    pCVar3 = (__this->fields)._animationTopEffect;
    if (pCVar3 != (CocosAnimation_o *)0x0) {
      (pCVar3->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.04;
      (pCVar3->fields)._NOAJIBNJKPE_k__BackingField = false;
      CocosAnimation__SetFirstFrame(pCVar3,(MethodInfo *)0x0);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.27,(MethodInfo *)0x0);
      callback = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(s,callback,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.27,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
      __this_00 = (__this->fields).super.HHEDCPBLJHD;
      if (__this_00 != (System_Collections_Generic_List_Sequence__o *)0x0) {
        pDVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pDVar4 != (DG_Tweening_Sequence_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pDVar4->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pDVar4->m_Items[(int)uVar1] = s;
            thunk_FUN_01c20e04(pDVar4->m_Items + (int)uVar1,s);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)s,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x315AFEC]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$.ctor @ RVA 0x315AFEC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void DCHMMGBLHKD()  [RVA 0x315AB78]
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


// ===== private void HFPABPLHLPF()  [RVA 0x315A974]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$HFPABPLHLPF @ RVA 0x315A974

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__HFPABPLHLPF
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  CocosAnimation_o *pCVar3;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_TweenCallback_o *pDVar4;
  System_Collections_Generic_List_Sequence__o *__this_01;
  DG_Tweening_Sequence_array *pDVar5;
  
                    /* try { // try from 0325a978 to 0335a99b has its CatchHandler @ 0325ab90 */
  if ((DAT_04566866 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
                    /* try { // try from 0325a9ac to 0335a9c7 has its CatchHandler @ 0325a9d0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_HJGPHOABPFO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_NBKPEBGCFJL__);
                    /* try { // try from 0325a9c8 to 0335a9f7 has its CatchHandler @ 0325a5f4 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
                    /* catch() { ... } // from try @ 0325a898 with catch @ 0325a9cc */
                    /* catch() { ... } // from try @ 0325a9ac with catch @ 0325a9d0 */
                    /* catch() { ... } // from try @ 0325a874 with catch @ 0325a9d4 */
    FUN_01bab630(&StringLiteral_12924/*"Textures/Sequences/RaidEffectNewShowBottom"*/);
                    /* catch() { ... } // from try @ 0325a8b8 with catch @ 0325a9d8 */
    DAT_04566866 = 1;
  }
  pCVar3 = (__this->fields)._animationBottomEffect;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    (pCVar3->fields)._autoSize = false;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0325a9f8 to 0335a9fb has its CatchHandler @ 0325ab80 */
                    /* try { // try from 0325a9fc to 0335ab37 has its CatchHandler @ 0325a5f4 */
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields)._animationBottomEffect;
      if (pCVar3 != (CocosAnimation_o *)0x0) {
        CocosAnimation__Init(pCVar3,StringLiteral_12924/*"Textures/Sequences/RaidEffectNewShowBottom"*/,0,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._animationBottomEffect;
        if (pCVar3 != (CocosAnimation_o *)0x0) {
          (pCVar3->fields)._FEBBHCOAEMI_k__BackingField = 1;
          (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.04;
          (pCVar3->fields)._NOAJIBNJKPE_k__BackingField = true;
          CocosAnimation__SetFirstFrame(pCVar3,(MethodInfo *)0x0);
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.675,(MethodInfo *)0x0);
          pDVar4 = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar4,(MethodInfo *)0x0);
          pDVar4 = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar4,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
          __this_01 = (__this->fields).super.HHEDCPBLJHD;
          if (__this_01 != (System_Collections_Generic_List_Sequence__o *)0x0) {
            pDVar5 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pDVar5 != (DG_Tweening_Sequence_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pDVar5->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                    /* try { // try from 0325ab38 to 0335ab3b has its CatchHandler @ 0325abd0 */
                pDVar5->m_Items[(int)uVar1] = s;
                    /* try { // try from 0325ab3c to 0335ab3f has its CatchHandler @ 0325abc0 */
                    /* try { // try from 0325ab40 to 0335ab43 has its CatchHandler @ 0325abbc */
                    /* try { // try from 0325ab44 to 0335ab57 has its CatchHandler @ 0325a5f4 */
                thunk_FUN_01c20e04(pDVar5->m_Items + (int)uVar1,s);
                return;
              }
                    /* try { // try from 0325ab58 to 0335ab6f has its CatchHandler @ 0325ac44 */
                    /* try { // try from 0325ab70 to 0335ab73 has its CatchHandler @ 0325ab98 */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)s,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0325ab74 to 0335ab7b has its CatchHandler @ 0325ab94 */
  FUN_01bab8c8();
}


// ===== private void KBIJGELKHEE()  [RVA 0x315AFF4]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$KBIJGELKHEE @ RVA 0x315AFF4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__KBIJGELKHEE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._danNumber;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EAHCPJLBHEJ()  [RVA 0x315B020]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$EAHCPJLBHEJ @ RVA 0x315B020

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__EAHCPJLBHEJ
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._danImage;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NBKPEBGCFJL()  [RVA 0x315B04C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$NBKPEBGCFJL @ RVA 0x315B04C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__NBKPEBGCFJL
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04566867 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12923/*"Textures/Sequences/RaidEffectNewDanCycle"*/);
    DAT_04566867 = 1;
  }
  pCVar1 = (__this->fields)._animationCycleEffect;
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationCycleEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._autoSize = false;
      CocosAnimation__Init(pCVar1,StringLiteral_12923/*"Textures/Sequences/RaidEffectNewDanCycle"*/,0,(System_String_o *)0x0,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._animationCycleEffect;
      if (pCVar1 != (CocosAnimation_o *)0x0) {
        (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 0x7ffffffd;
        (pCVar1->fields)._PPEGDOHGLJJ_k__BackingField = 0.04;
        (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
        CocosAnimation__SetFirstFrame(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GLGJNACDPEM()  [RVA 0x315B0F8]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$GLGJNACDPEM @ RVA 0x315B0F8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__GLGJNACDPEM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pCVar1 = (__this->fields)._animationTopEffect;
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationTopEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x315B144]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$OnDestroy @ RVA 0x315B144

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

