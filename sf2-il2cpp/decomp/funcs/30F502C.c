// Nekki.SF2.GUI.ResolutionButton$$SetDisabledSprite @ RVA 0x30F502C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
               (Nekki_SF2_GUI_ResolutionButton_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  System_String_o *OOKEKJMFKPE_00;
  System_String_o *HCAAAAMDCNO_00;
  UnityEngine_UI_SpriteState_o local_70;
  UnityEngine_Sprite_o *local_50;
  UnityEngine_Sprite_o *pUStack_48;
  UnityEngine_Sprite_o *local_40;
  UnityEngine_Sprite_o *local_38;
  
  if ((DAT_04566449 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04566449 = 1;
  }
  (__this->fields)._disabledTexturePath = OOKEKJMFKPE;
  thunk_FUN_01c20e04(&(__this->fields)._disabledTexturePath,OOKEKJMFKPE);
  (__this->fields)._disabledSpriteName = HCAAAAMDCNO;
  thunk_FUN_01c20e04(&(__this->fields)._disabledSpriteName,HCAAAAMDCNO);
  local_40 = (__this->fields).super.super.super.m_SpriteState.fields.m_SelectedSprite;
  pUStack_48 = (__this->fields).super.super.super.m_SpriteState.fields.m_PressedSprite;
  local_50 = (__this->fields).super.super.super.m_SpriteState.fields.m_HighlightedSprite;
  OOKEKJMFKPE_00 = (__this->fields)._disabledTexturePath;
  HCAAAAMDCNO_00 = (__this->fields)._disabledSpriteName;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_38 = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE_00,HCAAAAMDCNO_00,false,(MethodInfo *)0x0);
  thunk_FUN_01c20e04(&local_38);
  local_70.fields.m_PressedSprite = pUStack_48;
  local_70.fields.m_HighlightedSprite = local_50;
  local_70.fields.m_DisabledSprite = local_38;
  local_70.fields.m_SelectedSprite = local_40;
  UnityEngine_UI_Selectable__set_spriteState
            ((UnityEngine_UI_Selectable_o *)__this,&local_70,(MethodInfo *)0x0);
  return;
}

