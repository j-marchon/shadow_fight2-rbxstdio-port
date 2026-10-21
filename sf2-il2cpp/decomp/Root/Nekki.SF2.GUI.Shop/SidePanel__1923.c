// TypeDefIndex 1923
// Namespace: Nekki.SF2.GUI.Shop
// public class SidePanel : MonoBehaviour
// Fields:
//   private ScrollRect _ScrollRect; // 0x20
//   private Vector2 _OpenedPosition; // 0x28
//   private Vector2 _ClosedPosition; // 0x30
//   private Transform _ContentParent; // 0x38
//   private CanvasGroup _CanvasGroup; // 0x40
//   private Button _MoveButton; // 0x48
//   private Vector2 _OpenButtonPosition; // 0x50
//   private Vector2 _CloseButtonPosition; // 0x58
//   private string _OpenImage; // 0x60
//   private string _CloseImage; // 0x68
//   private bool _EnableScrolling; // 0x70
//   private float _moveTime; // 0x74
//   private SidePanel.IAHNGLHCFOH _OnStateChange; // 0x78
//   private SidePanel.IAHNGLHCFOH _OnMove; // 0x80
//   private UnityEvent _OnDragBegin; // 0x88
//   private UnityEvent _OnDragEnd; // 0x90
//   private bool DBNELADJPIJ; // 0x98
//   private bool NCCEHMGJEAA; // 0x99
//   private Vector2 OCBEJPAILDH; // 0x9C
//   private SidePanelContent LJBNCINMIIP; // 0xA8
//   private Tween IDMFMIPALLP; // 0xB0

// ===== private void AAPEEBAIKCH(Vector2 EEGKJKNENDE, float GGMALJLKHHB)  [RVA 0x326ADA8]
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


// ===== public SidePanelContent get_Content()  [RVA 0x326B10C]
// Nekki.SF2.GUI.Shop.SidePanel$$get_Content @ RVA 0x326B10C

Nekki_SF2_GUI_Shop_SidePanelContent_o *
Nekki_SF2_GUI_Shop_SidePanel__get_Content(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).LJBNCINMIIP;
}


// ===== private void Awake()  [RVA 0x326B114]
// Nekki.SF2.GUI.Shop.SidePanel$$Awake @ RVA 0x326B114

void Nekki_SF2_GUI_Shop_SidePanel__Awake(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_UI_ScrollRect_o *__this_00;
  MethodInfo *in_x2;
  UnityEngine_Vector2_o value;
  
  Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling(__this,(__this->fields)._EnableScrolling,in_x2);
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    bVar3 = (__this->fields)._EnableScrolling != false;
    lVar1 = 0x28;
    if (bVar3) {
      lVar1 = 0x30;
    }
    lVar2 = 0x2c;
    if (bVar3) {
      lVar2 = 0x34;
    }
    value.fields.x = *(float *)((long)&__this->klass + lVar1);
    value.fields.y = *(float *)((long)&__this->klass + lVar2);
    UnityEngine_UI_ScrollRect__set_normalizedPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_BlockRaycasts(bool CJNHFNHJHPE)  [RVA 0x326B254]
// Nekki.SF2.GUI.Shop.SidePanel$$set_BlockRaycasts @ RVA 0x326B254

void Nekki_SF2_GUI_Shop_SidePanel__set_BlockRaycasts
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,CJNHFNHJHPE);
}


// ===== public void set_CloseImage(string CJNHFNHJHPE)  [RVA 0x326B274]
// Nekki.SF2.GUI.Shop.SidePanel$$set_CloseImage @ RVA 0x326B274

void Nekki_SF2_GUI_Shop_SidePanel__set_CloseImage
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._CloseImage = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK(__this,(__this->fields).DBNELADJPIJ,method);
  return;
}


// ===== private Vector2 GCABPBPHIMA()  [RVA 0x326B0F0]
// Nekki.SF2.GUI.Shop.SidePanel$$GCABPBPHIMA @ RVA 0x326B0F0

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_SidePanel__GCABPBPHIMA(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
                    /* try { // try from 0336b0f4 to 0346b0fb has its CatchHandler @ 0336b0fc */
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    /* catch() { ... } // from try @ 0336b00c with catch @ 0336b0fc
                       catch() { ... } // from try @ 0336b078 with catch @ 0336b0fc
                       catch() { ... } // from try @ 0336b0e0 with catch @ 0336b0fc
                       catch() { ... } // from try @ 0336b0f4 with catch @ 0336b0fc */
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_UI_ScrollRect__get_normalizedPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_EnableScrolling()  [RVA 0x326B47C]
// Nekki.SF2.GUI.Shop.SidePanel$$get_EnableScrolling @ RVA 0x326B47C

bool Nekki_SF2_GUI_Shop_SidePanel__get_EnableScrolling
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnableScrolling;
}


