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
    FUN_01bab630(&StringLiteral_12924);
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
        CocosAnimation__Init(pCVar3,StringLiteral_12924,0,(System_String_o *)0x0,(MethodInfo *)0x0);
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

