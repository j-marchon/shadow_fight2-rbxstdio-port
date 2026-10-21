// ONEDJCACCGM$$MCNNLMDLCHO @ RVA 0x31DD2E0

System_String_o * ONEDJCACCGM__MCNNLMDLCHO(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *__this;
  SimpleJSON_JSONNode_o *pSVar3;
  IGFGDDANEPE_o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar5;
  
  if ((DAT_04566d24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&GGLKHCAIGDI_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18029);
    FUN_01bab630(&StringLiteral_19209);
    FUN_01bab630(&StringLiteral_18032);
    FUN_01bab630(&StringLiteral_21888);
    FUN_01bab630(&StringLiteral_19218);
    FUN_01bab630(&StringLiteral_20464);
    FUN_01bab630(&StringLiteral_21842);
    FUN_01bab630(&StringLiteral_21887);
    FUN_01bab630(&StringLiteral_20277);
    FUN_01bab630(&StringLiteral_18028);
    DAT_04566d24 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(0xd,method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this == (ACHLOMELAJE_o *)0x0) {
LAB_032dd704:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) goto LAB_032dd704;
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_21888,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
  FPMAFHGLPOB__KKKBEBDBBEJ(JHMENEKPIBO,(MethodInfo *)0x0);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032dd704;
  __this_00 = (IGFGDDANEPE_o *)
              System_Collections_Generic_Dictionary<object,_object>__get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                         StringLiteral_21887,
                         Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (__this_00 != (IGFGDDANEPE_o *)0x0) {
    bVar1 = (IGFGDDANEPE_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)IGFGDDANEPE_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
  }
  EGBBHPHAHAC = (System_Collections_Generic_List_HEFOANCOHDC__o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                           StringLiteral_20464,
                           Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (EGBBHPHAHAC != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    bVar1 = (GGLKHCAIGDI_TypeInfo->_2).naturalAligment;
    if (((((Il2CppClass *)EGBBHPHAHAC->klass)->_2).naturalAligment < bVar1) ||
       ((((Il2CppClass *)EGBBHPHAHAC->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)GGLKHCAIGDI_TypeInfo)) goto LAB_032dd714;
  }
  if (__this_00 == (IGFGDDANEPE_o *)0x0) goto LAB_032dd704;
  pSVar3 = SimpleJSON_JSONNode__op_Implicit((__this_00->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_19209,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  pHVar5 = (__this_00->fields).PCBECBEFJOI;
  if (pHVar5 == (HOOAAGABMBL_o *)0x0) goto LAB_032dd704;
  pSVar3 = SimpleJSON_JSONNode__op_Implicit
                     ((pHVar5->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_19218,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  iVar2 = IGFGDDANEPE__LGIMDOAMCNG(__this_00,(MethodInfo *)0x0);
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_21842,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  if (EGBBHPHAHAC == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_032dd704;
  pSVar3 = SimpleJSON_JSONNode__op_Implicit
                     ((System_String_o *)(EGBBHPHAHAC->fields)._items,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_20464,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  EGBBHPHAHAC = (System_Collections_Generic_List_HEFOANCOHDC__o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                           StringLiteral_18029,
                           Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (EGBBHPHAHAC != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    bVar1 = (System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo->_2).naturalAligment;
    if (((EGBBHPHAHAC->klass->_2).naturalAligment < bVar1) ||
       ((EGBBHPHAHAC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo)) goto LAB_032dd714;
  }
  FPMAFHGLPOB__JJPJJDHOFLE(EGBBHPHAHAC,JHMENEKPIBO,StringLiteral_20277,(MethodInfo *)0x0);
  EGBBHPHAHAC = (System_Collections_Generic_List_HEFOANCOHDC__o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                           StringLiteral_18028,
                           Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (EGBBHPHAHAC != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    bVar1 = (System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo->_2).naturalAligment;
    if (((EGBBHPHAHAC->klass->_2).naturalAligment < bVar1) ||
       ((EGBBHPHAHAC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo)) {
LAB_032dd714:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(EGBBHPHAHAC);
    }
  }
  FPMAFHGLPOB__JJPJJDHOFLE(EGBBHPHAHAC,JHMENEKPIBO,StringLiteral_18032,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032dd700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar4 = (System_String_o *)
           (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
  return pSVar4;
}

