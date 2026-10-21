// NOGMFKIFAGJ$$EPBENPDCBFE @ RVA 0x3308328

bool NOGMFKIFAGJ__EPBENPDCBFE
               (NOGMFKIFAGJ_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  ECENNHNBAME_o *__this_00;
  
  if ((DAT_04567771 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567771 = 1;
  }
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (((PHCGJGCHKCM != (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) && (bVar2)) &&
     (__this_00 = (ECENNHNBAME_o *)(PHCGJGCHKCM->fields).IGMDDJFPIJL,
     __this_00 != (ECENNHNBAME_o *)0x0)) {
    bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((((System_Collections_Generic_Dictionary_object__object__c *)__this_00->klass)->_2).
         naturalAligment < bVar1) ||
       ((((System_Collections_Generic_Dictionary_object__object__c *)__this_00->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
LAB_03408468:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       StringLiteral_2968,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      __this_00 = (ECENNHNBAME_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                             StringLiteral_2968,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
      if (__this_00 != (ECENNHNBAME_o *)0x0) {
        bVar1 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
        if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)ECENNHNBAME_TypeInfo)) goto LAB_03408468;
      }
    }
    else {
      __this_00 = (ECENNHNBAME_o *)0x0;
    }
    bVar2 = System_String__op_Inequality
                      ((__this->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_1,
                       (MethodInfo *)0x0);
    if ((!bVar2) ||
       ((__this_00 != (ECENNHNBAME_o *)0x0 &&
        (bVar2 = ECENNHNBAME__CBJGGDFAACP
                           (__this_00,(__this->fields)._COIPKAKHDFP_k__BackingField,
                            (MethodInfo *)0x0), bVar2)))) {
      return true;
    }
  }
  return false;
}

