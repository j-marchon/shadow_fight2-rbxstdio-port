// GHOPMMBKGMB$$PPLCJLAAALH @ RVA 0x33CDDE0

void GHOPMMBKGMB__PPLCJLAAALH
               (GHOPMMBKGMB_o *__this,UnityEngine_Purchasing_Product_array *MOJLFMJLBDH,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  GLDKIFOLMAO_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  UnityEngine_Purchasing_ProductDefinition_o *pUVar4;
  UnityEngine_Purchasing_Product_o *IPIHMPBGACB;
  System_String_o *key;
  uint uVar5;
  GLDKIFOLMAO_o *local_58;
  
  if ((DAT_04567e3a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TryGetValue__);
    FUN_01bab630(&GLDKIFOLMAO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567e3a = 1;
  }
  local_58 = (GLDKIFOLMAO_o *)0x0;
  if (MOJLFMJLBDH != (UnityEngine_Purchasing_Product_array *)0x0) {
    uVar1 = (uint)MOJLFMJLBDH->max_length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        IPIHMPBGACB = MOJLFMJLBDH->m_Items[(int)uVar5];
        if (((IPIHMPBGACB == (UnityEngine_Purchasing_Product_o *)0x0) ||
            (pUVar4 = (IPIHMPBGACB->fields)._definition_k__BackingField,
            pUVar4 == (UnityEngine_Purchasing_ProductDefinition_o *)0x0)) ||
           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields).HGCIIJGGNKN,
           pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        goto LAB_034cdf94;
        bVar2 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (pSVar3,(Il2CppObject *)(pUVar4->fields)._id_k__BackingField,
                           (Il2CppObject **)&local_58,
                           Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TryGetValue__
                          );
        if (bVar2) {
          if (local_58 == (GLDKIFOLMAO_o *)0x0) goto LAB_034cdf94;
          GLDKIFOLMAO__LLCONNGHGKD(local_58,IPIHMPBGACB,(MethodInfo *)0x0);
        }
        else {
          pUVar4 = (IPIHMPBGACB->fields)._definition_k__BackingField;
          if (pUVar4 == (UnityEngine_Purchasing_ProductDefinition_o *)0x0) goto LAB_034cdf94;
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).HGCIIJGGNKN;
          key = (pUVar4->fields)._id_k__BackingField;
          __this_00 = (GLDKIFOLMAO_o *)thunk_FUN_01bda818(GLDKIFOLMAO_TypeInfo);
          GLDKIFOLMAO___ctor(__this_00,IPIHMPBGACB,(MethodInfo *)0x0);
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_034cdf94;
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (pSVar3,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Add__);
        }
        uVar1 = (uint)MOJLFMJLBDH->max_length;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034cdf94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

