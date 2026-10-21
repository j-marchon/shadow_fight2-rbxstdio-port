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
    FUN_01bab630(&StringLiteral_12925);
    DAT_04566864 = 1;
  }
  pCVar3 = (__this->fields)._animationTopEffect;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    (pCVar3->fields)._autoSize = false;
    CocosAnimation__Init(pCVar3,StringLiteral_12925,0,(System_String_o *)0x0,(MethodInfo *)0x0);
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

