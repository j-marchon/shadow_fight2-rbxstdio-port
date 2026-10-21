// DCEFHLHFCFL$$MAHFCKJGBPP @ RVA 0x315CDD8

void DCEFHLHFCFL__MAHFCKJGBPP(DCEFHLHFCFL_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_01;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_02;
  OLKKAIFGGAK_o *__this_03;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar6;
  FCJBEKHDLAF_o *pFVar7;
  PBAKFOBIHEG_c *pPVar8;
  ACHLOMELAJE_o *pAVar9;
  ulong uVar10;
  int32_t *piVar11;
  LPAPAMPGDFN_o *__this_04;
  
  if ((DAT_04566870 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DCEFHLHFCFL_BBCAMJDDOII__);
    FUN_01bab630(&Method_DCEFHLHFCFL_POBKBBAGBJE__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566870 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_0325d108;
  Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,false,(MethodInfo *)0x0);
  bVar2 = BOFEMGGNODC__EDMJCPEGFOC((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar6 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((pNVar6 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
       (__this_01 = (pNVar6->fields)._Joystick,
       __this_01 == (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0)) goto LAB_0325d108;
    Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing(__this_01,true,(MethodInfo *)0x0);
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar7 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar7 == (FCJBEKHDLAF_o *)0x0) ||
       (__this_02 = (pFVar7->fields).IILLHHPGGKA,
       __this_02 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_0325d108;
    __this_03 = (OLKKAIFGGAK_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_02,0,
                           Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_03 == (OLKKAIFGGAK_o *)0x0) goto LAB_0325d108;
    OLKKAIFGGAK__LONDOHOBJIK(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = DCEFHLHFCFL__GBCDHIOCFJJ(__this,method_00);
  if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
    pPVar8 = pPVar3->klass;
    uVar1._0_1_ = (pPVar8->_2).rank;
    uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pPVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar8->vtable + *piVar11;
          goto LAB_0325d044;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0325d044:
    pSVar4 = (System_Collections_IEnumerator_o *)
             (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    (__this->fields).AMFDKDCIJLE = pSVar4;
    thunk_FUN_01c20e04();
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
      __this_04 = (pAVar9->fields).LMCDOMHENMC;
      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_04 != (LPAPAMPGDFN_o *)0x0) {
        LPAPAMPGDFN__OAFIHCDEOAD(__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0325d108:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

