// KJBGNIGNECD$$JJPEDCEMMID @ RVA 0x311EB80

KJBGNIGNECD_AHICALNEICM_o *
KJBGNIGNECD__JJPEDCEMMID
          (KJBGNIGNECD_o *__this,System_String_o *KGLJICLJHEL,int32_t JLAFGLDIFOC,MethodInfo *method
          )

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  KJBGNIGNECD_AHICALNEICM_o *pKVar4;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *__this_00;
  NFGLEDADCGL_o *__this_01;
  MethodInfo *method_00;
  KJBGNIGNECD_AHICALNEICM_array *pKVar5;
  ACHLOMELAJE_o *pAVar6;
  
  method_00 = (MethodInfo *)(ulong)(uint)JLAFGLDIFOC;
  if ((DAT_04566611 & 1) == 0) {
    FUN_01bab630(&KJBGNIGNECD_AHICALNEICM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566611 = 1;
  }
  pKVar4 = KJBGNIGNECD__LNGFDKLLGCL(__this,JLAFGLDIFOC,method_00);
  if ((pKVar4 != (KJBGNIGNECD_AHICALNEICM_o *)0x0) ||
     (bVar3 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_1,(MethodInfo *)0x0), bVar3)) {
    return (KJBGNIGNECD_AHICALNEICM_o *)0x0;
  }
  pKVar4 = (KJBGNIGNECD_AHICALNEICM_o *)thunk_FUN_01bda818(KJBGNIGNECD_AHICALNEICM_TypeInfo);
  System_Object___ctor((Il2CppObject *)pKVar4,(MethodInfo *)0x0);
  (pKVar4->fields).JIJLBFGKNJK = KGLJICLJHEL;
  thunk_FUN_01c20e04(&pKVar4->fields,KGLJICLJHEL);
  (pKVar4->fields).NOPGBJNLFHM = JLAFGLDIFOC;
  lVar2 = Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Add__;
  __this_00 = (__this->fields).GJBLBEALOBO;
  if (__this_00 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
    pKVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pKVar5 != (KJBGNIGNECD_AHICALNEICM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pKVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pKVar5->m_Items[(int)uVar1] = pKVar4;
        thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,pKVar4);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pKVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
         (__this_01 = (pAVar6->fields).CKJAGLDEMAE, __this_01 != (NFGLEDADCGL_o *)0x0)) {
        NFGLEDADCGL__CBDBJOIFHPC(__this_01,pKVar4,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar6,false,(MethodInfo *)0x0);
          return pKVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

