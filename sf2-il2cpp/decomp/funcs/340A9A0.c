// MGNPHCAAEIO$$AOFNKFDNIDD @ RVA 0x340A9A0

void MGNPHCAAEIO__AOFNKFDNIDD
               (AFFHKININGD_o *FBFPLEFCDOK,
               System_Collections_Generic_List_PJKHAJKEHEL__o *MMAONJONCLH,
               PJKHAJKEHEL_o **LIHKNGAPNAH,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar2;
  PJKHAJKEHEL_o *pPVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_String_o *LBKOHHHPNIP;
  System_String_o *IMJHEANBDDA;
  System_String_o *DFEGBKMFBMM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  
  if ((DAT_04568037 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568037 = 1;
  }
  if ((FBFPLEFCDOK != (AFFHKININGD_o *)0x0) &&
     (pSVar2 = (FBFPLEFCDOK->fields).NNHINPLPDHJ,
     pSVar2 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
    pPVar3 = (PJKHAJKEHEL_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,0,
                        Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    method_00 = extraout_x1;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      method_00 = extraout_x1_00;
    }
    MGNPHCAAEIO__JPFEMNNELIF(pPVar3,method_00);
    *LIHKNGAPNAH = pPVar3;
    thunk_FUN_01c20e04(LIHKNGAPNAH,pPVar3);
    pPVar3 = *LIHKNGAPNAH;
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      (DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND == false,(MethodInfo *)0x0);
    if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
      (pPVar3->fields).DHGNGIKCDON.fields = CVar5;
      pPVar3 = *LIHKNGAPNAH;
      if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
        (pPVar3->fields).BLJLIBHLGLI = DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND;
        CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
        (pPVar3->fields).HJPOJOPKEKI.fields = CVar5;
        __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
          iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                            (__this,(MethodInfo *)0x0);
          if (1 < iVar1) {
            pSVar2 = (FBFPLEFCDOK->fields).MECHOBPGHFJ;
            if (pSVar2 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_0350ab78;
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,0,
                                Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
            CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              (true,(MethodInfo *)0x0);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0350ab78;
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields *)((long)&pIVar4[6].monitor + 4)
                 = CVar5;
            *(undefined1 *)&pIVar4[6].monitor = 0;
            CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              (true,(MethodInfo *)0x0);
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields *)((long)&pIVar4[5].monitor + 4)
                 = CVar5;
          }
          if ((*LIHKNGAPNAH != (PJKHAJKEHEL_o *)0x0) &&
             (pSVar2 = (FBFPLEFCDOK->fields).MECHOBPGHFJ,
             pSVar2 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
            IMJHEANBDDA = ((*LIHKNGAPNAH)->fields).NBPNHMKOJKB;
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,0,
                                Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
            if (pIVar4 != (Il2CppObject *)0x0) {
              DFEGBKMFBMM = pIVar4[0x18].monitor;
              LBKOHHHPNIP = (FBFPLEFCDOK->fields).LAFKEHDGGND;
              if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo);
              }
              DKEOKAONIIB__JDOKHDBJFIO(IMJHEANBDDA,DFEGBKMFBMM,LBKOHHHPNIP,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0350ab78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