// ===== public UnityEvent get_OnDragEnd()  [RVA 0x326B484]
// Nekki.SF2.GUI.Shop.SidePanel$$get_OnDragEnd @ RVA 0x326B484

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_SidePanel__get_OnDragEnd
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnDragEnd;
}


// ===== public void OnValueChanged(Vector2 BJODBCJIGHH)  [RVA 0x326B48C]
// Nekki.SF2.GUI.Shop.SidePanel$$OnValueChanged @ RVA 0x326B48C

void Nekki_SF2_GUI_Shop_SidePanel__OnValueChanged
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,UnityEngine_Vector2_o BJODBCJIGHH,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = BJODBCJIGHH.fields.x;
  fVar2 = (__this->fields).OCBEJPAILDH.fields.x;
  if ((fVar1 == 0.0) || (fVar1 < fVar2)) {
    (__this->fields).NCCEHMGJEAA = true;
  }
  if ((fVar1 == 1.0) || (fVar2 < fVar1)) {
    (__this->fields).NCCEHMGJEAA = false;
  }
  (__this->fields).OCBEJPAILDH.fields.x = fVar1;
  (__this->fields).OCBEJPAILDH.fields.y = BJODBCJIGHH.fields.y;
  return;
}


// ===== public void OnScrollDragEnd(PointerEventData OCMMDIHLKMH)  [RVA 0x326B4C8]
// Nekki.SF2.GUI.Shop.SidePanel$$OnScrollDragEnd @ RVA 0x326B4C8

void Nekki_SF2_GUI_Shop_SidePanel__OnScrollDragEnd
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OCMMDIHLKMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar2;
  
  if ((DAT_045671de & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671de = 1;
  }
  Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this,(__this->fields).NCCEHMGJEAA,-1.0,method);
  __this_00 = (__this->fields)._OnDragEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).LJBNCINMIIP;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).LJBNCINMIIP;
    if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0336b55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._7_OnEndDragging.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._7_OnEndDragging.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SidePanel.IAHNGLHCFOH get_OnStateChange()  [RVA 0x326B61C]
// Nekki.SF2.GUI.Shop.SidePanel$$get_OnStateChange @ RVA 0x326B61C

Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_o *
Nekki_SF2_GUI_Shop_SidePanel__get_OnStateChange
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnStateChange;
}


// ===== public SidePanel.IAHNGLHCFOH get_OnMove()  [RVA 0x326B624]
// Nekki.SF2.GUI.Shop.SidePanel$$get_OnMove @ RVA 0x326B624

Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_o *
Nekki_SF2_GUI_Shop_SidePanel__get_OnMove(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnMove;
}


// ===== public string get_OpenImage()  [RVA 0x326B62C]
// Nekki.SF2.GUI.Shop.SidePanel$$get_OpenImage @ RVA 0x326B62C

System_String_o *
Nekki_SF2_GUI_Shop_SidePanel__get_OpenImage
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OpenImage;
}


// ===== public void set_EnableScrolling(bool CJNHFNHJHPE)  [RVA 0x326B164]
// Nekki.SF2.GUI.Shop.SidePanel$$set_EnableScrolling @ RVA 0x326B164

void Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Button_o *pUVar2;
  
  if ((DAT_045671df & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671df = 1;
  }
  __this_00 = (__this->fields)._ScrollRect;
  (__this->fields)._EnableScrolling = CJNHFNHJHPE;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._MoveButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._MoveButton;
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar2,(__this->fields)._EnableScrolling,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields)._MoveButton;
      if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (__this_01,(__this->fields)._EnableScrolling,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnClick()  [RVA 0x326B634]
// Nekki.SF2.GUI.Shop.SidePanel$$OnClick @ RVA 0x326B634

void Nekki_SF2_GUI_Shop_SidePanel__OnClick
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this,(__this->fields).DBNELADJPIJ == false,-1.0,in_x2);
  return;
}


// ===== private void GHDOLAIHDBK()  [RVA 0x326B648]
// Nekki.SF2.GUI.Shop.SidePanel$$GHDOLAIHDBK @ RVA 0x326B648

