// TypeDefIndex 351
// Namespace: 
// [Serializable]
// private sealed class PFDCJGIIPLB.<>c
// Fields:
//   public static readonly PFDCJGIIPLB.<>c <>9; // 0x0
//   public static Action<Action<string>> <>9__6_0; // 0x8
//   public static Action<Action<string>> <>9__6_1; // 0x10
//   public static Action<string> <>9__6_2; // 0x18
//   public static Action<Action<PCJHNLGCCOB>> <>9__6_3; // 0x20
//   public static Action<Action<PCJHNLGCCOB>> <>9__6_4; // 0x28
//   public static Action<PCJHNLGCCOB> <>9__6_5; // 0x30

// ===== private static void .cctor()  [RVA 0x3358BA8]
// PFDCJGIIPLB.<>c$$.cctor @ RVA 0x3358BA8

void PFDCJGIIPLB_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567a4b & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_<>c_TypeInfo);
    DAT_04567a4b = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(PFDCJGIIPLB_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9 = (PFDCJGIIPLB___c_o *)__this;
  thunk_FUN_01c20e04(PFDCJGIIPLB_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void IJMMGCKBGMK(Action<PCJHNLGCCOB> h)  [RVA 0x3358C18]
// PFDCJGIIPLB.<>c$$IJMMGCKBGMK @ RVA 0x3358C18

void PFDCJGIIPLB_<>c__IJMMGCKBGMK
               (PFDCJGIIPLB___c_o *__this,System_Action_PCJHNLGCCOB__o *h,MethodInfo *method)

{
  ushort uVar1;
  CPHBJEDCAEO_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04567a4c & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04567a4c = 1;
  }
  pCVar2 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pCVar2 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar2->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 3);
        goto LAB_03458cac;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CPHBJEDCAEO_TypeInfo,3);
LAB_03458cac:
                    /* WARNING: Could not recover jumptable at 0x03458cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pCVar2,h,pVVar3->method);
  return;
}


// ===== internal void GMIFIOCJBMJ(Action<PCJHNLGCCOB> h)  [RVA 0x3358CC8]
// PFDCJGIIPLB.<>c$$GMIFIOCJBMJ @ RVA 0x3358CC8

void PFDCJGIIPLB_<>c__GMIFIOCJBMJ
               (PFDCJGIIPLB___c_o *__this,System_Action_PCJHNLGCCOB__o *h,MethodInfo *method)

{
  ushort uVar1;
  CPHBJEDCAEO_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04567a4d & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04567a4d = 1;
  }
  pCVar2 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pCVar2 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar2->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 6);
        goto LAB_03458d5c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CPHBJEDCAEO_TypeInfo,6);
LAB_03458d5c:
                    /* WARNING: Could not recover jumptable at 0x03458d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pCVar2,h,pVVar3->method);
  return;
}


// ===== internal void PJCKNPMGMCB(Action<string> h)  [RVA 0x3358D78]
// PFDCJGIIPLB.<>c$$PJCKNPMGMCB @ RVA 0x3358D78

void PFDCJGIIPLB_<>c__PJCKNPMGMCB
               (PFDCJGIIPLB___c_o *__this,System_Action_string__o *h,MethodInfo *method)

{
  ushort uVar1;
  CPHBJEDCAEO_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04567a4e & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04567a4e = 1;
  }
  pCVar2 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pCVar2 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar2->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_03458e0c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CPHBJEDCAEO_TypeInfo,1);
LAB_03458e0c:
                    /* WARNING: Could not recover jumptable at 0x03458e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pCVar2,h,pVVar3->method);
  return;
}


// ===== public void .ctor()  [RVA 0x3358C10]
// PFDCJGIIPLB.<>c$$.ctor @ RVA 0x3358C10

void PFDCJGIIPLB_<>c___ctor(PFDCJGIIPLB___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void BAEDFPFIKBA(string token)  [RVA 0x3358E28]
// PFDCJGIIPLB.<>c$$BAEDFPFIKBA @ RVA 0x3358E28

void PFDCJGIIPLB_<>c__BAEDFPFIKBA
               (PFDCJGIIPLB___c_o *__this,System_String_o *token,MethodInfo *method)

{
  Helpshift_HelpshiftSdk_o *__this_00;
  
  if ((DAT_04567a4f & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a4f = 1;
  }
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
  if (__this_00 != (Helpshift_HelpshiftSdk_o *)0x0) {
    Helpshift_HelpshiftSdk__RegisterPushToken(__this_00,token,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void GJHDPFEFPMJ(Action<string> h)  [RVA 0x3358E94]
// PFDCJGIIPLB.<>c$$GJHDPFEFPMJ @ RVA 0x3358E94

void PFDCJGIIPLB_<>c__GJHDPFEFPMJ
               (PFDCJGIIPLB___c_o *__this,System_Action_string__o *h,MethodInfo *method)

{
  ushort uVar1;
  CPHBJEDCAEO_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CPHBJEDCAEO_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04567a50 & 1) == 0) {
    FUN_01bab630(&CPHBJEDCAEO_TypeInfo);
    DAT_04567a50 = 1;
  }
  pCVar2 = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pCVar2 == (CPHBJEDCAEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar2->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPHBJEDCAEO_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 5);
        goto LAB_03458f28;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CPHBJEDCAEO_TypeInfo,5);
LAB_03458f28:
                    /* WARNING: Could not recover jumptable at 0x03458f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pCVar2,h,pVVar3->method);
  return;
}


// ===== internal void NMOPOCPOLGO(PCJHNLGCCOB message)  [RVA 0x3358F44]
// PFDCJGIIPLB.<>c$$NMOPOCPOLGO @ RVA 0x3358F44

/* WARNING: Removing unreachable block (ram,0x03459378) */
/* WARNING: Removing unreachable block (ram,0x034593d0) */

