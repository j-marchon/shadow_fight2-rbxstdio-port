// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$MLPCOKOBCLM @ RVA 0x30481F4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__MLPCOKOBCLM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  System_Collections_Generic_List_Sequence__o *__this_00;
  DG_Tweening_Sequence_array *pDVar5;
  
  if ((DAT_04565df7 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_GNOGHFKDPEO__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04565df7 = 1;
  }
  pNVar3 = (__this->fields)._picChest;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(pUVar4,0.01,(MethodInfo *)0x0);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    pNVar3 = (__this->fields)._picChest;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOScale(pUVar4,0.75,0.305,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append(s,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
      callback = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(s,callback,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Sequence>_Add__;
      __this_00 = (__this->fields).super.HHEDCPBLJHD;
      if (__this_00 != (System_Collections_Generic_List_Sequence__o *)0x0) {
        pDVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pDVar5 != (DG_Tweening_Sequence_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pDVar5->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pDVar5->m_Items[(int)uVar1] = s;
            thunk_FUN_01c20e04(pDVar5->m_Items + (int)uVar1,s);
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

