// TypeDefIndex 1747
// Namespace: 
// public static class ONEDJCACCGM
// Fields:

// ===== private static string AEEDECMFCBI(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DCEFC]
// ONEDJCACCGM$$AEEDECMFCBI @ RVA 0x31DCEFC

System_String_o * ONEDJCACCGM__AEEDECMFCBI(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t MNPKIDDPNBM;
  int32_t n;
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *MMAOCCAGLCH;
  int32_t *piVar3;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  undefined1 auVar6 [16];
  
  if ((DAT_04566d22 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&ONEDJCACCGM_PECKMDDGEMA_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    FUN_01bab630(&StringLiteral_20461/*"receipt"*/);
    FUN_01bab630(&StringLiteral_20565/*"resultCode"*/);
    FUN_01bab630(&StringLiteral_20566/*"result_code"*/);
    FUN_01bab630(&StringLiteral_21227/*"status"*/);
    DAT_04566d22 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032dd180;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125/*"packageName"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032dd180;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461/*"receipt"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032dd010:
    MMAOCCAGLCH = string_TypeInfo->static_fields->Empty;
  }
  else {
    MMAOCCAGLCH = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (MMAOCCAGLCH == (System_String_o *)0x0) goto LAB_032dd010;
  }
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_21227/*"status"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if ((pIVar1->klass->_1).element_class != (ONEDJCACCGM_PECKMDDGEMA_TypeInfo->_1).element_class) {
LAB_032dd184:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    piVar3 = (int32_t *)thunk_FUN_01bda96c();
    MNPKIDDPNBM = *piVar3;
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_20565/*"resultCode"*/,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class != (int_TypeInfo->_1).element_class) goto LAB_032dd184;
      auVar6 = thunk_FUN_01bda96c();
      n = *auVar6._0_8_;
      NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x10,auVar6._8_8_);
      pSVar4 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,MMAOCCAGLCH,in_x3);
      pSVar2 = ONEDJCACCGM__EFMHCCPKGMG(MNPKIDDPNBM,method_00);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (pSVar4 != (SimpleJSON_JSONObject_o *)0x0) {
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_21227/*"status"*/,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_20566/*"result_code"*/,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(MMAOCCAGLCH,(MethodInfo *)0x0);
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_20461/*"receipt"*/,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dd17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
  }
LAB_032dd180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string BKEOGNKCKAH()  [RVA 0x31DD224]
// ONEDJCACCGM$$BKEOGNKCKAH @ RVA 0x31DD224

System_String_o * ONEDJCACCGM__BKEOGNKCKAH(MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566d23 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&StringLiteral_16249/*"a"*/);
    FUN_01bab630(&StringLiteral_18893/*"i"*/);
    FUN_01bab630(&StringLiteral_21645/*"u"*/);
    DAT_04566d23 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI__MJNFJOOPION((MethodInfo *)0x0);
  if (bVar1) {
    puVar2 = &StringLiteral_18893/*"i"*/;
  }
  else {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = EOAOCPLIKOI__IHBLLJEMHLM((MethodInfo *)0x0);
    puVar2 = &StringLiteral_16249/*"a"*/;
    if (!bVar1) {
      puVar2 = &StringLiteral_21645/*"u"*/;
    }
  }
  return (System_String_o *)*puVar2;
}


