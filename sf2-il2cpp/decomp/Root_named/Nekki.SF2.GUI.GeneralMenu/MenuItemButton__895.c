// TypeDefIndex 895
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class MenuItemButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
// Fields:
//   protected Transform _leftKunai; // 0x20
//   protected Transform _rightKunai; // 0x28
//   protected LabelAlias _label; // 0x30
//   private GameObject _selection; // 0x38
//   private List<ControlAction> controls; // 0x40
//   private List<FEEECOADFNH> hints; // 0x48
//   private UnityEvent BMLJIHKIHNL; // 0x50
//   private UnityEvent NFLKCFKIBAD; // 0x58
//   private UnityEvent LCJGCOJKLED; // 0x60
//   private UnityEvent NPJBAPNBCGD; // 0x68
//   private UnityEvent OEBMLKJADCA; // 0x70

// ===== public List<FEEECOADFNH> get_Hints()  [RVA 0x3094B48]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_Hints @ RVA 0x3094B48

System_Collections_Generic_List_FEEECOADFNH__o *
Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_Hints
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
                    /* try { // try from 03194b48 to 03294b4b has its CatchHandler @ 03194c94 */
  return (__this->fields).hints;
}


// ===== public bool get_Selection()  [RVA 0x3094B50]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_Selection @ RVA 0x3094B50

bool Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_Selection
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = (__this->fields)._selection;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Selection(bool CJNHFNHJHPE)  [RVA 0x3094B78]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$set_Selection @ RVA 0x3094B78

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 03194b7c to 03294b9f has its CatchHandler @ 03194cac */
  bVar1 = Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_Selection
                    (__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  if (bVar1 == CJNHFNHJHPE) {
    return;
  }
  __this_00 = (__this->fields)._selection;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 03194bb0 to 03294bb7 has its CatchHandler @ 03194c94 */
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public UnityEvent get_OnPointerPressClick()  [RVA 0x3094BC8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_OnPointerPressClick @ RVA 0x3094BC8

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_OnPointerPressClick
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  return (__this->fields).BMLJIHKIHNL;
}


// ===== public UnityEvent get_OnPointerPressDown()  [RVA 0x3094BD0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_OnPointerPressDown @ RVA 0x3094BD0

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_OnPointerPressDown
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  return (__this->fields).NFLKCFKIBAD;
}


// ===== public UnityEvent get_OnPointerPressUp()  [RVA 0x3094BD8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_OnPointerPressUp @ RVA 0x3094BD8

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_OnPointerPressUp
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  return (__this->fields).LCJGCOJKLED;
}


// ===== public UnityEvent get_OnPointerPressEnter()  [RVA 0x3094BE0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_OnPointerPressEnter @ RVA 0x3094BE0

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_OnPointerPressEnter
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  return (__this->fields).NPJBAPNBCGD;
}


// ===== public UnityEvent get_OnPointerPressExit()  [RVA 0x3094BE8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$get_OnPointerPressExit @ RVA 0x3094BE8

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemButton__get_OnPointerPressExit
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  return (__this->fields).OEBMLKJADCA;
}


// ===== public void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x3094BF0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerClick @ RVA 0x3094BF0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerClick
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  
                    /* try { // try from 03194c00 to 03294c27 has its CatchHandler @ 03194e4c */
  if ((DAT_045660c6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_045660c6 = 1;
    OHNNFPGGEFK = extraout_x1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = 0;
  __this_00 = (__this->fields).BMLJIHKIHNL;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,OHNNFPGGEFK);
}


// ===== public void OnPointerDown(PointerEventData OHNNFPGGEFK)  [RVA 0x3094C4C]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerDown @ RVA 0x3094C4C

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerDown
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 03194c4c to 03294c57 has its CatchHandler @ 03194e40 */
  __this_00 = (__this->fields).NFLKCFKIBAD;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 03194c5c to 03294c5f has its CatchHandler @ 03194cc0 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03194c64 to 03294c67 has its CatchHandler @ 03194cbc */
  FUN_01bab8c8();
}