void Nekki_SF2_GUI_Shop_SidePanel__GHDOLAIHDBK
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  MethodInfo *pMVar2;
  MethodInfo *method_00;
  Il2CppMethodPointer pIVar3;
  
                    /* try { // try from 0336b658 to 0346b65f has its CatchHandler @ 0336b888 */
  if ((DAT_045671e0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    DAT_045671e0 = 1;
  }
                    /* try { // try from 0336b674 to 0346b683 has its CatchHandler @ 0336b874 */
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_0336b700;
                    /* try { // try from 0336b684 to 0346b68f has its CatchHandler @ 0336b884 */
  UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,true,(MethodInfo *)0x0);
  if ((__this->fields).DBNELADJPIJ == false) {
                    /* try { // try from 0336b6a8 to 0346b6af has its CatchHandler @ 0336b880 */
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0336b6b0 to 0346b733 has its CatchHandler @ 0336b574 */
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_0336b700;
    UnityEngine_Transform__SetSiblingIndex(__this_01,0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).LJBNCINMIIP;
    if (pNVar1 == (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) goto LAB_0336b700;
    pIVar3 = (pNVar1->klass->vtable)._10_OnPanelClosed.methodPtr;
    pMVar2 = (pNVar1->klass->vtable)._10_OnPanelClosed.method;
  }
  else {
    pNVar1 = (__this->fields).LJBNCINMIIP;
    if (pNVar1 == (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) goto LAB_0336b700;
                    /* try { // try from 0336b698 to 0346b6a3 has its CatchHandler @ 0336b870 */
    pIVar3 = (pNVar1->klass->vtable)._6_OnPanelOpened.methodPtr;
    pMVar2 = (pNVar1->klass->vtable)._6_OnPanelOpened.method;
  }
  (*pIVar3)(pNVar1,pMVar2);
  __this_02 = (UnityEngine_Events_UnityEvent_bool__o *)(__this->fields)._OnStateChange;
  if (__this_02 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
    UnityEngine_Events_UnityEvent<bool>__Invoke
              (__this_02,(__this->fields).DBNELADJPIJ,
               Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA(__this,method_00);
    return;
  }
LAB_0336b700:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnScrollDragBegin(PointerEventData OCMMDIHLKMH)  [RVA 0x326B704]
// Nekki.SF2.GUI.Shop.SidePanel$$OnScrollDragBegin @ RVA 0x326B704

void Nekki_SF2_GUI_Shop_SidePanel__OnScrollDragBegin
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OCMMDIHLKMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar2;
  
  if ((DAT_045671e1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671e1 = 1;
    OCMMDIHLKMH = extraout_x1;
  }
                    /* try { // try from 0336b734 to 0346b743 has its CatchHandler @ 0336b86c */
  Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA(__this,(MethodInfo *)OCMMDIHLKMH);
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0336b74c to 0346b757 has its CatchHandler @ 0336b860 */
    UnityEngine_Transform__SetSiblingIndex(__this_00,1,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._OnDragBegin;
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0336b760 to 0346b767 has its CatchHandler @ 0336b868 */
                    /* try { // try from 0336b768 to 0346b777 has its CatchHandler @ 0336b864 */
      UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).LJBNCINMIIP;
                    /* try { // try from 0336b778 to 0346b853 has its CatchHandler @ 0336b574 */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields).LJBNCINMIIP;
      if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
        (*(pNVar2->klass->vtable)._4_OnStartOpening.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._4_OnStartOpening.method);
        pNVar2 = (__this->fields).LJBNCINMIIP;
        if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0336b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._8_OnStartDragging.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._8_OnStartDragging.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x326B7D4]
// Nekki.SF2.GUI.Shop.SidePanel$$.ctor @ RVA 0x326B7D4

void Nekki_SF2_GUI_Shop_SidePanel___ctor(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_o *pNVar1;
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_o **ppNVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_045671e2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671e2 = 1;
  }
  (__this->fields)._OpenButtonPosition.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields)._CloseButtonPosition.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields)._ClosedPosition.fields = (UnityEngine_Vector2_Fields)0x3f800000;
  (__this->fields)._OpenedPosition.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields)._OpenImage = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0336b854 to 0346b857 has its CatchHandler @ 0336b87c */
                    /* try { // try from 0336b858 to 0346b85b has its CatchHandler @ 0336b878 */
                    /* try { // try from 0336b85c to 0346b89f has its CatchHandler @ 0336b574 */
  (__this->fields)._CloseImage = StringLiteral_1/*""*/;
                    /* catch() { ... } // from try @ 0336b74c with catch @ 0336b860 */
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0336b768 with catch @ 0336b864 */
                    /* catch() { ... } // from try @ 0336b760 with catch @ 0336b868 */
                    /* catch() { ... } // from try @ 0336b734 with catch @ 0336b86c */
  (__this->fields)._EnableScrolling = true;
                    /* catch() { ... } // from try @ 0336b698 with catch @ 0336b870 */
  (__this->fields)._moveTime = 1.0;
                    /* catch() { ... } // from try @ 0336b674 with catch @ 0336b874 */
                    /* catch() { ... } // from try @ 0336b858 with catch @ 0336b878 */
  auVar5 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_TypeInfo);
  pNVar1 = auVar5._0_8_;
                    /* catch() { ... } // from try @ 0336b854 with catch @ 0336b87c */
                    /* catch() { ... } // from try @ 0336b6a8 with catch @ 0336b880 */
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH___ctor(pNVar1,auVar5._8_8_);
  ppNVar2 = &(__this->fields)._OnStateChange;
                    /* catch() { ... } // from try @ 0336b684 with catch @ 0336b884 */
                    /* catch() { ... } // from try @ 0336b658 with catch @ 0336b888 */
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  auVar5 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_TypeInfo);
  pNVar1 = auVar5._0_8_;
                    /* try { // try from 0336b8a0 to 0346b8a3 has its CatchHandler @ 0336b8c4 */
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH___ctor(pNVar1,auVar5._8_8_);
  ppNVar2 = &(__this->fields)._OnMove;
                    /* try { // try from 0336b8a4 to 0346b8cb has its CatchHandler @ 0336b574 */
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
                    /* catch() { ... } // from try @ 0336b8a0 with catch @ 0336b8c4 */
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragBegin;
                    /* try { // try from 0336b8cc to 0346b8d3 has its CatchHandler @ 0336b8e8 */
  *ppUVar4 = pUVar3;
                    /* try { // try from 0336b8d4 to 0346b8df has its CatchHandler @ 0336b574 */
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
                    /* try { // try from 0336b8e0 to 0346b8e7 has its CatchHandler @ 0336b8e8 */
                    /* catch() { ... } // from try @ 0336b8cc with catch @ 0336b8e8
                       catch() { ... } // from try @ 0336b8e0 with catch @ 0336b8e8 */
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragEnd;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  (__this->fields).DBNELADJPIJ = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string get_CloseImage()  [RVA 0x326B960]
// Nekki.SF2.GUI.Shop.SidePanel$$get_CloseImage @ RVA 0x326B960

