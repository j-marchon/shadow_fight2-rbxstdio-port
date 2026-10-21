// HCKNPMDFGLJ$$EPBENPDCBFE @ RVA 0x31A6E38

bool HCKNPMDFGLJ__EPBENPDCBFE
               (HCKNPMDFGLJ_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  JADGCGOJLJB_o *__this_00;
  
  if ((DAT_04566b17 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&JADGCGOJLJB_TypeInfo);
    FUN_01bab630(&StringLiteral_7628);
    DAT_04566b17 = 1;
  }
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
    return false;
  }
  if (!bVar2) {
    return false;
  }
  __this_00 = (JADGCGOJLJB_o *)(PHCGJGCHKCM->fields).IGMDDJFPIJL;
  if (__this_00 != (JADGCGOJLJB_o *)0x0) {
    bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
LAB_032a6fc8:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       StringLiteral_7628,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      __this_00 = (JADGCGOJLJB_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                             StringLiteral_7628,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
      if (__this_00 == (JADGCGOJLJB_o *)0x0) {
        return false;
      }
      bVar1 = (JADGCGOJLJB_TypeInfo->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)JADGCGOJLJB_TypeInfo)) goto LAB_032a6fc8;
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (((bVar2) ||
          (bVar2 = System_String__op_Inequality
                             ((__this_00->fields).JIJLBFGKNJK,
                              (__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0),
          !bVar2)) &&
         (((__this->fields)._GMPAEDFIIHF_k__BackingField == 0 ||
          (iVar3 = JADGCGOJLJB__NHGGBEACKBD(__this_00,(MethodInfo *)0x0),
          iVar3 == (__this->fields)._GMPAEDFIIHF_k__BackingField)))) {
        return true;
      }
    }
  }
  return false;
}

