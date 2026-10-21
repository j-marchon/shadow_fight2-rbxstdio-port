// Nekki.SF2.GUI.ResolutionButton$$SetPressedSprite @ RVA 0x30F5108

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
               (Nekki_SF2_GUI_ResolutionButton_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  System_String_o *OOKEKJMFKPE_00;
  System_String_o *HCAAAAMDCNO_00;
  UnityEngine_UI_SpriteState_o local_70;
  UnityEngine_Sprite_o *local_50;
  UnityEngine_Sprite_o *pUStack_48;
  UnityEngine_Sprite_o *pUStack_40;
  UnityEngine_Sprite_o *pUStack_38;
  
  if ((DAT_0456644a & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_0456644a = 1;
  }
  (__this->fields)._pressedTexturePath = OOKEKJMFKPE;
  thunk_FUN_01c20e04(&(__this->fields)._pressedTexturePath,OOKEKJMFKPE);
  (__this->fields)._pressedSpriteName = HCAAAAMDCNO;
  thunk_FUN_01c20e04(&(__this->fields)._pressedSpriteName,HCAAAAMDCNO);
  pUStack_48 = (__this->fields).super.super.super.m_SpriteState.fields.m_PressedSprite;
  local_50 = (__this->fields).super.super.super.m_SpriteState.fields.m_HighlightedSprite;
  pUStack_38 = (__this->fields).super.super.super.m_SpriteState.fields.m_DisabledSprite;
  pUStack_40 = (__this->fields).super.super.super.m_SpriteState.fields.m_SelectedSprite;
  OOKEKJMFKPE_00 = (__this->fields)._pressedTexturePath;
  HCAAAAMDCNO_00 = (__this->fields)._pressedSpriteName;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUStack_48 = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE_00,HCAAAAMDCNO_00,false,(MethodInfo *)0x0);
  thunk_FUN_01c20e04((ulong)&local_50 | 8);
  local_70.fields.m_PressedSprite = pUStack_48;
  local_70.fields.m_HighlightedSprite = local_50;
  local_70.fields.m_DisabledSprite = pUStack_38;
  local_70.fields.m_SelectedSprite = pUStack_40;
  UnityEngine_UI_Selectable__set_spriteState
            ((UnityEngine_UI_Selectable_o *)__this,&local_70,(MethodInfo *)0x0);
  return;
}

