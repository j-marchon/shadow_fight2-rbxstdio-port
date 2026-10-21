// InControl.UnityInputDeviceProfile$$get_IsHidden @ RVA 0x355CF5C

bool InControl_UnityInputDeviceProfile__get_IsHidden
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Type_o *item;
  MethodInfo *extraout_x1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04568b8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<Type>_Contains__);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04568b8f = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              InControl_UnityInputDeviceProfile_TypeInfo->static_fields->hideList;
  item = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)item,
                       Method_System_Collections_Generic_HashSet<Type>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

