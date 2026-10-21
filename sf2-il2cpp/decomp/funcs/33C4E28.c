// OGNCMFBMBMB.AFGELJDFHIF$$DNMIKEGDEAG @ RVA 0x33C4E28

bool OGNCMFBMBMB_AFGELJDFHIF__DNMIKEGDEAG
               (OGNCMFBMBMB_AFGELJDFHIF_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04567ded & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<GameObject>_Contains__);
    DAT_04567ded = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)CMMIJCJOBBF,
                       Method_System_Collections_Generic_HashSet<GameObject>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

