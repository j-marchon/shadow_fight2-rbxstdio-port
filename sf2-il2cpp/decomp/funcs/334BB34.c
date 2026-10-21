// Nekki.SF2.GUI.Common.PaymentUI$$MakePurchase @ RVA 0x334BB34

void Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,
               System_Nullable_ObscuredLong__o *BIEJHAPFIEI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *FHJLFJLEBKA;
  System_String_o *CJNHFNHJHPE;
  DGGBFKNKEAH_o *pDVar2;
  ACHLOMELAJE_o *__this_00;
  undefined1 auVar3 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  auVar3._8_8_ = ANMFBABEMFD;
  auVar3._0_8_ = __this;
  if ((DAT_045679fc & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>_ToString__);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>__ctor__);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>_get_HasValue__);
    FUN_01bab630(&StringLiteral_3535);
    auVar3 = FUN_01bab630(&StringLiteral_6478);
    DAT_045679fc = 1;
  }
  Nekki_SF2_GUI_Common_PaymentUI__BBFPCBEFOLN(auVar3._0_8_,auVar3._8_8_);
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((ANMFBABEMFD->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_3535,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((BIEJHAPFIEI->fields).hasValue == false) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        FHJLFJLEBKA = MGNPHCAAEIO__OKJKIOKPKEJ((MethodInfo *)0x0);
        MGNPHCAAEIO__PAADLMOJFJC(&local_50,ANMFBABEMFD,FHJLFJLEBKA,(MethodInfo *)0x0);
        System_Nullable<ObscuredLong>___ctor
                  (BIEJHAPFIEI,&local_50,Method_System_Nullable<ObscuredLong>__ctor__);
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      CJNHFNHJHPE = System_Nullable<ObscuredLong>__ToString
                              (BIEJHAPFIEI,Method_System_Nullable<ObscuredLong>_ToString__);
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0344bd24;
      ACHLOMELAJE__LMJFPPDAPBF(__this_00,StringLiteral_6478,CJNHFNHJHPE,0,(MethodInfo *)0x0);
    }
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
      (*(pDVar2->klass->vtable)._13_GCEEJCFAMBP.methodPtr)
                (pDVar2,(ANMFBABEMFD->fields)._CIEBCKIBJHL_k__BackingField,
                 (pDVar2->klass->vtable)._13_GCEEJCFAMBP.method);
      return;
    }
  }
LAB_0344bd24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

