// Util$$RunOnStart @ RVA 0x3209B64

void Util__RunOnStart(MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_o *value;
  
  if ((DAT_04566e69 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_Util_<>c_AKPCDCNNOHH__);
    FUN_01bab630(&Util_<>c_TypeInfo);
    DAT_04566e69 = 1;
  }
  if ((Util_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = Util_<>c_TypeInfo->static_fields->__9__2_0;
  if (value == (System_Action_o *)0x0) {
    if ((Util_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Util_<>c_TypeInfo->static_fields->__9__2_0;
    *ppSVar1 = value;
    thunk_FUN_01c20e04(ppSVar1,value);
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__add_quitting(value,(MethodInfo *)0x0);
  return;
}

