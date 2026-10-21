// TypeDefIndex 1179
// Namespace: Nekki.SF2.GUI.Profile
// public class TrickCell : ProfileCell
// Fields:
//   private TrickSubItem _trickSubItem; // 0x48

// ===== protected override void OnDestroy()  [RVA 0x310C9B4]
// Nekki.SF2.GUI.Profile.TrickCell$$OnDestroy @ RVA 0x310C9B4

void Nekki_SF2_GUI_Profile_TrickCell__OnDestroy
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TrickSubItem_o *__this_00;
  
  Nekki_SF2_GUI_TableViewCell__OnDestroy((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._trickSubItem;
  if (__this_00 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override SubItem get_MainSubItem()  [RVA 0x310C9DC]
// Nekki.SF2.GUI.Profile.TrickCell$$get_MainSubItem @ RVA 0x310C9DC

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_TrickCell__get_MainSubItem
          (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  return (Nekki_SF2_GUI_Profile_SubItem_o *)(__this->fields)._trickSubItem;
}


// ===== private void HJKLMBOACHH()  [RVA 0x310C9E4]
// Nekki.SF2.GUI.Profile.TrickCell$$HJKLMBOACHH @ RVA 0x310C9E4

void Nekki_SF2_GUI_Profile_TrickCell__HJKLMBOACHH
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04566552 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566552 = 1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).super.super.DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).super.super.FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}


// ===== public override void UpdateState()  [RVA 0x310CA40]
// Nekki.SF2.GUI.Profile.TrickCell$$UpdateState @ RVA 0x310CA40

void Nekki_SF2_GUI_Profile_TrickCell__UpdateState
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TrickSubItem_o *pNVar1;
  
  pNVar1 = (__this->fields)._trickSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0320ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._58_UpdateState.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._58_UpdateState.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x310CA64]
// Nekki.SF2.GUI.Profile.TrickCell$$.ctor @ RVA 0x310CA64

void Nekki_SF2_GUI_Profile_TrickCell___ctor
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ProfileCell___ctor
            ((Nekki_SF2_GUI_Profile_ProfileCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(KCLPNDAPADO EKBENIDNAEE, JEIEEMKCNOJ JJHEGPBBMLG)  [RVA 0x310CA6C]
// Nekki.SF2.GUI.Profile.TrickCell$$Init @ RVA 0x310CA6C

void Nekki_SF2_GUI_Profile_TrickCell__Init
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,KCLPNDAPADO_o *EKBENIDNAEE,
               JEIEEMKCNOJ_o *JJHEGPBBMLG,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_TrickSubItem_o *__this_00;
  MethodInfo *method_00;
  JEIEEMKCNOJ_o **ppJVar1;
  
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
  Nekki_SF2_GUI_Profile_TrickCell__GJNMBGMOEHH(__this,method_00);
  ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
  *ppJVar1 = JJHEGPBBMLG;
  thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
  if ((EKBENIDNAEE != (KCLPNDAPADO_o *)0x0) &&
     (__this_00 = (__this->fields)._trickSubItem,
     __this_00 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0)) {
    Nekki_SF2_GUI_Profile_TrickSubItem__Init
              (__this_00,(EKBENIDNAEE->fields).KPDPJONADPJ,EKBENIDNAEE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Clear()  [RVA 0x310CBFC]
// Nekki.SF2.GUI.Profile.TrickCell$$Clear @ RVA 0x310CBFC

void Nekki_SF2_GUI_Profile_TrickCell__Clear
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void GJNMBGMOEHH()  [RVA 0x310CAD4]
// Nekki.SF2.GUI.Profile.TrickCell$$GJNMBGMOEHH @ RVA 0x310CAD4

void Nekki_SF2_GUI_Profile_TrickCell__GJNMBGMOEHH
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_Profile_TrickSubItem_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04566553 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_TrickCell_HJKLMBOACHH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566553 = 1;
  }
  pNVar3 = (__this->fields)._trickSubItem;
  if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
    (pNVar3->fields).super.PEJMMOONAHC = (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.PEJMMOONAHC,__this);
    pNVar3 = (__this->fields)._trickSubItem;
    if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar1,0.0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._trickSubItem;
      if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
        pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar1,-240.0,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._trickSubItem;
        if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
          pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar3->fields).super.super.super.m_OnClick;
          pUVar2 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__RemoveListener(pUVar4,pUVar2,(MethodInfo *)0x0);
            pNVar3 = (__this->fields)._trickSubItem;
            if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) {
              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                       (pNVar3->fields).super.super.super.m_OnClick;
              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                return;
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

