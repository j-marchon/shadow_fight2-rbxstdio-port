// ACAEKBNCODE$$MELCGNHNCDA @ RVA 0x33ADA7C

void ACAEKBNCODE__MELCGNHNCDA
               (ACAEKBNCODE_o *__this,int32_t OGPGLGPMEPD,bool MCFAEIEJHND,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  ONPHBGJDFBM_o *local_28;
  
  if ((DAT_04567d26 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_TryGetValue__);
    DAT_04567d26 = 1;
  }
  local_28 = (ONPHBGJDFBM_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).PGDGCNKLKMN;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__TryGetValue
              (pSVar1,OGPGLGPMEPD,(Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_TryGetValue__);
    if (local_28 != (ONPHBGJDFBM_o *)0x0) {
      if (MCFAEIEJHND) {
        ONPHBGJDFBM__DCLABJGIAIG(local_28,(MethodInfo *)0x0);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).PGDGCNKLKMN;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_034adb24;
      System_Collections_Generic_Dictionary<int,_object>__Remove
                (pSVar1,OGPGLGPMEPD,
                 Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_Remove__);
    }
    return;
  }
LAB_034adb24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

