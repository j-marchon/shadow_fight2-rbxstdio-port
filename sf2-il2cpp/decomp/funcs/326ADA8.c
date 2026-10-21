// Nekki.SF2.GUI.Shop.SidePanel$$AAPEEBAIKCH @ RVA 0x326ADA8

void Nekki_SF2_GUI_Shop_SidePanel__AAPEEBAIKCH
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,UnityEngine_Vector2_o EEGKJKNENDE,
               float GGMALJLKHHB,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *__this_00;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *pDVar2;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar3;
  Nekki_SF2_GUI_Shop_SidePanelContent_c *pNVar4;
  Il2CppMethodPointer pIVar5;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar6;
  DG_Tweening_Tween_o **ppDVar7;
  DG_Tweening_Tween_o *t;
  float fVar8;
  UnityEngine_Vector2_Fields UVar9;
  float fVar10;
  UnityEngine_Vector2_Fields UVar11;
  float fVar12;
  UnityEngine_Vector2_o UVar13;
  
  if ((DAT_045671dd & 1) == 0) {
                    /* try { // try from 0336ade8 to 0346adef has its CatchHandler @ 0336b034 */
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 0336ae10 to 0346ae17 has its CatchHandler @ 0336b030 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanel_GACEMKIBNNE__);
                    /* try { // try from 0336ae28 to 0346ae2f has its CatchHandler @ 0336afb4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanel_GHDOLAIHDBK__);
                    /* try { // try from 0336ae30 to 0346af77 has its CatchHandler @ 0336aad8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanel_PKOEPIIMGFE__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Tween>__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    DAT_045671dd = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA(__this,method);
  pNVar6 = (__this->fields).LJBNCINMIIP;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar6 = (__this->fields).LJBNCINMIIP;
  if (pNVar6 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
    pNVar4 = pNVar6->klass;
    if ((__this->fields).DBNELADJPIJ == false) {
      pIVar5 = (pNVar4->vtable)._4_OnStartOpening.methodPtr;
      pMVar3 = (pNVar4->vtable)._4_OnStartOpening.method;
    }
    else {
      pIVar5 = (pNVar4->vtable)._9_OnStartClosing.methodPtr;
      pMVar3 = (pNVar4->vtable)._9_OnStartClosing.method;
    }
    (*pIVar5)(pNVar6,pMVar3);
    UVar9 = (__this->fields)._OpenedPosition.fields;
    UVar11 = (__this->fields)._ClosedPosition.fields;
    if (DAT_045602fb == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_045602fb = '\x01';
    }
    fVar8 = UVar9.x - UVar11.x;
    fVar10 = UVar9.y - UVar11.y;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar10 = SQRT(fVar8 * fVar8 + fVar10 * fVar10);
    fVar8 = 0.0;
    if (0.01 < fVar10) {
      __this_00 = (__this->fields)._ScrollRect;
      if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) goto LAB_0336b0b4;
      UVar13 = UnityEngine_UI_ScrollRect__get_normalizedPosition(__this_00,(MethodInfo *)0x0);
      if (DAT_045602fb == '\0') {
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_045602fb = '\x01';
      }
      fVar12 = UVar13.fields.x - EEGKJKNENDE.fields.x;
      fVar8 = UVar13.fields.y - EEGKJKNENDE.fields.y;
                    /* try { // try from 0336af78 to 0346af7b has its CatchHandler @ 0336b09c */
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336af7c to 0346af7f has its CatchHandler @ 0336b098 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0336af80 to 0346af83 has its CatchHandler @ 0336b094 */
                    /* try { // try from 0336af84 to 0346af87 has its CatchHandler @ 0336b090 */
                    /* try { // try from 0336af88 to 0346af8b has its CatchHandler @ 0336b02c */
                    /* try { // try from 0336af8c to 0346af8f has its CatchHandler @ 0336b028 */
                    /* try { // try from 0336af90 to 0346af93 has its CatchHandler @ 0336b024 */
      fVar8 = SQRT(fVar12 * fVar12 + fVar8 * fVar8) / fVar10;
    }
                    /* try { // try from 0336af94 to 0346af97 has its CatchHandler @ 0336afc8 */
                    /* try { // try from 0336af98 to 0346af9b has its CatchHandler @ 0336afc4 */
                    /* try { // try from 0336af9c to 0346af9f has its CatchHandler @ 0336afc0 */
                    /* try { // try from 0336afa0 to 0346afa3 has its CatchHandler @ 0336afbc */
                    /* try { // try from 0336afa4 to 0346afa7 has its CatchHandler @ 0336aad8 */
    getter = (DG_Tweening_Core_DOGetter_Vector2__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
                    /* try { // try from 0336afa8 to 0346afab has its CatchHandler @ 0336afb0 */
                    /* catch() { ... } // from try @ 0336ad70 with catch @ 0336afac
                       try { // try from 0336afac to 0346afe3 has its CatchHandler @ 0336aad8 */
                    /* catch() { ... } // from try @ 0336afa8 with catch @ 0336afb0 */
                    /* catch() { ... } // from try @ 0336ae28 with catch @ 0336afb4 */
                    /* catch() { ... } // from try @ 0336ad44 with catch @ 0336afb8 */
                    /* catch() { ... } // from try @ 0336afa0 with catch @ 0336afbc */
                    /* catch() { ... } // from try @ 0336af9c with catch @ 0336afc0 */
    DG_Tweening_Core_DOGetter<Vector2>___ctor();
                    /* catch() { ... } // from try @ 0336af98 with catch @ 0336afc4 */
                    /* catch() { ... } // from try @ 0336af94 with catch @ 0336afc8 */
                    /* catch() { ... } // from try @ 0336ad1c with catch @ 0336afcc */
    setter = (DG_Tweening_Core_DOSetter_Vector2__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
                    /* try { // try from 0336afe4 to 0346afe7 has its CatchHandler @ 0336b004 */
                    /* try { // try from 0336afe8 to 0346b00b has its CatchHandler @ 0336aad8 */
    DG_Tweening_Core_DOSetter<Vector2>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0336afe4 with catch @ 0336b004 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0336b00c to 0346b01f has its CatchHandler @ 0336b0fc */
                    /* catch() { ... } // from try @ 0336aca8 with catch @ 0336b020
                       try { // try from 0336b020 to 0346b04b has its CatchHandler @ 0336aad8 */
    pDVar2 = DG_Tweening_DOTween__To
                       (getter,setter,EEGKJKNENDE,fVar8 * GGMALJLKHHB,(MethodInfo *)0x0);
    ppDVar7 = &(__this->fields).IDMFMIPALLP;
                    /* catch() { ... } // from try @ 0336af90 with catch @ 0336b024 */
                    /* catch() { ... } // from try @ 0336af8c with catch @ 0336b028 */
    *ppDVar7 = (DG_Tweening_Tween_o *)pDVar2;
                    /* catch() { ... } // from try @ 0336af88 with catch @ 0336b02c */
                    /* catch() { ... } // from try @ 0336ae10 with catch @ 0336b030 */
                    /* catch() { ... } // from try @ 0336ade8 with catch @ 0336b034 */
    thunk_FUN_01c20e04(ppDVar7,pDVar2);
    t = *ppDVar7;
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0336b04c to 0346b04f has its CatchHandler @ 0336b070 */
                    /* try { // try from 0336b050 to 0346b077 has its CatchHandler @ 0336aad8 */
    DG_Tweening_TweenCallback___ctor();
                    /* catch() { ... } // from try @ 0336b04c with catch @ 0336b070 */
                    /* try { // try from 0336b078 to 0346b08b has its CatchHandler @ 0336b0fc */
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Tween>__);
    __this_01 = (UnityEngine_Events_UnityEvent_bool__o *)(__this->fields)._OnMove;
    if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                    /* catch() { ... } // from try @ 0336ac7c with catch @ 0336b08c
                       try { // try from 0336b08c to 0346b0af has its CatchHandler @ 0336aad8 */
                    /* catch() { ... } // from try @ 0336af84 with catch @ 0336b090 */
                    /* catch() { ... } // from try @ 0336af80 with catch @ 0336b094 */
                    /* catch() { ... } // from try @ 0336af7c with catch @ 0336b098 */
                    /* catch() { ... } // from try @ 0336af78 with catch @ 0336b09c */
                    /* catch() { ... } // from try @ 0336ac54 with catch @ 0336b0a0 */
                    /* try { // try from 0336b0b0 to 0346b0b3 has its CatchHandler @ 0336b0d8 */
      UnityEngine_Events_UnityEvent<bool>__Invoke
                (__this_01,(__this->fields).DBNELADJPIJ,
                 Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
      return;
    }
  }
LAB_0336b0b4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336b0b4 to 0346b0df has its CatchHandler @ 0336aad8 */
  FUN_01bab8c8();
}

