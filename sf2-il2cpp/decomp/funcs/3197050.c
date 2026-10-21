// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetButtonRaidChargePos @ RVA 0x3197050

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetButtonRaidChargePos
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,float KEFILECBPMF,
               float BHOOMCEABGH,MethodInfo *method)

{
  Nekki_SF2_GUI_ProgressButton_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  
  pNVar1 = (__this->fields)._btnRaidCharge;
  if ((pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3.fields.y = BHOOMCEABGH;
    UVar3.fields.x = KEFILECBPMF;
    UVar3.fields.z = 0.0;
    UnityEngine_Transform__set_position(pUVar2,UVar3,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._raidChargeCount;
    if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnRaidCharge;
      if (((pNVar1 != (Nekki_SF2_GUI_ProgressButton_o *)0x0) &&
          (__this_01 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
          __this_01 != (UnityEngine_Transform_o *)0x0)) &&
         (UVar3 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_position(pUVar2,UVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