// ===== public void OnPointerUp(PointerEventData OHNNFPGGEFK)  [RVA 0x3094C68]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerUp @ RVA 0x3094C68

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerUp
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 03194c6c to 03294c6f has its CatchHandler @ 03194ca8 */
  __this_00 = (__this->fields).LCJGCOJKLED;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 03194c74 to 03294c77 has its CatchHandler @ 03194c9c */
                    /* try { // try from 03194c7c to 03294c7f has its CatchHandler @ 03194c90 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnPointerEnter(PointerEventData OHNNFPGGEFK)  [RVA 0x3094C84]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerEnter @ RVA 0x3094C84

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerEnter
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 03194c84 to 03294c87 has its CatchHandler @ 03194c8c */
                    /* try { // try from 03194c88 to 03294ce7 has its CatchHandler @ 03194474 */
  __this_00 = (__this->fields).NPJBAPNBCGD;
                    /* catch() { ... } // from try @ 03194c84 with catch @ 03194c8c */
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 03194c7c with catch @ 03194c90 */
                    /* catch() { ... } // from try @ 03194b48 with catch @ 03194c94
                       catch() { ... } // from try @ 03194bb0 with catch @ 03194c94 */
                    /* catch() { ... } // from try @ 03194a84 with catch @ 03194c98 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03194c74 with catch @ 03194c9c */
  FUN_01bab8c8();
}


// ===== public void OnPointerExit(PointerEventData OHNNFPGGEFK)  [RVA 0x3094CA0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerExit @ RVA 0x3094CA0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerExit
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* catch() { ... } // from try @ 03194aa8 with catch @ 03194ca0 */
                    /* catch() { ... } // from try @ 03194ab8 with catch @ 03194ca4 */
  __this_00 = (__this->fields).OEBMLKJADCA;
                    /* catch() { ... } // from try @ 03194c6c with catch @ 03194ca8 */
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* catch() { ... } // from try @ 03194b7c with catch @ 03194cac */
                    /* catch() { ... } // from try @ 03194afc with catch @ 03194cb0 */
                    /* catch() { ... } // from try @ 03194a88 with catch @ 03194cb4 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03194ad0 with catch @ 03194cb8 */
  FUN_01bab8c8();
}


// ===== protected virtual void Awake()  [RVA 0x3094CBC]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$Awake @ RVA 0x3094CBC

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__Awake
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03194c64 with catch @ 03194cbc */
  return;
}


