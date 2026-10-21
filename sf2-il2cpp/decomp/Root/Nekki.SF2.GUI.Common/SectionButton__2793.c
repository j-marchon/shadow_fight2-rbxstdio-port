// TypeDefIndex 2793
// Namespace: Nekki.SF2.GUI.Common
// public class SectionButton : ResolutionButton
// Fields:
//   private Indicator _NewItemsIndicator; // 0x1A8
//   private bool DIBFLCCIPOG; // 0x1B0

// ===== private Sprite NECCNHODCAE(Sprite AHDLJIHNKIO)  [RVA 0x3416B4C]
// Nekki.SF2.GUI.Common.SectionButton$$NECCNHODCAE @ RVA 0x3416B4C

UnityEngine_Sprite_o *
Nekki_SF2_GUI_Common_SectionButton__NECCNHODCAE
          (Nekki_SF2_GUI_Common_SectionButton_o *__this,UnityEngine_Sprite_o *AHDLJIHNKIO,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *HCAAAAMDCNO;
  UnityEngine_Object_o *x;
  
  if ((DAT_045680a6 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680a6 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)AHDLJIHNKIO,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (AHDLJIHNKIO == (UnityEngine_Sprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HCAAAAMDCNO = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)AHDLJIHNKIO,(MethodInfo *)0x0);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
    x = (UnityEngine_Object_o *)
        KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1/*""*/,HCAAAAMDCNO,false,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)AHDLJIHNKIO,x,(MethodInfo *)0x0);
      if (bVar1) {
        return (UnityEngine_Sprite_o *)x;
      }
    }
  }
  return (UnityEngine_Sprite_o *)0x0;
}


// ===== public void .ctor()  [RVA 0x3416C70]
// Nekki.SF2.GUI.Common.SectionButton$$.ctor @ RVA 0x3416C70

void Nekki_SF2_GUI_Common_SectionButton___ctor
               (Nekki_SF2_GUI_Common_SectionButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton___ctor
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void DoStateTransition(Selectable.SelectionState ICJLHMDFMKG, bool BAAOJPPLJGA)  [RVA 0x3416C78]
// Nekki.SF2.GUI.Common.SectionButton$$DoStateTransition @ RVA 0x3416C78

void Nekki_SF2_GUI_Common_SectionButton__DoStateTransition
               (Nekki_SF2_GUI_Common_SectionButton_o *__this,int32_t ICJLHMDFMKG,bool BAAOJPPLJGA,
               MethodInfo *method)

{
  if ((__this->fields).DIBFLCCIPOG == false) {
    Nekki_SF2_GUI_Common_SectionButton__KMPFBOJANME(__this,(MethodInfo *)(ulong)(uint)ICJLHMDFMKG);
  }
  SFButton__DoStateTransition((SFButton_o *)__this,ICJLHMDFMKG,BAAOJPPLJGA,(MethodInfo *)0x0);
  return;
}


// ===== public int get_NewItemsCount()  [RVA 0x3416DE4]
// Nekki.SF2.GUI.Common.SectionButton$$get_NewItemsCount @ RVA 0x3416DE4

int32_t Nekki_SF2_GUI_Common_SectionButton__get_NewItemsCount
                  (Nekki_SF2_GUI_Common_SectionButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *pNVar1;
  
  pNVar1 = (__this->fields)._NewItemsIndicator;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    return (pNVar1->fields).ONCKKFAODHL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KMPFBOJANME()  [RVA 0x3416CB8]
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


// ===== public void set_NewItemsCount(int CJNHFNHJHPE)  [RVA 0x3416E00]
// Nekki.SF2.GUI.Common.SectionButton$$set_NewItemsCount @ RVA 0x3416E00

void Nekki_SF2_GUI_Common_SectionButton__set_NewItemsCount
               (Nekki_SF2_GUI_Common_SectionButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  
  __this_00 = (__this->fields)._NewItemsIndicator;
  if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    Nekki_SF2_GUI_Common_Indicator__set_State(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

