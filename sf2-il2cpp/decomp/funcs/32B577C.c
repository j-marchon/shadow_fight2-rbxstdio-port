// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$MPNLJKCHCKP @ RVA 0x32B577C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MPNLJKCHCKP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,int32_t LHPGDPKKMPF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  undefined8 *puVar3;
  
  if ((DAT_04567454 & 1) == 0) {
    FUN_01bab630(&StringLiteral_17058);
    FUN_01bab630(&StringLiteral_17785);
    DAT_04567454 = 1;
  }
  if ((__this->fields).DIAFKBHLFLD == LHPGDPKKMPF) {
    return;
  }
  (__this->fields).DIAFKBHLFLD = LHPGDPKKMPF;
  if (LHPGDPKKMPF == 3) {
    pNVar1 = (__this->fields)._invalidInputDataLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._invalidInputDataLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        puVar3 = &StringLiteral_17785;
LAB_033b5848:
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,(System_String_o *)*puVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (LHPGDPKKMPF == 1) {
    pNVar1 = (__this->fields)._invalidInputDataLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._invalidInputDataLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        puVar3 = &StringLiteral_17058;
        goto LAB_033b5848;
      }
    }
  }
  else {
    pNVar1 = (__this->fields)._invalidInputDataLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

