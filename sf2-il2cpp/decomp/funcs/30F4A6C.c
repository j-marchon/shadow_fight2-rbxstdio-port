// Nekki.SF2.GUI.ResolutionButton$$SetAllSpritesAsNormal @ RVA 0x30F4A6C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_ResolutionButton__SetAllSpritesAsNormal
               (Nekki_SF2_GUI_ResolutionButton_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Sprite_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_UI_Graphic_o *pUVar5;
  UnityEngine_UI_SpriteState_o local_70;
  UnityEngine_Sprite_o *local_50;
  UnityEngine_Sprite_o *pUStack_48;
  UnityEngine_Sprite_o *pUStack_40;
  UnityEngine_Sprite_o *local_38;
  
  if ((DAT_04566444 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04566444 = 1;
  }
  pUStack_48 = (__this->fields).super.super.super.m_SpriteState.fields.m_PressedSprite;
  local_50 = (__this->fields).super.super.super.m_SpriteState.fields.m_HighlightedSprite;
  local_38 = (__this->fields).super.super.super.m_SpriteState.fields.m_DisabledSprite;
  pUStack_40 = (__this->fields).super.super.super.m_SpriteState.fields.m_SelectedSprite;
  pUVar5 = (__this->fields).super.super.super.m_TargetGraphic;
  if (pUVar5 != (UnityEngine_UI_Graphic_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pUVar5->klass->_2).naturalAligment) &&
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
      pSVar3 = *(System_String_o **)&pUVar5[1].fields.m_VertsDirty;
      pUVar2 = *(UnityEngine_Sprite_o **)&pUVar5[1].fields.m_Color.fields.b;
      (__this->fields)._pressedTexturePath = pSVar3;
      thunk_FUN_01c20e04(&(__this->fields)._pressedTexturePath,pSVar3);
      (__this->fields)._highlightedTexturePath = pSVar3;
      thunk_FUN_01c20e04(&(__this->fields)._highlightedTexturePath,pSVar3);
      (__this->fields)._disabledTexturePath = pSVar3;
      thunk_FUN_01c20e04(&(__this->fields)._disabledTexturePath,pSVar3);
      (__this->fields)._normalTexturePath = pSVar3;
      thunk_FUN_01c20e04(&(__this->fields)._normalTexturePath,pSVar3);
      pUVar4 = pUVar5[1].fields.m_OnDirtyLayoutCallback;
      (__this->fields)._pressedSpriteName = (System_String_o *)pUVar4;
      thunk_FUN_01c20e04(&(__this->fields)._pressedSpriteName,pUVar4);
      (__this->fields)._highlightedSpriteName = (System_String_o *)pUVar4;
      thunk_FUN_01c20e04(&(__this->fields)._highlightedSpriteName,pUVar4);
      (__this->fields)._disabledSpriteName = (System_String_o *)pUVar4;
      thunk_FUN_01c20e04(&(__this->fields)._disabledSpriteName,pUVar4);
      (__this->fields)._normalSpriteName = (System_String_o *)pUVar4;
      thunk_FUN_01c20e04(&(__this->fields)._normalSpriteName,pUVar4);
      pUStack_48 = pUVar2;
      thunk_FUN_01c20e04((ulong)&local_50 | 8,pUVar2);
      local_50 = pUVar2;
      thunk_FUN_01c20e04(&local_50,pUVar2);
      local_38 = pUVar2;
      thunk_FUN_01c20e04(&local_38,pUVar2);
      local_70.fields.m_PressedSprite = pUStack_48;
      local_70.fields.m_HighlightedSprite = local_50;
      local_70.fields.m_DisabledSprite = local_38;
      local_70.fields.m_SelectedSprite = pUStack_40;
      UnityEngine_UI_Selectable__set_spriteState
                ((UnityEngine_UI_Selectable_o *)__this,&local_70,(MethodInfo *)0x0);
    }
  }
  return;
}

