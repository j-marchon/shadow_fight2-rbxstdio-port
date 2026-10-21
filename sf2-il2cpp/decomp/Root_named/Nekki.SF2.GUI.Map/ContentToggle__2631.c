// TypeDefIndex 2631
// Namespace: Nekki.SF2.GUI.Map
// public abstract class ContentToggle : ContentBase
// Fields:
//   public Button TogglePanel; // 0x28
//   protected int FDGAGAEIAOO; // 0x30
//   protected List<KCEKMOECEJK> MAPPKOGKCBA; // 0x38
//   private Sequence BPOLHFBDIMK; // 0x40
//   private KCEKMOECEJK BBODGCMLKFP; // 0x48
//   private KCEKMOECEJK BPPDIBOOOLP; // 0x50

// ===== private void HINHHFAOHAN(float CJNHFNHJHPE)  [RVA 0x33B2560]
// Nekki.SF2.GUI.Map.ContentToggle$$HINHHFAOHAN @ RVA 0x33B2560

void Nekki_SF2_GUI_Map_ContentToggle__HINHHFAOHAN
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCEKMOECEJK_o *pKVar6;
  undefined4 in_register_00005004;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
                    /* try { // try from 034b257c to 035b2583 has its CatchHandler @ 034b264c */
  if ((DAT_04567d52 & 1) == 0) {
    auVar7 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d52 = 1;
  }
  pKVar6 = (__this->fields).BPPDIBOOOLP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
                    /* try { // try from 034b25a8 to 035b25bf has its CatchHandler @ 034b2648 */
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
                    /* try { // try from 034b25e8 to 035b2617 has its CatchHandler @ 034b2184 */
        pVVar2 = pKVar3->vtable + (*piVar5 + 1);
        goto LAB_034b25f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 034b25d8 to 035b25e7 has its CatchHandler @ 034b2630 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,1);
