// PCKJEMMFMKL$$NNAIMOIPHEE @ RVA 0x3112738

PCKJEMMFMKL_OMJBBKMFKIJ_o *
PCKJEMMFMKL__NNAIMOIPHEE(PCKJEMMFMKL_o *__this,int32_t PNPNABNPLHC,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *__this_00;
  PCKJEMMFMKL_OMJBBKMFKIJ_o *local_28;
  
  if ((DAT_04566594 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TryGetValue__
                );
    DAT_04566594 = 1;
  }
  local_28 = (PCKJEMMFMKL_OMJBBKMFKIJ_o *)0x0;
  __this_00 = (__this->fields).CDMELACPLKK;
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,PNPNABNPLHC,
               (Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TryGetValue__
              );
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

