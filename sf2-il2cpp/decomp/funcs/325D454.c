// AAPGCAPGBLG$$APMNHOBHBDM @ RVA 0x325D454

void AAPGCAPGBLG__APMNHOBHBDM
               (AAPGCAPGBLG_o *__this,System_Collections_Generic_HashSet_string__o *LBFMLHOIELK,
               MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  System_Action_T__o *action;
  long lVar2;
  KAKGABBLHGP_o *__this_01;
  undefined8 *puVar3;
  MethodInfo *method_00;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_02;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  void **ppvVar7;
  
  if ((DAT_04567199 & 1) == 0) {
    FUN_01bab630(&System_Action<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_573);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_574);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
    FUN_01bab630(&Method_AAPGCAPGBLG_MLNELIONAIB_MBKNFNONDOG__);
    FUN_01bab630(&AAPGCAPGBLG_MLNELIONAIB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567199 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_MLNELIONAIB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar7 = &__this_00[1].monitor;
    *ppvVar7 = LBFMLHOIELK;
    thunk_FUN_01c20e04(ppvVar7,LBFMLHOIELK);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_573,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_574,(MethodInfo *)0x0);
    message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    if (*ppvVar7 != (void *)0x0) {
      if (*(int *)((long)*ppvVar7 + 0x20) != 0) {
        __this_02 = (__this->fields).AOCCHDFNLMC;
        action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CCLKPGBIBOP>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) goto LAB_0335d804;
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_02,action,
                   Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
        AAPGCAPGBLG__JPHDMGDNDHH(__this,method_00);
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
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (ACHLOMELAJE_o *)0x0) {
          lVar2 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar1 = Method_System_Array_Empty<PackType>__;
          plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
          if (plVar6 != (long *)0x0) {
            lVar2 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
            if (lVar2 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<PackType>__);
              lVar2 = *(long *)(lVar1 + 0x38);
            }
            lVar2 = *(long *)(lVar2 + 0x10);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar2 + 0xb8);
            __this_01 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
            KAKGABBLHGP___ctor(__this_01,true,LFADLKGPBHC,(MethodInfo *)0x0);
            lVar2 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(JNDFOKIMHPB_c **)(piVar5 + -2) == JNDFOKIMHPB_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_0335d7dc;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined8 *)FUN_01b81914(plVar6,JNDFOKIMHPB_TypeInfo,0);
LAB_0335d7dc:
                    /* WARNING: Could not recover jumptable at 0x0335d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar6,__this_01,0,puVar3[1]);
            return;
          }
        }
      }
      return;
    }
  }
LAB_0335d804:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

