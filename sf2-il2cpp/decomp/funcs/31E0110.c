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
    FUN_01bab630(&StringLiteral_21564);
    FUN_01bab630(&StringLiteral_19209);
    FUN_01bab630(&StringLiteral_20283);
    FUN_01bab630(&StringLiteral_21888);
    FUN_01bab630(&StringLiteral_20278);
    FUN_01bab630(&StringLiteral_18397);
    FUN_01bab630(&StringLiteral_20667);
    FUN_01bab630(&StringLiteral_18673);
    DAT_04566d42 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(9,method);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        StringLiteral_19209,
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
                  (JHMENEKPIBO,StringLiteral_19209,pSVar3,
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
                    (JHMENEKPIBO,StringLiteral_21888,pSVar3,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL
                              ,StringLiteral_20278,
                              Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                             );
          if (pIVar1 != (Il2CppObject *)0x0) {
            if ((pIVar1->klass->_1).element_class != (float_TypeInfo->_1).element_class)
            goto LAB_032e0568;
            pfVar5 = (float *)thunk_FUN_01bda96c();
            pSVar3 = SimpleJSON_JSONNode__op_Implicit(*pfVar5,(MethodInfo *)0x0);
            (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                      (JHMENEKPIBO,StringLiteral_20278,pSVar3,
                       (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
            pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                BFPCMHPBAGL,StringLiteral_20283,
                                Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                               );
            if (pIVar1 != (Il2CppObject *)0x0) {
              s = (System_String_o *)
                  (*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
              pSVar3 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
              (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                        (JHMENEKPIBO,StringLiteral_20283,pSVar3,
                         (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
              pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)
                                  BFPCMHPBAGL,StringLiteral_18673,
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
                          (JHMENEKPIBO,StringLiteral_18673,pSVar3,
                           (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                pIVar1 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)
                                    BFPCMHPBAGL,StringLiteral_18397,
                                    Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                   );
                if (pIVar1 != (Il2CppObject *)0x0) {
                  if ((pIVar1->klass->_1).element_class != (long_TypeInfo->_1).element_class)
                  goto LAB_032e0568;
                  piVar6 = (int64_t *)thunk_FUN_01bda96c();
                  pSVar3 = SimpleJSON_JSONNode__op_Implicit(*piVar6,(MethodInfo *)0x0);
                  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                            (JHMENEKPIBO,StringLiteral_18397,pSVar3,
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
                              (JHMENEKPIBO,StringLiteral_21564,pSVar3,
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
                                (JHMENEKPIBO,StringLiteral_20667,pSVar3,
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