void PFDCJGIIPLB_<>c__NMOPOCPOLGO
               (PFDCJGIIPLB___c_o *__this,PCJHNLGCCOB_o *message,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  Il2CppMethodPointer *ppIVar7;
  System_String_o *b;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long *plVar8;
  undefined8 *puVar9;
  Helpshift_HelpshiftSdk_o *__this_01;
  System_Collections_Generic_IDictionary_string__string__c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Collections_Generic_IDictionary_string__string__o *pSVar15;
  undefined1 auVar16 [16];
  System_String_o *local_38;
  
  if ((DAT_04567a51 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_129);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_130);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_131);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_132);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_string>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a51 = 1;
  }
  local_38 = (System_String_o *)0x0;
  pSVar15 = (message->fields).KOANCCDDBDA;
  if (pSVar15 == (System_Collections_Generic_IDictionary_string__string__o *)0x0) {
    return;
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_129,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_130,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar10 = pSVar15->klass;
  uVar1._0_1_ = (pSVar10->_2).rank;
  uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
  uVar12 = (ulong)uVar1;
  if (uVar12 != 0) {
    piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IDictionary<string,_string>_TypeInfo) {
        ppIVar7 = &pSVar10->vtable[*piVar13 + 7].methodPtr;
        goto LAB_034590f4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  ppIVar7 = (Il2CppMethodPointer *)
            FUN_01b81914(pSVar15,System_Collections_Generic_IDictionary<string,_string>_TypeInfo,7);
LAB_034590f4:
  uVar12 = (**ppIVar7)(pSVar15,pSVar6,&local_38,(MethodInfo *)ppIVar7[1]);
  pSVar6 = local_38;
  if ((uVar12 & 1) == 0) {
    return;
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_131,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_132,(MethodInfo *)0x0);
  b = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  bVar3 = System_String__op_Equality(pSVar6,b,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  pSVar15 = (message->fields).KOANCCDDBDA;
  if (pSVar15 != (System_Collections_Generic_IDictionary_string__string__o *)0x0) {
    pSVar10 = pSVar15->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
    if (uVar12 != 0) {
      piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)
            System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo) {
          ppIVar7 = &pSVar10->vtable[*piVar13].methodPtr;
          goto LAB_034591fc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    ppIVar7 = (Il2CppMethodPointer *)
              FUN_01b81914(pSVar15,
                           System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo
                           ,0);
LAB_034591fc:
    plVar8 = (long *)(**ppIVar7)(pSVar15,(MethodInfo *)ppIVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03459274;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_03459274:
      uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0345936c;
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_03459344;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0345932c;
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)
               (piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo) {
                    /* try { // try from 034592c8 to 0355a82f has its CatchHandler @ 034592c8
                       catch() { ... } // from try @ 034592c8 with catch @ 034592c8
                       catch() { ... } // from try @ 0345aa5c with catch @ 034592c8
                       catch() { ... } // from try @ 0345b16c with catch @ 034592c8
                       catch() { ... } // from try @ 0345b190 with catch @ 034592c8
                       catch() { ... } // from try @ 0345b1fc with catch @ 034592c8
                       catch() { ... } // from try @ 0345b23c with catch @ 034592c8 */
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_034592d0;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01b81914(plVar8,
                            System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo
                            ,0);
LAB_034592d0:
      auVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,auVar16._0_8_,auVar16._8_8_,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    } while( true );
  }
  goto LAB_034593c8;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0345932c:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03459360;
    }
  }
LAB_03459344:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_03459360:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0345936c:
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
  if (__this_01 != (Helpshift_HelpshiftSdk_o *)0x0) {
    Helpshift_HelpshiftSdk__HandlePushNotification
              (__this_01,(System_Collections_Generic_Dictionary_string__object__o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
LAB_034593c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

