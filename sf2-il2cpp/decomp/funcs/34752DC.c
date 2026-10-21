// Nekki.SF2.GUI.Map.BattleButton$$OnPointerExit @ RVA 0x34752DC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Map_BattleButton__OnPointerExit
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_UI_SpriteState_o local_50;
  UnityEngine_Sprite_o *local_30;
  UnityEngine_Sprite_o *pUStack_28;
  UnityEngine_Sprite_o *pUStack_20;
  UnityEngine_Sprite_o *pUStack_18;
  
  UnityEngine_UI_Selectable__OnPointerExit
            ((UnityEngine_UI_Selectable_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  pUStack_28 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 8);
  pUStack_18 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 0x18);
  pUStack_20 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 0x10);
  local_30 = (UnityEngine_Sprite_o *)0x0;
  thunk_FUN_01c20e04(&local_30,0);
  local_50.fields.m_PressedSprite = pUStack_28;
  local_50.fields.m_HighlightedSprite = local_30;
  local_50.fields.m_DisabledSprite = pUStack_18;
  local_50.fields.m_SelectedSprite = pUStack_20;
  UnityEngine_UI_Selectable__set_spriteState
            ((UnityEngine_UI_Selectable_o *)__this,&local_50,(MethodInfo *)0x0);
  return;
}

