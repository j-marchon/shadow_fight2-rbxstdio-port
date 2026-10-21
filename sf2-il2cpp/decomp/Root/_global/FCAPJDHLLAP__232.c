// TypeDefIndex 232
// Namespace: 
// public class FCAPJDHLLAP : OHPOFOPJIMB
// Fields:
//   private List<BDMABHJEEGD> LEJLGCMCPLG; // 0x20
//   private NotificationsGame OFIMCENNNDJ; // 0x28

// ===== public void .ctor(List<BDMABHJEEGD> IHBNELGLLEB)  [RVA 0x32233BC]
// FCAPJDHLLAP$$.ctor @ RVA 0x32233BC

void FCAPJDHLLAP___ctor(FCAPJDHLLAP_o *__this,
                       System_Collections_Generic_List_BDMABHJEEGD__o *IHBNELGLLEB,
                       MethodInfo *method)

{
  System_Collections_Generic_List_BDMABHJEEGD__o *__this_00;
  System_Collections_Generic_List_BDMABHJEEGD__o **ppSVar1;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar2;
  
  if ((DAT_04566f57 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
    DAT_04566f57 = 1;
  }
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_BDMABHJEEGD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)IHBNELGLLEB,
             Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
  ppSVar1 = &(__this->fields).LEJLGCMCPLG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  ppNVar2 = &(__this->fields).OFIMCENNNDJ;
  *ppNVar2 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  return;
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x3223464]
// FCAPJDHLLAP$$BNNIDPDMOIL @ RVA 0x3223464

bool FCAPJDHLLAP__BNNIDPDMOIL(FCAPJDHLLAP_o *__this,MethodInfo *method)

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


// ===== public override void IKDPMKOIDMP()  [RVA 0x3223490]
// FCAPJDHLLAP$$IKDPMKOIDMP @ RVA 0x3223490

void FCAPJDHLLAP__IKDPMKOIDMP(FCAPJDHLLAP_o *__this,MethodInfo *method)

{
  bool bVar1;
  GALHNMPIEHA_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f58 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FCAPJDHLLAP_OKDPLFADGJJ__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566f58 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    bVar1 = GALHNMPIEHA__CCIBENJEHCD(__this_00,(__this->fields).LEJLGCMCPLG,(MethodInfo *)0x0);
    if (!bVar1) {
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
    __this_01 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__add_OnClose(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OKDPLFADGJJ()  [RVA 0x3223578]
// FCAPJDHLLAP$$OKDPLFADGJJ @ RVA 0x3223578

void FCAPJDHLLAP__OKDPLFADGJJ(FCAPJDHLLAP_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04566f59 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FCAPJDHLLAP_OKDPLFADGJJ__);
    DAT_04566f59 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_NotificationsGame__remove_OnClose(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

