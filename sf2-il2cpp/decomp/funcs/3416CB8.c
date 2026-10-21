// Nekki.SF2.GUI.Common.SectionButton$$KMPFBOJANME @ RVA 0x3416CB8

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Common_SectionButton__KMPFBOJANME
               (Nekki_SF2_GUI_Common_SectionButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar2;
  UnityEngine_Object_o *pUVar3;
  MethodInfo *in_x2;
  MethodInfo *pMVar4;
  UnityEngine_Object_o *local_40;
  UnityEngine_Object_o *pUStack_38;
  UnityEngine_Sprite_o *pUStack_30;
  UnityEngine_Object_o *local_28;
  
  pNVar2 = __this;
  if ((DAT_045680a7 & 1) == 0) {
    pNVar2 = (Nekki_SF2_GUI_Common_SectionButton_o *)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045680a7 = 1;
  }
  pUStack_38 = *(UnityEngine_Object_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 8);
  local_40 = (UnityEngine_Object_o *)
             (__this->fields).super.super.super.super.m_SpriteState.fields.m_HighlightedSprite;
  local_28 = *(UnityEngine_Object_o **)
              ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 0x18);
  pUStack_30 = *(UnityEngine_Sprite_o **)
                ((long)&(__this->fields).super.super.super.super.m_SpriteState.fields + 0x10);
  pUVar3 = (UnityEngine_Object_o *)
           Nekki_SF2_GUI_Common_SectionButton__NECCNHODCAE
                     (pNVar2,(UnityEngine_Sprite_o *)local_40,in_x2);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Common_SectionButton_o *)(ulong)bVar1;
  if (bVar1) {
    local_40 = pUVar3;
    pNVar2 = (Nekki_SF2_GUI_Common_SectionButton_o *)thunk_FUN_01c20e04(&local_40,pUVar3);
  }
  pUVar3 = (UnityEngine_Object_o *)
           Nekki_SF2_GUI_Common_SectionButton__NECCNHODCAE
                     (pNVar2,(UnityEngine_Sprite_o *)local_28,pMVar4);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Common_SectionButton_o *)(ulong)bVar1;
  if (bVar1) {
    local_28 = pUVar3;
    pNVar2 = (Nekki_SF2_GUI_Common_SectionButton_o *)thunk_FUN_01c20e04(&local_28,pUVar3);
  }
  pUVar3 = (UnityEngine_Object_o *)
           Nekki_SF2_GUI_Common_SectionButton__NECCNHODCAE
                     (pNVar2,(UnityEngine_Sprite_o *)pUStack_38,pMVar4);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUStack_38 = pUVar3;
    thunk_FUN_01c20e04((ulong)&local_40 | 8,pUVar3);
  }
  (__this->fields).DIBFLCCIPOG = true;
  return;
}

