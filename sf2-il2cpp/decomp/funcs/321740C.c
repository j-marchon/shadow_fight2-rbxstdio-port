// InControl.InputManager$$HideDevicesWithProfile @ RVA 0x321740C

void InControl_InputManager__HideDevicesWithProfile(System_Type_o *type,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  ulong uVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03317420 to 0341744b has its CatchHandler @ 033175a4 */
  if ((DAT_04566ed8 & 1) == 0) {
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_var);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04566ed8 = 1;
    method = extraout_x1;
  }
  handle = InControl_UnityInputDeviceProfile_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
                    /* try { // try from 0331747c to 03417487 has its CatchHandler @ 03317598 */
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    uVar2 = (*(type->klass->vtable)._21_IsSubclassOf.methodPtr)
                      (type,pSVar1,(type->klass->vtable)._21_IsSubclassOf.method);
    if ((uVar2 & 1) != 0) {
      if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033174cc to 034174e7 has its CatchHandler @ 03317594 */
      InControl_UnityInputDeviceProfile__Hide(type,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

