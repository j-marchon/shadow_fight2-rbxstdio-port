// TypeDefIndex 328
// Namespace: 
// public class JANDANNAOBB : IJIHLBLCJMG
// Fields:
//   private readonly GLOBPAMKCCE ADGDLIEAEGD; // 0x28

// ===== private void KPPJMGHPAIL(ref JANDANNAOBB.BGGGFKFAPIM )  [RVA 0x334A5E0]
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
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    FUN_01bab630(&StringLiteral_2777/*"AdvertRate"*/);
    FUN_01bab630(&StringLiteral_2776/*"AdvertRaidsRate"*/);
    FUN_01bab630(&StringLiteral_21154/*"spendertypeid"*/);
    FUN_01bab630(&StringLiteral_17601/*"data"*/);
    FUN_01bab630(&StringLiteral_21873/*"user"*/);
    FUN_01bab630(&StringLiteral_2775/*"AdvertBannersRaidsRate"*/);
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
                             (pSVar4,StringLiteral_17601/*"data"*/,(pSVar4->klass->vtable)._7_get_Item.method)
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
            bVar2 = System_String__Equals(__this_01,StringLiteral_21873/*"user"*/,(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            pCVar8 = (param_2->fields).loginData;
            if ((pCVar8 != (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) &&
               (pSVar4 = (pCVar8->fields).BJDEBHDELOO, pSVar4 != (SimpleJSON_JSONNode_o *)0x0)) {
              pSVar4 = (SimpleJSON_JSONNode_o *)
                       (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,StringLiteral_21930/*"value"*/,
                                  (pSVar4->klass->vtable)._7_get_Item.method);
              pSVar4 = OGMFFOMHGIA__IFFHCBKGMKC(pSVar4,StringLiteral_21154/*"spendertypeid"*/,(MethodInfo *)0x0);
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
                                (pAVar3,StringLiteral_2777/*"AdvertRate"*/,
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
                                  (pAVar3,StringLiteral_2776/*"AdvertRaidsRate"*/,
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
                                    (pAVar3,StringLiteral_2775/*"AdvertBannersRaidsRate"*/,
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


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x334A9C8]
// JANDANNAOBB$$KGGGBHEMAOO @ RVA 0x334A9C8

int32_t JANDANNAOBB__KGGGBHEMAOO(JANDANNAOBB_o *__this,MethodInfo *method)

{
  return 5;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x334A9D0]
// JANDANNAOBB$$JFGBPBOCOIC @ RVA 0x334A9D0

bool JANDANNAOBB__JFGBPBOCOIC(JANDANNAOBB_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return true;
}


// ===== public override void NKLGCNHLBAF()  [RVA 0x334A9D8]
// JANDANNAOBB$$NKLGCNHLBAF @ RVA 0x334A9D8

void JANDANNAOBB__NKLGCNHLBAF(JANDANNAOBB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Core_Network_ServerProvider_o *__this_01;
  System_Action_ServerProvider_DEBEPAKJMBK__o *ODJGKAPGNFF;
  MethodInfo *extraout_x1;
  
  if ((DAT_045679ef & 1) == 0) {
    FUN_01bab630(&System_Action<ServerProvider_DEBEPAKJMBK>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Method_JANDANNAOBB_FBBMDNCGPFN__);
    DAT_045679ef = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  __this_01 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
  ODJGKAPGNFF = (System_Action_ServerProvider_DEBEPAKJMBK__o *)
                thunk_FUN_01bda818(System_Action<ServerProvider_DEBEPAKJMBK>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_01 != (Core_Network_ServerProvider_o *)0x0) {
    Core_Network_ServerProvider__Login
              (__this_01,ODJGKAPGNFF,
               (System_Collections_Generic_Dictionary_string__string__o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FBBMDNCGPFN(ServerProvider.DEBEPAKJMBK IHFNKAGGMBO)  [RVA 0x334AABC]
// JANDANNAOBB$$FBBMDNCGPFN @ RVA 0x334AABC

void JANDANNAOBB__FBBMDNCGPFN
               (JANDANNAOBB_o *__this,Core_Network_ServerProvider_DEBEPAKJMBK_o *IHFNKAGGMBO,
               MethodInfo *method)

{
  JANDANNAOBB_BGGGFKFAPIM_o local_30;
  
  if ((DAT_045679f0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8629/*"LoginResponse: loginData is null or incorrect!"*/);
    DAT_045679f0 = 1;
  }
  local_30.fields.__4__this = (JANDANNAOBB_o *)0x0;
  local_30.fields.loginData = IHFNKAGGMBO;
  thunk_FUN_01c20e04(&local_30,IHFNKAGGMBO);
  local_30.fields.__4__this = __this;
  thunk_FUN_01c20e04(&local_30.fields.__4__this,__this);
  if ((local_30.fields.loginData == (Core_Network_ServerProvider_DEBEPAKJMBK_o *)0x0) ||
     (((local_30.fields.loginData)->fields).PEKGJKIHHKJ == false)) {
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_8629/*"LoginResponse: loginData is null or incorrect!"*/,(MethodInfo *)0x0);
  }
  else {
    JANDANNAOBB__KPPJMGHPAIL(__this,&local_30,method);
  }
  IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(GLOBPAMKCCE JJBOJHGABNF)  [RVA 0x334AB70]
// JANDANNAOBB$$.ctor @ RVA 0x334AB70

void JANDANNAOBB___ctor(JANDANNAOBB_o *__this,GLOBPAMKCCE_o *JJBOJHGABNF,MethodInfo *method)

{
  GLOBPAMKCCE_o **ppGVar1;
  
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).ADGDLIEAEGD;
  *ppGVar1 = JJBOJHGABNF;
  thunk_FUN_01c20e04(ppGVar1,JJBOJHGABNF);
  return;
}

