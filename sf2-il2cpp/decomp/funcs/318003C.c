// PNHGEFAOFFE$$.cctor @ RVA 0x318003C

void PNHGEFAOFFE___cctor(MethodInfo *method)

{
  System_Func_T__o *valueFactory;
  System_Lazy_PHGPILAOJBI__o *__this;
  
  if ((DAT_045669b7 & 1) == 0) {
    FUN_01bab630(&System_Func<PHGPILAOJBI>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<PHGPILAOJBI>__ctor__);
    FUN_01bab630(&System_Lazy<PHGPILAOJBI>_TypeInfo);
    FUN_01bab630(&PNHGEFAOFFE_TypeInfo);
    FUN_01bab630(&Method_PNHGEFAOFFE_<>c_PICNPKNBICJ__);
    FUN_01bab630(&PNHGEFAOFFE_<>c_TypeInfo);
    DAT_045669b7 = 1;
  }
  if ((PNHGEFAOFFE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  valueFactory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PHGPILAOJBI>_TypeInfo);
                    /* try { // try from 03280100 to 03380127 has its CatchHandler @ 03280380 */
  System_Func<object>___ctor();
  __this = (System_Lazy_PHGPILAOJBI__o *)thunk_FUN_01bda818(System_Lazy<PHGPILAOJBI>_TypeInfo);
  System_Lazy<object>___ctor
            ((System_Lazy_object__o *)__this,valueFactory,Method_System_Lazy<PHGPILAOJBI>__ctor__);
  PNHGEFAOFFE_TypeInfo->static_fields->CCFCNKAIFBM = __this;
  thunk_FUN_01c20e04(PNHGEFAOFFE_TypeInfo->static_fields,__this);
  return;
}

