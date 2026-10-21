// CAIJHMHNAFD$$MAHFCKJGBPP @ RVA 0x336B6B4

void CAIJHMHNAFD__MAHFCKJGBPP(CAIJHMHNAFD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
  if ((DAT_04567aeb & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_CAIJHMHNAFD_LGEMJFBPAGO__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567aeb = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  x = (UnityEngine_Object_o *)
      Nekki_SF2_GUI_UIModule__GetModule<object>
                (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                  thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EAPNEKLDLLM(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  JJPNLEPEAFM__HMCOHIKNIJP((MethodInfo *)0x0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

