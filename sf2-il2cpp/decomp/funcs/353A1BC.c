// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$HGPNEDGAAJB @ RVA 0x353A1BC

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__HGPNEDGAAJB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  float fVar2;
  UnityEngine_Vector3_o value;
  
  pNVar1 = (__this->fields)._invitationMessage;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = (__this->fields)._playersRoot, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    fVar2 = (pNVar1->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
    value.fields.z = (__this->fields).AJPHAMEDLHP.fields.z + 0.0;
    value.fields.y = (__this->fields).AJPHAMEDLHP.fields.y - (fVar2 + fVar2);
    value.fields.x = (__this->fields).AJPHAMEDLHP.fields.x + 0.0;
    UnityEngine_RectTransform__set_anchoredPosition3D(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

