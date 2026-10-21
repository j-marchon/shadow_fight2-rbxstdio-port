// Nekki.SF2.GUI.ResolutionButton$$ADAMPGNKDKF @ RVA 0x30F4D4C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_ResolutionButton__ADAMPGNKDKF
               (Nekki_SF2_GUI_ResolutionButton_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  byte bVar3;
  Il2CppObject *__this_00;
  System_Action_Sprite__o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar5;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_UI_SpriteState_o local_90;
  Il2CppClass *local_70;
  UnityEngine_Sprite_o *pUStack_68;
  Il2CppClass *pIStack_60;
  UnityEngine_Sprite_o *pUStack_58;
  
  if ((DAT_04566447 & 1) == 0) {
    FUN_01bab630(&System_Action<Sprite>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ResolutionButton_EDANBDOBBGJ_BABNOMMODBD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ResolutionButton_EDANBDOBBGJ_CLIPLIKAIKK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ResolutionButton_EDANBDOBBGJ_NDFDCOLGPLD__);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionButton_EDANBDOBBGJ_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04566447 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_ResolutionButton_EDANBDOBBGJ_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields).super.super.super.m_TargetGraphic;
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((bVar3 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
      *(System_String_o **)&(__this_01->fields).super.m_PixelsPerUnitMultiplier =
           (__this->fields)._normalTexturePath;
      thunk_FUN_01c20e04(&(__this_01->fields).super.m_PixelsPerUnitMultiplier);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_01,(__this->fields)._normalSpriteName,(MethodInfo *)0x0);
    }
  }
  pUStack_68 = (__this->fields).super.super.super.m_SpriteState.fields.m_PressedSprite;
  local_70 = (Il2CppClass *)
             (__this->fields).super.super.super.m_SpriteState.fields.m_HighlightedSprite;
  pUStack_58 = (__this->fields).super.super.super.m_SpriteState.fields.m_DisabledSprite;
  pIStack_60 = (Il2CppClass *)
               (__this->fields).super.super.super.m_SpriteState.fields.m_SelectedSprite;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = pUStack_68;
    __this_00[1].klass = local_70;
    __this_00[2].monitor = pUStack_58;
    __this_00[2].klass = pIStack_60;
    thunk_FUN_01c20e04(__this_00 + 1,0);
    pSVar1 = (__this->fields)._disabledTexturePath;
    pSVar2 = (__this->fields)._disabledSpriteName;
    pSVar4 = (System_Action_Sprite__o *)thunk_FUN_01bda818(System_Action<Sprite>_TypeInfo);
    pMVar5 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    Nekki_SF2_GUI_ResolutionButton__LKIAIJLDEMF(pSVar1,pSVar2,pSVar4,pMVar5);
    pSVar1 = (__this->fields)._pressedTexturePath;
    pSVar2 = (__this->fields)._pressedSpriteName;
    pSVar4 = (System_Action_Sprite__o *)thunk_FUN_01bda818(System_Action<Sprite>_TypeInfo);
    pMVar5 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    Nekki_SF2_GUI_ResolutionButton__LKIAIJLDEMF(pSVar1,pSVar2,pSVar4,pMVar5);
    pSVar1 = (__this->fields)._highlightedTexturePath;
    pSVar2 = (__this->fields)._highlightedSpriteName;
    pSVar4 = (System_Action_Sprite__o *)thunk_FUN_01bda818(System_Action<Sprite>_TypeInfo);
    pMVar5 = (MethodInfo *)0x0;
    System_Action<object>___ctor();
    Nekki_SF2_GUI_ResolutionButton__LKIAIJLDEMF(pSVar1,pSVar2,pSVar4,pMVar5);
    local_90.fields.m_PressedSprite = __this_00[1].monitor;
    local_90.fields.m_HighlightedSprite = (UnityEngine_Sprite_o *)__this_00[1].klass;
    local_90.fields.m_DisabledSprite = __this_00[2].monitor;
    local_90.fields.m_SelectedSprite = (UnityEngine_Sprite_o *)__this_00[2].klass;
    UnityEngine_UI_Selectable__set_spriteState
              ((UnityEngine_UI_Selectable_o *)__this,&local_90,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