// ===== private static string MCNNLMDLCHO(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DD2E0]
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
    FUN_01bab630(&StringLiteral_18029/*"ench_before"*/);
    FUN_01bab630(&StringLiteral_19209/*"item"*/);
    FUN_01bab630(&StringLiteral_18032/*"enchantments"*/);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_19218/*"item_type"*/);
    FUN_01bab630(&StringLiteral_20464/*"recipe"*/);
    FUN_01bab630(&StringLiteral_21842/*"upgrade_level"*/);
    FUN_01bab630(&StringLiteral_21887/*"user_item"*/);
    FUN_01bab630(&StringLiteral_20277/*"previous_enchantments"*/);
    FUN_01bab630(&StringLiteral_18028/*"ench_after"*/);
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
            (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
  FPMAFHGLPOB__KKKBEBDBBEJ(JHMENEKPIBO,(MethodInfo *)0x0);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032dd704;
  __this_00 = (IGFGDDANEPE_o *)
              System_Collections_Generic_Dictionary<object,_object>__get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                         StringLiteral_21887/*"user_item"*/,
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
                           StringLiteral_20464/*"recipe"*/,
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
            (JHMENEKPIBO,StringLiteral_19209/*"item"*/,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  pHVar5 = (__this_00->fields).PCBECBEFJOI;
  if (pHVar5 == (HOOAAGABMBL_o *)0x0) goto LAB_032dd704;
  pSVar3 = SimpleJSON_JSONNode__op_Implicit
                     ((pHVar5->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_19218/*"item_type"*/,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  iVar2 = IGFGDDANEPE__LGIMDOAMCNG(__this_00,(MethodInfo *)0x0);
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_21842/*"upgrade_level"*/,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  if (EGBBHPHAHAC == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_032dd704;
  pSVar3 = SimpleJSON_JSONNode__op_Implicit
                     ((System_String_o *)(EGBBHPHAHAC->fields)._items,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,StringLiteral_20464/*"recipe"*/,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method)
  ;
  EGBBHPHAHAC = (System_Collections_Generic_List_HEFOANCOHDC__o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                           StringLiteral_18029/*"ench_before"*/,
                           Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (EGBBHPHAHAC != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    bVar1 = (System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo->_2).naturalAligment;
    if (((EGBBHPHAHAC->klass->_2).naturalAligment < bVar1) ||
       ((EGBBHPHAHAC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo)) goto LAB_032dd714;
  }
  FPMAFHGLPOB__JJPJJDHOFLE(EGBBHPHAHAC,JHMENEKPIBO,StringLiteral_20277/*"previous_enchantments"*/,(MethodInfo *)0x0);
  EGBBHPHAHAC = (System_Collections_Generic_List_HEFOANCOHDC__o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                           StringLiteral_18028/*"ench_after"*/,
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
  FPMAFHGLPOB__JJPJJDHOFLE(EGBBHPHAHAC,JHMENEKPIBO,StringLiteral_18032/*"enchantments"*/,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032dd700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar4 = (System_String_o *)
           (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
  return pSVar4;
}


// ===== private static string HMEDPKKKPAD(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DDAA8]
// ONEDJCACCGM$$HMEDPKKKPAD @ RVA 0x31DDAA8

System_String_o * ONEDJCACCGM__HMEDPKKKPAD(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d25 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_20458/*"reason"*/);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    DAT_04566d25 = 1;
  }
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_20125/*"packageName"*/,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pSVar2 = (System_String_o *)
               (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
      pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_20458/*"reason"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        auVar5 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
        NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x14,auVar5._8_8_);
        pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,(System_String_o *)0x0,in_x3);
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(auVar5._0_8_,(MethodInfo *)0x0);
        if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
          (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar3,StringLiteral_20458/*"reason"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032ddbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar2 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          return pSVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static JSONObject OGNMJNOFPPP(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP)  [RVA 0x31DD718]
// ONEDJCACCGM$$OGNMJNOFPPP @ RVA 0x31DD718

SimpleJSON_JSONObject_o * ONEDJCACCGM__OGNMJNOFPPP(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSON_JSONObject_o *__this;
  System_String_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  CFGLKHFFEKA_o *pCVar5;
  MethodInfo *pMVar6;
  SimpleJSON_JSONObject_o *extraout_x0;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_String_o *extraout_x1_00;
  System_String_o *extraout_x1_01;
  ACHLOMELAJE_o *pAVar7;
  SimpleJSON_JSONObject_o *IMMNELPBGIF;
  
  if ((DAT_04566d26 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_19028/*"install_id"*/);
    FUN_01bab630(&StringLiteral_20143/*"paid_version"*/);
    FUN_01bab630(&StringLiteral_16840/*"build_version"*/);
    FUN_01bab630(&StringLiteral_21565/*"total_payment_sum"*/);
    FUN_01bab630(&StringLiteral_17977/*"eid"*/);
    FUN_01bab630(&StringLiteral_21051/*"simulator"*/);
    FUN_01bab630(&StringLiteral_21517/*"timestamp"*/);
    FUN_01bab630(&StringLiteral_18104/*"etype"*/);
    FUN_01bab630(&StringLiteral_17608/*"data_version"*/);
    DAT_04566d26 = 1;
    method = extraout_x1;
  }
  __this = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo,method);
  SimpleJSON_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar3 = ONEDJCACCGM__AIHHFFMBFEL(BKFOLMBMFNP,method_00);
  iVar2 = NFNBHPOJFNJ__FKKODNPKIIG((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  if (__this != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,StringLiteral_17977/*"eid"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,StringLiteral_18104/*"etype"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar5 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    if (pCVar5 != (CFGLKHFFEKA_o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(pCVar5->klass->vtable)._3_ToString.methodPtr)
                         (pCVar5,(pCVar5->klass->vtable)._3_ToString.method);
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,StringLiteral_16840/*"build_version"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pCVar5 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
      if (pCVar5 != (CFGLKHFFEKA_o *)0x0) {
        pSVar3 = CFGLKHFFEKA__IBBMFNFIKPE(pCVar5,true,(MethodInfo *)0x0);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_17608/*"data_version"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
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
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
          pSVar4 = SimpleJSON_JSONNode__op_Implicit
                             ((pAVar7->fields).super.BBOPCFFCNIA,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,StringLiteral_19028/*"install_id"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
            pSVar4 = SimpleJSON_JSONNode__op_Implicit
                               ((pAVar7->fields).super.ECAPNIBOPKP,(MethodInfo *)0x0);
            pMVar6 = (MethodInfo *)
                     (*(__this->klass->vtable)._8_set_Item.methodPtr)
                               (__this,StringLiteral_21565/*"total_payment_sum"*/,pSVar4,
                                (__this->klass->vtable)._8_set_Item.method);
            iVar2 = ONEDJCACCGM__DKCJNFMABGO(pMVar6);
            pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._8_set_Item.methodPtr)
                      (__this,StringLiteral_21517/*"timestamp"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method)
            ;
            iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
            pMVar6 = (MethodInfo *)SimpleJSON_JSONNode__op_Implicit(iVar2 == 0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._8_set_Item.methodPtr)
                      (__this,StringLiteral_20143/*"paid_version"*/,pMVar6,(__this->klass->vtable)._8_set_Item.method)
            ;
            bVar1 = EOAOCPLIKOI__HKLIPCEAINH((MethodInfo *)0x0);
            IMMNELPBGIF = (SimpleJSON_JSONObject_o *)(ulong)bVar1;
            pSVar3 = extraout_x1_00;
            if (bVar1) {
              ONEDJCACCGM__AALJIKGFNIL(__this,StringLiteral_21051/*"simulator"*/,pMVar6);
              IMMNELPBGIF = extraout_x0;
              pSVar3 = extraout_x1_01;
            }
            ONEDJCACCGM__GIGNEECIEPK(IMMNELPBGIF,pSVar3,pMVar6);
            return __this;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string FNNGMNBEINL(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DDE98]
// ONEDJCACCGM$$FNNGMNBEINL @ RVA 0x31DDE98

System_String_o * ONEDJCACCGM__FNNGMNBEINL(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t n;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *__this;
  SimpleJSON_JSONNode_o *pSVar2;
  EEGDOGKBLNG_o *__this_00;
  System_String_o *pSVar3;
  int64_t n_00;
  Il2CppObject *pIVar4;
  int32_t *piVar5;
  MethodInfo *extraout_x1;
  KMBNFNCDDBP_o *pKVar6;
  
  if ((DAT_04566d27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20414/*"raid_player_id"*/);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_20196/*"perks"*/);
    FUN_01bab630(&StringLiteral_17713/*"device_name"*/);
    FUN_01bab630(&StringLiteral_16778/*"bp_level"*/);
    FUN_01bab630(&StringLiteral_20415/*"raid_player_name"*/);
    DAT_04566d27 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(2,method);
  FPMAFHGLPOB__POLBDFMPDPH(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
  FPMAFHGLPOB__GBDIINGAOFC(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
  FPMAFHGLPOB__NEFOBANKNIG(JHMENEKPIBO,(MethodInfo *)0x0);
  FPMAFHGLPOB__FFPPBALEHKC(JHMENEKPIBO,(MethodInfo *)0x0);
  FPMAFHGLPOB__LMDNOPKIPHF(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
  FPMAFHGLPOB__JMBBKNACCMB(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
  FPMAFHGLPOB__HPMNGGGFGNE(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar2,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar6 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if (pKVar6 != (KMBNFNCDDBP_o *)0x0) {
        pSVar2 = SimpleJSON_JSONNode__op_Implicit((pKVar6->fields).IGLHCNLNIPK,(MethodInfo *)0x0);
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,StringLiteral_17713/*"device_name"*/,pSVar2,
                   (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
          pSVar3 = EEGDOGKBLNG__GKMAFGODLLG(__this_00,(MethodInfo *)0x0);
          if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
          }
          pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
          (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                    (JHMENEKPIBO,StringLiteral_20415/*"raid_player_name"*/,pSVar2,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          n_00 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
          pSVar2 = SimpleJSON_JSONNode__op_Implicit(n_00,(MethodInfo *)0x0);
          (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                    (JHMENEKPIBO,StringLiteral_20414/*"raid_player_id"*/,pSVar2,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        }
        if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
          bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                             StringLiteral_16778/*"bp_level"*/,
                             Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                            );
          if (bVar1) {
            pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                BFPCMHPBAGL,StringLiteral_16778/*"bp_level"*/,
                                Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                               );
            if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
            }
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032de288;
            if ((pIVar4->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pIVar4);
            }
            piVar5 = (int32_t *)thunk_FUN_01bda96c();
            pSVar2 = SimpleJSON_JSONNode__op_Implicit(*piVar5,(MethodInfo *)0x0);
            (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                      (JHMENEKPIBO,StringLiteral_16778/*"bp_level"*/,pSVar2,
                       (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          }
          FPMAFHGLPOB__IDLABKHCAFO(JHMENEKPIBO,StringLiteral_20196/*"perks"*/,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032de284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar3 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
          return pSVar3;
        }
      }
    }
  }
LAB_032de288:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string MADPMFNKNJK(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DE290]
// ONEDJCACCGM$$MADPMFNKNJK @ RVA 0x31DE290

System_String_o * ONEDJCACCGM__MADPMFNKNJK(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *MMAOCCAGLCH;
  System_String_o *pSVar3;
  SimpleJSON_JSONObject_o *pSVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d28 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&ONEDJCACCGM_JOBKOFBMHLM_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20177/*"pay_verify_{0}"*/);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    FUN_01bab630(&StringLiteral_20461/*"receipt"*/);
    FUN_01bab630(&StringLiteral_21227/*"status"*/);
    DAT_04566d28 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032de410;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125/*"packageName"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032de410;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461/*"receipt"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032de378:
    MMAOCCAGLCH = string_TypeInfo->static_fields->Empty;
  }
  else {
    MMAOCCAGLCH = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (MMAOCCAGLCH == (System_String_o *)0x0) goto LAB_032de378;
  }
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_21227/*"status"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if ((pIVar1->klass->_1).element_class != (ONEDJCACCGM_JOBKOFBMHLM_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    auVar5 = thunk_FUN_01bda96c();
    pSVar3 = ONEDJCACCGM__EFMHCCPKGMG(*auVar5._0_8_,auVar5._8_8_);
    pSVar3 = System_String__Format(StringLiteral_20177/*"pay_verify_{0}"*/,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    pSVar4 = ONEDJCACCGM__FBMNAFFOAFL(pSVar3,pSVar2,MMAOCCAGLCH,in_x3);
    if (pSVar4 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032de40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
LAB_032de410:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string MHALNMAEOCF(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DE82C]
// ONEDJCACCGM$$MHALNMAEOCF @ RVA 0x31DE82C

System_String_o * ONEDJCACCGM__MHALNMAEOCF(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *MMAOCCAGLCH;
  int64_t *piVar3;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  MethodInfo *in_x3;
  int64_t n;
  int64_t n_00;
  undefined1 auVar6 [16];
  
  if ((DAT_04566d29 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
                    /* try { // try from 032de860 to 033de977 has its CatchHandler @ 032de860
                       catch() { ... } // from try @ 032de860 with catch @ 032de860
                       catch() { ... } // from try @ 032de9bc with catch @ 032de860
                       catch() { ... } // from try @ 032deaa0 with catch @ 032de860
                       catch() { ... } // from try @ 032deacc with catch @ 032de860
                       catch() { ... } // from try @ 032deb00 with catch @ 032de860 */
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    FUN_01bab630(&StringLiteral_18395/*"gemsChanged"*/);
    FUN_01bab630(&StringLiteral_20461/*"receipt"*/);
    FUN_01bab630(&StringLiteral_18396/*"gems_changed"*/);
    FUN_01bab630(&StringLiteral_19740/*"money_changed"*/);
    FUN_01bab630(&StringLiteral_19739/*"moneyChanged"*/);
    DAT_04566d29 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032dea78;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125/*"packageName"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032dea78;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461/*"receipt"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032de93c:
    MMAOCCAGLCH = string_TypeInfo->static_fields->Empty;
  }
  else {
    MMAOCCAGLCH = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    if (MMAOCCAGLCH == (System_String_o *)0x0) goto LAB_032de93c;
  }
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_19740/*"money_changed"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 032de978 to 033de97f has its CatchHandler @ 032deab4 */
    if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class) {
LAB_032dea7c:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
                    /* try { // try from 032de98c to 033de997 has its CatchHandler @ 032deaa8 */
    piVar3 = (int64_t *)thunk_FUN_01bda96c();
    n = *piVar3;
                    /* try { // try from 032de99c to 033de9ab has its CatchHandler @ 032deaa4 */
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_18396/*"gems_changed"*/,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 032de9ac to 033de9bb has its CatchHandler @ 032deab0 */
                    /* try { // try from 032de9bc to 033dea9b has its CatchHandler @ 032de860 */
      if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class) goto LAB_032dea7c;
      auVar6 = thunk_FUN_01bda96c();
      n_00 = *auVar6._0_8_;
      NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x12,auVar6._8_8_);
      pSVar4 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,MMAOCCAGLCH,in_x3);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      if (pSVar4 != (SimpleJSON_JSONObject_o *)0x0) {
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_19739/*"moneyChanged"*/,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n_00,(MethodInfo *)0x0);
        (*(pSVar4->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar4,StringLiteral_18395/*"gemsChanged"*/,pSVar5,(pSVar4->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dea74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
  }
LAB_032dea78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string EGENCJMCCEJ(string KGLJICLJHEL)  [RVA 0x31DEA80]
// ONEDJCACCGM$$EGENCJMCCEJ @ RVA 0x31DEA80

System_String_o * ONEDJCACCGM__EGENCJMCCEJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar1;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 032dea9c to 033dea9f has its CatchHandler @ 032deaac */
  if ((DAT_04566d2a & 1) == 0) {
                    /* try { // try from 032deaa0 to 033deac7 has its CatchHandler @ 032de860 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de99c with catch @ 032deaa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de98c with catch @ 032deaa8
                        */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032dea9c with catch @ 032deaac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de9ac with catch @ 032deab0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032de978 with catch @ 032deab4
                        */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566d2a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032deac8 to 033deacb has its CatchHandler @ 032deaf0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032deacc to 033deaf7 has its CatchHandler @ 032de860 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* catch() { ... } // from try @ 032deac8 with catch @ 032deaf0 */
                    /* try { // try from 032deaf8 to 033deaff has its CatchHandler @ 032deb18 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
                    /* try { // try from 032deb00 to 033deb0f has its CatchHandler @ 032de860 */
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 032deb10 to 033deb17 has its CatchHandler @ 032deb18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032deaf8 with catch @ 032deb18
                       catch(type#2 @ 00000000) { ... } // from try @ 032deb10 with catch @ 032deb18
                        */
    pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this,KGLJICLJHEL,0,(MethodInfo *)0x0);
    pMVar1 = (MEMHEPBAJJA_HIAEDCDJJDJ_Fields *)&StringLiteral_1/*""*/;
    if (pMVar2 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      pMVar1 = &pMVar2->fields;
    }
    return pMVar1->JAICMIMBIOA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string KBBKJOKBJNH(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DEB48]
// ONEDJCACCGM$$KBBKJOKBJNH @ RVA 0x31DEB48

System_String_o * ONEDJCACCGM__KBBKJOKBJNH(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *pSVar1;
  ACHLOMELAJE_o *__this;
  SimpleJSON_JSONNode_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d2b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_19209/*"item"*/);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_20562/*"result"*/);
    FUN_01bab630(&StringLiteral_20187/*"percent"*/);
    FUN_01bab630(&StringLiteral_19738/*"money"*/);
    FUN_01bab630(&StringLiteral_21242/*"store"*/);
    DAT_04566d2b = 1;
    method = extraout_x1;
  }
  pSVar1 = ONEDJCACCGM__OGNMJNOFPPP(0xc,method);
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
  if (__this != (ACHLOMELAJE_o *)0x0) {
    n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
    if (pSVar1 != (SimpleJSON_JSONObject_o *)0x0) {
      (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                (pSVar1,StringLiteral_21888/*"user_level"*/,pSVar2,(pSVar1->klass->vtable)._8_set_Item.method);
      if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
        pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                            StringLiteral_19209/*"item"*/,
                            Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__)
        ;
        if (pIVar3 != (Il2CppObject *)0x0) {
          pSVar4 = (System_String_o *)
                   (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
          pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
          (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar1,StringLiteral_19209/*"item"*/,pSVar2,(pSVar1->klass->vtable)._8_set_Item.method);
          pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL
                              ,StringLiteral_20187/*"percent"*/,
                              Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                             );
          if (pIVar3 != (Il2CppObject *)0x0) {
            pSVar4 = (System_String_o *)
                     (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
            pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
            (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                      (pSVar1,StringLiteral_20187/*"percent"*/,pSVar2,(pSVar1->klass->vtable)._8_set_Item.method)
            ;
            pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                BFPCMHPBAGL,StringLiteral_20562/*"result"*/,
                                Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                               );
            if (pIVar3 != (Il2CppObject *)0x0) {
              pSVar4 = (System_String_o *)
                       (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method)
              ;
              pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
              (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                        (pSVar1,StringLiteral_20562/*"result"*/,pSVar2,
                         (pSVar1->klass->vtable)._8_set_Item.method);
              pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)
                                  BFPCMHPBAGL,StringLiteral_21242/*"store"*/,
                                  Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                 );
              if (pIVar3 != (Il2CppObject *)0x0) {
                pSVar4 = (System_String_o *)
                         (*pIVar3->klass->vtable[3].methodPtr)
                                   (pIVar3,pIVar3->klass->vtable[3].method);
                pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
                (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                          (pSVar1,StringLiteral_21242/*"store"*/,pSVar2,
                           (pSVar1->klass->vtable)._8_set_Item.method);
                pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    BFPCMHPBAGL,StringLiteral_19738/*"money"*/,
                                    Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                   );
                if (pIVar3 != (Il2CppObject *)0x0) {
                  pSVar4 = (System_String_o *)
                           (*pIVar3->klass->vtable[3].methodPtr)
                                     (pIVar3,pIVar3->klass->vtable[3].method);
                  pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
                  (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                            (pSVar1,StringLiteral_19738/*"money"*/,pSVar2,
                             (pSVar1->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pSVar4 = (System_String_o *)
                           (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                                     (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
                  return pSVar4;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string BAKLDBACDHN(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DEE2C]
// ONEDJCACCGM$$BAKLDBACDHN @ RVA 0x31DEE2C

System_String_o * ONEDJCACCGM__BAKLDBACDHN(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d2c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    FUN_01bab630(&StringLiteral_20461/*"receipt"*/);
    DAT_04566d2c = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032def24;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125/*"packageName"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032def24;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461/*"receipt"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  uVar4 = extraout_x1;
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032deee4:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = string_TypeInfo->static_fields->Empty;
  }
  else {
    auVar5 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 0) goto LAB_032deee4;
  }
  NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x11,auVar5._8_8_);
  pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,auVar5._0_8_,in_x3);
  if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032def20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    return pSVar2;
  }
LAB_032def24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string EFMHCCPKGMG(ONEDJCACCGM.JOBKOFBMHLM MNPKIDDPNBM)  [RVA 0x31DE418]
// ONEDJCACCGM$$EFMHCCPKGMG @ RVA 0x31DE418

System_String_o * ONEDJCACCGM__EFMHCCPKGMG(int32_t MNPKIDDPNBM,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566d2d & 1) == 0) {
    FUN_01bab630(&ONEDJCACCGM_JOBKOFBMHLM_TypeInfo);
    DAT_04566d2d = 1;
  }
  local_38.klass = (System_Enum_c *)ONEDJCACCGM_JOBKOFBMHLM_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = MNPKIDDPNBM;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KDFMBBPEJDE(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP)  [RVA 0x31DEF28]
// ONEDJCACCGM$$KDFMBBPEJDE @ RVA 0x31DEF28

bool ONEDJCACCGM__KDFMBBPEJDE(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  return true;
}


// ===== private static string DOPKFNDPMBC(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DEF30]
// ONEDJCACCGM$$DOPKFNDPMBC @ RVA 0x31DEF30

System_String_o * ONEDJCACCGM__DOPKFNDPMBC(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *pAVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d2e & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    DAT_04566d2e = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(5,method);
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar2,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      if (DAT_04566d6c == '\0') {
        FUN_01bab630(&PBNDDBCDELD_TypeInfo);
        DAT_04566d6c = '\x01';
      }
      if (PBNDDBCDELD_TypeInfo->static_fields->FKLHDJFKDBB != false) {
        FPMAFHGLPOB__EGKNJFGNMIK(JHMENEKPIBO,(MethodInfo *)0x0);
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar2,(MethodInfo *)0x0);
        FPMAFHGLPOB__IMHAICBKNEM(JHMENEKPIBO,iVar1 + -1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032df0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar4 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string NHNJFGHIKJP(ONEDJCACCGM.IAKCGKLPEND ACCIHBHMFPN)  [RVA 0x31DF0FC]
// ONEDJCACCGM$$NHNJFGHIKJP @ RVA 0x31DF0FC

System_String_o * ONEDJCACCGM__NHNJFGHIKJP(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566d2f & 1) == 0) {
    FUN_01bab630(&StringLiteral_17523/*"custom|connection_timeout"*/);
    FUN_01bab630(&StringLiteral_17520/*"custom|balancer_download"*/);
    FUN_01bab630(&StringLiteral_17522/*"custom|connection_lost"*/);
    FUN_01bab630(&StringLiteral_17525/*"custom|raid_configs"*/);
    FUN_01bab630(&StringLiteral_17526/*"custom|smartfox_login_fail"*/);
    FUN_01bab630(&StringLiteral_17521/*"custom|balancer_parse"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17524/*"custom|join_zone"*/);
    DAT_04566d2f = 1;
  }
  if ((uint)ACCIHBHMFPN < 8) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_17523/*"custom|connection_timeout"*/_03fc6528)[ACCIHBHMFPN];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== private static string NMJFIAFGBLA(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DF1AC]
// ONEDJCACCGM$$NMJFIAFGBLA @ RVA 0x31DF1AC

System_String_o * ONEDJCACCGM__NMJFIAFGBLA(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    FUN_01bab630(&StringLiteral_19658/*"message"*/);
    DAT_04566d30 = 1;
  }
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_20125/*"packageName"*/,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pSVar2 = (System_String_o *)
               (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
      pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_19658/*"message"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        auVar5 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
        NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x15,auVar5._8_8_);
        pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,(System_String_o *)0x0,in_x3);
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(auVar5._0_8_,(MethodInfo *)0x0);
        if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
          (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar3,StringLiteral_19658/*"message"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032df2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar2 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          return pSVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static JSONObject FBMNAFFOAFL(ONEDJCACCGM.LPJPCOOMIIP NEADDGBNOKK, string DBDJKKPGFIH, string MMAOCCAGLCH)  [RVA 0x31DD188]
// ONEDJCACCGM$$FBMNAFFOAFL @ RVA 0x31DD188

SimpleJSON_JSONObject_o *
ONEDJCACCGM__FBMNAFFOAFL
          (int32_t NEADDGBNOKK,System_String_o *DBDJKKPGFIH,System_String_o *MMAOCCAGLCH,
          MethodInfo *method)

{
  System_String_o *NEADDGBNOKK_00;
  SimpleJSON_JSONObject_o *pSVar1;
  
  NEADDGBNOKK_00 = ONEDJCACCGM__AIHHFFMBFEL(NEADDGBNOKK,(MethodInfo *)DBDJKKPGFIH);
  pSVar1 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK_00,DBDJKKPGFIH,MMAOCCAGLCH,method);
  return pSVar1;
}


// ===== private static string MIJHFCJNCEP(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DF2E0]
// ONEDJCACCGM$$MIJHFCJNCEP @ RVA 0x31DF2E0

System_String_o * ONEDJCACCGM__MIJHFCJNCEP(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *__this;
  SimpleJSON_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d31 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    DAT_04566d31 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(4,method);
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
  if (__this != (ACHLOMELAJE_o *)0x0) {
    n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar1 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar1,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      FPMAFHGLPOB__FCMOFAKFNLJ(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
      FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032df41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static int DKCJNFMABGO()  [RVA 0x31DDC50]
// ONEDJCACCGM$$DKCJNFMABGO @ RVA 0x31DDC50

int32_t ONEDJCACCGM__DKCJNFMABGO(MethodInfo *method)

{
  int32_t iVar1;
  double dVar2;
  System_DateTime_Fields local_30;
  System_TimeSpan_Fields local_28;
  System_DateTime_Fields local_18;
  
  if ((DAT_04566d32 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566d32 = 1;
  }
  local_28._ticks = 0;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_18._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_30._dateData = 0;
  System_DateTime___ctor((System_DateTime_o)&local_30,0x7b2,1,1,(MethodInfo *)0x0);
  local_28._ticks =
       (int64_t)System_DateTime__Subtract
                          ((System_DateTime_o)&local_18,(System_DateTime_o)local_30._dateData,
                           (MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar2 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_28,(MethodInfo *)0x0);
  iVar1 = -0x80000000;
  if (dVar2 != INFINITY) {
    iVar1 = (int)dVar2;
  }
  return iVar1;
}


// ===== private static string OAMLIFHBPFO(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DF424]
// ONEDJCACCGM$$OAMLIFHBPFO @ RVA 0x31DF424

System_String_o * ONEDJCACCGM__OAMLIFHBPFO(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *pAVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  NFGLEDADCGL_o *pNVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d33 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_19404/*"level_sum"*/);
    FUN_01bab630(&StringLiteral_21889/*"user_perks"*/);
    FUN_01bab630(&StringLiteral_20548/*"reset_count"*/);
    DAT_04566d33 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(7,method);
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar2,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
         (pNVar4 = (pAVar2->fields).CKJAGLDEMAE, pNVar4 != (NFGLEDADCGL_o *)0x0)) {
        iVar1 = NFGLEDADCGL__PHLAMLIGMHG(pNVar4,(MethodInfo *)0x0);
        pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,StringLiteral_20548/*"reset_count"*/,pSVar3,
                   (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
           (pNVar4 = (pAVar2->fields).CKJAGLDEMAE, pNVar4 != (NFGLEDADCGL_o *)0x0)) {
          iVar1 = NFGLEDADCGL__BKPCFFPHHBJ(pNVar4,(MethodInfo *)0x0);
          pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
          (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                    (JHMENEKPIBO,StringLiteral_19404/*"level_sum"*/,pSVar3,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          FPMAFHGLPOB__IDLABKHCAFO(JHMENEKPIBO,StringLiteral_21889/*"user_perks"*/,(MethodInfo *)0x0);
          FPMAFHGLPOB__DCNODJBLLAD(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032df678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar5 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
          return pSVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string KDGOOENFCNG(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DF680]
// ONEDJCACCGM$$KDGOOENFCNG @ RVA 0x31DF680

System_String_o * ONEDJCACCGM__KDGOOENFCNG(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONObject_o *pSVar3;
  MethodInfo *in_x3;
  undefined1 auVar4 [16];
  
  if ((DAT_04566d34 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    DAT_04566d34 = 1;
  }
  if ((BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) &&
     (pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_20125/*"packageName"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
    auVar4 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    pSVar2 = ONEDJCACCGM__AIHHFFMBFEL(0x16,auVar4._8_8_);
    pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(pSVar2,auVar4._0_8_,(System_String_o *)0x0,in_x3);
    if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032df718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CGLJFDPHMNB(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DF720]
// ONEDJCACCGM$$CGLJFDPHMNB @ RVA 0x31DF720

System_String_o *
ONEDJCACCGM__CGLJFDPHMNB(int32_t BKFOLMBMFNP,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t iVar1;
  MDNLIFLBFNO_o *BFPCMHPBAGL_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  method_00 = (MethodInfo *)BFPCMHPBAGL;
  if ((DAT_04566d35 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566d35 = 1;
    method_00 = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method_00 = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    switch(BKFOLMBMFNP) {
    case 1:
      NFNBHPOJFNJ__BEPNDLOGAFK(0,(MethodInfo *)0x0);
      NFNBHPOJFNJ__BCLJHLMANLP(0,(MethodInfo *)0x0);
      pSVar2 = ONEDJCACCGM__PAMPCFEAOKO(BFPCMHPBAGL_00,method_01);
      return pSVar2;
    case 2:
      iVar1 = NFNBHPOJFNJ__PLLCCDLFEHA((MethodInfo *)0x0);
      NFNBHPOJFNJ__BEPNDLOGAFK(iVar1 + 1,(MethodInfo *)0x0);
      pSVar2 = ONEDJCACCGM__FNNGMNBEINL(BFPCMHPBAGL,method_02);
      return pSVar2;
    case 3:
      pSVar2 = ONEDJCACCGM__KLAPKGPEHKC(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 4:
      pSVar2 = ONEDJCACCGM__MIJHFCJNCEP(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 5:
      pSVar2 = ONEDJCACCGM__DOPKFNDPMBC((MDNLIFLBFNO_o *)NLPJLHOEAOE_TypeInfo,method_00);
      return pSVar2;
    case 6:
      pSVar2 = ONEDJCACCGM__GGJKLBCHFNH(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 7:
      pSVar2 = ONEDJCACCGM__OAMLIFHBPFO(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 8:
      iVar1 = NFNBHPOJFNJ__FPFICNFLJBJ((MethodInfo *)0x0);
      NFNBHPOJFNJ__KJIOMGKHFHB(iVar1 + 1,(MethodInfo *)0x0);
      pSVar2 = ONEDJCACCGM__AAOEOKFBCJJ(BFPCMHPBAGL,method_03);
      return pSVar2;
    case 9:
      pSVar2 = ONEDJCACCGM__HFHOAIEDFDP(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0xb:
      pSVar2 = ONEDJCACCGM__DHGFLJJEALI(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0xc:
      pSVar2 = ONEDJCACCGM__KBBKJOKBJNH(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0xd:
      pSVar2 = ONEDJCACCGM__MCNNLMDLCHO(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0xf:
      pSVar2 = ONEDJCACCGM__GCFLLAENIAI(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x10:
      pSVar2 = ONEDJCACCGM__AEEDECMFCBI(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x11:
      pSVar2 = ONEDJCACCGM__BAKLDBACDHN(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x12:
      pSVar2 = ONEDJCACCGM__MHALNMAEOCF(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x13:
      pSVar2 = ONEDJCACCGM__NHOHBBHHEFE(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x14:
      pSVar2 = ONEDJCACCGM__HMEDPKKKPAD(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x15:
      pSVar2 = ONEDJCACCGM__NMJFIAFGBLA(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x16:
      pSVar2 = ONEDJCACCGM__KDGOOENFCNG(BFPCMHPBAGL,method_00);
      return pSVar2;
    case 0x17:
      pSVar2 = ONEDJCACCGM__MADPMFNKNJK(BFPCMHPBAGL,method_00);
      return pSVar2;
    }
  }
  return StringLiteral_1/*""*/;
}


// ===== private static void AALJIKGFNIL(JSONObject IMMNELPBGIF, string LPKODEJMJBB)  [RVA 0x31DDD30]
// ONEDJCACCGM$$AALJIKGFNIL @ RVA 0x31DDD30

void ONEDJCACCGM__AALJIKGFNIL
               (SimpleJSON_JSONObject_o *IMMNELPBGIF,System_String_o *LPKODEJMJBB,MethodInfo *method
               )

{
  long *plVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  
  if ((DAT_04566d36 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_21419/*"tags"*/);
    DAT_04566d36 = 1;
  }
  if (IMMNELPBGIF != (SimpleJSON_JSONObject_o *)0x0) {
    plVar1 = (long *)(*(IMMNELPBGIF->klass->vtable)._7_get_Item.methodPtr)
                               (IMMNELPBGIF,StringLiteral_21419/*"tags"*/,
                                (IMMNELPBGIF->klass->vtable)._7_get_Item.method);
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar2 = SimpleJSON_JSONNode__op_Implicit(LPKODEJMJBB,(MethodInfo *)0x0);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1,pSVar2,*(undefined8 *)(*plVar1 + 0x290));
                    /* WARNING: Could not recover jumptable at 0x032dde0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(IMMNELPBGIF->klass->vtable)._8_set_Item.methodPtr)
                  (IMMNELPBGIF,StringLiteral_21419/*"tags"*/,plVar1,
                   (IMMNELPBGIF->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string DHGFLJJEALI(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31E0A8C]
// ONEDJCACCGM$$DHGFLJJEALI @ RVA 0x31E0A8C

System_String_o * ONEDJCACCGM__DHGFLJJEALI(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t iVar2;
  int32_t n;
  SimpleJSON_JSONObject_o *pSVar3;
  EEGDOGKBLNG_o *__this;
  SimpleJSON_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  int64_t iVar6;
  Il2CppObject *pIVar7;
  int32_t *piVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  float fVar9;
  double dVar10;
  double __x;
  double local_68;
  
  if ((DAT_04566d37 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_15924/*"_BPDailyQuestCount"*/);
    FUN_01bab630(&StringLiteral_15925/*"_BPDailyQuestTime"*/);
    FUN_01bab630(&StringLiteral_15928/*"_BPPointsStartTime"*/);
    FUN_01bab630(&StringLiteral_15926/*"_BPName"*/);
    FUN_01bab630(&StringLiteral_16778/*"bp_level"*/);
    FUN_01bab630(&StringLiteral_17579/*"daily_quest_time"*/);
    FUN_01bab630(&StringLiteral_17575/*"daily_quest_count"*/);
    FUN_01bab630(&StringLiteral_20242/*"points_start_time"*/);
    FUN_01bab630(&StringLiteral_17580/*"dan"*/);
    FUN_01bab630(&StringLiteral_15927/*"_BPPointsEndTime"*/);
    FUN_01bab630(&StringLiteral_15929/*"_BPPremiumLevel"*/);
    FUN_01bab630(&StringLiteral_16780/*"bp_premium_level"*/);
    FUN_01bab630(&StringLiteral_20241/*"points_end_time"*/);
    FUN_01bab630(&StringLiteral_16779/*"bp_name"*/);
    DAT_04566d37 = 1;
    method = extraout_x1;
  }
  pSVar3 = ONEDJCACCGM__OGNMJNOFPPP(0xb,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this == (EEGDOGKBLNG_o *)0x0) {
LAB_032e0f3c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = EEGDOGKBLNG__IGIHHCEONEM(__this,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  if (pSVar3 == (SimpleJSON_JSONObject_o *)0x0) goto LAB_032e0f3c;
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_17580/*"dan"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  pSVar5 = ONEDJCACCGM__EGENCJMCCEJ(StringLiteral_15926/*"_BPName"*/,method_00);
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_16779/*"bp_name"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  pSVar5 = ONEDJCACCGM__EGENCJMCCEJ(StringLiteral_15928/*"_BPPointsStartTime"*/,method_01);
  iVar6 = PCOEHCPGBBG__NEDKJCKICNF(pSVar5,0,(MethodInfo *)0x0);
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar6,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_20242/*"points_start_time"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  pSVar5 = ONEDJCACCGM__EGENCJMCCEJ(StringLiteral_15927/*"_BPPointsEndTime"*/,method_02);
  iVar6 = PCOEHCPGBBG__NEDKJCKICNF(pSVar5,0,(MethodInfo *)0x0);
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar6,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_20241/*"points_end_time"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  if ((BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) ||
     (pIVar7 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_16778/*"bp_level"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__),
     pIVar7 == (Il2CppObject *)0x0)) goto LAB_032e0f3c;
  if ((pIVar7->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
  piVar8 = (int32_t *)thunk_FUN_01bda96c();
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(*piVar8,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_16778/*"bp_level"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  pSVar5 = ONEDJCACCGM__EGENCJMCCEJ(StringLiteral_15929/*"_BPPremiumLevel"*/,method_03);
  iVar2 = PCOEHCPGBBG__JBGCINPPLAC(pSVar5,-1,(MethodInfo *)0x0);
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_16780/*"bp_premium_level"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  pSVar5 = ONEDJCACCGM__EGENCJMCCEJ(StringLiteral_15924/*"_BPDailyQuestCount"*/,method_04);
  n = PCOEHCPGBBG__JBGCINPPLAC(pSVar5,0,(MethodInfo *)0x0);
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,StringLiteral_17575/*"daily_quest_count"*/,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
  uVar1 = StringLiteral_17579/*"daily_quest_time"*/;
  iVar2 = -1;
  if (n < 1) goto LAB_032e0edc;
  pSVar5 = ONEDJCACCGM__EGENCJMCCEJ(StringLiteral_15925/*"_BPDailyQuestTime"*/,method_05);
  fVar9 = PCOEHCPGBBG__OFFODGKLGOP(pSVar5,0.0,(MethodInfo *)0x0);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __x = (double)(fVar9 / (float)n);
  dVar10 = modf(__x,&local_68);
  if (0.0 <= fVar9 / (float)n) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_032e0e9c;
    }
    local_68 = (double)(long)(__x + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_032e0e9c:
    if (((long)local_68 & 1U) != 0) {
      local_68 = local_68 + dVar10;
    }
  }
  else {
    local_68 = (double)(long)(__x + -0.5);
  }
  iVar2 = -0x80000000;
  if (local_68 != INFINITY) {
    iVar2 = (int)local_68;
  }
LAB_032e0edc:
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar2,(MethodInfo *)0x0);
  (*(pSVar3->klass->vtable)._8_set_Item.methodPtr)
            (pSVar3,uVar1,pSVar4,(pSVar3->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032e0f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar5 = (System_String_o *)
           (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                     (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
  return pSVar5;
}


// ===== private static void GIGNEECIEPK(JSONObject IMMNELPBGIF, string ANIALDFEENL)  [RVA 0x31DDE14]
// ONEDJCACCGM$$GIGNEECIEPK @ RVA 0x31DDE14

void ONEDJCACCGM__GIGNEECIEPK
               (SimpleJSON_JSONObject_o *IMMNELPBGIF,System_String_o *ANIALDFEENL,MethodInfo *method
               )

{
  System_String_o *extraout_x1;
  System_String_o *extraout_x1_00;
  System_String_o *extraout_x1_01;
  
  if ((DAT_04566d38 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566d38 = 1;
    ANIALDFEENL = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,ANIALDFEENL);
    ANIALDFEENL = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    ANIALDFEENL = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished != 0) {
    return;
  }
  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,ANIALDFEENL);
  return;
}


// ===== public static string DLIKOBJAJGD(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31E0F44]
// ONEDJCACCGM$$DLIKOBJAJGD @ RVA 0x31E0F44

System_String_o * ONEDJCACCGM__DLIKOBJAJGD(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *pSVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  
  if ((DAT_04566d39 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_19347/*"lang"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_16291/*"action"*/);
    DAT_04566d39 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    return StringLiteral_1/*""*/;
  }
  pSVar1 = ONEDJCACCGM__OGNMJNOFPPP(0xe,method);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) {
LAB_032e1138:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = (System_String_o *)
           System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_16291/*"action"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  if ((pSVar2 == (System_String_o *)0x0) || (pSVar2->klass == string_TypeInfo)) {
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
    if (pSVar1 == (SimpleJSON_JSONObject_o *)0x0) goto LAB_032e1138;
    (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
              (pSVar1,StringLiteral_16291/*"action"*/,pSVar3,(pSVar1->klass->vtable)._8_set_Item.method);
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_19347/*"lang"*/,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if ((pSVar2 == (System_String_o *)0x0) || (pSVar2->klass == string_TypeInfo)) {
      pSVar3 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
                (pSVar1,StringLiteral_19347/*"lang"*/,pSVar3,(pSVar1->klass->vtable)._8_set_Item.method);
                    /* try { // try from 032e1110 to 033e11a7 has its CatchHandler @ 032e1110
                       catch() { ... } // from try @ 032e1110 with catch @ 032e1110
                       catch() { ... } // from try @ 032e11e0 with catch @ 032e1110
                       catch() { ... } // from try @ 032e1210 with catch @ 032e1110
                       catch() { ... } // from try @ 032e1238 with catch @ 032e1110
                       catch() { ... } // from try @ 032e1268 with catch @ 032e1110 */
                    /* WARNING: Could not recover jumptable at 0x032e1114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static string GGJKLBCHFNH(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DFFCC]
// ONEDJCACCGM$$GGJKLBCHFNH @ RVA 0x31DFFCC

System_String_o * ONEDJCACCGM__GGJKLBCHFNH(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *__this;
  SimpleJSON_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d3a & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    DAT_04566d3a = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(6,method);
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
  if (__this != (ACHLOMELAJE_o *)0x0) {
    n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar1 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar1,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      FPMAFHGLPOB__MKLGBANKNHL(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
      FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032e0108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string GCFLLAENIAI(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31E08F0]
// ONEDJCACCGM$$GCFLLAENIAI @ RVA 0x31E08F0

System_String_o * ONEDJCACCGM__GCFLLAENIAI(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONObject_o *pSVar3;
  MethodInfo *in_x3;
  undefined1 auVar4 [16];
  
  if ((DAT_04566d3b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    DAT_04566d3b = 1;
  }
  if ((BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) &&
     (pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_20125/*"packageName"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
    auVar4 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    pSVar2 = ONEDJCACCGM__AIHHFFMBFEL(0xf,auVar4._8_8_);
    pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(pSVar2,auVar4._0_8_,(System_String_o *)0x0,in_x3);
    if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e0988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string AIHHFFMBFEL(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP)  [RVA 0x31DDBDC]
// ONEDJCACCGM$$AIHHFFMBFEL @ RVA 0x31DDBDC

System_String_o * ONEDJCACCGM__AIHHFFMBFEL(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566d3c & 1) == 0) {
    FUN_01bab630(&ONEDJCACCGM_LPJPCOOMIIP_TypeInfo);
    DAT_04566d3c = 1;
  }
  local_38.klass = (System_Enum_c *)ONEDJCACCGM_LPJPCOOMIIP_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = BKFOLMBMFNP;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string AAOEOKFBCJJ(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31E056C]
// ONEDJCACCGM$$AAOEOKFBCJJ @ RVA 0x31E056C

System_String_o * ONEDJCACCGM__AAOEOKFBCJJ(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONObject_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  ACHLOMELAJE_o *__this;
  Il2CppObject *pIVar4;
  int32_t *piVar5;
  System_String_o *pSVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d3d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21976/*"video_energy"*/);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_21513/*"time_length"*/);
    FUN_01bab630(&StringLiteral_21975/*"video_bonus"*/);
    FUN_01bab630(&StringLiteral_18237/*"fight_amount"*/);
    FUN_01bab630(&StringLiteral_19961/*"offer_bonus"*/);
    FUN_01bab630(&StringLiteral_18046/*"energy"*/);
    FUN_01bab630(&StringLiteral_20760/*"session_id"*/);
    DAT_04566d3d = 1;
    method = extraout_x1;
  }
  pSVar2 = ONEDJCACCGM__OGNMJNOFPPP(8,method);
  iVar1 = NFNBHPOJFNJ__FPFICNFLJBJ((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
  if (pSVar2 != (SimpleJSON_JSONObject_o *)0x0) {
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,StringLiteral_20760/*"session_id"*/,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
    iVar1 = NFNBHPOJFNJ__PLLCCDLFEHA((MethodInfo *)0x0);
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,StringLiteral_18237/*"fight_amount"*/,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
    iVar1 = NFNBHPOJFNJ__AENIMGGACOK((MethodInfo *)0x0);
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
    (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
              (pSVar2,StringLiteral_21513/*"time_length"*/,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
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
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this != (ACHLOMELAJE_o *)0x0) {
      iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
      pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
      (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                (pSVar2,StringLiteral_21888/*"user_level"*/,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
      iVar1 = NFNBHPOJFNJ__PFGBFKJNPAI((MethodInfo *)0x0);
      pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
      (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                (pSVar2,StringLiteral_18046/*"energy"*/,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method);
      if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
        pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                            StringLiteral_21976/*"video_energy"*/,
                            Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__)
        ;
        if (pIVar4 != (Il2CppObject *)0x0) {
          if ((pIVar4->klass->_1).element_class == (int_TypeInfo->_1).element_class) {
            piVar5 = (int32_t *)thunk_FUN_01bda96c();
            pSVar3 = SimpleJSON_JSONNode__op_Implicit(*piVar5,(MethodInfo *)0x0);
            (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                      (pSVar2,StringLiteral_21976/*"video_energy"*/,pSVar3,(pSVar2->klass->vtable)._8_set_Item.method)
            ;
            pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                BFPCMHPBAGL,StringLiteral_21975/*"video_bonus"*/,
                                Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                               );
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032e08e8;
            if ((pIVar4->klass->_1).element_class == (int_TypeInfo->_1).element_class) {
              piVar5 = (int32_t *)thunk_FUN_01bda96c();
              pSVar3 = SimpleJSON_JSONNode__op_Implicit(*piVar5,(MethodInfo *)0x0);
              (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                        (pSVar2,StringLiteral_21975/*"video_bonus"*/,pSVar3,
                         (pSVar2->klass->vtable)._8_set_Item.method);
              pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)
                                  BFPCMHPBAGL,StringLiteral_19961/*"offer_bonus"*/,
                                  Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                 );
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032e08e8;
              if ((pIVar4->klass->_1).element_class == (int_TypeInfo->_1).element_class) {
                piVar5 = (int32_t *)thunk_FUN_01bda96c();
                pSVar3 = SimpleJSON_JSONNode__op_Implicit(*piVar5,(MethodInfo *)0x0);
                (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                          (pSVar2,StringLiteral_19961/*"offer_bonus"*/,pSVar3,
                           (pSVar2->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032e08e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pSVar6 = (System_String_o *)
                         (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
                return pSVar6;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
LAB_032e08e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string PAMPCFEAOKO(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DF9F4]
// ONEDJCACCGM$$PAMPCFEAOKO @ RVA 0x31DF9F4

System_String_o * ONEDJCACCGM__PAMPCFEAOKO(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  System_String_o *pSVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  ACHLOMELAJE_o *pAVar3;
  MethodInfo *extraout_x1;
  KMBNFNCDDBP_o *pKVar4;
  uint32_t local_34;
  
  if ((DAT_04566d3e & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_19495/*"location"*/);
    FUN_01bab630(&StringLiteral_19347/*"lang"*/);
    FUN_01bab630(&StringLiteral_17713/*"device_name"*/);
    FUN_01bab630(&StringLiteral_20081/*"os"*/);
    FUN_01bab630(&StringLiteral_17714/*"device_token"*/);
    FUN_01bab630(&StringLiteral_19403/*"level"*/);
    FUN_01bab630(&StringLiteral_20221/*"platform"*/);
    FUN_01bab630(&StringLiteral_18131/*"exp"*/);
    DAT_04566d3e = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(1,method);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  pSVar1 = EOAOCPLIKOI__IEBPOGDJCFL((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,StringLiteral_17714/*"device_token"*/,pSVar2,
               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = EOAOCPLIKOI__JCFEDFAICOF((MethodInfo *)0x0);
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,StringLiteral_20221/*"platform"*/,pSVar2,
               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar4 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (pKVar4 != (KMBNFNCDDBP_o *)0x0) {
      pSVar2 = SimpleJSON_JSONNode__op_Implicit((pKVar4->fields).AHAKHHLCPAB,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_19347/*"lang"*/,pSVar2,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      pSVar1 = EOAOCPLIKOI__AMJGELHMBOB((MethodInfo *)0x0);
      pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_20081/*"os"*/,pSVar2,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar4 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if (pKVar4 != (KMBNFNCDDBP_o *)0x0) {
        pSVar2 = SimpleJSON_JSONNode__op_Implicit((pKVar4->fields).IGLHCNLNIPK,(MethodInfo *)0x0);
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,StringLiteral_17713/*"device_name"*/,pSVar2,
                   (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
          n = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
          pSVar2 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
          (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                    (JHMENEKPIBO,StringLiteral_19403/*"level"*/,pSVar2,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
            local_34 = ACHLOMELAJE__LFOIBFFCBCL(pAVar3,(MethodInfo *)0x0);
            pSVar1 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
            pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
            (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                      (JHMENEKPIBO,StringLiteral_18131/*"exp"*/,pSVar2,
                       (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
              pSVar1 = ACHLOMELAJE__KCKPAFCFAMP(pAVar3,(MethodInfo *)0x0);
              pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
              (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                        (JHMENEKPIBO,StringLiteral_19495/*"location"*/,pSVar2,
                         (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
              FPMAFHGLPOB__KKKBEBDBBEJ(JHMENEKPIBO,(MethodInfo *)0x0);
              FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
              pSVar1 = (System_String_o *)
                       (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
              return pSVar1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool DCIMFCCJPMO(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP)  [RVA 0x31E1144]
// ONEDJCACCGM$$DCIMFCCJPMO @ RVA 0x31E1144

bool ONEDJCACCGM__DCIMFCCJPMO(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  return true;
}


// ===== private static JSONObject FBMNAFFOAFL(string NEADDGBNOKK, string DBDJKKPGFIH, string MMAOCCAGLCH)  [RVA 0x31DE48C]
// ONEDJCACCGM$$FBMNAFFOAFL @ RVA 0x31DE48C

SimpleJSON_JSONObject_o *
ONEDJCACCGM__FBMNAFFOAFL
          (System_String_o *NEADDGBNOKK,System_String_o *DBDJKKPGFIH,System_String_o *MMAOCCAGLCH,
          MethodInfo *method)

{
  undefined8 uVar1;
  bool bVar2;
  int32_t iVar3;
  SimpleJSON_JSONObject_o *__this;
  SimpleJSON_JSONNode_o *pSVar4;
  CFGLKHFFEKA_o *pCVar5;
  System_String_o *pSVar6;
  GCFHEEKPCPJ_o *__this_00;
  
  if ((DAT_04566d3f & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    FUN_01bab630(&StringLiteral_21304/*"subtype"*/);
    FUN_01bab630(&StringLiteral_20143/*"paid_version"*/);
    FUN_01bab630(&StringLiteral_16840/*"build_version"*/);
    FUN_01bab630(&StringLiteral_17977/*"eid"*/);
    FUN_01bab630(&StringLiteral_20127/*"package_id"*/);
    FUN_01bab630(&StringLiteral_18104/*"etype"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_20584/*"rid"*/);
    FUN_01bab630(&StringLiteral_20176/*"pay"*/);
    FUN_01bab630(&StringLiteral_17608/*"data_version"*/);
    DAT_04566d3f = 1;
  }
  __this = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this,(MethodInfo *)0x0);
  iVar3 = NFNBHPOJFNJ__MNLKJHBKMPB((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar3,(MethodInfo *)0x0);
  if (__this != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,StringLiteral_17977/*"eid"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit(StringLiteral_20176/*"pay"*/,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,StringLiteral_18104/*"etype"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar5 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    if (pCVar5 != (CFGLKHFFEKA_o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(pCVar5->klass->vtable)._3_ToString.methodPtr)
                         (pCVar5,(pCVar5->klass->vtable)._3_ToString.method);
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,StringLiteral_16840/*"build_version"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pCVar5 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
      if (pCVar5 != (CFGLKHFFEKA_o *)0x0) {
        pSVar6 = CFGLKHFFEKA__IBBMFNFIKPE(pCVar5,true,(MethodInfo *)0x0);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_17608/*"data_version"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(NEADDGBNOKK,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_21304/*"subtype"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        bVar2 = System_String__IsNullOrEmpty(DBDJKKPGFIH,(MethodInfo *)0x0);
        uVar1 = StringLiteral_20127/*"package_id"*/;
        pSVar6 = StringLiteral_1/*""*/;
        if (!bVar2) {
          pSVar6 = DBDJKKPGFIH;
        }
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,uVar1,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        bVar2 = System_String__IsNullOrEmpty(MMAOCCAGLCH,(MethodInfo *)0x0);
        uVar1 = StringLiteral_20584/*"rid"*/;
        pSVar6 = StringLiteral_1/*""*/;
        if (!bVar2) {
          if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
          if (__this_00 == (GCFHEEKPCPJ_o *)0x0) goto LAB_032de828;
          pSVar6 = GCFHEEKPCPJ__IDDPLJLECPA
                             (__this_00,MMAOCCAGLCH,(System_String_o *)0x0,(MethodInfo *)0x0);
        }
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,uVar1,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar3 == 0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_20143/*"paid_version"*/,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        return __this;
      }
    }
  }
LAB_032de828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string EFMHCCPKGMG(ONEDJCACCGM.PECKMDDGEMA MNPKIDDPNBM)  [RVA 0x31DD1B0]
// ONEDJCACCGM$$EFMHCCPKGMG @ RVA 0x31DD1B0

System_String_o * ONEDJCACCGM__EFMHCCPKGMG(int32_t MNPKIDDPNBM,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566d40 & 1) == 0) {
    FUN_01bab630(&ONEDJCACCGM_PECKMDDGEMA_TypeInfo);
    DAT_04566d40 = 1;
  }
  local_38.klass = (System_Enum_c *)ONEDJCACCGM_PECKMDDGEMA_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = MNPKIDDPNBM;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NKBLGCLJNMG()  [RVA 0x31DF9D4]
// ONEDJCACCGM$$NKBLGCLJNMG @ RVA 0x31DF9D4

void ONEDJCACCGM__NKBLGCLJNMG(MethodInfo *method)

{
  NFNBHPOJFNJ__BEPNDLOGAFK(0,(MethodInfo *)0x0);
  NFNBHPOJFNJ__BCLJHLMANLP(0,(MethodInfo *)0x0);
  return;
}


// ===== private static string NHOHBBHHEFE(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31E0990]
// ONEDJCACCGM$$NHOHBBHHEFE @ RVA 0x31E0990

System_String_o * ONEDJCACCGM__NHOHBBHHEFE(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *NEADDGBNOKK;
  SimpleJSON_JSONObject_o *pSVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  MethodInfo *in_x3;
  undefined1 auVar5 [16];
  
  if ((DAT_04566d41 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20125/*"packageName"*/);
    FUN_01bab630(&StringLiteral_20461/*"receipt"*/);
    DAT_04566d41 = 1;
  }
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_032e0a88;
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20125/*"packageName"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar1 == (Il2CppObject *)0x0) goto LAB_032e0a88;
  pSVar2 = (System_String_o *)
           (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      StringLiteral_20461/*"receipt"*/,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  uVar4 = extraout_x1;
  if (pIVar1 == (Il2CppObject *)0x0) {
LAB_032e0a48:
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = string_TypeInfo->static_fields->Empty;
  }
  else {
    auVar5 = (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 0) goto LAB_032e0a48;
  }
  NEADDGBNOKK = ONEDJCACCGM__AIHHFFMBFEL(0x13,auVar5._8_8_);
  pSVar3 = ONEDJCACCGM__FBMNAFFOAFL(NEADDGBNOKK,pSVar2,auVar5._0_8_,in_x3);
  if (pSVar3 != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e0a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    return pSVar2;
  }
LAB_032e0a88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string HFHOAIEDFDP(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31E0110]
// ONEDJCACCGM$$HFHOAIEDFDP @ RVA 0x31E0110

System_String_o * ONEDJCACCGM__HFHOAIEDFDP(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  ACHLOMELAJE_o *pAVar4;
  float *pfVar5;
  System_String_o *s;
  int64_t *piVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d42 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_21564/*"total_payment_count"*/);
    FUN_01bab630(&StringLiteral_19209/*"item"*/);
    FUN_01bab630(&StringLiteral_20283/*"price_currency"*/);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_20278/*"price"*/);
    FUN_01bab630(&StringLiteral_18397/*"gems_paid_changed"*/);
    FUN_01bab630(&StringLiteral_20667/*"save_slot"*/);
    FUN_01bab630(&StringLiteral_18673/*"gold_changed"*/);
    DAT_04566d42 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(9,method);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_19209/*"item"*/,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      pSVar2 = (System_String_o *)
               (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar3 = SimpleJSON_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,StringLiteral_19209/*"item"*/,pSVar3,
                   (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
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
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
          n = ACHLOMELAJE__EOEAKGGDBFH(pAVar4,(MethodInfo *)0x0);
          pSVar3 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
          (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                    (JHMENEKPIBO,StringLiteral_21888/*"user_level"*/,pSVar3,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL
                              ,StringLiteral_20278/*"price"*/,
                              Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                             );
          if (pIVar1 != (Il2CppObject *)0x0) {
            if ((pIVar1->klass->_1).element_class != (float_TypeInfo->_1).element_class)
            goto LAB_032e0568;
            pfVar5 = (float *)thunk_FUN_01bda96c();
            pSVar3 = SimpleJSON_JSONNode__op_Implicit(*pfVar5,(MethodInfo *)0x0);
            (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                      (JHMENEKPIBO,StringLiteral_20278/*"price"*/,pSVar3,
                       (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
            pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                BFPCMHPBAGL,StringLiteral_20283/*"price_currency"*/,
                                Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                               );
            if (pIVar1 != (Il2CppObject *)0x0) {
              s = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
              pSVar3 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
              (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                        (JHMENEKPIBO,StringLiteral_20283/*"price_currency"*/,pSVar3,
                         (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
              pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)
                                  BFPCMHPBAGL,StringLiteral_18673/*"gold_changed"*/,
                                  Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                 );
              if (pIVar1 != (Il2CppObject *)0x0) {
                if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class) {
LAB_032e0568:
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64();
                }
                piVar6 = (int64_t *)thunk_FUN_01bda96c();
                pSVar3 = SimpleJSON_JSONNode__op_Implicit(*piVar6,(MethodInfo *)0x0);
                (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                          (JHMENEKPIBO,StringLiteral_18673/*"gold_changed"*/,pSVar3,
                           (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    BFPCMHPBAGL,StringLiteral_18397/*"gems_paid_changed"*/,
                                    Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                   );
                if (pIVar1 != (Il2CppObject *)0x0) {
                  if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class)
                  goto LAB_032e0568;
                  piVar6 = (int64_t *)thunk_FUN_01bda96c();
                  pSVar3 = SimpleJSON_JSONNode__op_Implicit(*piVar6,(MethodInfo *)0x0);
                  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                            (JHMENEKPIBO,StringLiteral_18397/*"gems_paid_changed"*/,pSVar3,
                             (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
                    pSVar3 = SimpleJSON_JSONNode__op_Implicit
                                       ((pAVar4->fields).super.BJGOCKADFEB,(MethodInfo *)0x0);
                    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                              (JHMENEKPIBO,StringLiteral_21564/*"total_payment_count"*/,pSVar3,
                               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    if (DAT_04565b7d == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_04565b7d = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
                      pSVar3 = SimpleJSON_JSONNode__op_Implicit
                                         ((pAVar4->fields).super.MNPJJPBJCCO,(MethodInfo *)0x0);
                      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                                (JHMENEKPIBO,StringLiteral_20667/*"save_slot"*/,pSVar3,
                                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                      FPMAFHGLPOB__NJBOADBAJAJ(JHMENEKPIBO,pSVar2,(MethodInfo *)0x0);
                      FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032e0560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      pSVar2 = (System_String_o *)
                               (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                                         (JHMENEKPIBO,
                                          (JHMENEKPIBO->klass->vtable)._3_ToString.method);
                      return pSVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string KLAPKGPEHKC(MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x31DFE04]
// ONEDJCACCGM$$KLAPKGPEHKC @ RVA 0x31DFE04

System_String_o * ONEDJCACCGM__KLAPKGPEHKC(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t n;
  SimpleJSON_JSONObject_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  ACHLOMELAJE_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d43 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888/*"user_level"*/);
    FUN_01bab630(&StringLiteral_19787/*"name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566d43 = 1;
    method = extraout_x1;
  }
  pSVar2 = ONEDJCACCGM__OGNMJNOFPPP(3,method);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       StringLiteral_19787/*"name"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    pSVar4 = StringLiteral_1/*""*/;
    if (bVar1) {
      pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          StringLiteral_19787/*"name"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_032dffc8;
      pSVar4 = (System_String_o *)
               (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
    }
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    if (pSVar2 != (SimpleJSON_JSONObject_o *)0x0) {
      (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                (pSVar2,StringLiteral_19787/*"name"*/,pSVar5,(pSVar2->klass->vtable)._8_set_Item.method);
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
      __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this != (ACHLOMELAJE_o *)0x0) {
        n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        (*(pSVar2->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar2,StringLiteral_21888/*"user_level"*/,pSVar5,(pSVar2->klass->vtable)._8_set_Item.method);
                    /* WARNING: Could not recover jumptable at 0x032dffc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar4 = (System_String_o *)
                 (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
  }
LAB_032dffc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

