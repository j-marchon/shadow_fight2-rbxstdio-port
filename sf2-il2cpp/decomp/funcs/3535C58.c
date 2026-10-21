// JJPNLEPEAFM.<>c$$AHKHKIMNEPA @ RVA 0x3535C58

void JJPNLEPEAFM_<>c__AHKHKIMNEPA(JJPNLEPEAFM___c_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  long lVar3;
  LJNJDFEAIOH_o *__this_00;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar4;
  UnityEngine_Object_o *x;
  LJNJDFEAIOH_o **ppLVar5;
  AADKBCFCLKK_o *DKMMBMBMJBO;
  
  if ((DAT_04568a6c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LJNJDFEAIOH_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568a6c = 1;
    obj = extraout_x1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,obj);
    DAT_045660f3 = '\x01';
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) goto LAB_036314b0;
    if ((pNVar4->fields).Controller != (LJNJDFEAIOH_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__MCGAMEJDDNG(pCVar2,(pNVar4->fields).Controller,(MethodInfo *)0x0);
        return;
      }
      goto LAB_036314b0;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close(pNVar4,(MethodInfo *)0x0);
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Instantiate((MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    DKMMBMBMJBO = (pCVar2->fields).AABMLCNHHPN;
    __this_00 = (LJNJDFEAIOH_o *)thunk_FUN_01bda818(LJNJDFEAIOH_TypeInfo);
    LJNJDFEAIOH___ctor(__this_00,pNVar4,DKMMBMBMJBO,(MethodInfo *)0x0);
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if ((pCVar2 != (CHDGOFBHAFI_o *)0x0) &&
       (CHDGOFBHAFI__MCGAMEJDDNG(pCVar2,__this_00,(MethodInfo *)0x0),
       pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
      ppLVar5 = &(pNVar4->fields).Controller;
      *ppLVar5 = __this_00;
      thunk_FUN_01c20e04(ppLVar5,__this_00);
      return;
    }
  }
LAB_036314b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

