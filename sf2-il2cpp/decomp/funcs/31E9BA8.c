// WideScreenController$$.cctor @ RVA 0x31E9BA8

void WideScreenController___cctor(MethodInfo *method)

{
  System_Action_o *pSVar1;
  WideScreenController_StaticFields *pWVar2;
  
  if ((DAT_04566d86 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_WideScreenController_<>c_GDNCHMNHBHE__);
    FUN_01bab630(&WideScreenController_<>c_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d86 = 1;
  }
  if ((WideScreenController_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  WideScreenController_TypeInfo->static_fields->KGDDEONFPED = pSVar1;
  thunk_FUN_01c20e04(WideScreenController_TypeInfo->static_fields,pSVar1);
  pWVar2 = WideScreenController_TypeInfo->static_fields;
  (pWVar2->BorderColor).fields.b = 0.0;
  (pWVar2->BorderColor).fields.a = 1.0;
  (pWVar2->BorderColor).fields.r = 0.0;
  (pWVar2->BorderColor).fields.g = 0.0;
  return;
}

