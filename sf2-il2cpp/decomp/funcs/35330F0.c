// JJPNLEPEAFM$$FOCOCNHNGMI @ RVA 0x35330F0

Nekki_SF2_GUI_Dialogs_BaseDialog_o * JJPNLEPEAFM__FOCOCNHNGMI(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  EEGDOGKBLNG_o *pEVar3;
  System_String_o *pSVar4;
  NBLEEDEAPHB_o *__this;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  EEOMEMBBGNA_o *pEVar5;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar6;
  NBLEEDEAPHB_array *pNVar7;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  System_String_o **ppSVar8;
  
  if ((DAT_04568a6e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_17795);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a6e = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
    pSVar4 = IDGOGBNEGAM__ONLBMMFEPOI((pEVar3->fields).LPMFKCDDEIA,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_17795,pSVar4,StringLiteral_22500,(MethodInfo *)0x0)
    ;
    __this = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
    NBLEEDEAPHB___ctor(__this,StringLiteral_1,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                       (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                       (MethodInfo *)0x0);
    if (__this != (NBLEEDEAPHB_o *)0x0) {
      ppSVar8 = &(__this->fields).ABCHAOKFLGL;
      *ppSVar8 = pSVar4;
      thunk_FUN_01c20e04(ppSVar8,pSVar4);
      (__this->fields).ALFDOLMJLKI = 0x3c;
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        pNVar7 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar7 != (NBLEEDEAPHB_array *)0x0) {
          uVar1 = (IJIPABLCAKE->fields)._size;
          if (uVar1 < (uint)pNVar7->max_length) {
            (IJIPABLCAKE->fields)._size = uVar1 + 1;
            pNVar7->m_Items[(int)uVar1] = __this;
            thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       (Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pEVar5 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          if (pEVar5 != (EEOMEMBBGNA_o *)0x0) {
            PBNPKBJKFHE = (pEVar5->fields).MICFEIBNOLM;
            pNVar6 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
            if (pNVar6 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                        (pNVar6,StringLiteral_1,IJIPABLCAKE,(System_Action_object__o *)0x0,
                         StringLiteral_1,4,0.0,1,false,true,1.0,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
              pNVar6 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
              if (pNVar6 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_NotificationsGame__CreateClanLogoImage
                          (pNVar6,PBNPKBJKFHE,false,3.0,(MethodInfo *)0x0);
                return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

