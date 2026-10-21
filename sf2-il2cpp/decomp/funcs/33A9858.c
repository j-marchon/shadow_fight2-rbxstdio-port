// NKDMOOEFPHJ$$DGLJCGNHLIG @ RVA 0x33A9858

void NKDMOOEFPHJ__DGLJCGNHLIG(NKDMOOEFPHJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if ((DAT_04567d04 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Clear__
                );
    DAT_04567d04 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NCICFCFDKGL;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,
               Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Clear__
              );
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).JIEJMAMHHMD
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Clear__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

