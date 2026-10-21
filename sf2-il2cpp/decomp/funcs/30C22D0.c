// PKHMIGFEJCL$$BDIFEJCKEGH @ RVA 0x30C22D0

bool PKHMIGFEJCL__BDIFEJCKEGH
               (PKHMIGFEJCL_o *__this,
               System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *OPAEPDIIOEB,
               System_String_o *EGJLNEOGECM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *method_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04566298 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PKHMIGFEJCL_PLLEKFKIIME>_TryGetValue__
                );
    DAT_04566298 = 1;
  }
  local_28 = (Il2CppMethodPointer)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._NGBDCCBGNKH_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)EGJLNEOGECM,(Il2CppObject **)method_00,
                       Method_System_Collections_Generic_Dictionary<string,_PKHMIGFEJCL_PLLEKFKIIME>_TryGetValue__
                      );
    if (bVar1) {
      PKHMIGFEJCL__OHMPGFDPAAH(__this,EGJLNEOGECM,method_00);
      if (local_28 != (Il2CppMethodPointer)0x0) {
        (**(code **)(local_28 + 0x18))
                  (*(undefined8 *)(local_28 + 0x40),OPAEPDIIOEB,*(undefined8 *)(local_28 + 0x28));
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

