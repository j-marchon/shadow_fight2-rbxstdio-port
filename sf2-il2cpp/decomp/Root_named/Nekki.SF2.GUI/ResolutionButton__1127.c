// TypeDefIndex 1127
// Namespace: Nekki.SF2.GUI
// [AddComponentMenu("UI_Nekki/ResolutionButton")]
// public class ResolutionButton : SFButton
// Fields:
//   private string _normalTexturePath; // 0x168
//   private string _normalSpriteName; // 0x170
//   private string _disabledTexturePath; // 0x178
//   private string _disabledSpriteName; // 0x180
//   private string _highlightedTexturePath; // 0x188
//   private string _highlightedSpriteName; // 0x190
//   private string _pressedTexturePath; // 0x198
//   private string _pressedSpriteName; // 0x1A0

// ===== public void SetAllSpritesAsNormal()  [RVA 0x30F4A6C]
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


// ===== internal static void LKIAIJLDEMF(string OOKEKJMFKPE, string HCAAAAMDCNO, Action<Sprite> KFPPFIGOKNI)  [RVA 0x30F4BD0]
// Nekki.SF2.GUI.ResolutionButton$$LKIAIJLDEMF @ RVA 0x30F4BD0

void Nekki_SF2_GUI_ResolutionButton__LKIAIJLDEMF
               (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,
               System_Action_Sprite__o *KFPPFIGOKNI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *pUVar2;
  
  if ((DAT_04566445 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04566445 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(HCAAAAMDCNO,(MethodInfo *)0x0);
  if ((KFPPFIGOKNI != (System_Action_Sprite__o *)0x0) && (!bVar1)) {
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,false,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031f4c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(KFPPFIGOKNI->fields).super.super.invoke_impl)
              ((KFPPFIGOKNI->fields).super.super.method_code,pUVar2,
               (KFPPFIGOKNI->fields).super.super.method);
    return;
  }
  return;
}


// ===== public void SetHighlightedSprite(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x30F4C7C]
// Nekki.SF2.GUI.ResolutionButton$$SetHighlightedSprite @ RVA 0x30F4C7C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
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
  
  if ((DAT_04566446 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04566446 = 1;
  }
  (__this->fields)._highlightedTexturePath = OOKEKJMFKPE;
  thunk_FUN_01c20e04(&(__this->fields)._highlightedTexturePath,OOKEKJMFKPE);
  (__this->fields)._highlightedSpriteName = HCAAAAMDCNO;
  thunk_FUN_01c20e04(&(__this->fields)._highlightedSpriteName,HCAAAAMDCNO);
  pUStack_48 = (__this->fields).super.super.super.m_SpriteState.fields.m_PressedSprite;
  local_50 = (__this->fields).super.super.super.m_SpriteState.fields.m_HighlightedSprite;
  pUStack_38 = (__this->fields).super.super.super.m_SpriteState.fields.m_DisabledSprite;
  pUStack_40 = (__this->fields).super.super.super.m_SpriteState.fields.m_SelectedSprite;
  OOKEKJMFKPE_00 = (__this->fields)._highlightedTexturePath;
  HCAAAAMDCNO_00 = (__this->fields)._highlightedSpriteName;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_50 = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE_00,HCAAAAMDCNO_00,false,(MethodInfo *)0x0);
  thunk_FUN_01c20e04(&local_50,local_50);
  local_70.fields.m_PressedSprite = pUStack_48;
  local_70.fields.m_HighlightedSprite = local_50;
  local_70.fields.m_DisabledSprite = pUStack_38;
  local_70.fields.m_SelectedSprite = pUStack_40;
  UnityEngine_UI_Selectable__set_spriteState
            ((UnityEngine_UI_Selectable_o *)__this,&local_70,(MethodInfo *)0x0);
  return;
}


// ===== private void ADAMPGNKDKF()  [RVA 0x30F4D4C]
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


// ===== public void SetNormalSprite(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x30F4F4C]
// Nekki.SF2.GUI.ResolutionButton$$SetNormalSprite @ RVA 0x30F4F4C

void Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
               (Nekki_SF2_GUI_ResolutionButton_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  byte bVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  if ((DAT_04566448 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04566448 = 1;
  }
  ppSVar1 = &(__this->fields)._normalTexturePath;
  (__this->fields)._normalTexturePath = OOKEKJMFKPE;
  thunk_FUN_01c20e04(ppSVar1,OOKEKJMFKPE);
  ppSVar2 = &(__this->fields)._normalSpriteName;
  (__this->fields)._normalSpriteName = HCAAAAMDCNO;
  thunk_FUN_01c20e04(ppSVar2,HCAAAAMDCNO);
  __this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields).super.super.super.m_TargetGraphic;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((bVar3 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
      *(System_String_o **)&(__this_00->fields).super.m_PixelsPerUnitMultiplier = *ppSVar1;
      thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,*ppSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x30F5024]
// Nekki.SF2.GUI.ResolutionButton$$.ctor @ RVA 0x30F5024

void Nekki_SF2_GUI_ResolutionButton___ctor
               (Nekki_SF2_GUI_ResolutionButton_o *__this,MethodInfo *method)

{
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetDisabledSprite(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x30F502C]
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


// ===== public void SetPressedSprite(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x30F5108]
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


// ===== protected override void Awake()  [RVA 0x30F51DC]
// Nekki.SF2.GUI.ResolutionButton$$Awake @ RVA 0x30F51DC

void Nekki_SF2_GUI_ResolutionButton__Awake
               (Nekki_SF2_GUI_ResolutionButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Graphic_o *pUVar2;
  
  if ((DAT_0456644b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456644b = 1;
  }
  SFButton__Awake((SFButton_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).super.super.super.m_TargetGraphic;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar2 = (UnityEngine_UI_Graphic_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<ResolutionImage>__);
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this,pUVar2,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  (__this->fields).super._EnableClickAnimation = false;
  Nekki_SF2_GUI_ResolutionButton__ADAMPGNKDKF(__this,method_00);
  return;
}

