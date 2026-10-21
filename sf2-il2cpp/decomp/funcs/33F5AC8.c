// Nekki.SF2.GUI.Common.PerkUI$$.ctor @ RVA 0x33F5AC8

void Nekki_SF2_GUI_Common_PerkUI___ctor(Nekki_SF2_GUI_Common_PerkUI_o *__this,MethodInfo *method)

{
  if ((DAT_04567f90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567f90 = 1;
  }
  (__this->fields).Atlas = StringLiteral_1;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

