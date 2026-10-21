// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SetSelection @ RVA 0x312D6F4

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetSelection
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
               int32_t KEFILECBPMF,int32_t BHOOMCEABGH,float LFJGFLNMBMC,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  System_Enum_o *pSVar7;
  System_Enum_o *pSVar8;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this_00;
  int iVar9;
  UnityEngine_Vector2_o BLEOKMIDGIK;
  undefined1 local_70 [4];
  uint8_t local_6c [4];
  undefined1 local_68 [4];
  uint8_t local_64 [4];
  undefined1 local_60 [4];
  uint8_t local_5c [4];
  undefined1 local_58 [4];
  uint8_t local_54 [4];
  
  if ((DAT_045666a2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo);
    DAT_045666a2 = 1;
  }
  local_54[0] = (__this->fields).repeateMode;
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  __this_00 = *(Nekki_SF2_GUI_Pvp_PlayerSelector_o **)((long)&__this->klass + lVar1);
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_54);
  local_58[0] = 1;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_58);
  bVar4 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  if (bVar4) {
    if ((KEFILECBPMF < (__this->fields).FLHKJAKLFPH) && (-1 < KEFILECBPMF)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  local_5c[0] = (__this->fields).repeateMode;
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_5c);
  local_60[0] = 2;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_60);
  bVar5 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  if (bVar5) {
    if ((BHOOMCEABGH < (__this->fields).NNDFIMDGJLN) && (-1 < BHOOMCEABGH)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  local_64[0] = (__this->fields).repeateMode;
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_64);
  local_68[0] = 1;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_68);
  bVar6 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  iVar2 = (__this->fields).FLHKJAKLFPH;
  if (bVar6) {
    iVar9 = 0;
    if (iVar2 != 0) {
      iVar9 = (iVar2 + KEFILECBPMF) / iVar2;
    }
    iVar9 = (iVar2 + KEFILECBPMF) - iVar9 * iVar2;
  }
  else if (KEFILECBPMF < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar2 + -1;
    if (KEFILECBPMF <= iVar2 + -1) {
      iVar9 = KEFILECBPMF;
    }
  }
  local_6c[0] = (__this->fields).repeateMode;
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_6c);
  local_70[0] = 2;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_70);
  bVar6 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  iVar2 = (__this->fields).NNDFIMDGJLN;
  if (bVar6) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar2 + BHOOMCEABGH) / iVar2;
    }
    iVar3 = (iVar2 + BHOOMCEABGH) - iVar3 * iVar2;
  }
  else if (BHOOMCEABGH < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + -1;
    if (BHOOMCEABGH <= iVar2 + -1) {
      iVar3 = BHOOMCEABGH;
    }
  }
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
    BLEOKMIDGIK.fields.y = (__this->fields).IFIDDDFLHCF.fields.y * (float)-iVar3;
    BLEOKMIDGIK.fields.x = (__this->fields).IFIDDDFLHCF.fields.x * (float)iVar9;
    Nekki_SF2_GUI_Pvp_PlayerSelector__MoveTo
              (__this_00,iVar9,iVar3,BLEOKMIDGIK,LFJGFLNMBMC,bVar4,bVar5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

