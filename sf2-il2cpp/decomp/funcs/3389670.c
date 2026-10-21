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

