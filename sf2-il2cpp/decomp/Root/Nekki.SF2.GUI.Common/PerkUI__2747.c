// TypeDefIndex 2747
// Namespace: Nekki.SF2.GUI.Common
// public class PerkUI : MonoBehaviour, IKIHIGCOLOF
// Fields:
//   private ResolutionImage _Icon; // 0x20
//   private TouchHandler _Button; // 0x28
//   public string Atlas; // 0x30
//   private HEFOANCOHDC OFLJEENFLDG; // 0x38

// ===== public void .ctor()  [RVA 0x33F5AC8]
// Nekki.SF2.GUI.Common.PerkUI$$.ctor @ RVA 0x33F5AC8

void Nekki_SF2_GUI_Common_PerkUI___ctor(Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  if ((DAT_04567f90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567f90 = 1;
  }
  (__this->fields).Atlas = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public TouchHandler get_Button()  [RVA 0x33F5B20]
// Nekki.SF2.GUI.Common.PerkUI$$get_Button @ RVA 0x33F5B20

Nekki_SF2_GUI_Common_TouchHandler_o *
Nekki_SF2_GUI_Common_PerkUI__get_Button(Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._Button;
}


// ===== private GameObject FHAMIBNCNHI()  [RVA 0x33F5B28]
// Nekki.SF2.GUI.Common.PerkUI$$FHAMIBNCNHI @ RVA 0x33F5B28

UnityEngine_GameObject_o *
Nekki_SF2_GUI_Common_PerkUI__FHAMIBNCNHI(Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  return pUVar1;
}


// ===== public HEFOANCOHDC get_Perk()  [RVA 0x33F5B30]
// Nekki.SF2.GUI.Common.PerkUI$$get_Perk @ RVA 0x33F5B30

HEFOANCOHDC_o *
Nekki_SF2_GUI_Common_PerkUI__get_Perk(Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  return (__this->fields).OFLJEENFLDG;
}


// ===== public float get_Alpha()  [RVA 0x33F5B38]
// Nekki.SF2.GUI.Common.PerkUI$$get_Alpha @ RVA 0x33F5B38

float Nekki_SF2_GUI_Common_PerkUI__get_Alpha
                (Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._Icon;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_ResolutionImage__get_Alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Alpha(float CJNHFNHJHPE)  [RVA 0x33F5B54]
// Nekki.SF2.GUI.Common.PerkUI$$set_Alpha @ RVA 0x33F5B54

void Nekki_SF2_GUI_Common_PerkUI__set_Alpha
               (Nekki_SF2_GUI_Common_PerkUI_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  __this_00 = (__this->fields)._Icon;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_Alpha(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LPNCEHPFOAF()  [RVA 0x33F5B70]
// Nekki.SF2.GUI.Common.PerkUI$$LPNCEHPFOAF @ RVA 0x33F5B70

void Nekki_SF2_GUI_Common_PerkUI__LPNCEHPFOAF
               (Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *GKNNFJNBCNB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  HEFOANCOHDC_o *pHVar2;
  float CJNHFNHJHPE;
  
  if ((DAT_04567f91 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f91 = 1;
    method = extraout_x1;
  }
  pHVar2 = (__this->fields).OFLJEENFLDG;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo,method);
  }
  GKNNFJNBCNB = KKCBGIBKOCP__LFEHBAMJCMH(pHVar2,(MethodInfo *)0x0);
  KKCBGIBKOCP__PFJIHMIKHNL
            ((__this->fields)._Icon,(__this->fields).Atlas,GKNNFJNBCNB,(MethodInfo *)0x0);
  pHVar2 = (__this->fields).OFLJEENFLDG;
  if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
    __this_00 = (__this->fields)._Icon;
    CJNHFNHJHPE = 1.0;
    if ((pHVar2->fields).OCABLLPNEGL == 0) {
      method_00 = extraout_x1_00;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      bVar1 = MGNPHCAAEIO__DODJBGHCIHD(pHVar2,method_00);
      CJNHFNHJHPE = 1.0;
      if (!bVar1) {
        CJNHFNHJHPE = 0.5;
      }
    }
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnReturnToPool()  [RVA 0x33F5DCC]
// Nekki.SF2.GUI.Common.PerkUI$$OnReturnToPool @ RVA 0x33F5DCC

void Nekki_SF2_GUI_Common_PerkUI__OnReturnToPool
               (Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar1;
  
  pNVar1 = (__this->fields)._Button;
  if ((pNVar1 != (Nekki_SF2_GUI_Common_TouchHandler_o *)0x0) &&
     (__this_00 = (pNVar1->fields).OMEOMGINDAD, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Perk(HEFOANCOHDC CJNHFNHJHPE)  [RVA 0x33F5DF0]
// Nekki.SF2.GUI.Common.PerkUI$$set_Perk @ RVA 0x33F5DF0

void Nekki_SF2_GUI_Common_PerkUI__set_Perk
               (Nekki_SF2_GUI_Common_PerkUI_o *__this,HEFOANCOHDC_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).OFLJEENFLDG != CJNHFNHJHPE) {
    (__this->fields).OFLJEENFLDG = CJNHFNHJHPE;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Common_PerkUI__LPNCEHPFOAF(__this,method_00);
    return;
  }
  return;
}

