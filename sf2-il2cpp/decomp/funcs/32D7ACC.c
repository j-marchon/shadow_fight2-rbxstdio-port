// Nekki.SF2.GUI.Pvp.PhaseBox$$Init @ RVA 0x32D7ACC

void Nekki_SF2_GUI_Pvp_PhaseBox__Init(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar2;
  Nekki_SF2_GUI_Pvp_PhasePerks_o *pNVar3;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  NLIDHEAMLMC_o *pNVar6;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o **ppNVar7;
  
  if ((DAT_0456759b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_0456759b = 1;
    method = extraout_x1;
  }
  pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    (*(pNVar2->klass->vtable)._4_Init.methodPtr)
              (pNVar2,(ulong)(uint)(__this->fields)._PlayerID,(pNVar2->klass->vtable)._4_Init.method
              );
    pNVar3 = Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(__this,method_00);
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
      (*(pNVar3->klass->vtable)._4_Init.methodPtr)
                (pNVar3,(ulong)(uint)(__this->fields)._PlayerID,
                 (pNVar3->klass->vtable)._4_Init.method);
      pNVar3 = Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(__this,method_01);
      pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_02);
      if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
        ppNVar7 = &(pNVar3->fields).WeaponPhase;
        *ppNVar7 = pNVar2;
        thunk_FUN_01c20e04(ppNVar7,pNVar2);
        pNVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method_03);
        if (pNVar4 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) {
          method_05 = (pNVar4->klass->vtable)._4_Init.method;
          (*(pNVar4->klass->vtable)._4_Init.methodPtr)
                    (pNVar4,(ulong)(uint)(__this->fields)._PlayerID);
          Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,2,method_05);
          pNVar5 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(__this,method_04);
          if (pNVar5 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
            (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar5,
                       (pNVar5->klass->vtable)._23_set_color.method);
            iVar1 = (__this->fields)._PlayerID;
            if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (iVar1 == 0) {
              if (DAT_04565e5c == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
                DAT_04565e5c = '\x01';
              }
              if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pNVar6 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
            }
            else {
              if (DAT_04565e5b == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
                DAT_04565e5b = '\x01';
              }
              if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pNVar6 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
            }
            if (pNVar6 != (NLIDHEAMLMC_o *)0x0) {
              Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                        (__this,(pNVar6->fields).OFFPEKODFPE,method_05);
              Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo->static_fields->ENKENPPFHPE = false;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

