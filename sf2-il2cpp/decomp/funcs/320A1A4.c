// FPMAFHGLPOB$$NJBOADBAJAJ @ RVA 0x320A1A4

void FPMAFHGLPOB__NJBOADBAJAJ
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,MethodInfo *method
               )

{
  ushort uVar1;
  GCPFDLNAFDF_o *pGVar2;
  VirtualInvokeData *pVVar3;
  DADDKDFBPIJ_T__o *__this;
  Il2CppObject *pIVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  SimpleJSON_JSONNode_o *pSVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  float n;
  
  if ((DAT_04566e71 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3331);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3332);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<FJIFBJMMKHG>_COMOKILJDGJ__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e71 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar2 != (GCPFDLNAFDF_o *)0x0) {
    pGVar7 = pGVar2->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar3 = pGVar7->vtable + (*piVar9 + 4);
          goto LAB_0330a2a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar2,HFHIKPAKJFG_TypeInfo,4);
LAB_0330a2a8:
    __this = (DADDKDFBPIJ_T__o *)(*pVVar3->methodPtr)(pGVar2,pVVar3->method);
    if (__this != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar4 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this,KGLJICLJHEL,Method_DADDKDFBPIJ<FJIFBJMMKHG>_COMOKILJDGJ__);
      if (pIVar4 == (Il2CppObject *)0x0) {
        n = 0.0;
      }
      else {
        n = PCOEHCPGBBG__OFFODGKLGOP((System_String_o *)pIVar4[5].klass,0.0,(MethodInfo *)0x0);
      }
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3331,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3332,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar6 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0330a3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar5,pSVar6,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

