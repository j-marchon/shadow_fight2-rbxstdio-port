// TypeDefIndex 538
// Namespace: Nekki.SF2.GUI.Profile
// public class AchievementCell : ProfileCell
// Fields:
//   private AchievementSubItem achievSubItem; // 0x48

// ===== public void Init(KMJDCOABCCG IHEPDIFDBGK, int MLNEFBDGKEK, JEIEEMKCNOJ JJHEGPBBMLG)  [RVA 0x359ACD8]
// Nekki.SF2.GUI.Profile.AchievementCell$$Init @ RVA 0x359ACD8

void Nekki_SF2_GUI_Profile_AchievementCell__Init
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,KMJDCOABCCG_o *IHEPDIFDBGK,
               int32_t MLNEFBDGKEK,JEIEEMKCNOJ_o *JJHEGPBBMLG,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this_00;
  MethodInfo *method_00;
  JEIEEMKCNOJ_o **ppJVar1;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369acc0 with catch @ 0369acdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0369acd4 with catch @ 0369acdc
                        */
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
  Nekki_SF2_GUI_Profile_AchievementCell__GJNMBGMOEHH(__this,method_00);
  ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
  *ppJVar1 = JJHEGPBBMLG;
  thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
  __this_00 = (__this->fields).achievSubItem;
  if (__this_00 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
    Nekki_SF2_GUI_Profile_AchievementSubItem__Init
              (__this_00,IHEPDIFDBGK,(float)MLNEFBDGKEK,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GJNMBGMOEHH()  [RVA 0x359AD48]
// Nekki.SF2.GUI.Profile.AchievementCell$$GJNMBGMOEHH @ RVA 0x359AD48

void Nekki_SF2_GUI_Profile_AchievementCell__GJNMBGMOEHH
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04568dc1 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_AchievementCell_HJKLMBOACHH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568dc1 = 1;
  }
  pNVar3 = (__this->fields).achievSubItem;
  if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
    (pNVar3->fields).super.PEJMMOONAHC = (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.PEJMMOONAHC,__this);
    pNVar3 = (__this->fields).achievSubItem;
    if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar1,0.0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).achievSubItem;
      if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
        pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar1,-240.0,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).achievSubItem;
        if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
          pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar3->fields).super.super.super.m_OnClick;
          pUVar2 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__RemoveListener(pUVar4,pUVar2,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).achievSubItem;
            if (pNVar3 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
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


// ===== private void HJKLMBOACHH()  [RVA 0x359AE70]
// Nekki.SF2.GUI.Profile.AchievementCell$$HJKLMBOACHH @ RVA 0x359AE70

void Nekki_SF2_GUI_Profile_AchievementCell__HJKLMBOACHH
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04568dc2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04568dc2 = 1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).super.super.DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).super.super.FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
                    /* try { // try from 0369aec8 to 0379b247 has its CatchHandler @ 0369aec8
                       catch() { ... } // from try @ 0369aec8 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b270 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b608 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b630 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b670 with catch @ 0369aec8 */
  return;
}


// ===== public AchievementSubItem get_AchievSubItem()  [RVA 0x359AECC]
// Nekki.SF2.GUI.Profile.AchievementCell$$get_AchievSubItem @ RVA 0x359AECC

Nekki_SF2_GUI_Profile_AchievementSubItem_o *
Nekki_SF2_GUI_Profile_AchievementCell__get_AchievSubItem
          (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  return (__this->fields).achievSubItem;
}


// ===== public override void UpdateState()  [RVA 0x359AED4]
// Nekki.SF2.GUI.Profile.AchievementCell$$UpdateState @ RVA 0x359AED4

void Nekki_SF2_GUI_Profile_AchievementCell__UpdateState
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *pNVar1;
  
  pNVar1 = (__this->fields).achievSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0369aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._58_UpdateState.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._58_UpdateState.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x359AEF8]
// Nekki.SF2.GUI.Profile.AchievementCell$$.ctor @ RVA 0x359AEF8

void Nekki_SF2_GUI_Profile_AchievementCell___ctor
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ProfileCell___ctor
            ((Nekki_SF2_GUI_Profile_ProfileCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override SubItem get_MainSubItem()  [RVA 0x359AF00]
// Nekki.SF2.GUI.Profile.AchievementCell$$get_MainSubItem @ RVA 0x359AF00

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_AchievementCell__get_MainSubItem
          (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  return (Nekki_SF2_GUI_Profile_SubItem_o *)(__this->fields).achievSubItem;
}


// ===== protected override void OnDestroy()  [RVA 0x359AF08]
// Nekki.SF2.GUI.Profile.AchievementCell$$OnDestroy @ RVA 0x359AF08

void Nekki_SF2_GUI_Profile_AchievementCell__OnDestroy
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *__this_00;
  
  Nekki_SF2_GUI_TableViewCell__OnDestroy((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).achievSubItem;
  if (__this_00 != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Clear()  [RVA 0x359AF30]
// Nekki.SF2.GUI.Profile.AchievementCell$$Clear @ RVA 0x359AF30

void Nekki_SF2_GUI_Profile_AchievementCell__Clear
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  return;
}