LAB_034b25f4:
                    /* WARNING: Could not recover jumptable at 0x034b260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(CONCAT44(in_register_00005004,CJNHFNHJHPE),pKVar6,pVVar2->method);
  return;
}


// ===== protected void .ctor()  [RVA 0x33B2614]
// Nekki.SF2.GUI.Map.ContentToggle$$.ctor @ RVA 0x33B2614

void Nekki_SF2_GUI_Map_ContentToggle___ctor
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_KCEKMOECEJK__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034b2618 to 035b261b has its CatchHandler @ 034b2644 */
                    /* try { // try from 034b261c to 035b261f has its CatchHandler @ 034b2640 */
                    /* try { // try from 034b2620 to 035b2623 has its CatchHandler @ 034b263c */
                    /* try { // try from 034b2624 to 035b2627 has its CatchHandler @ 034b2184 */
                    /* try { // try from 034b2628 to 035b262b has its CatchHandler @ 034b2638 */
                    /* try { // try from 034b262c to 035b262f has its CatchHandler @ 034b2634 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b25d8 with catch @ 034b2630
                       try { // try from 034b2630 to 035b2663 has its CatchHandler @ 034b2184 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b262c with catch @ 034b2634
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b2628 with catch @ 034b2638
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b2620 with catch @ 034b263c
                        */
  if ((DAT_04567d53 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b261c with catch @ 034b2640
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b2618 with catch @ 034b2644
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b25a8 with catch @ 034b2648
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b257c with catch @ 034b264c
                        */
    FUN_01bab630(&System_Collections_Generic_List<KCEKMOECEJK>_TypeInfo);
    DAT_04567d53 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b2664 to 035b2667 has its CatchHandler @ 034b2688 */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KCEKMOECEJK>_TypeInfo,method);
                    /* try { // try from 034b2668 to 035b268f has its CatchHandler @ 034b2184 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<KCEKMOECEJK>__ctor__);
  ppSVar1 = &(__this->fields).MAPPKOGKCBA;
  *ppSVar1 = (System_Collections_Generic_List_KCEKMOECEJK__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* catch() { ... } // from try @ 034b2664 with catch @ 034b2688 */
                    /* try { // try from 034b2690 to 035b2697 has its CatchHandler @ 034b26ac */
                    /* try { // try from 034b2698 to 035b26a3 has its CatchHandler @ 034b2184 */
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private float CJEDDOINFEI()  [RVA 0x33B269C]
// Nekki.SF2.GUI.Map.ContentToggle$$CJEDDOINFEI @ RVA 0x33B269C

float Nekki_SF2_GUI_Map_ContentToggle__CJEDDOINFEI
                (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCEKMOECEJK_o *pKVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
                    /* try { // try from 034b26a4 to 035b26ab has its CatchHandler @ 034b26ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034b2690 with catch @ 034b26ac
                       catch(type#2 @ 00000000) { ... } // from try @ 034b26a4 with catch @ 034b26ac
                        */
                    /* try { // try from 034b26b0 to 035b2b7b has its CatchHandler @ 034b26b0
                       catch() { ... } // from try @ 034b26b0 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b32e8 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b43a4 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4408 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4638 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4670 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b467c with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4b74 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4c1c with catch @ 034b26b0 */
  if ((DAT_04567d54 & 1) == 0) {
    auVar8 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d54 = 1;
  }
  pKVar6 = (__this->fields).BBODGCMLKFP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
        pVVar2 = pKVar3->vtable + *piVar5;
        goto LAB_034b2724;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,0);
LAB_034b2724:
                    /* WARNING: Could not recover jumptable at 0x034b2734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar7 = (float)(*pVVar2->methodPtr)(pKVar6,pVVar2->method);
  return fVar7;
}


// ===== protected void CCPABLFBFFA()  [RVA 0x33B273C]
// Nekki.SF2.GUI.Map.ContentToggle$$CCPABLFBFFA @ RVA 0x33B273C

void Nekki_SF2_GUI_Map_ContentToggle__CCPABLFBFFA
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  undefined8 uVar1;
  UnityEngine_UI_Button_o *pUVar2;
  DG_Tweening_Sequence_o **ppDVar3;
  undefined1 auVar4 [16];
  
  ppDVar3 = &(__this->fields).BPOLHFBDIMK;
  uVar1 = 0;
  if (*ppDVar3 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar3,false,(MethodInfo *)0x0);
    *ppDVar3 = (DG_Tweening_Sequence_o *)0x0;
    auVar4 = thunk_FUN_01c20e04(ppDVar3,0);
    method = auVar4._8_8_;
    uVar1 = auVar4._0_8_;
  }
  pUVar2 = (__this->fields).TogglePanel;
  if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_00 = (pUVar2->fields).m_OnClick, uVar1 = 0,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar1,method);
}


// ===== protected void JDPMKEABGPA()  [RVA 0x33B2794]
// Nekki.SF2.GUI.Map.ContentToggle$$JDPMKEABGPA @ RVA 0x33B2794

void Nekki_SF2_GUI_Map_ContentToggle__JDPMKEABGPA
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  bool bVar1;
  KCEKMOECEJK_o **ppKVar2;
  UnityEngine_Events_UnityAction_o *call;
  DG_Tweening_Sequence_o *pDVar3;
  System_Collections_Generic_List_object__o *__this_00;
  DG_Tweening_Core_DOGetter_float__o *DPFAFGCKEJH;
  DG_Tweening_Core_DOSetter_float__o *ABLMELPONIJ;
  DG_Tweening_Core_DOGetter_float__o *AHKPHMEGKPH;
  DG_Tweening_Core_DOSetter_float__o *EBDJIEAJIGK;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  UnityEngine_UI_Button_o *pUVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  DG_Tweening_Sequence_o **ppDVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  
  if ((DAT_04567d55 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_CJEDDOINFEI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_FDOLPOJBFHG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_HINHHFAOHAN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_PBMELDDANJH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_PKMGPAANLGD__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_GetEnumerator__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567d55 = 1;
    method = extraout_x1;
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Map_ContentToggle__CCPABLFBFFA(__this,method);
  ppKVar2 = &(__this->fields).BBODGCMLKFP;
  *ppKVar2 = (KCEKMOECEJK_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  ppKVar2 = &(__this->fields).BPPDIBOOOLP;
  *ppKVar2 = (KCEKMOECEJK_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  pUVar4 = (__this->fields).TogglePanel;
  if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar5 = &(__this->fields).BPOLHFBDIMK;
      *ppDVar5 = pDVar3;
      thunk_FUN_01c20e04(ppDVar5,pDVar3);
      Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF(__this,method_00);
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,__this_00,
                   Method_System_Collections_Generic_List<KCEKMOECEJK>_GetEnumerator__);
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_78,
                                  Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_MoveNext__
                                 ), bVar1) {
          pDVar3 = *ppDVar5;
          DPFAFGCKEJH = (DG_Tweening_Core_DOGetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          ABLMELPONIJ = (DG_Tweening_Core_DOSetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          AHKPHMEGKPH = (DG_Tweening_Core_DOGetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          EBDJIEAJIGK = (DG_Tweening_Core_DOSetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          Nekki_SF2_GUI_Map_ContentToggle__JOICELFGBLC
                    (__this,pDVar3,DPFAFGCKEJH,ABLMELPONIJ,AHKPHMEGKPH,EBDJIEAJIGK,in_x6);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_78,
                   Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_Dispose__);
        DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                  ((Il2CppObject *)*ppDVar5,-1,0,
                   Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
        DG_Tweening_TweenExtensions__Restart
                  ((DG_Tweening_Tween_o *)*ppDVar5,true,-1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KOHGFFDLHFM()  [RVA 0x33B2EFC]
// Nekki.SF2.GUI.Map.ContentToggle$$KOHGFFDLHFM @ RVA 0x33B2EFC

void Nekki_SF2_GUI_Map_ContentToggle__KOHGFFDLHFM
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_KCEKMOECEJK__o *pSVar2;
  
                    /* try { // try from 034b2efc to 035b2f03 has its CatchHandler @ 034b49dc */
  if ((DAT_04567d59 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Count__);
    DAT_04567d59 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).MAPPKOGKCBA;
  iVar1 = (__this->fields).FDGAGAEIAOO + 1;
  (__this->fields).FDGAGAEIAOO = iVar1;
  if (pSVar2 != (System_Collections_Generic_List_KCEKMOECEJK__o *)0x0) {
    if ((pSVar2->fields)._size <= iVar1) {
      (__this->fields).FDGAGAEIAOO = 0;
    }
    Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PKMGPAANLGD(float CJNHFNHJHPE)  [RVA 0x33B2F64]
// Nekki.SF2.GUI.Map.ContentToggle$$PKMGPAANLGD @ RVA 0x33B2F64

void Nekki_SF2_GUI_Map_ContentToggle__PKMGPAANLGD
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCEKMOECEJK_o *pKVar6;
  undefined4 in_register_00005004;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
                    /* try { // try from 034b2f68 to 035b2f6f has its CatchHandler @ 034b49cc */
                    /* try { // try from 034b2f78 to 035b2f7f has its CatchHandler @ 034b4974 */
                    /* try { // try from 034b2f80 to 035b2f9b has its CatchHandler @ 034b4a68 */
  if ((DAT_04567d56 & 1) == 0) {
    auVar7 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d56 = 1;
  }
  pKVar6 = (__this->fields).BBODGCMLKFP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
                    /* try { // try from 034b2fa8 to 035b2faf has its CatchHandler @ 034b49d8 */
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 034b2fc0 to 035b2fc7 has its CatchHandler @ 034b4970 */
                    /* try { // try from 034b2fc8 to 035b2fe3 has its CatchHandler @ 034b4a70 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 1);
        goto LAB_034b2ff8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,1);
LAB_034b2ff8:
                    /* WARNING: Could not recover jumptable at 0x034b3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(CONCAT44(in_register_00005004,CJNHFNHJHPE),pKVar6,pVVar2->method);
  return;
}


// ===== private float PBMELDDANJH()  [RVA 0x33B3018]
// Nekki.SF2.GUI.Map.ContentToggle$$PBMELDDANJH @ RVA 0x33B3018

float Nekki_SF2_GUI_Map_ContentToggle__PBMELDDANJH
                (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCEKMOECEJK_o *pKVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04567d57 & 1) == 0) {
                    /* try { // try from 034b3034 to 035b303f has its CatchHandler @ 034b4944 */
    auVar8 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d57 = 1;
  }
  pKVar6 = (__this->fields).BPPDIBOOOLP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
                    /* try { // try from 034b3050 to 035b305b has its CatchHandler @ 034b4948 */
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 034b306c to 035b307b has its CatchHandler @ 034b49fc */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
                    /* try { // try from 034b3098 to 035b309f has its CatchHandler @ 034b4714 */
        pVVar2 = pKVar3->vtable + *piVar5;
        goto LAB_034b30a0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 034b3088 to 035b308f has its CatchHandler @ 034b46b4 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,0);
