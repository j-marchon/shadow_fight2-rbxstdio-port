// Nekki.SF2.GUI.Dialogs.NotificationsGame$$ShowDebugNotification @ RVA 0x30F7BE8

void Nekki_SF2_GUI_Dialogs_NotificationsGame__ShowDebugNotification
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,float PNEIGGOFIOA,bool LEJHELDHNIC
               ,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  System_String_o *CADMJIKLNCN;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Threading_CancellationTokenSource_o *pSVar4;
  System_Action_object__o **ppSVar5;
  MethodInfo *method_00;
  NBLEEDEAPHB_array *pNVar6;
  System_Threading_CancellationTokenSource_o **ppSVar7;
  System_Action_object__o *BLMFLPJJMPF;
  MethodInfo *method_01;
  
  if ((DAT_04566472 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_CBHMHHCPPCB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_16974);
    FUN_01bab630(&StringLiteral_19375);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566472 = 1;
  }
  IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
  method_01 = (MethodInfo *)0x0;
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_1,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                     (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  lVar3 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    pNVar6 = (IJIPABLCAKE->fields)._items;
    (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
    if (pNVar6 != (NBLEEDEAPHB_array *)0x0) {
      uVar2 = (IJIPABLCAKE->fields)._size;
      if (uVar2 < (uint)pNVar6->max_length) {
        (IJIPABLCAKE->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   (Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      method_00 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__;
      __this_01 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,0,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      pSVar4 = (System_Threading_CancellationTokenSource_o *)
               Nekki_SF2_GUI_Dialogs_NotificationsGame__HILHBNCHAAG(__this_01,OGPGLGPMEPD,method_00)
      ;
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
        ppSVar7 = &(__this_01->fields).super.m_CancellationTokenSource;
        *ppSVar7 = pSVar4;
        thunk_FUN_01c20e04(ppSVar7,pSVar4);
        if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CADMJIKLNCN = StringLiteral_16974;
        BLMFLPJJMPF = Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->static_fields->__9__71_0
        ;
        if (BLMFLPJJMPF == (System_Action_object__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          BLMFLPJJMPF = (System_Action_object__o *)
                        thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar5 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_<>c_TypeInfo->static_fields->__9__71_0;
          *ppSVar5 = BLMFLPJJMPF;
          thunk_FUN_01c20e04(ppSVar5,BLMFLPJJMPF);
        }
        if (__this != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
          puVar1 = &StringLiteral_19375;
          if (!LEJHELDHNIC) {
            puVar1 = &StringLiteral_1;
          }
          Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                    (__this,CADMJIKLNCN,IJIPABLCAKE,BLMFLPJJMPF,(System_String_o *)*puVar1,4,
                     PNEIGGOFIOA,0,false,true,1.0,(System_String_o *)0x0,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

