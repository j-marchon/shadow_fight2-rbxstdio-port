// NHMNDJDBIIB$$IKDPMKOIDMP @ RVA 0x34A2884

void NHMNDJDBIIB__IKDPMKOIDMP(NHMNDJDBIIB_o *__this,MethodInfo *method)

{
  uint uVar1;
  undefined1 auVar2 [16];
  KKLJIDJBFEI_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_01;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar4;
  System_Action_o *CJNHFNHJHPE;
  System_Action_object__o *BLMFLPJJMPF;
  PGICCMFLDPI_o *pPVar5;
  NBLEEDEAPHB_array *pNVar6;
  long lVar7;
  int local_44;
  
  if ((DAT_045684b4 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_NHMNDJDBIIB_HHJBBMPLBBF__);
    FUN_01bab630(&Method_NHMNDJDBIIB_HHJBBMPLBBF__);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_16973);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11863);
    DAT_045684b4 = 1;
  }
  pPVar5 = (__this->fields).ILJNFFKJNDN;
  if (pPVar5 != (PGICCMFLDPI_o *)0x0) {
    lVar7 = (pPVar5->fields).GDKPGIBMFPA;
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar5 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
       pPVar5 != (PGICCMFLDPI_o *)0x0)) {
      auVar2 = SEXT816(lVar7 - (pPVar5->fields).GDKPGIBMFPA) * SEXT816(0x45e7b272f608770f);
      local_44 = (int)(auVar2._8_8_ >> 0xe) - (auVar2._12_4_ >> 0x1f);
      pSVar3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat
                         (StringLiteral_11863,pSVar3,StringLiteral_22500,(MethodInfo *)0x0);
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      __this_01 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
      NBLEEDEAPHB___ctor(__this_01,pSVar3,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                         (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                         (MethodInfo *)0x0);
      lVar7 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
        pNVar6 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar6 != (NBLEEDEAPHB_array *)0x0) {
          uVar1 = (IJIPABLCAKE->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (IJIPABLCAKE->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = __this_01;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          pNVar4 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar4 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_NotificationsGame__add_OnClose
                      (pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
            pNVar4 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
            BLMFLPJJMPF = (System_Action_object__o *)
                          thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                        (pNVar4,StringLiteral_16973,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_9679,5,5.0
                         ,0,false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
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

