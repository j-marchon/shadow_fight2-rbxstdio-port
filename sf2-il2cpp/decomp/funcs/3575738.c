// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$.ctor @ RVA 0x3575738

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass___ctor
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  if ((DAT_04568c81 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04568c81 = 1;
  }
  (__this->fields).AIFCDABONKN = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

