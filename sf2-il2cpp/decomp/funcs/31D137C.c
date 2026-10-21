// IIHMKHNLJKD$$FFKFEHOIJCG @ RVA 0x31D137C

IIHMKHNLJKD_MGNPEFBKION_o *
IIHMKHNLJKD__FFKFEHOIJCG(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  IIHMKHNLJKD_MGNPEFBKION_o *__this_00;
  IIHMKHNLJKD_MGNPEFBKION_o *local_28;
  
  if ((DAT_04566cab & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TryGetValue__
                );
    FUN_01bab630(&IIHMKHNLJKD_MGNPEFBKION_TypeInfo);
    DAT_04566cab = 1;
  }
  local_28 = (IIHMKHNLJKD_MGNPEFBKION_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FODILKIIDCE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)KKJPPDNKGAI,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TryGetValue__
                      );
    if (!bVar1) {
      __this_00 = (IIHMKHNLJKD_MGNPEFBKION_o *)thunk_FUN_01bda818(IIHMKHNLJKD_MGNPEFBKION_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).FODILKIIDCE;
      local_28 = __this_00;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_032d1444;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)KKJPPDNKGAI,(Il2CppObject *)__this_00,
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Add__
                );
    }
    return local_28;
  }
LAB_032d1444:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

