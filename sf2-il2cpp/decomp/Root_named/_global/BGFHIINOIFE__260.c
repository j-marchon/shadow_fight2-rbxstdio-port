// TypeDefIndex 260
// Namespace: 
// public class BGFHIINOIFE : OHPOFOPJIMB
// Fields:

// ===== private void PDGKHEFBKIO()  [RVA 0x322F93C]
// BGFHIINOIFE$$PDGKHEFBKIO @ RVA 0x322F93C

void BGFHIINOIFE__PDGKHEFBKIO(BGFHIINOIFE_o *__this,MethodInfo *method)

{
  RaidManager_o *__this_00;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566fc7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_BGFHIINOIFE_PCACJPAKEDH__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566fc7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
    EHNFGMGKCHO = RaidManager__BGHMPINAEDC(__this_00,(MethodInfo *)0x0);
    __this_01 = DialogsOpener__OOOIOMHJONP
                          (StringLiteral_17756/*"dlgAlertTitle"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                           (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,
                           true,(MethodInfo *)0x0);
    IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PCACJPAKEDH(object HBHPFKJMGCK)  [RVA 0x322FAB0]
// BGFHIINOIFE$$PCACJPAKEDH @ RVA 0x322FAB0

void BGFHIINOIFE__PCACJPAKEDH(BGFHIINOIFE_o *__this,Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x322FAB8]
// BGFHIINOIFE$$BNNIDPDMOIL @ RVA 0x322FAB8

bool BGFHIINOIFE__BNNIDPDMOIL(BGFHIINOIFE_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(__this_00,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IKDPMKOIDMP()  [RVA 0x322FAE4]
// BGFHIINOIFE$$IKDPMKOIDMP @ RVA 0x322FAE4

void BGFHIINOIFE__IKDPMKOIDMP(BGFHIINOIFE_o *__this,MethodInfo *method)

{
  bool bVar1;
  RaidManager_o *pCVar2;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566fc8 & 1) == 0) {
                    /* try { // try from 0332fb0c to 0342fbaf has its CatchHandler @ 0332fb0c
                       catch() { ... } // from try @ 0332fb0c with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fc20 with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fc58 with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fc84 with catch @ 0332fb0c
                       catch() { ... } // from try @ 0332fcb4 with catch @ 0332fb0c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566fc8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (RaidManager_o *)0x0) {
    IIPPMAOIKHB = (pCVar2->fields).AABMLCNHHPN;
    if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
       (bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
      BGFHIINOIFE__PDGKHEFBKIO(__this,method_00);
      return;
    }
    OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x322FB70]
// BGFHIINOIFE$$.ctor @ RVA 0x322FB70

void BGFHIINOIFE___ctor(BGFHIINOIFE_o *__this,MethodInfo *method)

{
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  return;
}

