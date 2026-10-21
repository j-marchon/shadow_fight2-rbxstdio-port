// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$OIHPDGOBHEM @ RVA 0x3047FCC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__OIHPDGOBHEM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar6;
  System_Collections_Generic_List_Sequence__o *__this_00;
  DG_Tweening_Sequence_array *pDVar7;
  
  if ((DAT_04565df6 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&StringLiteral_12922);
    FUN_01bab630(&StringLiteral_10856);
    DAT_04565df6 = 1;
  }
  pNVar4 = (__this->fields)._bottomStar2;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,StringLiteral_10856,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._bottomStar2;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      uVar3 = StringLiteral_12922._4_4_;
      (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_12922;
      (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar3;
      thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
      pNVar4 = (__this->fields)._bottomStar2;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(pUVar5,1.0,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._bottomStar2;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalRotationZ(pUVar5,22.5,(MethodInfo *)0x0);
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pNVar4 = (__this->fields)._bottomStar2;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
            pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar5,0.5,1.0,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__Append
                      (s,(DG_Tweening_Tween_o *)pDVar6,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.1,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._bottomStar2;
            if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
              pDVar6 = DG_Tweening_ShortcutExtensions__DOScale(pUVar5,1.0,1.0,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__Append
                        (s,(DG_Tweening_Tween_o *)pDVar6,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.1,(MethodInfo *)0x0);
              DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                        ((Il2CppObject *)s,-1,0,
                         Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
              lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
              __this_00 = (__this->fields).super.HHEDCPBLJHD;
              if (__this_00 != (System_Collections_Generic_List_Sequence__o *)0x0) {
                pDVar7 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pDVar7 != (DG_Tweening_Sequence_array *)0x0) {
                  uVar1 = (__this_00->fields)._size;
                  if (uVar1 < (uint)pDVar7->max_length) {
                    (__this_00->fields)._size = uVar1 + 1;
                    pDVar7->m_Items[(int)uVar1] = s;
                    thunk_FUN_01c20e04(pDVar7->m_Items + (int)uVar1,s);
                    return;
                  }
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)s,
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