// ===== public void TryCallEvent(string GJKJICHICFN)  [RVA 0x3094CC0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TryCallEvent @ RVA 0x3094CC0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TryCallEvent
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,System_String_o *GJKJICHICFN,
               MethodInfo *method)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 03194c5c with catch @ 03194cc0 */
                    /* catch() { ... } // from try @ 031949b0 with catch @ 03194cc4 */
                    /* catch() { ... } // from try @ 031949e0 with catch @ 03194cc8 */
                    /* catch() { ... } // from try @ 03194a20 with catch @ 03194ccc */
  if ((DAT_045660c7 & 1) == 0) {
                    /* try { // try from 03194ce8 to 03294ceb has its CatchHandler @ 03194e2c */
                    /* try { // try from 03194cec to 03294dcf has its CatchHandler @ 03194474 */
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<FBBNEILNOKK>__);
    DAT_045660c7 = 1;
  }
  uVar1 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                    (GJKJICHICFN,1,Method_PCOEHCPGBBG_AICKIDLLIBK<FBBNEILNOKK>__);
                    /* WARNING: Could not recover jumptable at 0x03194d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._10_TryCallEvent.methodPtr)
            (__this,(ulong)uVar1,(__this->klass->vtable)._10_TryCallEvent.method);
  return;
}


// ===== public virtual void TryCallEvent(FBBNEILNOKK GJKJICHICFN)  [RVA 0x3094D2C]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TryCallEvent @ RVA 0x3094D2C

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TryCallEvent
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,int32_t GJKJICHICFN,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_GeneralMenu_ControlAction_o *__this_01;
  System_Collections_Generic_List_ControlAction__o *__this_02;
  
  if ((DAT_045660c8 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_MenuItemButton_GEHOKJMPPNP_NJPJDHFDCFI__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_MenuItemButton_GEHOKJMPPNP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlAction>_Find__);
    FUN_01bab630(&System_Predicate<ControlAction>_TypeInfo);
    DAT_045660c8 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_MenuItemButton_GEHOKJMPPNP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = GJKJICHICFN;
    __this_02 = (__this->fields).controls;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<ControlAction>_TypeInfo);
                    /* try { // try from 03194dd0 to 03294e03 has its CatchHandler @ 03194f14 */
    System_Predicate<object>___ctor();
    if (__this_02 != (System_Collections_Generic_List_ControlAction__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_02,match,
                             Method_System_Collections_Generic_List<ControlAction>_Find__);
      if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *)0x0) {
                    /* try { // try from 03194e04 to 03294e07 has its CatchHandler @ 03194e48 */
                    /* try { // try from 03194e08 to 03294e0f has its CatchHandler @ 03194e5c */
        Nekki_SF2_GUI_GeneralMenu_ControlAction__HCBAKFNPGDN(__this_01,(MethodInfo *)0x0);
        return;
      }
                    /* try { // try from 03194e10 to 03294e17 has its CatchHandler @ 03194e44 */
                    /* try { // try from 03194e18 to 03294e1b has its CatchHandler @ 03194e3c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03194e1c to 03294e1f has its CatchHandler @ 03194474 */
  FUN_01bab8c8();
}


