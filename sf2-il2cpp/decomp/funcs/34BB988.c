// SFButton$$.ctor @ RVA 0x34BB988

void SFButton___ctor(SFButton_o *__this,MethodInfo *method)

{
  OMLLDCIMLBB_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685d8 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&OMLLDCIMLBB<object>_TypeInfo);
    DAT_045685d8 = 1;
    method = extraout_x1;
  }
  __this_00 = (OMLLDCIMLBB_object__o *)thunk_FUN_01bda818(OMLLDCIMLBB<object>_TypeInfo,method);
  OMLLDCIMLBB<object>___ctor(__this_00,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).CDMKOMBJFLG = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).CDMKOMBJFLG,__this_00);
  (__this->fields)._EnableClickAnimation = true;
  (__this->fields)._WaitBeforeClick = true;
  (__this->fields).JMCNNEEGMAK = 10.0;
  (__this->fields).ButtonId = -1;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}

