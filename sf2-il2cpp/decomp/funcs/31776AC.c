// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerEquipmentView$$UpdateContent @ RVA 0x31776AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerEquipmentView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  RaidPlayerEquipmentImage_o *pRVar2;
  
  if ((DAT_0456695d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    FUN_01bab630(&StringLiteral_3839);
    DAT_0456695d = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (PJKHAJKEHEL_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)PJKHAJKEHEL_TypeInfo)) {
      pRVar2 = (__this->fields)._armorImg;
      if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
        RaidPlayerEquipmentImage__Refresh(pRVar2,IMMNELPBGIF[0xc].monitor,(MethodInfo *)0x0);
        pRVar2 = (__this->fields)._helmImg;
        if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
          RaidPlayerEquipmentImage__Refresh
                    (pRVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[0xd].klass,(MethodInfo *)0x0);
          pRVar2 = (__this->fields)._weaponImg;
          if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
            RaidPlayerEquipmentImage__Refresh
                      (pRVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[0xc].klass,(MethodInfo *)0x0);
            pRVar2 = (__this->fields)._rangedImg;
            if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
              RaidPlayerEquipmentImage__Refresh(pRVar2,IMMNELPBGIF[0xd].monitor,(MethodInfo *)0x0);
              pRVar2 = (__this->fields)._magicImg;
              if (pRVar2 != (RaidPlayerEquipmentImage_o *)0x0) {
                RaidPlayerEquipmentImage__Refresh
                          (pRVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[0xe].klass,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_3839,(MethodInfo *)0x0);
  return;
}

