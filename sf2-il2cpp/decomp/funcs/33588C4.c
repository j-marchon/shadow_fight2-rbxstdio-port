// PFDCJGIIPLB$$BKGENOHNNKM @ RVA 0x33588C4

void PFDCJGIIPLB__BKGENOHNNKM
               (System_Collections_Generic_ICollection_string__o *NDIDKEDHJBE,MethodInfo *method)

{
  PFDCJGIIPLB_c *method_00;
  Helpshift_HelpshiftSdk_o *__this;
  System_Collections_Generic_Dictionary_string__object__o *configMap;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  if ((DAT_04567a48 & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a48 = 1;
    method = extraout_x1;
  }
  method_00 = PFDCJGIIPLB_TypeInfo;
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PFDCJGIIPLB_c *)thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo,method);
  }
  __this = PFDCJGIIPLB__LPAFHHGAJAH((MethodInfo *)method_00);
  configMap = PFDCJGIIPLB__BIOIDDEPGPC(NDIDKEDHJBE,method_01);
  if (__this != (Helpshift_HelpshiftSdk_o *)0x0) {
    Helpshift_HelpshiftSdk__ShowFAQs(__this,configMap,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

