// CHDGOFBHAFI$$FFAGNLLDPGN @ RVA 0x324439C

void CHDGOFBHAFI__FFAGNLLDPGN(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Action_object__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  NBLEEDEAPHB_array *pNVar3;
  
  if ((DAT_045670cb & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_BFBKJDGKCAJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&StringLiteral_17819);
    FUN_01bab630(&StringLiteral_16817);
    FUN_01bab630(&StringLiteral_16973);
    FUN_01bab630(&StringLiteral_1);
    DAT_045670cb = 1;
    method = extraout_x1;
  }
  IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_17819,StringLiteral_1,StringLiteral_1,StringLiteral_1,0
                     ,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    pNVar3 = (IJIPABLCAKE->fields)._items;
    (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
    if (pNVar3 != (NBLEEDEAPHB_array *)0x0) {
      uVar1 = (IJIPABLCAKE->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (IJIPABLCAKE->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   (Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                  (__this_01,StringLiteral_16973,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_16817,1,0.0,0
                   ,false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