System_String_o *
Nekki_SF2_GUI_Shop_SidePanel__get_CloseImage
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._CloseImage;
}


// ===== private void CCPABLFBFFA()  [RVA 0x326B0B8]
// Nekki.SF2.GUI.Shop.SidePanel$$CCPABLFBFFA @ RVA 0x326B0B8

void Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IDMFMIPALLP;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
                    /* catch() { ... } // from try @ 0336b0b0 with catch @ 0336b0d8 */
                    /* try { // try from 0336b0e0 to 0346b0e7 has its CatchHandler @ 0336b0fc */
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
                    /* try { // try from 0336b0e8 to 0346b0f3 has its CatchHandler @ 0336aad8 */
  return;
}


// ===== private void MHHABNBFAPK(bool FMFKDAOBPDI)  [RVA 0x326B294]
// Nekki.SF2.GUI.Shop.SidePanel$$MHHABNBFAPK @ RVA 0x326B294

void Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool FMFKDAOBPDI,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_045671e3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_045671e3 = 1;
  }
  pUVar5 = (__this->fields)._MoveButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (FMFKDAOBPDI) {
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._OpenImage,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar5 = (__this->fields)._MoveButton;
    if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
       (pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
                 UnityEngine_UI_Selectable__get_image
                           ((UnityEngine_UI_Selectable_o *)pUVar5,(MethodInfo *)0x0),
       pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pNVar3->klass->_2).naturalAligment) &&
         ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar3,(__this->fields)._OpenImage,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._MoveButton;
        if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 0.0;
          value.fields._0_8_ = (__this->fields)._OpenButtonPosition.fields;
          UnityEngine_Transform__set_localPosition(pUVar4,value,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._MoveButton;
          if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._CloseImage,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar5 = (__this->fields)._MoveButton;
    if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
       (pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
                 UnityEngine_UI_Selectable__get_image
                           ((UnityEngine_UI_Selectable_o *)pUVar5,(MethodInfo *)0x0),
       pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pNVar3->klass->_2).naturalAligment) &&
         ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar3,(__this->fields)._CloseImage,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._MoveButton;
        if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value_00.fields.z = 0.0;
          value_00.fields._0_8_ = (__this->fields)._CloseButtonPosition.fields;
          UnityEngine_Transform__set_localPosition(pUVar4,value_00,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._MoveButton;
          if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsOpened()  [RVA 0x326B968]
// Nekki.SF2.GUI.Shop.SidePanel$$get_IsOpened @ RVA 0x326B968

bool Nekki_SF2_GUI_Shop_SidePanel__get_IsOpened
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).DBNELADJPIJ;
}


