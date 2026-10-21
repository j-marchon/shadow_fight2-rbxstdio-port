// JANDANNAOBB$$KPPJMGHPAIL @ RVA 0x334A5E0

void JANDANNAOBB__KPPJMGHPAIL
               (JANDANNAOBB_o *__this,JANDANNAOBB_BGGGFKFAPIM_o *param_2,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t IJCOPHFFCAP;
  ACHLOMELAJE_o *pAVar3;
  DBIINAFCKME_o *__this_00;
  SimpleJSON_JSONNode_o *pSVar4;
  System_String_o *__this_01;
  NLPJLHOEAOE_o *pNVar5;
  Il2CppMethodPointer *ppIVar6;
  FJAFBCCNPIK_o *__this_02;
  LJNDBPEOILF_o *pLVar7;
  int64_t CJNHFNHJHPE;
  Core_Network_ServerProvider_DEBEPAKJMBK_o *pCVar8;
  Core_Network_ServerProvider_MEHEJPAMBCE_o *pCVar9;
  GLOBPAMKCCE_c *pGVar10;
  ulong uVar11;
  int32_t *piVar12;
  GLOBPAMKCCE_o *pGVar13;
  
  if ((DAT_045679ee & 1) == 0) {
    FUN_01bab630(&GLOBPAMKCCE_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21930);
    FUN_01bab630(&StringLiteral_2777);
    FUN_01bab630(&StringLiteral_2776);
    FUN_01bab630(&StringLiteral_21154);
    FUN_01bab630(&StringLiteral_17601);
    FUN_01bab630(&StringLiteral_21873);
    FUN_01bab630(&StringLiteral_2775);
    DAT_045679ee = 1;
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
  pCVar8 = (param_2->fields).loginData;
  if ((pCVar8 != (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) &&
     (pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
     pAVar3 != (ACHLOMELAJE_o *)0x0)) {
    KIHIPAJGNBF__DIEMJAMJLNB((KIHIPAJGNBF_o *)pAVar3,(pCVar8->fields).IBNPINKJBPI,(MethodInfo *)0x0)
    ;
    __this_00 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    pCVar8 = (param_2->fields).loginData;
    if (pCVar8 != (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) {
      pCVar9 = (pCVar8->fields).BCHEOKGMBDJ;
      if (pCVar9 == (Core_Network_ServerProvider_MEHEJPAMBCE_o *)0x0) {
        CJNHFNHJHPE = -1;
      }
      else {
        CJNHFNHJHPE = (pCVar9->fields).DDNPIDDAOEE;
      }
      if (__this_00 != (DBIINAFCKME_o *)0x0) {
        DBIINAFCKME__JMMMFEJOKFA(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        pCVar8 = (param_2->fields).loginData;
        if ((pCVar8 != (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) &&
           (pSVar4 = (pCVar8->fields).BJDEBHDELOO, pSVar4 != (SimpleJSON_JSONNode_o *)0x0)) {
          pSVar4 = (SimpleJSON_JSONNode_o *)
                   (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,StringLiteral_17601,(pSVar4->klass->vtable)._7_get_Item.method)
          ;
          if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
          }
          bVar2 = SimpleJSON_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            return;
          }
          if ((pSVar4 != (SimpleJSON_JSONNode_o *)0x0) &&
             (__this_01 = (System_String_o *)
                          (*(pSVar4->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                                    (pSVar4,(pSVar4->klass->vtable)._9_HNIHOIAMDPC.method),
             __this_01 != (System_String_o *)0x0)) {
            bVar2 = System_String__Equals(__this_01,StringLiteral_21873,(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            pCVar8 = (param_2->fields).loginData;
            if ((pCVar8 != (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) &&
               (pSVar4 = (pCVar8->fields).BJDEBHDELOO, pSVar4 != (SimpleJSON_JSONNode_o *)0x0)) {
              pSVar4 = (SimpleJSON_JSONNode_o *)
                       (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,StringLiteral_21930,
                                  (pSVar4->klass->vtable)._7_get_Item.method);
              pSVar4 = OGMFFOMHGIA__IFFHCBKGMKC(pSVar4,StringLiteral_21154,(MethodInfo *)0x0);
              IJCOPHFFCAP = OGMFFOMHGIA__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
              }
              pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pNVar5 != (NLPJLHOEAOE_o *)0x0) {
                (pNVar5->fields)._PFHJDMOFFOG_k__BackingField = IJCOPHFFCAP;
                pGVar13 = (__this->fields).ADGDLIEAEGD;
                if (pGVar13 != (GLOBPAMKCCE_o *)0x0) {
                  pGVar10 = pGVar13->klass;
                  uVar1._0_1_ = (pGVar10->_2).rank;
                  uVar1._1_1_ = (pGVar10->_2).minimumAlignment;
                  uVar11 = (ulong)uVar1;
                  if (uVar11 != 0) {
                    piVar12 = &((pGVar10->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                          (Il2CppClass *)GLOBPAMKCCE_TypeInfo) {
                        ppIVar6 = &pGVar10->vtable[*piVar12].methodPtr;
                        goto LAB_0344a878;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  ppIVar6 = (Il2CppMethodPointer *)FUN_01b81914(pGVar13,GLOBPAMKCCE_TypeInfo,0);
LAB_0344a878:
                  __this_02 = (FJAFBCCNPIK_o *)(**ppIVar6)(pGVar13,(MethodInfo *)ppIVar6[1]);
                  if (__this_02 != (FJAFBCCNPIK_o *)0x0) {
                    pLVar7 = FJAFBCCNPIK__PHDFAFNMNCD(__this_02,IJCOPHFFCAP,(MethodInfo *)0x0);
                    if (pLVar7 == (LJNDBPEOILF_o *)0x0) {
                      return;
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
                    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                      ACHLOMELAJE__PHCMABDBLJH
                                (pAVar3,StringLiteral_2777,
                                 (pLVar7->fields)._HJCAAIENJFP_k__BackingField,(MethodInfo *)0x0);
                      if (DAT_04565b7d == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04565b7d = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                        ACHLOMELAJE__PHCMABDBLJH
                                  (pAVar3,StringLiteral_2776,
                                   (pLVar7->fields)._LMJLNBNGPPM_k__BackingField,(MethodInfo *)0x0);
                        if (DAT_04565b7d == '\0') {
                          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                          DAT_04565b7d = '\x01';
                        }
                        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                          ACHLOMELAJE__PHCMABDBLJH
                                    (pAVar3,StringLiteral_2775,
                                     (pLVar7->fields)._KGMPHCIIKCJ_k__BackingField,(MethodInfo *)0x0
                                    );
                          return;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