// ===== protected virtual void OnEnable()  [RVA 0x3094E28]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnEnable @ RVA 0x3094E28

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* catch() { ... } // from try @ 03194ce8 with catch @ 03194e2c */
                    /* catch() { ... } // from try @ 03194e20 with catch @ 03194e38 */
                    /* catch() { ... } // from try @ 03194e18 with catch @ 03194e3c */
                    /* catch() { ... } // from try @ 03194c4c with catch @ 03194e40 */
                    /* catch() { ... } // from try @ 03194e10 with catch @ 03194e44 */
  if ((DAT_045660c9 & 1) == 0) {
                    /* catch() { ... } // from try @ 03194e04 with catch @ 03194e48 */
                    /* catch() { ... } // from try @ 03194c00 with catch @ 03194e4c */
                    /* catch() { ... } // from try @ 03194938 with catch @ 03194e50
                       catch() { ... } // from try @ 03194970 with catch @ 03194e50 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 03194870 with catch @ 03194e54 */
                    /* catch() { ... } // from try @ 031948e4 with catch @ 03194e58 */
                    /* catch() { ... } // from try @ 03194e08 with catch @ 03194e5c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03194888 with catch @ 03194e64
                       catch() { ... } // from try @ 03194954 with catch @ 03194e64 */
    DAT_045660c9 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03194838 with catch @ 03194e68 */
                    /* catch() { ... } // from try @ 031947d4 with catch @ 03194e6c */
  pNVar2 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03194e88 to 03294e8b has its CatchHandler @ 03194e98 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._label;
                    /* catch() { ... } // from try @ 03194e88 with catch @ 03194e98 */
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                ((Nekki_SF2_GUI_TextPic_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03194ed8 to 03294eff has its CatchHandler @ 03194f14 */
  return;
}


// ===== protected virtual void OnDisable()  [RVA 0x3094EE8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnDisable @ RVA 0x3094EE8

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnDisable
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* try { // try from 03194f00 to 03294f0b has its CatchHandler @ 03194474 */
  if ((DAT_045660ca & 1) == 0) {
                    /* try { // try from 03194f0c to 03294f13 has its CatchHandler @ 03194f14 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 03194dd0 with catch @ 03194f14
                       catch() { ... } // from try @ 03194ed8 with catch @ 03194f14
                       catch() { ... } // from try @ 03194f0c with catch @ 03194f14 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660ca = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._label;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                ((Nekki_SF2_GUI_TextPic_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public virtual void UpdateKunai()  [RVA 0x3094FA8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$UpdateKunai @ RVA 0x3094FA8

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__UpdateKunai
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045660cb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660cb = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._label;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03195124;
    fVar5 = (pNVar3->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
    pUVar4 = (__this->fields)._leftKunai;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar5 = fVar5 + fVar5;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar4 = (__this->fields)._leftKunai;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03195124;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._leftKunai;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_03195124;
      UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03195124;
      UVar6.fields.x = fVar5 * -0.5;
      UVar6.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar4,UVar6,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields)._rightKunai;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar4 = (__this->fields)._rightKunai;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._rightKunai;
        if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
          value.fields.y = UVar6.fields.y;
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            value.fields.x = fVar5 * 0.5;
            value.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(pUVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
LAB_03195124:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void SetAlias(string EHNFGMGKCHO)  [RVA 0x3093CD8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$SetAlias @ RVA 0x3093CD8

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__SetAlias
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._label;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,EHNFGMGKCHO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void TapAnimation()  [RVA 0x3095128]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TapAnimation @ RVA 0x3095128

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapAnimation
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  Il2CppObject *t_00;
  
  if ((DAT_045660cc & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045660cc = 1;
  }
  target = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  t = DG_Tweening_ShortcutExtensions__DOScale(target,1.1,0.08,(MethodInfo *)0x0);
  t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                   ((Il2CppObject *)t,2,1,
                    Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                   );
  DG_Tweening_TweenSettingsExtensions__SetEase<object>
            (t_00,0x23,
             Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
            );
  return;
}


// ===== public void TapLeftKunaiAnimation()  [RVA 0x30951C0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TapLeftKunaiAnimation @ RVA 0x30951C0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapLeftKunaiAnimation
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  
  if ((DAT_045660cd & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045660cd = 1;
  }
  t = DG_Tweening_ShortcutExtensions__DOScale
                ((__this->fields)._leftKunai,1.2,0.08,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__SetLoops<object>
            ((Il2CppObject *)t,2,1,
             Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
            );
  return;
}


// ===== public void TapRightKunaiAnimation()  [RVA 0x3095228]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TapRightKunaiAnimation @ RVA 0x3095228

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapRightKunaiAnimation
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  
  if ((DAT_045660ce & 1) == 0) {
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045660ce = 1;
  }
  t = DG_Tweening_ShortcutExtensions__DOScale
                ((__this->fields)._rightKunai,1.2,0.08,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__SetLoops<object>
            ((Il2CppObject *)t,2,1,
             Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
            );
  return;
}


// ===== public void .ctor()  [RVA 0x3095290]
// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$.ctor @ RVA 0x3095290

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ControlAction__o *__this_00;
  System_Collections_Generic_List_ControlAction__o **ppSVar1;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_FEEECOADFNH__o **ppSVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_045660cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlAction>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FEEECOADFNH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ControlAction>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FEEECOADFNH>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_045660cf = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ControlAction__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ControlAction>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ControlAction>__ctor__);
  ppSVar1 = &(__this->fields).controls;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FEEECOADFNH>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this_01,Method_System_Collections_Generic_List<FEEECOADFNH>__ctor__);
  ppSVar2 = &(__this->fields).hints;
  *ppSVar2 = (System_Collections_Generic_List_FEEECOADFNH__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).BMLJIHKIHNL;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).NFLKCFKIBAD;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).LCJGCOJKLED;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).NPJBAPNBCGD;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).OEBMLKJADCA;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