// ===== private void PKOEPIIMGFE(Vector2 JGMCOMCBLPG)  [RVA 0x326B970]
// Nekki.SF2.GUI.Shop.SidePanel$$PKOEPIIMGFE @ RVA 0x326B970

void Nekki_SF2_GUI_Shop_SidePanel__PKOEPIIMGFE
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,UnityEngine_Vector2_o JGMCOMCBLPG,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_normalizedPosition(__this_00,JGMCOMCBLPG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(SidePanelContent AOJIIDGCBEC, bool OBIFDGKDIBD = True)  [RVA 0x326B98C]
// Nekki.SF2.GUI.Shop.SidePanel$$Init @ RVA 0x326B98C

void Nekki_SF2_GUI_Shop_SidePanel__Init
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,
               Nekki_SF2_GUI_Shop_SidePanelContent_o *AOJIIDGCBEC,bool OBIFDGKDIBD,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_SidePanelContent_o **ppNVar3;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *x;
  
  if ((DAT_045671e4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671e4 = 1;
  }
  ppNVar3 = &(__this->fields).LJBNCINMIIP;
  *ppNVar3 = AOJIIDGCBEC;
  thunk_FUN_01c20e04(ppNVar3,AOJIIDGCBEC);
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((*ppNVar3 == (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__SetParent
              (__this_00,(__this->fields)._ContentParent,false,(MethodInfo *)0x0);
  }
  pUVar1 = &(__this->fields)._OpenedPosition.fields;
  if (!OBIFDGKDIBD) {
    pUVar1 = &(__this->fields)._ClosedPosition.fields;
  }
  Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this,OBIFDGKDIBD,0.0,method_00);
  (__this->fields).OCBEJPAILDH.fields = *pUVar1;
  return;
}


// ===== public void set_MoveTime(float CJNHFNHJHPE)  [RVA 0x326BA64]
// Nekki.SF2.GUI.Shop.SidePanel$$set_MoveTime @ RVA 0x326BA64

void Nekki_SF2_GUI_Shop_SidePanel__set_MoveTime
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._moveTime = CJNHFNHJHPE;
  return;
}


// ===== public UnityEvent get_OnDragBegin()  [RVA 0x326BA6C]
// Nekki.SF2.GUI.Shop.SidePanel$$get_OnDragBegin @ RVA 0x326BA6C

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Shop_SidePanel__get_OnDragBegin
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnDragBegin;
}


// ===== public void set_OpenImage(string CJNHFNHJHPE)  [RVA 0x326BA74]
// Nekki.SF2.GUI.Shop.SidePanel$$set_OpenImage @ RVA 0x326BA74

void Nekki_SF2_GUI_Shop_SidePanel__set_OpenImage
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._OpenImage = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK(__this,(__this->fields).DBNELADJPIJ,method);
  return;
}


// ===== public Button get_MoveButton()  [RVA 0x326BA94]
// Nekki.SF2.GUI.Shop.SidePanel$$get_MoveButton @ RVA 0x326BA94

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Shop_SidePanel__get_MoveButton
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._MoveButton;
}


// ===== public SidePanelScroll TryGetSidePanelScroll()  [RVA 0x326BA9C]
// Nekki.SF2.GUI.Shop.SidePanel$$TryGetSidePanelScroll @ RVA 0x326BA9C

