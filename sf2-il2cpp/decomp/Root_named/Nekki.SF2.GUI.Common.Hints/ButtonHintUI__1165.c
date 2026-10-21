// TypeDefIndex 1165
// Namespace: Nekki.SF2.GUI.Common.Hints
// [ExecuteInEditMode]
// public class ButtonHintUI : MonoBehaviour
// Fields:
//   private ResolutionImage _HintIcon; // 0x20
//   private MIBHAJBEMIK _ID; // 0x28

// ===== public void set_ID(MIBHAJBEMIK CJNHFNHJHPE)  [RVA 0x31047A8]
// Nekki.SF2.GUI.Common.Hints.ButtonHintUI$$set_ID @ RVA 0x31047A8

void Nekki_SF2_GUI_Common_Hints_ButtonHintUI__set_ID
               (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._ID = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_ButtonHintUI__FCPCGKGHBBL
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== private void Awake()  [RVA 0x3104850]
// Nekki.SF2.GUI.Common.Hints.ButtonHintUI$$Awake @ RVA 0x3104850

void Nekki_SF2_GUI_Common_Hints_ButtonHintUI__Awake
               (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_045664e5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664e5 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._HintIcon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) &&
     (bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0), !bVar1)
     ) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public ResolutionImage get_HintIcon()  [RVA 0x3104854]
// Nekki.SF2.GUI.Common.Hints.ButtonHintUI$$get_HintIcon @ RVA 0x3104854

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_GUI_Common_Hints_ButtonHintUI__get_HintIcon
          (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._HintIcon;
}


// ===== public MIBHAJBEMIK get_ID()  [RVA 0x310485C]
// Nekki.SF2.GUI.Common.Hints.ButtonHintUI$$get_ID @ RVA 0x310485C

int32_t Nekki_SF2_GUI_Common_Hints_ButtonHintUI__get_ID
                  (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._ID;
}


// ===== private void FCPCGKGHBBL()  [RVA 0x31047B0]
// Nekki.SF2.GUI.Common.Hints.ButtonHintUI$$FCPCGKGHBBL @ RVA 0x31047B0

void Nekki_SF2_GUI_Common_Hints_ButtonHintUI__FCPCGKGHBBL
               (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_045664e5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664e5 = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._HintIcon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) &&
     (bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0), !bVar1)
     ) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3104864]
// Nekki.SF2.GUI.Common.Hints.ButtonHintUI$$.ctor @ RVA 0x3104864

void Nekki_SF2_GUI_Common_Hints_ButtonHintUI___ctor
               (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

