// EJALJLHMDHM$$MAHFCKJGBPP @ RVA 0x30FD05C

void EJALJLHMDHM__MAHFCKJGBPP(EJALJLHMDHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int ACCIHBHMFPN;
  int32_t ACCIHBHMFPN_00;
  bool bVar1;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Object_o *x;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  DGGBFKNKEAH_o *pDVar2;
  
  if ((DAT_045664a1 & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_EJALJLHMDHM_IHKHIJONLCM__);
    FUN_01bab630(&Method_EJALJLHMDHM_JCLPLBEJHGM__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045664a1 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  method_00 = (MethodInfo *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  IKKAMAMLIKA = EJALJLHMDHM__DHKCDPPAFFC(__this,AAJBIMFNMBB,method_00);
  ACCIHBHMFPN = (__this->fields).ONHENDPPLDI;
  if (ACCIHBHMFPN != 3) {
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__IAGKBFCKFKB
                (IKKAMAMLIKA,ACCIHBHMFPN,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    x = (UnityEngine_Object_o *)
        Nekki_SF2_GUI_UIModule__GetModule<object>
                  (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      ACCIHBHMFPN_00 = (__this->fields).ONHENDPPLDI;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = MGNPHCAAEIO__IAGKBFCKFKB
                        (IKKAMAMLIKA,ACCIHBHMFPN_00,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 031fd1c0 to 032fd1e7 has its CatchHandler @ 031fd388 */
        if (DAT_045655e8 == '\0') {
          FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
          DAT_045655e8 = '\x01';
        }
        pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
        CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                      thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 031fd21c to 032fd247 has its CatchHandler @ 031fd384 */
        if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
          DGGBFKNKEAH__OMNHIKEFCCG(pDVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
          if (DAT_045655e8 == '\0') {
            FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
            DAT_045655e8 = '\x01';
          }
          pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
          CJNHFNHJHPE_00 =
               (System_Action_BKLDKOMCOPN__o *)
               thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
                    /* try { // try from 031fd278 to 032fd28b has its CatchHandler @ 031fd38c */
          System_Action<object>___ctor();
          if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
                    /* try { // try from 031fd28c to 032fd367 has its CatchHandler @ 031fd054 */
            DGGBFKNKEAH__AOMBGFMAOMJ(pDVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_031fd314;
      }
    }
  }
  __this_00 = (__this->fields).FNGNIKNIEMM;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_031fd314:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

