// InControl.UnityInputDeviceProfile$$Hide @ RVA 0x355CEDC

void InControl_UnityInputDeviceProfile__Hide(System_Type_o *type,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<Type>_Add__);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04568b8e = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->hideList;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this,(Il2CppObject *)type,Method_System_Collections_Generic_HashSet<Type>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