LAB_034b30a0:
                    /* try { // try from 034b30a0 to 035b30bf has its CatchHandler @ 034b4958 */
                    /* WARNING: Could not recover jumptable at 0x034b30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar7 = (float)(*pVVar2->methodPtr)(pKVar6,pVVar2->method);
  return fVar7;
}


// ===== protected void GGCAOINEJOF()  [RVA 0x33B2B10]
// Nekki.SF2.GUI.Map.ContentToggle$$GGCAOINEJOF @ RVA 0x33B2B10

void Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  int index;
  int32_t index_00;
  int iVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Action_KCEKMOECEJK__o **ppSVar5;
  VirtualInvokeData *pVVar6;
  KCEKMOECEJK_c *pKVar7;
  ulong uVar8;
  int32_t *piVar9;
  KCEKMOECEJK_o **ppKVar10;
  KCEKMOECEJK_o *pKVar11;
  KCEKMOECEJK_o **ppKVar12;
  System_Action_KCEKMOECEJK__o *action;
  
  if ((DAT_04567d58 & 1) == 0) {
    FUN_01bab630(&System_Action<KCEKMOECEJK>_TypeInfo);
    FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_<>c_FCFHJBGPAHO__);
                    /* try { // try from 034b2b7c to 035b2ba3 has its CatchHandler @ 034b4b78 */
    FUN_01bab630(&Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo);
    DAT_04567d58 = 1;
  }
  pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
  if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
    index_00 = (__this->fields).FDGAGAEIAOO;
    iVar1 = (pSVar3->fields)._size;
    pIVar4 = System_Collections_Generic_List<object>__get_Item
                       (pSVar3,index_00,
                        Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Item__);
    ppKVar10 = &(__this->fields).BBODGCMLKFP;
    *ppKVar10 = (KCEKMOECEJK_o *)pIVar4;
    thunk_FUN_01c20e04(ppKVar10,pIVar4);
    pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 034b2bd8 to 035b2c03 has its CatchHandler @ 034b4b74 */
      index = index_00 + 1;
      if (iVar1 <= index) {
        index = 0;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         (pSVar3,index,
                          Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Item__);
      ppKVar12 = &(__this->fields).BPPDIBOOOLP;
      *ppKVar12 = (KCEKMOECEJK_o *)pIVar4;
      thunk_FUN_01c20e04(ppKVar12,pIVar4);
      pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
      if ((Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->static_fields->__9__12_0;
      if (action == (System_Action_KCEKMOECEJK__o *)0x0) {
        if ((Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034b2c38 to 035b2c43 has its CatchHandler @ 034b4a9c */
        action = (System_Action_KCEKMOECEJK__o *)
                 thunk_FUN_01bda818(System_Action<KCEKMOECEJK>_TypeInfo);
                    /* try { // try from 034b2c54 to 035b2c5b has its CatchHandler @ 034b4a90 */
        System_Action<object>___ctor();
                    /* try { // try from 034b2c64 to 035b2c6b has its CatchHandler @ 034b4a74 */
        ppSVar5 = &Nekki_SF2_GUI_Map_ContentToggle_<>c_TypeInfo->static_fields->__9__12_0;
        *ppSVar5 = action;
        thunk_FUN_01c20e04(ppSVar5,action);
      }
      if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 034b2c7c to 035b2c8b has its CatchHandler @ 034b4a7c */
        System_Collections_Generic_List<object>__ForEach
                  (pSVar3,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<KCEKMOECEJK>_ForEach__);
        pKVar11 = *ppKVar10;
        if (pKVar11 != (KCEKMOECEJK_o *)0x0) {
                    /* try { // try from 034b2c98 to 035b2c9f has its CatchHandler @ 034b49ec */
          pKVar7 = pKVar11->klass;
          uVar2._0_1_ = (pKVar7->_2).rank;
          uVar2._1_1_ = (pKVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
                    /* try { // try from 034b2ca8 to 035b2caf has its CatchHandler @ 034b49a8 */
          if (uVar8 != 0) {
                    /* try { // try from 034b2cb0 to 035b2ccf has its CatchHandler @ 034b4a80 */
            piVar9 = &((pKVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
                    /* try { // try from 034b2cec to 035b2cf3 has its CatchHandler @ 034b497c */
                pVVar6 = pKVar7->vtable + (*piVar9 + 1);
                goto LAB_034b2cf0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pKVar11,KCEKMOECEJK_TypeInfo,1);
                    /* try { // try from 034b2cdc to 035b2ce3 has its CatchHandler @ 034b49f8 */
LAB_034b2cf0:
                    /* try { // try from 034b2cf4 to 035b2d13 has its CatchHandler @ 034b4a78 */
                    /* WARNING: Could not recover jumptable at 0x034b2d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar6->methodPtr)(0x3f800000,pKVar11,pVVar6->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void ELNCBEDOJED()  [RVA 0x33B30B8]
// Nekki.SF2.GUI.Map.ContentToggle$$ELNCBEDOJED @ RVA 0x33B30B8

void Nekki_SF2_GUI_Map_ContentToggle__ELNCBEDOJED
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void FGPJLJDMNEA()  [RVA 0x33B2F00]
// Nekki.SF2.GUI.Map.ContentToggle$$FGPJLJDMNEA @ RVA 0x33B2F00

void Nekki_SF2_GUI_Map_ContentToggle__FGPJLJDMNEA
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_KCEKMOECEJK__o *pSVar2;
  
                    /* try { // try from 034b2f04 to 035b2f1f has its CatchHandler @ 034b4a64 */
  if ((DAT_04567d59 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Count__);
    DAT_04567d59 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b2f2c to 035b2f33 has its CatchHandler @ 034b4968 */
  pSVar2 = (__this->fields).MAPPKOGKCBA;
  iVar1 = (__this->fields).FDGAGAEIAOO + 1;
  (__this->fields).FDGAGAEIAOO = iVar1;
  if (pSVar2 != (System_Collections_Generic_List_KCEKMOECEJK__o *)0x0) {
                    /* try { // try from 034b2f44 to 035b2f4b has its CatchHandler @ 034b4964 */
    if ((pSVar2->fields)._size <= iVar1) {
                    /* try { // try from 034b2f4c to 035b2f57 has its CatchHandler @ 034b4960 */
      (__this->fields).FDGAGAEIAOO = 0;
    }
    Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OnDestroy()  [RVA 0x33B30BC]
// Nekki.SF2.GUI.Map.ContentToggle$$OnDestroy @ RVA 0x33B30BC

void Nekki_SF2_GUI_Map_ContentToggle__OnDestroy
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  undefined8 uVar1;
  UnityEngine_UI_Button_o *pUVar2;
  DG_Tweening_Sequence_o **ppDVar3;
  undefined1 auVar4 [16];
  
  ppDVar3 = &(__this->fields).BPOLHFBDIMK;
  uVar1 = 0;
  if (*ppDVar3 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar3,false,(MethodInfo *)0x0);
    *ppDVar3 = (DG_Tweening_Sequence_o *)0x0;
    auVar4 = thunk_FUN_01c20e04(ppDVar3,0);
    method = auVar4._8_8_;
    uVar1 = auVar4._0_8_;
  }
  pUVar2 = (__this->fields).TogglePanel;
  if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_00 = (pUVar2->fields).m_OnClick, uVar1 = 0,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar1,method);
}


// ===== private void FDOLPOJBFHG()  [RVA 0x33B30C0]
// Nekki.SF2.GUI.Map.ContentToggle$$FDOLPOJBFHG @ RVA 0x33B30C0

void Nekki_SF2_GUI_Map_ContentToggle__FDOLPOJBFHG
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar1;
  DG_Tweening_Sequence_o *t;
  
                    /* try { // try from 034b30c8 to 035b30cf has its CatchHandler @ 034b46dc */
                    /* try { // try from 034b30dc to 035b30e3 has its CatchHandler @ 034b46f4 */
  if ((DAT_04567d5a & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
                    /* try { // try from 034b30ec to 035b30f3 has its CatchHandler @ 034b4718 */
    DAT_04567d5a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b30f4 to 035b310f has its CatchHandler @ 034b4950 */
  Nekki_SF2_GUI_Map_ContentToggle__FGPJLJDMNEA(__this,method);
  t = (__this->fields).BPOLHFBDIMK;
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                    /* try { // try from 034b311c to 035b3123 has its CatchHandler @ 034b46d0 */
  if (pMVar1 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
    DG_Tweening_TweenExtensions__Restart
              ((DG_Tweening_Tween_o *)t,false,(pMVar1->fields).OJILDEBJODL,(MethodInfo *)0x0);
                    /* try { // try from 034b3134 to 035b313b has its CatchHandler @ 034b46e8 */
                    /* try { // try from 034b313c to 035b3157 has its CatchHandler @ 034b4980 */
                    /* WARNING: Could not recover jumptable at 0x034b3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._5_ELNCBEDOJED.methodPtr)
              (__this,(__this->klass->vtable)._5_ELNCBEDOJED.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JOICELFGBLC(Sequence OCBEBGEKOIA, DOGetter<float> DPFAFGCKEJH, DOSetter<float> ABLMELPONIJ, DOGetter<float> AHKPHMEGKPH, DOSetter<float> EBDJIEAJIGK)  [RVA 0x33B2D14]
// Nekki.SF2.GUI.Map.ContentToggle$$JOICELFGBLC @ RVA 0x33B2D14

void Nekki_SF2_GUI_Map_ContentToggle__JOICELFGBLC
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,DG_Tweening_Sequence_o *OCBEBGEKOIA,
               DG_Tweening_Core_DOGetter_float__o *DPFAFGCKEJH,
               DG_Tweening_Core_DOSetter_float__o *ABLMELPONIJ,
               DG_Tweening_Core_DOGetter_float__o *AHKPHMEGKPH,
               DG_Tweening_Core_DOSetter_float__o *EBDJIEAJIGK,MethodInfo *method)

{
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar1;
  DG_Tweening_Tween_o *pDVar2;
  ulong uVar3;
  DG_Tweening_TweenCallback_o *callback;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar4;
  float duration;
  
                    /* try { // try from 034b2d18 to 035b2d1f has its CatchHandler @ 034b49f0 */
                    /* try { // try from 034b2d24 to 035b2d2b has its CatchHandler @ 034b49e0 */
                    /* try { // try from 034b2d44 to 035b2d47 has its CatchHandler @ 034b469c */
                    /* try { // try from 034b2d48 to 035b2d53 has its CatchHandler @ 034b46c8 */
  if ((DAT_04567d5b & 1) == 0) {
                    /* try { // try from 034b2d58 to 035b2d63 has its CatchHandler @ 034b46fc */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_KOHGFFDLHFM__);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
                    /* try { // try from 034b2d7c to 035b2d7f has its CatchHandler @ 034b4690 */
                    /* try { // try from 034b2d80 to 035b2d87 has its CatchHandler @ 034b46ac */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 034b2d88 to 035b2d93 has its CatchHandler @ 034b46a8 */
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04567d5b = 1;
  }
                    /* try { // try from 034b2da0 to 035b2da7 has its CatchHandler @ 034b49d4 */
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
  if (pMVar4 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                    /* try { // try from 034b2dc0 to 035b2dd7 has its CatchHandler @ 034b4a8c */
    DG_Tweening_TweenSettingsExtensions__AppendInterval
              (OCBEBGEKOIA,(pMVar4->fields).NJOJKEKJIDC,(MethodInfo *)0x0);
    pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
    if (pMVar4 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                    /* try { // try from 034b2de4 to 035b2deb has its CatchHandler @ 034b494c */
      duration = (pMVar4->fields).OJILDEBJODL;
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034b2dfc to 035b2e03 has its CatchHandler @ 034b495c */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034b2e04 to 035b2e1f has its CatchHandler @ 034b4a88 */
      pDVar1 = DG_Tweening_DOTween__To(DPFAFGCKEJH,ABLMELPONIJ,0.0,duration,(MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)pDVar1,9,
                          Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                         );
                    /* try { // try from 034b2e2c to 035b2e33 has its CatchHandler @ 034b49c8 */
      DG_Tweening_TweenSettingsExtensions__Append(OCBEBGEKOIA,pDVar2,(MethodInfo *)0x0);
      pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
      if (pMVar4 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                    /* try { // try from 034b2e44 to 035b2e4b has its CatchHandler @ 034b49d0 */
                    /* try { // try from 034b2e4c to 035b2e57 has its CatchHandler @ 034b4988 */
                    /* try { // try from 034b2e68 to 035b2e6f has its CatchHandler @ 034b49e4 */
        pDVar1 = DG_Tweening_DOTween__To
                           (AHKPHMEGKPH,EBDJIEAJIGK,1.0,(pMVar4->fields).OJILDEBJODL,
                            (MethodInfo *)0x0);
        pDVar2 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetEase<object>
                           ((Il2CppObject *)pDVar1,8,
                            Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                           );
                    /* try { // try from 034b2e80 to 035b2e87 has its CatchHandler @ 034b4954 */
                    /* try { // try from 034b2e88 to 035b2e93 has its CatchHandler @ 034b496c */
        uVar3 = (*(__this->klass->vtable)._4_unknown.methodPtr)
                          (__this,(__this->klass->vtable)._4_unknown.method);
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 034b2ea4 to 035b2eab has its CatchHandler @ 034b4984 */
          DG_Tweening_TweenSettingsExtensions__Append(OCBEBGEKOIA,pDVar2,(MethodInfo *)0x0);
        }
        else {
          DG_Tweening_TweenSettingsExtensions__Join(OCBEBGEKOIA,pDVar2,(MethodInfo *)0x0);
        }
        callback = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 034b2ebc to 035b2ec3 has its CatchHandler @ 034b49ac */
                    /* try { // try from 034b2ec4 to 035b2edf has its CatchHandler @ 034b4a6c */
        DG_Tweening_TweenCallback___ctor();
                    /* try { // try from 034b2eec to 035b2ef3 has its CatchHandler @ 034b49e8 */
        DG_Tweening_TweenSettingsExtensions__AppendCallback(OCBEBGEKOIA,callback,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

