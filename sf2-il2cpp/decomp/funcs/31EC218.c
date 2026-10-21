// KGLCGFMIEGI$$KFEJPJDJLMA @ RVA 0x31EC218

void KGLCGFMIEGI__KFEJPJDJLMA
               (KGLCGFMIEGI_o *__this,Facebook_Unity_IGraphResult_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_Generic_Dictionary_string__object__o *OCMMDIHLKMH;
  JANICNLKKBO_o *__this_00;
  Il2CppObject *arg1;
  Facebook_Unity_IGraphResult_c *pFVar5;
  Facebook_Unity_AccessToken_o *pFVar6;
  System_Action_bool__o *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_String_o *pSVar10;
  
  if ((DAT_04566da9 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Facebook_Unity_IResult_TypeInfo);
    FUN_01bab630(&JANICNLKKBO_TypeInfo);
    FUN_01bab630(&StringLiteral_6285);
    FUN_01bab630(&StringLiteral_22367);
    DAT_04566da9 = 1;
  }
  if (HPACPFLKHPK != (Facebook_Unity_IGraphResult_o *)0x0) {
    pFVar5 = HPACPFLKHPK->klass;
    uVar2._0_1_ = (pFVar5->_2).rank;
    uVar2._1_1_ = (pFVar5->_2).minimumAlignment;
    uVar8 = (ulong)uVar2;
    if (uVar8 != 0) {
      piVar9 = &((pFVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar4 = pFVar5->vtable + (*piVar9 + 1);
          goto LAB_032ec2dc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,1);
LAB_032ec2dc:
    OCMMDIHLKMH = (System_Collections_Generic_Dictionary_string__object__o *)
                  (*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
    if (DAT_045604ea == '\0') {
      FUN_01bab630(&Facebook_Unity_AccessToken_TypeInfo);
      DAT_045604ea = '\x01';
    }
    pFVar6 = Facebook_Unity_AccessToken_TypeInfo->static_fields->_CurrentAccessToken_k__BackingField
    ;
    if (pFVar6 != (Facebook_Unity_AccessToken_o *)0x0) {
      pSVar10 = (pFVar6->fields)._TokenString_k__BackingField;
      __this_00 = (JANICNLKKBO_o *)thunk_FUN_01bda818(JANICNLKKBO_TypeInfo);
      if (OCMMDIHLKMH != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment
        ;
        if (((OCMMDIHLKMH->klass->_2).naturalAligment < bVar1) ||
           ((OCMMDIHLKMH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(OCMMDIHLKMH);
        }
      }
      JANICNLKKBO___ctor(__this_00,OCMMDIHLKMH,pSVar10,(MethodInfo *)0x0);
      if (DAT_04566e51 == '\0') {
        FUN_01bab630(&KGLCGFMIEGI_TypeInfo);
        DAT_04566e51 = '\x01';
      }
      KGLCGFMIEGI_TypeInfo->static_fields->_FBNKBJAJBJF_k__BackingField = __this_00;
      thunk_FUN_01c20e04(KGLCGFMIEGI_TypeInfo->static_fields,__this_00);
      pFVar5 = HPACPFLKHPK->klass;
      uVar3._0_1_ = (pFVar5->_2).rank;
      uVar3._1_1_ = (pFVar5->_2).minimumAlignment;
      uVar8 = (ulong)uVar3;
      if (uVar8 != 0) {
        piVar9 = &((pFVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
            pVVar4 = pFVar5->vtable + (*piVar9 + 2);
            goto LAB_032ec41c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,2);
LAB_032ec41c:
      arg1 = (Il2CppObject *)(*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
      if (DAT_04566e52 == '\0') {
        FUN_01bab630(&KGLCGFMIEGI_TypeInfo);
        DAT_04566e52 = '\x01';
      }
      pSVar10 = System_String__Format
                          (StringLiteral_22367,StringLiteral_6285,arg1,
                           (Il2CppObject *)
                           KGLCGFMIEGI_TypeInfo->static_fields->_FBNKBJAJBJF_k__BackingField,
                           (MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar10,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).NEMMLKGAOFE;
      if (pSVar7 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032ec4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,1,(pSVar7->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

