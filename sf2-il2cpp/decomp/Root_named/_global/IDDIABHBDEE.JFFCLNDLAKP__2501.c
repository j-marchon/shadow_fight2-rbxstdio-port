// TypeDefIndex 2501
// Namespace: 
// [CompilerGenerated]
// private sealed class IDDIABHBDEE.JFFCLNDLAKP
// Fields:
//   public IDDIABHBDEE <>4__this; // 0x10
//   public string url; // 0x18
//   public HashSet<string> uniqueUrls; // 0x20
//   public TimeSpan timeout; // 0x28
//   public Action<bool> callback; // 0x30

// ===== internal void FPOJOGCLJJK()  [RVA 0x338955C]
// IDDIABHBDEE.JFFCLNDLAKP$$FPOJOGCLJJK @ RVA 0x338955C

void IDDIABHBDEE_JFFCLNDLAKP__FPOJOGCLJJK(IDDIABHBDEE_JFFCLNDLAKP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  intptr_t iVar3;
  undefined1 uVar4;
  MethodInfo *extraout_x1;
  intptr_t iVar5;
  code *UNRECOVERED_JUMPTABLE;
  System_Action_bool__o *pSVar6;
  IDDIABHBDEE_o *pIVar7;
  
  if ((DAT_04567bd3 & 1) == 0) {
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567bd3 = 1;
    method = extraout_x1;
  }
  pIVar7 = (__this->fields).__4__this;
  if (pIVar7 != (IDDIABHBDEE_o *)0x0) {
    (pIVar7->fields)._FLMGPIBLEFL_k__BackingField = false;
    (pIVar7->fields)._AMLNDKODCIA_k__BackingField = false;
    (pIVar7->fields)._BGJCMGHJCMD_k__BackingField = false;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_TypeInfo,method);
    }
    pSVar2 = IDDIABHBDEE__OGGAJEAKGDO((MethodInfo *)0x0);
    bVar1 = IDDIABHBDEE__EMMKMFDFOGC(pIVar7,pSVar2,2,(MethodInfo *)0x0);
    (pIVar7->fields)._GFAEPBKFKEA_k__BackingField = bVar1;
    pIVar7 = (__this->fields).__4__this;
    if (pIVar7 != (IDDIABHBDEE_o *)0x0) {
      if ((pIVar7->fields)._GFAEPBKFKEA_k__BackingField == false) {
        if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = IDDIABHBDEE__APHOFEPIAHM((MethodInfo *)0x0);
        bVar1 = IDDIABHBDEE__EMMKMFDFOGC(pIVar7,pSVar2,1,(MethodInfo *)0x0);
        (pIVar7->fields)._GFAEPBKFKEA_k__BackingField = bVar1;
        pSVar6 = (__this->fields).callback;
        if (pSVar6 == (System_Action_bool__o *)0x0) {
          return;
        }
        pIVar7 = (__this->fields).__4__this;
        if (pIVar7 == (IDDIABHBDEE_o *)0x0) goto LAB_0348966c;
        uVar4 = (pIVar7->fields)._GFAEPBKFKEA_k__BackingField;
        UNRECOVERED_JUMPTABLE = (code *)(pSVar6->fields).super.super.invoke_impl;
        iVar3 = (pSVar6->fields).super.super.method_code;
        iVar5 = (pSVar6->fields).super.super.method;
      }
      else {
        pSVar6 = (__this->fields).callback;
        if (pSVar6 == (System_Action_bool__o *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)(pSVar6->fields).super.super.invoke_impl;
        iVar3 = (pSVar6->fields).super.super.method_code;
        iVar5 = (pSVar6->fields).super.super.method;
        uVar4 = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0348965c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar3,uVar4,iVar5);
      return;
    }
  }
LAB_0348966c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void ENPPBILLJOG()  [RVA 0x3389670]
// IDDIABHBDEE.JFFCLNDLAKP$$ENPPBILLJOG @ RVA 0x3389670

