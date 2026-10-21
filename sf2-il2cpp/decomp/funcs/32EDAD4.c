// HBHNJNHNFHP$$DEGIJPMOOOE @ RVA 0x32EDAD4

void HBHNJNHNFHP__DEGIJPMOOOE(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  char cVar2;
  System_Action_o *PKKMGBOIDJD;
  HBHNJNHNFHP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567657 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HBHNJNHNFHP_LNLEFANOIDH__);
    FUN_01bab630(&Method_HBHNJNHNFHP_PCALMGLCBKG__);
    DAT_04567657 = 1;
    method = extraout_x1;
  }
  cVar2 = (__this->fields).super.field_0x3c;
  PKKMGBOIDJD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  puVar1 = &Method_HBHNJNHNFHP_LNLEFANOIDH__;
  if (cVar2 != '\0') {
    puVar1 = &Method_HBHNJNHNFHP_PCALMGLCBKG__;
  }
  method_00 = (MethodInfo *)*puVar1;
  System_Action___ctor();
  HBHNJNHNFHP__BDIFEJCKEGH(__this_00,0.5,PKKMGBOIDJD,method_00);
  return;
}

