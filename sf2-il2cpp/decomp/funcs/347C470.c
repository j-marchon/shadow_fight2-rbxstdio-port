// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$Init @ RVA 0x347C470

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__Init
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  HHKELHDGPDO_c *pHVar2;
  LabelButton_o *__this_00;
  HHKELHDGPDO_o *pHVar3;
  HHKELHDGPDO_o **ppHVar4;
  
  if ((DAT_0456835a & 1) == 0) {
    FUN_01bab630(&HHKELHDGPDO_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    DAT_0456835a = 1;
  }
  pHVar2 = HHKELHDGPDO_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PAAIEEFEBKK = (HHKELHDGPDO_o *)0x0;
LAB_0357c524:
    ppHVar4 = &(__this->fields).PAAIEEFEBKK;
    thunk_FUN_01c20e04(ppHVar4,IMMNELPBGIF);
    __this_00 = (__this->fields).super._btnOK;
    if (__this_00 != (LabelButton_o *)0x0) {
      LabelButton__set_Alias(__this_00,StringLiteral_9679,(MethodInfo *)0x0);
      pHVar3 = *ppHVar4;
      if (pHVar3 != (HHKELHDGPDO_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pHVar3->fields).JIJLBFGKNJK,
                   StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (HHKELHDGPDO_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)HHKELHDGPDO_TypeInfo)) {
    (__this->fields).PAAIEEFEBKK = (HHKELHDGPDO_o *)IMMNELPBGIF;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pHVar2))
    goto LAB_0357c524;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(IMMNELPBGIF);
}

