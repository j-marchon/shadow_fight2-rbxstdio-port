// Nekki.SF2.GUI.Map.BattleButton$$SetActiveBattle @ RVA 0x3474C14

void Nekki_SF2_GUI_Map_BattleButton__SetActiveBattle
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,bool OPNIEBGMEPI,MethodInfo *method)

{
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this,(bool)(~OPNIEBGMEPI & 1),(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,2,(MethodInfo *)0x0);
  return;
}

