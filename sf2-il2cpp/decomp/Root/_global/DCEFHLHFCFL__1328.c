// TypeDefIndex 1328
// Namespace: 
// public class DCEFHLHFCFL : BOFEMGGNODC
// Fields:
//   private int ODDDLNLBOND; // 0x64
//   private int DGEFLJMMHLD; // 0x68
//   private IEnumerator AMFDKDCIJLE; // 0x70
//   private bool BCJIGJJKLDN; // 0x78

// ===== private void POBKBBAGBJE()  [RVA 0x315CA30]
// DCEFHLHFCFL$$POBKBBAGBJE @ RVA 0x315CA30

void DCEFHLHFCFL__POBKBBAGBJE(DCEFHLHFCFL_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Action_o *CJNHFNHJHPE;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_01;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_02;
  OLKKAIFGGAK_o *__this_03;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar5;
  PBAKFOBIHEG_c *pPVar6;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar7;
  FCJBEKHDLAF_o *pFVar8;
  ulong uVar9;
  int32_t *piVar10;
  LPAPAMPGDFN_o *pLVar11;
  System_Collections_IEnumerator_o **ppSVar12;
  System_Collections_IEnumerator_o *pSVar13;
  
  if ((DAT_0456686f & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DCEFHLHFCFL_BBCAMJDDOII__);
    FUN_01bab630(&Method_DCEFHLHFCFL_POBKBBAGBJE__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456686f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    pLVar11 = (pAVar5->fields).LMCDOMHENMC;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pLVar11 != (LPAPAMPGDFN_o *)0x0) {
      LPAPAMPGDFN__OJMMJBJOPKK(pLVar11,CJNHFNHJHPE,(MethodInfo *)0x0);
      ppSVar12 = &(__this->fields).AMFDKDCIJLE;
      if (*ppSVar12 != (System_Collections_IEnumerator_o *)0x0) {
        pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pPVar3 == (PBAKFOBIHEG_o *)0x0) goto LAB_0325cdd4;
        pPVar6 = pPVar3->klass;
        pSVar13 = *ppSVar12;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + (*piVar10 + 1);
              goto LAB_0325cbcc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_0325cbcc:
        (*pVVar4->methodPtr)(pPVar3,pSVar13,pVVar4->method);
        *ppSVar12 = (System_Collections_IEnumerator_o *)0x0;
        thunk_FUN_01c20e04(ppSVar12,0);
      }
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(__this_00,true,(MethodInfo *)0x0);
        bVar2 = BOFEMGGNODC__EDMJCPEGFOC((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        if (bVar2) {
          if (DAT_04565c84 == '\0') {
            FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
            DAT_04565c84 = '\x01';
          }
          pNVar7 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->
                   CNMHHKAMGPI;
          if ((pNVar7 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
             (__this_01 = (pNVar7->fields)._Joystick,
             __this_01 == (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0)) goto LAB_0325cdd4;
          Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing(__this_01,false,(MethodInfo *)0x0);
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
          pFVar8 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
          if ((pFVar8 == (FCJBEKHDLAF_o *)0x0) ||
             (__this_02 = (pFVar8->fields).IILLHHPGGKA,
             __this_02 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) goto LAB_0325cdd4;
          __this_03 = (OLKKAIFGGAK_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,0,
                                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
          CJNHFNHJHPE_00 =
               (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_03 == (OLKKAIFGGAK_o *)0x0) goto LAB_0325cdd4;
          OLKKAIFGGAK__PLMIOLEFAEF(__this_03,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        }
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
           (pLVar11 = (pAVar5->fields).LMCDOMHENMC, pLVar11 != (LPAPAMPGDFN_o *)0x0)) {
          if ((pLVar11->fields).HBFBGGBPLOB != false) {
            return;
          }
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0325cdd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x315CDD8]
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


// ===== private void BBCAMJDDOII(OLKKAIFGGAK.EAOIGPODIAI PGPLLGEIFPI)  [RVA 0x315D178]
// DCEFHLHFCFL$$BBCAMJDDOII @ RVA 0x315D178

void DCEFHLHFCFL__BBCAMJDDOII
               (DCEFHLHFCFL_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  FCJBEKHDLAF_o *pFVar4;
  
  if ((DAT_04566871 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566871 = 1;
    PGPLLGEIFPI = (OLKKAIFGGAK_EAOIGPODIAI_o *)extraout_x1;
  }
  if ((__this->fields).BCJIGJJKLDN != false) {
    iVar1 = *(int *)&(__this->fields).super.field_0x54;
    iVar2 = (__this->fields).ODDDLNLBOND;
    (__this->fields).BCJIGJJKLDN = false;
    iVar1 = iVar1 + 1;
    *(int *)&(__this->fields).super.field_0x54 = iVar1;
    if (iVar2 <= iVar1) {
      DCEFHLHFCFL__POBKBBAGBJE(__this,(MethodInfo *)PGPLLGEIFPI);
    }
  }
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
  pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (((pFVar4 != (FCJBEKHDLAF_o *)0x0) &&
      (__this_00 = (pFVar4->fields).IILLHHPGGKA,
      __this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) &&
     (pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__),
     pIVar3 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar3[0x22].monitor == 1) {
      (__this->fields).BCJIGJJKLDN = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator GBCDHIOCFJJ()  [RVA 0x315D10C]
// DCEFHLHFCFL$$GBCDHIOCFJJ @ RVA 0x315D10C

System_Collections_IEnumerator_o *
DCEFHLHFCFL__GBCDHIOCFJJ(DCEFHLHFCFL_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566872 & 1) == 0) {
    FUN_01bab630(&DCEFHLHFCFL_POGEEHGIFKN_TypeInfo);
    DAT_04566872 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DCEFHLHFCFL_POGEEHGIFKN_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void .ctor()  [RVA 0x315D298]
// DCEFHLHFCFL$$.ctor @ RVA 0x315D298

void DCEFHLHFCFL___ctor(DCEFHLHFCFL_o *__this,MethodInfo *method)

{
  (__this->fields).ODDDLNLBOND = 3;
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

