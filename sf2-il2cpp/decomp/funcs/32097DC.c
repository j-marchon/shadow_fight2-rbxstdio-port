// Util$$BNIOOKFFIGC @ RVA 0x32097DC

System_String_o * Util__BNIOOKFFIGC(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566e65 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04566e65 = 1;
    method = extraout_x1;
  }
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(LAIGNDBNBJG,(MethodInfo *)0x0);
    while( true ) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) break;
      if ((__this_00 == (UnityEngine_Transform_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) goto LAB_033098f8;
      pSVar2 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2,StringLiteral_1492,(MethodInfo *)0x0);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_033098f8;
      System_Text_StringBuilder__Insert(__this,0,pSVar2,(MethodInfo *)0x0);
      __this_00 = UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033098f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
LAB_033098f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