Nekki_SF2_GUI_SidePanelScroll_o *
Nekki_SF2_GUI_Shop_SidePanel__TryGetSidePanelScroll
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_SidePanelScroll_o *pNVar2;
  
                    /* try { // try from 0336baa4 to 0346bd17 has its CatchHandler @ 0336baa4
                       catch() { ... } // from try @ 0336baa4 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336be04 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336bf68 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336bf70 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336c03c with catch @ 0336baa4 */
  if ((DAT_045671e5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_SidePanelScroll_TypeInfo);
    DAT_045671e5 = 1;
  }
  pNVar2 = (Nekki_SF2_GUI_SidePanelScroll_o *)(__this->fields)._ScrollRect;
  if (pNVar2 != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_SidePanelScroll_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (((UnityEngine_UI_ScrollRect_c *)pNVar2->klass)->_2).naturalAligment) {
      if ((((UnityEngine_UI_ScrollRect_c *)pNVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_SidePanelScroll_TypeInfo) {
        return pNVar2;
      }
      return (Nekki_SF2_GUI_SidePanelScroll_o *)0x0;
    }
  }
  return (Nekki_SF2_GUI_SidePanelScroll_o *)0x0;
}


// ===== public bool IsTweening()  [RVA 0x326BB18]
// Nekki.SF2.GUI.Shop.SidePanel$$IsTweening @ RVA 0x326BB18

bool Nekki_SF2_GUI_Shop_SidePanel__IsTweening
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).IDMFMIPALLP != (DG_Tweening_Tween_o *)0x0;
}


// ===== private void AEHMEENKGDE(Vector2 CJNHFNHJHPE)  [RVA 0x326B238]
// Nekki.SF2.GUI.Shop.SidePanel$$AEHMEENKGDE @ RVA 0x326B238

void Nekki_SF2_GUI_Shop_SidePanel__AEHMEENKGDE
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_normalizedPosition(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_MoveTime()  [RVA 0x326BB28]
// Nekki.SF2.GUI.Shop.SidePanel$$get_MoveTime @ RVA 0x326BB28

float Nekki_SF2_GUI_Shop_SidePanel__get_MoveTime
                (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._moveTime;
}


// ===== public void SetOpen(bool HJEBKCDDBAB, float PNEIGGOFIOA = -1)  [RVA 0x326B570]
// Nekki.SF2.GUI.Shop.SidePanel$$SetOpen @ RVA 0x326B570

void Nekki_SF2_GUI_Shop_SidePanel__SetOpen
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool HJEBKCDDBAB,float PNEIGGOFIOA,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *method_00;
  
                    /* try { // try from 0336b574 to 0346b657 has its CatchHandler @ 0336b574
                       catch() { ... } // from try @ 0336b574 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b6b0 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b778 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b85c with catch @ 0336b574
                       catch() { ... } // from try @ 0336b8a4 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b8d4 with catch @ 0336b574 */
  if (PNEIGGOFIOA < 0.0) {
    PNEIGGOFIOA = (__this->fields)._moveTime;
  }
  if (HJEBKCDDBAB) {
    Nekki_SF2_GUI_Shop_SidePanel__AAPEEBAIKCH
              (__this,(UnityEngine_Vector2_o)(__this->fields)._OpenedPosition.fields,PNEIGGOFIOA,
               (MethodInfo *)(ulong)HJEBKCDDBAB);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
LAB_0336b618:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__SetSiblingIndex(__this_01,1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK(__this,true,method_00);
  }
  else {
    Nekki_SF2_GUI_Shop_SidePanel__AAPEEBAIKCH
              (__this,(UnityEngine_Vector2_o)(__this->fields)._ClosedPosition.fields,PNEIGGOFIOA,
               (MethodInfo *)(ulong)HJEBKCDDBAB);
    Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK(__this,false,method);
    __this_02 = (__this->fields)._CanvasGroup;
    if (__this_02 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_0336b618;
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_02,true,(MethodInfo *)0x0);
  }
  (__this->fields).DBNELADJPIJ = HJEBKCDDBAB;
  return;
}


// ===== private Vector2 GACEMKIBNNE()  [RVA 0x326BB30]
// Nekki.SF2.GUI.Shop.SidePanel$$GACEMKIBNNE @ RVA 0x326BB30

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_SidePanel__GACEMKIBNNE(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_UI_ScrollRect__get_normalizedPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_BlockRaycasts()  [RVA 0x326BB4C]
// Nekki.SF2.GUI.Shop.SidePanel$$get_BlockRaycasts @ RVA 0x326BB4C

bool Nekki_SF2_GUI_Shop_SidePanel__get_BlockRaycasts
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    bVar1 = UnityEngine_CanvasGroup__get_blocksRaycasts(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsOpening()  [RVA 0x326BB68]
// Nekki.SF2.GUI.Shop.SidePanel$$get_IsOpening @ RVA 0x326BB68

bool Nekki_SF2_GUI_Shop_SidePanel__get_IsOpening
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  return (__this->fields).NCCEHMGJEAA;
}

