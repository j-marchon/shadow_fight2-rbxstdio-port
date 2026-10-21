// LDHBHPILNMA$$CCBEONOLBID @ RVA 0x31A21B0

ECENNHNBAME_o *
LDHBHPILNMA__CCBEONOLBID(System_String_o *KGLJICLJHEL,bool KBOHMEMAGIB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_o *message;
  ECENNHNBAME_o *local_28;
  
  if ((DAT_04566ae8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryGetValue__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&StringLiteral_492);
    FUN_01bab630(&StringLiteral_2969);
    DAT_04566ae8 = 1;
  }
  local_28 = (ECENNHNBAME_o *)0x0;
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           LDHBHPILNMA_TypeInfo->static_fields->EJNINLMPAAO;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryGetValue__
                      );
    if (!bVar1) {
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  LDHBHPILNMA_TypeInfo->static_fields->KDDGJMCPJNA;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_032a2310;
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_00,(Il2CppObject *)KGLJICLJHEL,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      if (!bVar1) {
        message = System_String__Concat
                            (StringLiteral_2969,KGLJICLJHEL,StringLiteral_492,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        if (KBOHMEMAGIB) {
          UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        }
        else {
          UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
        }
      }
    }
    return local_28;
  }
LAB_032a2310:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