void IDDIABHBDEE_JFFCLNDLAKP__ENPPBILLJOG(IDDIABHBDEE_JFFCLNDLAKP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  IDDIABHBDEE_o *pIVar6;
  System_Threading_CancellationTokenSource_o **ppSVar7;
  Il2CppMethodPointer *ppIVar8;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Byte_array *pSVar9;
  System_Byte_array *pSVar10;
  System_String_o *str1;
  System_String_o *str2;
  undefined8 uVar11;
  System_Threading_CancellationToken_o SVar12;
  MethodInfo *method_00;
  MethodInfo_27FB8F4 *method_01;
  undefined8 in_x7;
  System_Threading_CancellationTokenSource_o *pSVar13;
  KOOGFNAPCGG_c *pKVar14;
  CFOCLEDKNKL_c *pCVar15;
  ulong uVar16;
  int32_t *piVar17;
  KOOGFNAPCGG_o *pKVar18;
  CFOCLEDKNKL_o *pCVar19;
  System_String_o *pSVar20;
  System_Nullable_TimeSpan__o __this_01;
  undefined8 local_50;
  undefined8 uStack_48;
  System_String_o *local_38;
  
  if ((DAT_04567bd4 & 1) == 0) {
    FUN_01bab630(&System_Action<EDLFPEGBIFO>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_543);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_544);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_546);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_IDDIABHBDEE_JFFCLNDLAKP_PAPMCOCCBOO__);
    FUN_01bab630(&KOOGFNAPCGG_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    DAT_04567bd4 = 1;
  }
  local_38 = (System_String_o *)0x0;
  pIVar6 = (__this->fields).__4__this;
  if (pIVar6 != (IDDIABHBDEE_o *)0x0) {
    pSVar13 = (pIVar6->fields).KAGAAJGKDJH;
    if (pSVar13 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Cancel(pSVar13,(MethodInfo *)0x0);
      pIVar6 = (__this->fields).__4__this;
      if (pIVar6 == (IDDIABHBDEE_o *)0x0) goto LAB_03489a70;
    }
    pSVar13 = (pIVar6->fields).KAGAAJGKDJH;
    if (pSVar13 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Dispose(pSVar13,(MethodInfo *)0x0);
      pIVar6 = (__this->fields).__4__this;
      if (pIVar6 == (IDDIABHBDEE_o *)0x0) goto LAB_03489a70;
    }
    ppSVar7 = &(pIVar6->fields).KAGAAJGKDJH;
    *ppSVar7 = (System_Threading_CancellationTokenSource_o *)0x0;
    thunk_FUN_01c20e04(ppSVar7,0);
    pIVar6 = (__this->fields).__4__this;
    if ((pIVar6 != (IDDIABHBDEE_o *)0x0) &&
       (pKVar18 = (pIVar6->fields).DKNHMJIANAB, pKVar18 != (KOOGFNAPCGG_o *)0x0)) {
      pKVar14 = pKVar18->klass;
      pSVar20 = (__this->fields).url;
      uVar1._0_1_ = (pKVar14->_2).rank;
      uVar1._1_1_ = (pKVar14->_2).minimumAlignment;
      uVar16 = (ulong)uVar1;
      if (uVar16 != 0) {
        piVar17 = &((pKVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
              (Il2CppClass *)KOOGFNAPCGG_TypeInfo) {
            ppIVar8 = &pKVar14->vtable[*piVar17].methodPtr;
            goto LAB_034897e4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      ppIVar8 = (Il2CppMethodPointer *)FUN_01b81914(pKVar18,KOOGFNAPCGG_TypeInfo,0);
LAB_034897e4:
      (**ppIVar8)(pKVar18,pSVar20,&local_38,(MethodInfo *)ppIVar8[1]);
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).uniqueUrls;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet<object>__Add
                          (__this_00,(Il2CppObject *)local_38,
                           Method_System_Collections_Generic_HashSet<string>_Add__);
        if (!bVar5) {
          IDDIABHBDEE_JFFCLNDLAKP__FPOJOGCLJJK(__this,method_00);
          return;
        }
        pIVar6 = (__this->fields).__4__this;
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_543,
                   (MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_544,
                   (MethodInfo *)0x0);
        pSVar20 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
        str1 = LOHCAIACKLI__AHFEHPEEIDJ(local_38,(MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_545,
                   (MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_546,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar9,pSVar10,(MethodInfo *)0x0);
        pSVar20 = System_String__Concat(pSVar20,str1,str2,(MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pIVar6,pSVar20,(MethodInfo *)0x0);
        pIVar6 = (__this->fields).__4__this;
        pSVar13 = (System_Threading_CancellationTokenSource_o *)
                  thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo);
        System_Threading_CancellationTokenSource___ctor(pSVar13,(MethodInfo *)0x0);
        if (pIVar6 != (IDDIABHBDEE_o *)0x0) {
          ppSVar7 = &(pIVar6->fields).KAGAAJGKDJH;
          *ppSVar7 = pSVar13;
          thunk_FUN_01c20e04(ppSVar7,pSVar13);
          pSVar20 = local_38;
          pIVar6 = (__this->fields).__4__this;
          if (pIVar6 != (IDDIABHBDEE_o *)0x0) {
            pCVar19 = (pIVar6->fields).MBJJLPCEBFE;
            uVar11 = thunk_FUN_01bda818(System_Action<EDLFPEGBIFO>_TypeInfo);
            method_01 = (MethodInfo_27FB8F4 *)0x0;
            System_Action<object>___ctor();
            __this_01.fields.value.fields._ticks =
                 (System_TimeSpan_Fields)(__this->fields).timeout.fields._ticks;
            local_50 = 0;
            uStack_48 = 0;
            __this_01.fields._0_8_ = &local_50;
            System_Nullable<TimeSpan>___ctor
                      (__this_01,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
                       method_01);
            pIVar6 = (__this->fields).__4__this;
            if (((pIVar6 != (IDDIABHBDEE_o *)0x0) &&
                (pSVar13 = (pIVar6->fields).KAGAAJGKDJH,
                pSVar13 != (System_Threading_CancellationTokenSource_o *)0x0)) &&
               (SVar12 = System_Threading_CancellationTokenSource__get_Token
                                   (pSVar13,(MethodInfo *)0x0), uVar4 = uStack_48, uVar3 = local_50,
               pCVar19 != (CFOCLEDKNKL_o *)0x0)) {
              pCVar15 = pCVar19->klass;
              uVar2._0_1_ = (pCVar15->_2).rank;
              uVar2._1_1_ = (pCVar15->_2).minimumAlignment;
              uVar16 = (ulong)uVar2;
              if (uVar16 != 0) {
                piVar17 = &((pCVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                      (Il2CppClass *)CFOCLEDKNKL_TypeInfo) {
                    ppIVar8 = &pCVar15->vtable[*piVar17].methodPtr;
                    goto LAB_03489a24;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              ppIVar8 = (Il2CppMethodPointer *)FUN_01b81914(pCVar19,CFOCLEDKNKL_TypeInfo,0);
LAB_03489a24:
              (**ppIVar8)(pCVar19,pSVar20,uVar11,0,0,1,1,in_x7,uVar3,uVar4,1,SVar12.fields._source,
                          (MethodInfo *)ppIVar8[1]);
              return;
            }
          }
        }
      }
    }
  }
LAB_03489a70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void PAPMCOCCBOO(EDLFPEGBIFO result)  [RVA 0x3389A74]
// IDDIABHBDEE.JFFCLNDLAKP$$PAPMCOCCBOO @ RVA 0x3389A74

void IDDIABHBDEE_JFFCLNDLAKP__PAPMCOCCBOO
               (IDDIABHBDEE_JFFCLNDLAKP_o *__this,EDLFPEGBIFO_o *result,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Object_array *pSVar7;
  System_String_o *pSVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Action_bool__o *pSVar12;
  IDDIABHBDEE_o *pIVar13;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((DAT_04567bd5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_547);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_548);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_549);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_550);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_551);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_552);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_553);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_554);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_555);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_556);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_557);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_558);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_04567bd5 = 1;
  }
  if (result == (EDLFPEGBIFO_o *)0x0) goto LAB_0348a194;
  pIVar13 = (__this->fields).__4__this;
  bVar2 = EDLFPEGBIFO__BOJJBGPIKDP(result,(MethodInfo *)0x0);
  if (pIVar13 == (IDDIABHBDEE_o *)0x0) goto LAB_0348a194;
  (pIVar13->fields)._FLMGPIBLEFL_k__BackingField = bVar2;
  pIVar13 = (__this->fields).__4__this;
  if (pIVar13 == (IDDIABHBDEE_o *)0x0) goto LAB_0348a194;
  (pIVar13->fields)._AMLNDKODCIA_k__BackingField = false;
  (pIVar13->fields)._BGJCMGHJCMD_k__BackingField = false;
  bVar1 = (pIVar13->fields)._FLMGPIBLEFL_k__BackingField;
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  if (bVar1 == false) {
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_553,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_554,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_555,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_556,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (pSVar7 == (System_Object_array *)0x0) goto LAB_0348a194;
    if ((pSVar8 != (System_String_o *)0x0) &&
       (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
    goto LAB_0348a19c;
    if ((int)pSVar7->max_length == 0) goto LAB_0348a198;
    pSVar7->m_Items[0] = (Il2CppObject *)pSVar8;
    thunk_FUN_01c20e04(pSVar7->m_Items,pSVar8);
    pSVar8 = LOHCAIACKLI__AHFEHPEEIDJ
                       ((result->fields)._HOHLBKMCIDD_k__BackingField,(MethodInfo *)0x0);
    if ((pSVar8 != (System_String_o *)0x0) &&
       (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
    goto LAB_0348a19c;
    if ((uint)pSVar7->max_length < 2) goto LAB_0348a198;
    pSVar7->m_Items[1] = (Il2CppObject *)pSVar8;
    thunk_FUN_01c20e04(pSVar7->m_Items + 1,pSVar8);
    pSVar4 = (result->fields)._GOFDPKCMIJO_k__BackingField;
    local_58 = 0;
    if (pSVar4 != (System_Byte_array *)0x0) {
      local_58 = (undefined4)pSVar4->max_length;
    }
    pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_58);
    if ((pIVar10 != (Il2CppObject *)0x0) &&
       (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
    goto LAB_0348a19c;
    if ((uint)pSVar7->max_length < 3) goto LAB_0348a198;
    pSVar7->m_Items[2] = pIVar10;
    thunk_FUN_01c20e04(pSVar7->m_Items + 2,pIVar10);
    pSVar8 = (result->fields)._GBHFKPGCMLN_k__BackingField;
    if (pSVar8 == (System_String_o *)0x0) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_557,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_558,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) goto LAB_0348a0dc;
    }
    else {
LAB_0348a0dc:
      lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar7->obj).klass)->_1).element_class);
      if (lVar9 == 0) goto LAB_0348a19c;
    }
    if ((uint)pSVar7->max_length < 4) goto LAB_0348a198;
    pSVar7->m_Items[3] = (Il2CppObject *)pSVar8;
    thunk_FUN_01c20e04(pSVar7->m_Items + 3,pSVar8);
    pSVar6 = System_String__Format(pSVar6,pSVar7,(MethodInfo *)0x0);
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo);
    }
    iVar3 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
    pIVar13 = (__this->fields).__4__this;
    if (iVar3 == 0) {
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)pIVar13,pSVar6,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
    }
    else {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)pIVar13,pSVar6,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    goto LAB_0348a170;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_547,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_548,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar7 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_549,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_550,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (pSVar7 == (System_Object_array *)0x0) goto LAB_0348a194;
  if ((pSVar8 != (System_String_o *)0x0) &&
     (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
  goto LAB_0348a19c;
  if ((int)pSVar7->max_length == 0) goto LAB_0348a198;
  pSVar7->m_Items[0] = (Il2CppObject *)pSVar8;
  thunk_FUN_01c20e04(pSVar7->m_Items,pSVar8);
  pSVar8 = LOHCAIACKLI__AHFEHPEEIDJ((result->fields)._HOHLBKMCIDD_k__BackingField,(MethodInfo *)0x0)
  ;
  if ((pSVar8 != (System_String_o *)0x0) &&
     (lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
  goto LAB_0348a19c;
  if ((uint)pSVar7->max_length < 2) goto LAB_0348a198;
  pSVar7->m_Items[1] = (Il2CppObject *)pSVar8;
  thunk_FUN_01c20e04(pSVar7->m_Items + 1,pSVar8);
  pSVar4 = (result->fields)._GOFDPKCMIJO_k__BackingField;
  local_54 = 0;
  if (pSVar4 != (System_Byte_array *)0x0) {
    local_54 = (undefined4)pSVar4->max_length;
  }
  pIVar10 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
  if ((pIVar10 != (Il2CppObject *)0x0) &&
     (lVar9 = thunk_FUN_01bda71c(pIVar10,(((pSVar7->obj).klass)->_1).element_class), lVar9 == 0))
  goto LAB_0348a19c;
  if ((uint)pSVar7->max_length < 3) goto LAB_0348a198;
  pSVar7->m_Items[2] = pIVar10;
  thunk_FUN_01c20e04(pSVar7->m_Items + 2,pIVar10);
  pSVar8 = (result->fields)._GBHFKPGCMLN_k__BackingField;
  if (pSVar8 == (System_String_o *)0x0) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_551,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_552,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (pSVar8 != (System_String_o *)0x0) goto LAB_03489dd4;
  }
  else {
LAB_03489dd4:
    lVar9 = thunk_FUN_01bda71c(pSVar8,(((pSVar7->obj).klass)->_1).element_class);
    if (lVar9 == 0) {
LAB_0348a19c:
      uVar11 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar11,0);
    }
  }
  if ((uint)pSVar7->max_length < 4) {
LAB_0348a198:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  pSVar7->m_Items[3] = (Il2CppObject *)pSVar8;
  thunk_FUN_01c20e04(pSVar7->m_Items + 3,pSVar8);
  pSVar6 = System_String__Format(pSVar6,pSVar7,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pIVar13,pSVar6,(MethodInfo *)0x0);
  pIVar13 = (__this->fields).__4__this;
  if (pIVar13 != (IDDIABHBDEE_o *)0x0) {
    bVar2 = IDDIABHBDEE__APBAEFLCMNP
                      (pIVar13,(result->fields)._GOFDPKCMIJO_k__BackingField,(MethodInfo *)0x0);
    (pIVar13->fields)._BGJCMGHJCMD_k__BackingField = bVar2;
    (pIVar13->fields)._GFAEPBKFKEA_k__BackingField = bVar2;
    pIVar13 = (__this->fields).__4__this;
    if (pIVar13 != (IDDIABHBDEE_o *)0x0) {
      method_00 = extraout_x1;
      if ((pIVar13->fields)._BGJCMGHJCMD_k__BackingField != false) {
        if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = IDDIABHBDEE__OGGAJEAKGDO((MethodInfo *)0x0);
        NEHNBJKKABI__IGOPCLNJIGA
                  (pSVar6,(result->fields)._GOFDPKCMIJO_k__BackingField,(MethodInfo *)0x0);
        pSVar6 = IDDIABHBDEE__OGGAJEAKGDO((MethodInfo *)0x0);
        pSVar4 = (result->fields)._GOFDPKCMIJO_k__BackingField;
        if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
        }
        CFJANHACGMG__LOGMODDMLHP(pSVar6,pSVar4,false,(MethodInfo *)0x0);
        pSVar12 = (__this->fields).callback;
        if (pSVar12 == (System_Action_bool__o *)0x0) {
          return;
        }
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,1,(pSVar12->fields).super.super.method)
        ;
        return;
      }
LAB_0348a170:
      IDDIABHBDEE_JFFCLNDLAKP__ENPPBILLJOG(__this,method_00);
      return;
    }
  }
LAB_0348a194:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x338A1A8]
// IDDIABHBDEE.JFFCLNDLAKP$$.ctor @ RVA 0x338A1A8

void IDDIABHBDEE_JFFCLNDLAKP___ctor(IDDIABHBDEE_JFFCLNDLAKP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

