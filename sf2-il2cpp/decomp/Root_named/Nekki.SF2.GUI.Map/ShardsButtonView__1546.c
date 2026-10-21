// TypeDefIndex 1546
// Namespace: Nekki.SF2.GUI.Map
// public class ShardsButtonView : MapButtonViewBase
// Fields:

// ===== protected override void DFAIHDKINDN()  [RVA 0x31A9478]
// Nekki.SF2.GUI.Map.ShardsButtonView$$DFAIHDKINDN @ RVA 0x31A9478

void Nekki_SF2_GUI_Map_ShardsButtonView__DFAIHDKINDN
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  Roster_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04566b23 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b23 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    Roster__JFGHGKCDHMA(__this_00,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Map_MapButtonViewBase__DFAIHDKINDN
              ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OLOBIPCHMCC()  [RVA 0x31A9520]
// Nekki.SF2.GUI.Map.ShardsButtonView$$OLOBIPCHMCC @ RVA 0x31A9520

void Nekki_SF2_GUI_Map_ShardsButtonView__OLOBIPCHMCC
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04566b24 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NPKKNCCEIND>__);
    DAT_04566b24 = 1;
  }
  Nekki_SF2_GUI_Map_MapButtonViewBase__OLOBIPCHMCC
            ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)
                     (__this->fields).super.super.ADHBPAAHOKK,
                     Method_DJNBJHPDKDP_OBECCOPBADO<NPKKNCCEIND>__);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DENKPLMPEDI()  [RVA 0x31A95A4]
// Nekki.SF2.GUI.Map.ShardsButtonView$$DENKPLMPEDI @ RVA 0x31A95A4

void Nekki_SF2_GUI_Map_ShardsButtonView__DENKPLMPEDI
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  Roster_o *pAVar1;
  
  if ((DAT_04566b25 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b25 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
    if ((pAVar1->fields).HCHICLHNEBC == false) {
      return;
    }
    __this_00 = (__this->fields).super._hintButton;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init()  [RVA 0x31A96A4]
// Nekki.SF2.GUI.Map.ShardsButtonView$$Init @ RVA 0x31A96A4

void Nekki_SF2_GUI_Map_ShardsButtonView__Init
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04566b26 & 1) == 0) {
    FUN_01bab630(&StringLiteral_19580/*"mapShardsHint"*/);
    FUN_01bab630(&StringLiteral_10912/*"RaidMap.shards_active"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04566b26 = 1;
  }
  __this_00 = (__this->fields).super._hintButton;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    method_00 = StringLiteral_10912/*"RaidMap.shards_active"*/;
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (__this_00,StringLiteral_14092/*"UI/Atlases/"*/,(System_String_o *)StringLiteral_10912/*"RaidMap.shards_active"*/,
               (MethodInfo *)0x0);
    __this_01 = (__this->fields).super._hintTitle;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,StringLiteral_19580/*"mapShardsHint"*/,method_00);
      Nekki_SF2_GUI_Map_MapButtonViewBase__Init
                ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31A9740]
// Nekki.SF2.GUI.Map.ShardsButtonView$$.ctor @ RVA 0x31A9740

void Nekki_SF2_GUI_Map_ShardsButtonView___ctor
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonViewBase___ctor
            ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
  return;
}

