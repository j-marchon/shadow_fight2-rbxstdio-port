// TypeDefIndex 968
// Namespace: Nekki.SF2.GUI.Pvp
// public class PhaseItem : MonoBehaviour
// Fields:
//   private ResolutionImage icon; // 0x20
//   private Sprite InactiveIcon; // 0x28
//   private Sprite ActiveIcon; // 0x30
//   protected AMJPDLOCCNP EMNHJBCKBKC; // 0x38
//   protected BNAIBAODKAK KPLEAGPMKFD; // 0x40

// ===== protected bool FPBFCPPDGNI()  [RVA 0x30B09F0]
// Nekki.SF2.GUI.Pvp.PhaseItem$$FPBFCPPDGNI @ RVA 0x30B09F0

bool Nekki_SF2_GUI_Pvp_PhaseItem__FPBFCPPDGNI
               (Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Init(AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x30B0A10]
// Nekki.SF2.GUI.Pvp.PhaseItem$$Init @ RVA 0x30B0A10

void Nekki_SF2_GUI_Pvp_PhaseItem__Init
               (Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  (__this->fields).EMNHJBCKBKC = HEHMPFLAEGE;
  return;
}


// ===== public virtual void Hide()  [RVA 0x30B0A18]
// Nekki.SF2.GUI.Pvp.PhaseItem$$Hide @ RVA 0x30B0A18

void Nekki_SF2_GUI_Pvp_PhaseItem__Hide(Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields).icon;
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                ((UnityEngine_UI_Image_o *)__this_01,(__this->fields).InactiveIcon,(MethodInfo *)0x0
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Show()  [RVA 0x30B0A54]
// Nekki.SF2.GUI.Pvp.PhaseItem$$Show @ RVA 0x30B0A54

void Nekki_SF2_GUI_Pvp_PhaseItem__Show(Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields).icon;
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_sprite
                ((UnityEngine_UI_Image_o *)__this_01,(__this->fields).ActiveIcon,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031b0a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._9_UpdateContent.methodPtr)
                (__this,(__this->klass->vtable)._9_UpdateContent.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void Free()  [RVA 0x30B0AA0]
// Nekki.SF2.GUI.Pvp.PhaseItem$$Free @ RVA 0x30B0AA0

void Nekki_SF2_GUI_Pvp_PhaseItem__Free(Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void ChangeCharacter(BNAIBAODKAK CJDCMKEBBNK)  [RVA 0x30B0AA4]
// Nekki.SF2.GUI.Pvp.PhaseItem$$ChangeCharacter @ RVA 0x30B0AA4

void Nekki_SF2_GUI_Pvp_PhaseItem__ChangeCharacter
               (Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,BNAIBAODKAK_o *CJDCMKEBBNK,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  (__this->fields).KPLEAGPMKFD = CJDCMKEBBNK;
  thunk_FUN_01c20e04();
  bVar1 = Nekki_SF2_GUI_Pvp_PhaseItem__FPBFCPPDGNI(__this,method_00);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x031b0ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._9_UpdateContent.methodPtr)
              (__this,(__this->klass->vtable)._9_UpdateContent.method);
    return;
  }
  return;
}


// ===== public virtual void UpdateContent()  [RVA 0x30B0ADC]
// Nekki.SF2.GUI.Pvp.PhaseItem$$UpdateContent @ RVA 0x30B0ADC

void Nekki_SF2_GUI_Pvp_PhaseItem__UpdateContent
               (Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x30B0AE0]
// Nekki.SF2.GUI.Pvp.PhaseItem$$.ctor @ RVA 0x30B0AE0

void Nekki_SF2_GUI_Pvp_PhaseItem___ctor(Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

