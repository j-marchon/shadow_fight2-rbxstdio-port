// IAGKPNAGKLA$$EPBENPDCBFE @ RVA 0x347D34C

/* WARNING: Type propagation algorithm not settling */

bool IAGKPNAGKLA__EPBENPDCBFE
               (IAGKPNAGKLA_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  HEFOANCOHDC_o *pHVar4;
  HEFOANCOHDC_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568362 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9146);
    FUN_01bab630(&StringLiteral_10142);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568362 = 1;
  }
  pSVar3 = (__this->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 0357d3f0 to 0367d5fb has its CatchHandler @ 0357d3f0
                       catch() { ... } // from try @ 0357d3f0 with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357d9ac with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357da58 with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357da60 with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357dbc8 with catch @ 0357d3f0 */
  if ((pSVar3 == (System_String_o *)0x0) ||
     (bVar2 = System_String__op_Equality(pSVar3,StringLiteral_1,(MethodInfo *)0x0), bVar2)) {
    bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
    if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
      return false;
    }
    if (!bVar2) {
      return false;
    }
    if ((PHCGJGCHKCM->fields).IGMDDJFPIJL == (Il2CppObject *)0x0) {
      return false;
    }
  }
  else {
    if ((PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) ||
       (pSVar3 = (__this->fields)._HFALHOCIDCH_k__BackingField, pSVar3 == (System_String_o *)0x0))
    goto LAB_0357d5b4;
    bVar2 = System_String__Equals(pSVar3,(PHCGJGCHKCM->fields).BFBIEPIDBON,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (PHCGJGCHKCM->fields).IGMDDJFPIJL;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,StringLiteral_9146,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pHVar4 = (HEFOANCOHDC_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_00,StringLiteral_9146,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      value = pHVar4;
      if ((pHVar4 != (HEFOANCOHDC_o *)0x0) && ((System_String_c *)pHVar4->klass != string_TypeInfo))
      goto LAB_0357d550;
    }
    else {
      value = (HEFOANCOHDC_o *)0x0;
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,StringLiteral_10142,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pHVar4 = (HEFOANCOHDC_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_00,StringLiteral_10142,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pHVar4 != (HEFOANCOHDC_o *)0x0) {
        bVar1 = (HEFOANCOHDC_TypeInfo->_2).naturalAligment;
        if (((pHVar4->klass->_2).naturalAligment < bVar1) ||
           ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)HEFOANCOHDC_TypeInfo)) {
LAB_0357d550:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pHVar4);
        }
      }
    }
    else {
      pHVar4 = (HEFOANCOHDC_o *)0x0;
    }
    if (pHVar4 == (__this->fields).super.super._MEFGNAIILBJ_k__BackingField) {
      pSVar3 = (__this->fields)._MMNODECCMJK_k__BackingField;
      if ((pSVar3 != (System_String_o *)0x0) &&
         (bVar2 = System_String__op_Equality(pSVar3,StringLiteral_1,(MethodInfo *)0x0), !bVar2)) {
        pSVar3 = (__this->fields)._MMNODECCMJK_k__BackingField;
        if (pSVar3 == (System_String_o *)0x0) {
LAB_0357d5b4:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar3,(System_String_o *)value,(MethodInfo *)0x0);
        if (!bVar2) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

