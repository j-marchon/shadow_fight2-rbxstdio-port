// TypeDefIndex 663
// Namespace: 
// public class GGLDGAAPKCF : GOCLIOIANDK<GGLDGAAPKCF, ODEIOKOJGDM>, ODEIOKOJGDM
// Fields:
//   private const float KEKJCKEOEGP = 350;
//   private readonly HFHIKPAKJFG AKOCHMGJNMB; // 0x10
//   private List<int> KNKAAIDGBJL; // 0x18
//   private Action ODCAOCGHMPN; // 0x20
//   private Action JDABHAFPPOL; // 0x28
//   private static string GMLHHNPAHHM; // 0x0

// ===== private void JHBPKMKKKJI()  [RVA 0x35D11E4]
// GGLDGAAPKCF$$JHBPKMKKKJI @ RVA 0x35D11E4

void GGLDGAAPKCF__JHBPKMKKKJI(GGLDGAAPKCF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  GCPFDLNAFDF_o *pGVar3;
  VirtualInvokeData *pVVar4;
  long lVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_Func_int__string__o **ppSVar9;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *value;
  Core_Network_ServerProvider_o *__this_00;
  System_Action_bool__string__object__o *KCPFFLHCCIN;
  System_Action_o *pSVar10;
  GCPFDLNAFDF_c *pGVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_int__o *source_00;
  System_Func_int__string__o *selector;
  
  if ((DAT_04568fe6 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_722);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_723);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_724);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_725);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<int,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01bab630(&System_Func<int,_string>_TypeInfo);
    FUN_01bab630(&Method_GGLDGAAPKCF_JMNCGJLMAIM__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_GGLDGAAPKCF_<>c_JKELCOKFAKD__);
    FUN_01bab630(&GGLDGAAPKCF_<>c_TypeInfo);
    DAT_04568fe6 = 1;
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<int>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).KNKAAIDGBJL,
                     Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
  if (bVar2) {
    pSVar10 = (__this->fields).JDABHAFPPOL;
    if (pSVar10 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036d12fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar10->fields).super.super.invoke_impl)
                ((pSVar10->fields).super.super.method_code,(pSVar10->fields).super.super.method);
      return;
    }
    return;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar3 != (GCPFDLNAFDF_o *)0x0) {
    pGVar11 = pGVar3->klass;
    uVar1._0_1_ = (pGVar11->_2).rank;
    uVar1._1_1_ = (pGVar11->_2).minimumAlignment;
                    /* try { // try from 036d1334 to 037d13fb has its CatchHandler @ 036d1334
                       catch() { ... } // from try @ 036d1334 with catch @ 036d1334
                       catch() { ... } // from try @ 036d1420 with catch @ 036d1334
                       catch() { ... } // from try @ 036d1480 with catch @ 036d1334
                       catch() { ... } // from try @ 036d14b4 with catch @ 036d1334 */
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pGVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar4 = pGVar11->vtable + (*piVar13 + 7);
          goto LAB_036d1394;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar3,HFHIKPAKJFG_TypeInfo,7);
LAB_036d1394:
    lVar5 = (*pVVar4->methodPtr)(pGVar3,pVVar4->method);
    if (lVar5 != 0) {
      pSVar14 = *(System_String_o **)(lVar5 + 0x10);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_722,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_723,(MethodInfo *)0x0
                );
                    /* try { // try from 036d13fc to 037d1403 has its CatchHandler @ 036d1464 */
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 036d1414 to 037d141f has its CatchHandler @ 036d1460 */
      pSVar8 = System_String__Concat(pSVar14,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 036d1420 to 037d147b has its CatchHandler @ 036d1334 */
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_724,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d1414 with catch @ 036d1460
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d13fc with catch @ 036d1464
                        */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_725,(MethodInfo *)0x0
                );
      pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 036d147c to 037d147f has its CatchHandler @ 036d14a4 */
                    /* try { // try from 036d1480 to 037d14ab has its CatchHandler @ 036d1334 */
      source_00 = (__this->fields).KNKAAIDGBJL;
      if ((GGLDGAAPKCF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GGLDGAAPKCF_<>c_TypeInfo);
      }
                    /* catch() { ... } // from try @ 036d147c with catch @ 036d14a4 */
      selector = GGLDGAAPKCF_<>c_TypeInfo->static_fields->__9__31_0;
      if (selector == (System_Func_int__string__o *)0x0) {
                    /* try { // try from 036d14ac to 037d14b3 has its CatchHandler @ 036d14c8 */
        if ((GGLDGAAPKCF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036d14b4 to 037d14bf has its CatchHandler @ 036d1334 */
          thunk_FUN_01ba7564(GGLDGAAPKCF_<>c_TypeInfo);
        }
                    /* try { // try from 036d14c0 to 037d14c7 has its CatchHandler @ 036d14c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036d14ac with catch @ 036d14c8
                       catch(type#2 @ 00000000) { ... } // from try @ 036d14c0 with catch @ 036d14c8
                        */
        selector = (System_Func_int__string__o *)
                   thunk_FUN_01bda818(System_Func<int,_string>_TypeInfo);
        System_Func<int,_object>___ctor();
        ppSVar9 = &GGLDGAAPKCF_<>c_TypeInfo->static_fields->__9__31_0;
        *ppSVar9 = selector;
        thunk_FUN_01c20e04(ppSVar9,selector);
      }
      source = System_Linq_Enumerable__Select<int,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          (System_Func_TSource__TResult__o *)selector,
                          Method_System_Linq_Enumerable_Select<int,_string>__);
      value = (System_String_array *)
              System_Linq_Enumerable__ToArray<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         Method_System_Linq_Enumerable_ToArray<string>__);
      pSVar14 = System_String__Join(pSVar14,value,(MethodInfo *)0x0);
      __this_00 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
      KCPFFLHCCIN = (System_Action_bool__string__object__o *)
                    thunk_FUN_01bda818(System_Action<bool,_string,_object>_TypeInfo);
      System_Action<bool,_object,_object>___ctor();
      if (__this_00 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__ConfirmLedger
                  (__this_00,pSVar8,KCPFFLHCCIN,pSVar14,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JMNCGJLMAIM(bool HPACPFLKHPK, string IMMNELPBGIF, object OKECKCEAHNA)  [RVA 0x35D15B0]
// GGLDGAAPKCF$$JMNCGJLMAIM @ RVA 0x35D15B0

/* WARNING: Type propagation algorithm not settling */

void GGLDGAAPKCF__JMNCGJLMAIM
               (GGLDGAAPKCF_o *__this,bool HPACPFLKHPK,System_String_o *IMMNELPBGIF,
               Il2CppObject *OKECKCEAHNA,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  int iVar3;
  int32_t item;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  System_String_o *str2;
  SimpleJSON_JSONNode_o *pSVar7;
  long *plVar8;
  Roster_o *__this_00;
  System_Action_o *pSVar9;
  uint uVar10;
  System_Collections_Generic_List_int__o *__this_01;
  
  if ((DAT_04568fe7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_726);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_727);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_728);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_729);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_730);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_731);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_732);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_733);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568fe7 = 1;
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_726,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_727,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar1 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_730;
  if (!HPACPFLKHPK) {
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_728;
  }
  pSVar2 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_731;
  if (!HPACPFLKHPK) {
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_729;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0);
  str1 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_732,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_733,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat(pSVar6,str1,str2,IMMNELPBGIF,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (!HPACPFLKHPK) {
LAB_036d18f0:
    pSVar9 = (__this->fields).JDABHAFPPOL;
    if (pSVar9 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036d191c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar9->fields).super.super.invoke_impl)
                ((pSVar9->fields).super.super.method_code,(pSVar9->fields).super.super.method);
      return;
    }
    return;
  }
  pSVar7 = SimpleJSON_JSON__Parse(IMMNELPBGIF,(MethodInfo *)0x0);
  if (pSVar7 != (SimpleJSON_JSONNode_o *)0x0) {
    iVar3 = (*(pSVar7->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar7,(pSVar7->klass->vtable)._11_get_Count.method);
    if (0 < iVar3) {
      uVar10 = 0;
      do {
        __this_01 = (__this->fields).KNKAAIDGBJL;
        plVar8 = (long *)(*(pSVar7->klass->vtable)._5_get_Item.methodPtr)
                                   (pSVar7,(ulong)uVar10,(pSVar7->klass->vtable)._5_get_Item.method)
        ;
        if (plVar8 == (long *)0x0) goto LAB_036d193c;
        item = (**(code **)(*plVar8 + 0x348))(plVar8,*(undefined8 *)(*plVar8 + 0x350));
        if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d193c;
        System_Collections_Generic_List<int>__Remove
                  (__this_01,item,Method_System_Collections_Generic_List<int>_Remove__);
        uVar10 = uVar10 + 1;
        iVar3 = (*(pSVar7->klass->vtable)._11_get_Count.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._11_get_Count.method);
      } while ((int)uVar10 < iVar3);
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      Roster__EEIICBEOCOE(__this_00,(__this->fields).KNKAAIDGBJL,(MethodInfo *)0x0);
      goto LAB_036d18f0;
    }
  }
LAB_036d193c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OJNBCAPCJBH(string ACCIHBHMFPN, int IDPMJOKDHNP, string NOPKDGGEPPP, ref bool FPPCHGKMNFF, ref bool MKAFADNLNIE)  [RVA 0x35D1940]
// GGLDGAAPKCF$$OJNBCAPCJBH @ RVA 0x35D1940

bool GGLDGAAPKCF__OJNBCAPCJBH
               (GGLDGAAPKCF_o *__this,System_String_o *ACCIHBHMFPN,int32_t IDPMJOKDHNP,
               System_String_o *NOPKDGGEPPP,bool *FPPCHGKMNFF,bool *MKAFADNLNIE,MethodInfo *method)

{
  IGNEHHMICKB_o *EFGJLFEICDO;
  int32_t IDPMJOKDHNP_00;
  bool bVar1;
  Item_o *__this_00;
  HOOAAGABMBL_o *IHGFKLOLPOK;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *PCPECHHMLEC;
  System_String_o *JDECODCCMHP;
  System_String_array *values;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *local_78;
  IGNEHHMICKB_o *local_70;
  int32_t local_64;
  
  method_00 = (MethodInfo *)FPPCHGKMNFF;
  method_01 = (MethodInfo *)MKAFADNLNIE;
  local_64 = IDPMJOKDHNP;
  if ((DAT_04568fe8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_734);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_735);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_736);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_737);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_738);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_739);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_740);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_741);
                    /* try { // try from 036d19f0 to 037d1b4f has its CatchHandler @ 036d19f0
                       catch() { ... } // from try @ 036d19f0 with catch @ 036d19f0
                       catch() { ... } // from try @ 036d1c94 with catch @ 036d19f0
                       catch() { ... } // from try @ 036d1cd8 with catch @ 036d19f0
                       catch() { ... } // from try @ 036d1d38 with catch @ 036d19f0
                       catch() { ... } // from try @ 036d1d68 with catch @ 036d19f0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_742);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_743);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_744);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_745);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568fe8 = 1;
  }
  local_78 = (System_String_o *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (Item_o *)0x0) {
    IHGFKLOLPOK = Item__CKKIPBAIEMN(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_734,(MethodInfo *)0x0
                );
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_735,(MethodInfo *)0x0
                );
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(pSVar4,ACCIHBHMFPN,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return false;
    }
    local_70 = (IGNEHHMICKB_o *)0x0;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = GGLDGAAPKCF__ENICPLGGIED(IHGFKLOLPOK,IDPMJOKDHNP,NOPKDGGEPPP,&local_78,method_00);
    if (!bVar1) {
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = GGLDGAAPKCF__HECPMGDKGFO(IHGFKLOLPOK,IDPMJOKDHNP,&local_78,&local_70,method_00);
      IDPMJOKDHNP_00 = local_64;
      if (!bVar1) {
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 036d1b50 to 037d1b57 has its CatchHandler @ 036d1d14 */
        bVar1 = GGLDGAAPKCF__EJFCFEHMNKE(IHGFKLOLPOK,IDPMJOKDHNP_00,&local_78,MKAFADNLNIE,method_00)
        ;
        if (!bVar1) {
          return true;
        }
      }
    }
                    /* try { // try from 036d1b6c to 037d1b6f has its CatchHandler @ 036d1cdc */
                    /* try { // try from 036d1b90 to 037d1b97 has its CatchHandler @ 036d1d10 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d1ba0 to 037d1ba7 has its CatchHandler @ 036d1ce8 */
                    /* try { // try from 036d1ba8 to 037d1bc3 has its CatchHandler @ 036d1d18 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_736,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_737,(MethodInfo *)0x0);
                    /* try { // try from 036d1bd0 to 037d1bd7 has its CatchHandler @ 036d1cf8 */
    PCPECHHMLEC = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar4 = local_78;
                    /* try { // try from 036d1be0 to 037d1be7 has its CatchHandler @ 036d1ce4 */
                    /* try { // try from 036d1be8 to 037d1bf3 has its CatchHandler @ 036d1cf0 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_738,(MethodInfo *)0x0);
                    /* try { // try from 036d1c08 to 037d1c0f has its CatchHandler @ 036d1cf4 */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d1c18 to 037d1c1f has its CatchHandler @ 036d1cec */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_739,(MethodInfo *)0x0);
                    /* try { // try from 036d1c20 to 037d1c2b has its CatchHandler @ 036d1d0c */
    JDECODCCMHP = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    EFGJLFEICDO = local_70;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
    }
    GGLDGAAPKCF__JNGBIOPBPOH(PCPECHHMLEC,pSVar4,JDECODCCMHP,true,EFGJLFEICDO,method_01);
    *FPPCHGKMNFF = true;
                    /* try { // try from 036d1c74 to 037d1c93 has its CatchHandler @ 036d1ce0 */
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d1c94 to 037d1cbf has its CatchHandler @ 036d19f0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_740,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_741,(MethodInfo *)0x0);
                    /* try { // try from 036d1cc0 to 037d1cc3 has its CatchHandler @ 036d1d1c */
                    /* try { // try from 036d1cc4 to 037d1cc7 has its CatchHandler @ 036d1d08 */
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 036d1cc8 to 037d1ccb has its CatchHandler @ 036d1d04 */
    if (values != (System_String_array *)0x0) {
                    /* try { // try from 036d1ccc to 037d1ccf has its CatchHandler @ 036d1d00 */
                    /* try { // try from 036d1cd0 to 037d1cd3 has its CatchHandler @ 036d1cfc */
                    /* try { // try from 036d1cd4 to 037d1cd7 has its CatchHandler @ 036d1d1c */
                    /* try { // try from 036d1cd8 to 037d1d33 has its CatchHandler @ 036d19f0 */
      if ((int)values->max_length != 0) {
                    /* catch() { ... } // from try @ 036d1b6c with catch @ 036d1cdc */
                    /* catch() { ... } // from try @ 036d1c74 with catch @ 036d1ce0 */
        values->m_Items[0] = pSVar4;
                    /* catch() { ... } // from try @ 036d1be0 with catch @ 036d1ce4 */
                    /* catch() { ... } // from try @ 036d1ba0 with catch @ 036d1ce8 */
                    /* catch() { ... } // from try @ 036d1c18 with catch @ 036d1cec */
        thunk_FUN_01c20e04(values->m_Items,pSVar4);
                    /* catch() { ... } // from try @ 036d1be8 with catch @ 036d1cf0 */
                    /* catch() { ... } // from try @ 036d1c08 with catch @ 036d1cf4 */
                    /* catch() { ... } // from try @ 036d1bd0 with catch @ 036d1cf8 */
        if (1 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 036d1cd0 with catch @ 036d1cfc */
                    /* catch() { ... } // from try @ 036d1ccc with catch @ 036d1d00 */
                    /* catch() { ... } // from try @ 036d1cc8 with catch @ 036d1d04 */
                    /* catch() { ... } // from try @ 036d1cc4 with catch @ 036d1d08 */
                    /* catch() { ... } // from try @ 036d1c20 with catch @ 036d1d0c */
                    /* catch() { ... } // from try @ 036d1b90 with catch @ 036d1d10 */
                    /* catch() { ... } // from try @ 036d1b50 with catch @ 036d1d14 */
          values->m_Items[1] = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 036d1ba8 with catch @ 036d1d18 */
                    /* catch() { ... } // from try @ 036d1cc0 with catch @ 036d1d1c
                       catch() { ... } // from try @ 036d1cd4 with catch @ 036d1d1c */
          thunk_FUN_01c20e04(values->m_Items + 1);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d1d34 to 037d1d37 has its CatchHandler @ 036d1d58 */
                    /* try { // try from 036d1d38 to 037d1d5f has its CatchHandler @ 036d19f0 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_742,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_743,
                     (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d1d34 with catch @ 036d1d58 */
                    /* try { // try from 036d1d60 to 037d1d67 has its CatchHandler @ 036d1d7c */
          pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 036d1d68 to 037d1d73 has its CatchHandler @ 036d19f0 */
          if (2 < (uint)values->max_length) {
                    /* try { // try from 036d1d74 to 037d1d7b has its CatchHandler @ 036d1d7c */
            values->m_Items[2] = pSVar4;
                    /* catch() { ... } // from try @ 036d1d60 with catch @ 036d1d7c
                       catch() { ... } // from try @ 036d1d74 with catch @ 036d1d7c */
            thunk_FUN_01c20e04(values->m_Items + 2,pSVar4);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = (IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField;
              thunk_FUN_01c20e04(values->m_Items + 3);
              pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar2,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_744,
                         (MethodInfo *)0x0);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_745,
                         (MethodInfo *)0x0);
              pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar4;
                thunk_FUN_01c20e04(values->m_Items + 4,pSVar4);
                pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = pSVar4;
                  thunk_FUN_01c20e04();
                  pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                  }
                  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                  return true;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35D354C]
// GGLDGAAPKCF$$.ctor @ RVA 0x35D354C

void GGLDGAAPKCF___ctor(GGLDGAAPKCF_o *__this,MethodInfo *method)

{
  if ((DAT_04568fe9 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>__ctor__);
    DAT_04568fe9 = 1;
  }
                    /* try { // try from 036d358c to 037d3597 has its CatchHandler @ 036d303c */
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>__ctor__);
  return;
}


// ===== private static string INBGLAGLLIB()  [RVA 0x35D3594]
// GGLDGAAPKCF$$INBGLAGLLIB @ RVA 0x35D3594

System_String_o * GGLDGAAPKCF__INBGLAGLLIB(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036d3598 to 037d359f has its CatchHandler @ 036d35a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036d3524 with catch @ 036d35a0
                       catch(type#2 @ 00000000) { ... } // from try @ 036d3598 with catch @ 036d35a0
                        */
  if ((DAT_04568fea & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_746);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_747);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568fea = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_746,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_747,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private bool NADBOGJANBC()  [RVA 0x35D3644]
// GGLDGAAPKCF$$NADBOGJANBC @ RVA 0x35D3644

bool GGLDGAAPKCF__NADBOGJANBC(GGLDGAAPKCF_o *__this,MethodInfo *method)

{
  bool bVar1;
  DialogsManager_o *__this_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04568feb & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568feb = 1;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    x = (UnityEngine_Object_o *)
        DialogsManager__BFJGHKKGOJC<object>
                  (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OJPAHKOPAAI(int IDPMJOKDHNP)  [RVA 0x35D36C8]
// GGLDGAAPKCF$$OJPAHKOPAAI @ RVA 0x35D36C8

void GGLDGAAPKCF__OJPAHKOPAAI(int32_t IDPMJOKDHNP,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Roster_o *__this;
  PCEDNFLCPPF_o *__this_00;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_RuntimeFieldHandle_o fldHandle;
  MethodInfo *in_x5;
  int32_t local_54;
  
  local_54 = IDPMJOKDHNP;
  if ((DAT_04568fec & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_748);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_749);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_750);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_751);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_752);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_753);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_754);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_755);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_756);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_757);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_758);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_759);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_760);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_761);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_762);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_763);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568fec = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_748,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_749,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  if (0 < local_54) {
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
    if (__this != (Roster_o *)0x0) {
      Roster__NDMIDIIDANL(__this,(long)local_54,9,false,(MethodInfo *)0x0);
      __this_00 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (PCEDNFLCPPF_o *)0x0) {
        PCEDNFLCPPF__OEEIILHCCBI(__this_00,local_54,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_750,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_751,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_752,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_753,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_754,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_755,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat(pSVar4,pSVar5,str2,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_756,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        fldHandle.fields.value =
             (System_RuntimeFieldHandle_Fields)
             (System_RuntimeFieldHandle_Fields)
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_757.value;
        goto LAB_036d3bac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_758,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_759,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_760,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_761,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_762,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  fldHandle.fields.value =
       (System_RuntimeFieldHandle_Fields)
       (System_RuntimeFieldHandle_Fields)
       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_763.value;
LAB_036d3bac:
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,fldHandle,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
  }
  GGLDGAAPKCF__JNGBIOPBPOH(pSVar3,pSVar4,pSVar5,false,(IGNEHHMICKB_o *)0x0,in_x5);
  return;
}


// ===== private void DHJGDFEMCKN(JSONNode FFJLPMFOGOI, bool IKBGIDDBNMP = False)  [RVA 0x35D3C18]
// GGLDGAAPKCF$$DHJGDFEMCKN @ RVA 0x35D3C18

void GGLDGAAPKCF__DHJGDFEMCKN
               (GGLDGAAPKCF_o *__this,SimpleJSON_JSONNode_o *FFJLPMFOGOI,bool IKBGIDDBNMP,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *item;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  System_Collections_Generic_List_int__o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *a;
  GGLDGAAPKCF_c *method_00;
  long lVar10;
  GGLDGAAPKCF_o *extraout_x0;
  Roster_o *__this_02;
  GGLDGAAPKCF_o *extraout_x0_00;
  MethodInfo *pMVar11;
  MethodInfo *in_x6;
  System_Int32_array *pSVar12;
  System_Object_array *pSVar13;
  UnityEngine_Object_o *x;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 auStack_108 [72];
  SimpleJSON_JSONNode_Enumerator_Fields local_c0;
  int32_t local_6c;
  bool local_68 [4];
  bool local_64 [4];
  GGLDGAAPKCF_o *__this_01;
  
  if ((DAT_04568fed & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_764);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_765);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_766);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_767);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_768);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_769);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_770);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_771);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_772);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_773);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_774);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_775);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_776);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_777);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JSONNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JSONNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JSONNode>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568fed = 1;
  }
  local_6c = 0;
  local_c0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_c0.m_Object.fields._getEnumeratorRetType = 0;
  local_c0.m_Object.fields._36_4_ = 0;
  local_c0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c0.m_Array.fields._index = 0;
  local_c0.m_Array.fields._version = 0;
  local_c0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0.type = 0;
  local_c0._4_4_ = 0;
  local_c0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c0.m_Object.fields._version = 0;
  local_c0.m_Object.fields._index = 0;
  local_64[0] = false;
  local_68[0] = false;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JSONNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<JSONNode>__ctor__);
  if (FFJLPMFOGOI == (SimpleJSON_JSONNode_o *)0x0) {
LAB_036d44d8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(FFJLPMFOGOI->klass->vtable)._30_unknown.methodPtr)
            (auStack_108,FFJLPMFOGOI,(FFJLPMFOGOI->klass->vtable)._30_unknown.method);
  pMVar11 = (MethodInfo *)0x48;
  memcpy(&local_c0,auStack_108,0x48);
  bVar2 = SimpleJSON_JSONNode_Enumerator__MoveNext
                    ((SimpleJSON_JSONNode_Enumerator_o *)&local_c0,(MethodInfo *)0x0);
  __this_01 = (GGLDGAAPKCF_o *)(ulong)bVar2;
  if (bVar2) {
    do {
      aKeyValue = SimpleJSON_JSONNode_Enumerator__get_Current
                            ((SimpleJSON_JSONNode_Enumerator_o *)&local_c0,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      item = (Il2CppObject *)SimpleJSON_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_764,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_765,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (item == (Il2CppObject *)0x0) goto LAB_036d44d8;
      pSVar7 = (SimpleJSON_JSONNode_o *)
               (*item->klass->vtable[7].methodPtr)(item,pSVar6,item->klass->vtable[7].method);
      local_6c = OGMFFOMHGIA__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
      if (IKBGIDDBNMP) {
LAB_036d3f88:
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_768,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_769,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = (SimpleJSON_JSONNode_o *)
                 (*item->klass->vtable[7].methodPtr)(item,pSVar6,item->klass->vtable[7].method);
        a = (MethodInfo *)OGMFFOMHGIA__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        pMVar11 = a;
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          pMVar11 = (MethodInfo *)thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
        }
        pSVar6 = GGLDGAAPKCF__CCADEBAHIBF(pMVar11);
        bVar2 = System_String__op_Equality((System_String_o *)a,pSVar6,(MethodInfo *)0x0);
        if (bVar2) {
LAB_036d4058:
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_770,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_771,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_772,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_773,
                     (MethodInfo *)0x0);
          pMVar11 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar9 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat
                             (pSVar6,(System_String_o *)a,(System_String_o *)pMVar11,pSVar9,
                              (MethodInfo *)0x0);
          goto LAB_036d4138;
        }
        method_00 = GGLDGAAPKCF_TypeInfo;
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
        }
        pSVar6 = GGLDGAAPKCF__NCKNDNLKHHJ((MethodInfo *)method_00);
        bVar2 = System_String__op_Equality((System_String_o *)a,pSVar6,(MethodInfo *)0x0);
        if (bVar2) goto LAB_036d4058;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_774,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_775,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = (SimpleJSON_JSONNode_o *)
                 (*item->klass->vtable[7].methodPtr)(item,pSVar6,item->klass->vtable[7].method);
        pSVar6 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_776,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_777,
                   (MethodInfo *)0x0);
        pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar7 = (SimpleJSON_JSONNode_o *)
                 (*item->klass->vtable[7].methodPtr)(item,pSVar9,item->klass->vtable[7].method);
        uVar3 = OGMFFOMHGIA__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
        lVar10 = Method_System_Collections_Generic_List<int>_Add__;
        pMVar11 = (MethodInfo *)(ulong)uVar3;
        if (!IKBGIDDBNMP) {
          pSVar8 = (__this->fields).KNKAAIDGBJL;
          if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d44d8;
          pSVar12 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pSVar12 == (System_Int32_array *)0x0) goto LAB_036d44d8;
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pSVar12->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pSVar12->m_Items[(int)uVar1] = local_6c;
          }
          else {
            System_Collections_Generic_List<int>__AddWithResize
                      (pSVar8,local_6c,
                       *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* try { // try from 036d42f0 to 037d448f has its CatchHandler @ 036d42f0
                       catch() { ... } // from try @ 036d42f0 with catch @ 036d42f0
                       catch() { ... } // from try @ 036d4620 with catch @ 036d42f0
                       catch() { ... } // from try @ 036d46d4 with catch @ 036d42f0
                       catch() { ... } // from try @ 036d46dc with catch @ 036d42f0
                       catch() { ... } // from try @ 036d47b8 with catch @ 036d42f0 */
        GGLDGAAPKCF__MBLOPJIFOMC(__this,(System_String_o *)a,uVar3,pSVar6,local_64,local_68,in_x6);
        lVar10 = Method_System_Collections_Generic_List<JSONNode>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036d44d8;
        pSVar13 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar13 == (System_Object_array *)0x0) goto LAB_036d44d8;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar13->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar13->m_Items[(int)uVar3] = item;
          thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar3,item);
        }
        else {
          pMVar11 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,item,(MethodInfo_26E4DAC *)pMVar11);
        }
      }
      else {
        pSVar8 = (__this->fields).KNKAAIDGBJL;
        if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d44d8;
        bVar2 = System_Collections_Generic_List<int>__Contains
                          (pSVar8,local_6c,Method_System_Collections_Generic_List<int>_Contains__);
        if (!bVar2) goto LAB_036d3f88;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_766,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_767,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar9 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
        pMVar11 = (MethodInfo *)0x0;
        pSVar6 = System_String__Concat(pSVar6,pSVar9,(MethodInfo *)0x0);
LAB_036d4138:
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      }
      bVar2 = SimpleJSON_JSONNode_Enumerator__MoveNext
                        ((SimpleJSON_JSONNode_Enumerator_o *)&local_c0,(MethodInfo *)0x0);
    } while (bVar2);
    __this_01 = (GGLDGAAPKCF_o *)0x0;
    if (local_64[0] != false) {
      lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar10 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      pMVar11 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_01 = (GGLDGAAPKCF_o *)(ulong)bVar2;
      if (bVar2) {
        lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) ==
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_036d44d8;
        Nekki_SF2_GUI_Shop_ShopScene__Refresh
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                   (MethodInfo *)0x0);
        __this_01 = extraout_x0;
      }
    }
  }
  if (local_68[0] != false) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036d4490 to 037d44b7 has its CatchHandler @ 036d4718 */
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_02 == (Roster_o *)0x0) goto LAB_036d44d8;
    pMVar11 = (MethodInfo *)0x0;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
    __this_01 = extraout_x0_00;
  }
  GGLDGAAPKCF__LFNNJOLBMHN
            (__this_01,(System_Collections_Generic_List_JSONNode__o *)__this_00,pMVar11);
  return;
}


// ===== internal static bool EJFCFEHMNKE(HOOAAGABMBL IHGFKLOLPOK, int IDPMJOKDHNP, out string EHNFGMGKCHO, out bool MKAFADNLNIE)  [RVA 0x35D2B6C]
// GGLDGAAPKCF$$EJFCFEHMNKE @ RVA 0x35D2B6C

bool GGLDGAAPKCF__EJFCFEHMNKE
               (HOOAAGABMBL_o *IHGFKLOLPOK,int32_t IDPMJOKDHNP,System_String_o **EHNFGMGKCHO,
               bool *MKAFADNLNIE,MethodInfo *method)

{
  bool bVar1;
  int32_t EBDDELGICGB;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *pIVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  HOOAAGABMBL_o *HFJDDNBBENI;
  RaidConfig_o *__this_00;
  RaidConfig_HJLEKMDIDPO_o *PCACCFOOGMK;
  RaidPaymentService_o *__this_01;
  System_String_array *values;
  Roster_o *pAVar6;
  System_String_o *a;
  
  if ((DAT_04568fee & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_2);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_778);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_779);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_780);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_781);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_782);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_783);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_784);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_785);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_786);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_787);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_788);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568fee = 1;
  }
  *EHNFGMGKCHO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(EHNFGMGKCHO);
  *MKAFADNLNIE = false;
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar6 == (Roster_o *)0x0) ||
     (__this = (pAVar6->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) goto LAB_036d3280;
  pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA(__this,IHGFKLOLPOK,(MethodInfo *)0x0);
  if (pIVar2 != (IGFGDDANEPE_o *)0x0) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_778,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_2,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) goto LAB_036d3280;
    pSVar5 = System_String__Concat
                       (pSVar5,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
LAB_036d3258:
    return pIVar2 == (IGFGDDANEPE_o *)0x0;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ENHJPOHLMCL = NLPJLHOEAOE__FIFBDNADAAL(IHGFKLOLPOK,IDPMJOKDHNP,0,false,true,(MethodInfo *)0x0);
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0) {
    bVar1 = AMIINPEKKFB__BJIHLOHNOGH(IHGFKLOLPOK,(MethodInfo *)0x0);
    if (bVar1) {
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
      pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar6 == (Roster_o *)0x0) goto LAB_036d3280;
      EBDDELGICGB = Roster__EOEAKGGDBFH(pAVar6,(MethodInfo *)0x0);
      if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) goto LAB_036d3280;
      HFJDDNBBENI = HOOAAGABMBL__HCMOFJHAKJH(IHGFKLOLPOK,EBDDELGICGB * 100,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this_00 == (RaidConfig_o *)0x0) goto LAB_036d3280;
      PCACCFOOGMK = RaidConfig__FPPDGOEOJCH
                              (__this_00,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,
                               (MethodInfo *)0x0);
      if (PCACCFOOGMK == (RaidConfig_HJLEKMDIDPO_o *)0x0) {
        AMIINPEKKFB__HALEOPCMJGM(ENHJPOHLMCL,(MethodInfo *)0x0);
      }
      else {
        a = (PCACCFOOGMK->fields).BGHFADDGPAD;
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_781,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_782,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,pSVar5,(MethodInfo *)0x0);
        if (bVar1) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
          if ((HFJDDNBBENI == (HOOAAGABMBL_o *)0x0) || (__this_01 == (RaidPaymentService_o *)0x0))
          goto LAB_036d3280;
          RaidPaymentService__OLCPANFJOAA
                    (__this_01,ENHJPOHLMCL,PCACCFOOGMK,HFJDDNBBENI,
                     (HFJDDNBBENI->fields)._HCHGENFJLHA_k__BackingField,EBDDELGICGB,
                     (MethodInfo *)0x0);
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_779,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_780,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) goto LAB_036d3280;
      pSVar5 = System_String__Concat
                         (pSVar5,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,
                          (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 036d303c to 037d32eb has its CatchHandler @ 036d303c
                       catch() { ... } // from try @ 036d303c with catch @ 036d303c
                       catch() { ... } // from try @ 036d342c with catch @ 036d303c
                       catch() { ... } // from try @ 036d34c8 with catch @ 036d303c
                       catch() { ... } // from try @ 036d34d0 with catch @ 036d303c
                       catch() { ... } // from try @ 036d358c with catch @ 036d303c */
    }
    *MKAFADNLNIE = true;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_783,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_784,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar5;
      thunk_FUN_01c20e04();
      if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) goto LAB_036d3280;
      pSVar5 = OFFIONDOEPM__CNLBHLNMCCI
                         ((IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_785,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_786,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar5;
          thunk_FUN_01c20e04();
          if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar5;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_787,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_788,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar5;
              thunk_FUN_01c20e04();
              pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
              *EHNFGMGKCHO = pSVar5;
              thunk_FUN_01c20e04(EHNFGMGKCHO,pSVar5);
              goto LAB_036d3258;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_036d3280:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static bool HECPMGDKGFO(HOOAAGABMBL IHGFKLOLPOK, int IDPMJOKDHNP, out string EHNFGMGKCHO, out IGNEHHMICKB EFGJLFEICDO)  [RVA 0x35D2590]
// GGLDGAAPKCF$$HECPMGDKGFO @ RVA 0x35D2590

bool GGLDGAAPKCF__HECPMGDKGFO
               (HOOAAGABMBL_o *IHGFKLOLPOK,int32_t IDPMJOKDHNP,System_String_o **EHNFGMGKCHO,
               IGNEHHMICKB_o **EFGJLFEICDO,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  VirtualInvokeData *pVVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  System_String_o *str2;
  System_String_array *values;
  IGNEHHMICKB_o *pIVar7;
  KCJCIJHMEJF_c *pKVar8;
  ulong uVar9;
  int32_t *piVar10;
  KCJCIJHMEJF_o *pKVar11;
  int32_t local_44;
  
  local_44 = IDPMJOKDHNP;
  if ((DAT_04568fef & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_789);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_790);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_791);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_792);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_793);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_794);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_795);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_796);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_797);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_798);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_799);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_800);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568fef = 1;
  }
  *EHNFGMGKCHO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(EHNFGMGKCHO);
  *EFGJLFEICDO = (IGNEHHMICKB_o *)0x0;
  thunk_FUN_01c20e04(EFGJLFEICDO,0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar11 == (KCJCIJHMEJF_o *)0x0) {
LAB_036d2b64:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar8 = pKVar11->klass;
  uVar1._0_1_ = (pKVar8->_2).rank;
  uVar1._1_1_ = (pKVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar3 = pKVar8->vtable + (*piVar10 + 3);
        goto LAB_036d2780;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar11,KCJCIJHMEJF_TypeInfo,3);
LAB_036d2780:
  bVar2 = (*pVVar3->methodPtr)(pKVar11,IHGFKLOLPOK,pVVar3->method);
  if ((bVar2 & 1) != 0) {
    if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) goto LAB_036d2b64;
    pIVar7 = (IHGFKLOLPOK->fields)._NMBNLNIMMPI_k__BackingField;
    if (pIVar7 == (IGNEHHMICKB_o *)0x0) {
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_793,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_794,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto LAB_036d2b64;
      if ((int)values->max_length == 0) {
LAB_036d2b68:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items,pSVar6);
      pSVar6 = OFFIONDOEPM__CNLBHLNMCCI
                         ((IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto LAB_036d2b68;
      values->m_Items[1] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_795,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_796,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto LAB_036d2b68;
      values->m_Items[2] = pSVar6;
      thunk_FUN_01c20e04();
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto LAB_036d2b68;
      values->m_Items[3] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_797,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_798,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) goto LAB_036d2b68;
      values->m_Items[4] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 4,pSVar6);
      pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_036d2b68;
      values->m_Items[5] = pSVar6;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_799,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_800,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((uint)values->max_length < 7) goto LAB_036d2b68;
      values->m_Items[6] = pSVar6;
      thunk_FUN_01c20e04();
      pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
    }
    else {
      *EFGJLFEICDO = pIVar7;
      thunk_FUN_01c20e04(EFGJLFEICDO);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_789,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_790,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_791,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_792,(MethodInfo *)0x0
                );
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat(pSVar6,str1,str2,(MethodInfo *)0x0);
    }
    *EHNFGMGKCHO = pSVar6;
    thunk_FUN_01c20e04(EHNFGMGKCHO,pSVar6);
  }
  return (bool)(bVar2 & 1);
}


// ===== internal static bool ENICPLGGIED(HOOAAGABMBL IHGFKLOLPOK, int IDPMJOKDHNP, string NOPKDGGEPPP, out string EHNFGMGKCHO)  [RVA 0x35D1F34]
// GGLDGAAPKCF$$ENICPLGGIED @ RVA 0x35D1F34

bool GGLDGAAPKCF__ENICPLGGIED
               (HOOAAGABMBL_o *IHGFKLOLPOK,int32_t IDPMJOKDHNP,System_String_o *NOPKDGGEPPP,
               System_String_o **EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  GGLDGAAPKCF_c *method_00;
  PIADCKMDDAK_o *__this;
  RaidConfig_o *pJVar6;
  PlayerData_o *pEVar7;
  System_String_array *values;
  System_String_o *a;
  int32_t local_44;
  
  local_44 = IDPMJOKDHNP;
  if ((DAT_04568ff0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_3);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_801);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_802);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_803);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_804);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_805);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_806);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_807);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_808);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_809);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_810);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_811);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04568ff0 = 1;
  }
  *EHNFGMGKCHO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(EHNFGMGKCHO);
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    a = (IHGFKLOLPOK->fields)._GMPAEDFIIHF_k__BackingField;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_801,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_802,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Inequality(a,pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
    method_00 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar5 = GGLDGAAPKCF__HJLMMLMBDDC((MethodInfo *)method_00);
    bVar1 = System_String__op_Equality(NOPKDGGEPPP,pSVar5,(MethodInfo *)0x0);
    __this = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
    PIADCKMDDAK___ctor(__this,(MethodInfo *)0x0);
    if (__this != (PIADCKMDDAK_o *)0x0) {
      PIADCKMDDAK__HCOCAAIGNNL
                (__this,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      (__this->fields).GDKPGIBMFPA = IDPMJOKDHNP;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar6 != (RaidConfig_o *)0x0) {
        bVar2 = RaidConfig__EHALIINDAED(pJVar6,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
        if (bVar2) {
          if (!bVar1) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 == (PlayerData_o *)0x0) goto LAB_036d2588;
            PlayerData__KFDOOFMOAEH(pEVar7,__this,true,(MethodInfo *)0x0);
          }
        }
        else {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (pJVar6 == (RaidConfig_o *)0x0) goto LAB_036d2588;
          bVar2 = RaidConfig__NNBJOLPDGOM(pJVar6,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
          if (!bVar2) {
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_803,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_3,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            pSVar5 = System_String__Concat(pSVar5,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            return false;
          }
          if (!bVar1) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 == (PlayerData_o *)0x0) goto LAB_036d2588;
            PlayerData__KILLKMHKIMI(pEVar7,__this,true,(MethodInfo *)0x0);
          }
        }
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_804,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_805,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar5;
            thunk_FUN_01c20e04(values->m_Items,pSVar5);
            pSVar5 = OFFIONDOEPM__CNLBHLNMCCI
                               ((IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0
                               );
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = pSVar5;
              thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_806,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_807,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = pSVar5;
                thunk_FUN_01c20e04();
                if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar5 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = pSVar5;
                  thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_808,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_809,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar5;
                    thunk_FUN_01c20e04(values->m_Items + 4,pSVar5);
                    pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    if (5 < (uint)values->max_length) {
                      values->m_Items[5] = pSVar5;
                      thunk_FUN_01c20e04(values->m_Items + 5,pSVar5);
                      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar3,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_810,
                                 (MethodInfo *)0x0);
                      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar4,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_811,
                                 (MethodInfo *)0x0);
                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                      if (6 < (uint)values->max_length) {
                        values->m_Items[6] = pSVar5;
                        thunk_FUN_01c20e04();
                        pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                        *EHNFGMGKCHO = pSVar5;
                        thunk_FUN_01c20e04(EHNFGMGKCHO,pSVar5);
                        return true;
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
  }
LAB_036d2588:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OMAFJGBKLNJ(int IDPMJOKDHNP, bool EHPGLMNMJKL = True)  [RVA 0x35D553C]
// GGLDGAAPKCF$$OMAFJGBKLNJ @ RVA 0x35D553C

void GGLDGAAPKCF__OMAFJGBKLNJ(int32_t IDPMJOKDHNP,bool EHPGLMNMJKL,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Roster_o *__this;
  System_String_o *pSVar5;
  System_String_o *str2;
  MethodInfo *in_x5;
  int32_t local_34;
  
                    /* try { // try from 036d5574 to 037d5703 has its CatchHandler @ 036d5574
                       catch() { ... } // from try @ 036d5574 with catch @ 036d5574
                       catch() { ... } // from try @ 036d58f4 with catch @ 036d5574
                       catch() { ... } // from try @ 036d595c with catch @ 036d5574
                       catch() { ... } // from try @ 036d59e8 with catch @ 036d5574
                       catch() { ... } // from try @ 036d5a28 with catch @ 036d5574 */
  local_34 = IDPMJOKDHNP;
  if ((DAT_04568ff1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_812);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_813);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_814);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_815);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_816);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_817);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_818);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_819);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_820);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_821);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568ff1 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_812,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_813,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 036d5704 to 037d570b has its CatchHandler @ 036d59bc */
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (Roster_o *)0x0) {
    Roster__NDMIDIIDANL(__this,(long)local_34,0xd,false,(MethodInfo *)0x0);
                    /* try { // try from 036d572c to 037d5733 has its CatchHandler @ 036d59a0 */
    if ((0 < local_34) && (EHPGLMNMJKL)) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d5748 to 037d574f has its CatchHandler @ 036d596c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_814,(MethodInfo *)0x0
                );
                    /* try { // try from 036d5760 to 037d5767 has its CatchHandler @ 036d5964 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d576c to 037d5773 has its CatchHandler @ 036d5970 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_815,(MethodInfo *)0x0
                );
                    /* try { // try from 036d5784 to 037d578b has its CatchHandler @ 036d5960 */
                    /* try { // try from 036d578c to 037d579f has its CatchHandler @ 036d5968 */
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_816,(MethodInfo *)0x0
                );
                    /* try { // try from 036d57c4 to 037d57c7 has its CatchHandler @ 036d59a4 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d57c8 to 037d57ef has its CatchHandler @ 036d59c0 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_817,(MethodInfo *)0x0
                );
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 036d57f4 to 037d57fb has its CatchHandler @ 036d59ac */
      pSVar5 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    /* try { // try from 036d5804 to 037d580b has its CatchHandler @ 036d59b0 */
                    /* try { // try from 036d5810 to 037d5817 has its CatchHandler @ 036d59a8 */
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d5820 to 037d5827 has its CatchHandler @ 036d59b4 */
                    /* try { // try from 036d5828 to 037d5853 has its CatchHandler @ 036d59c8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_818,(MethodInfo *)0x0
                );
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_819,(MethodInfo *)0x0
                );
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 036d5868 to 037d586f has its CatchHandler @ 036d5988 */
      pSVar4 = System_String__Concat(pSVar4,pSVar5,str2,(MethodInfo *)0x0);
                    /* try { // try from 036d5874 to 037d587b has its CatchHandler @ 036d5974 */
                    /* try { // try from 036d5884 to 037d588b has its CatchHandler @ 036d598c */
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d5890 to 037d5897 has its CatchHandler @ 036d5978 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_820,(MethodInfo *)0x0
                );
                    /* try { // try from 036d58a0 to 037d58a7 has its CatchHandler @ 036d5994 */
                    /* try { // try from 036d58a8 to 037d58d3 has its CatchHandler @ 036d59c4 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_821,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 036d58d4 to 037d58e3 has its CatchHandler @ 036d597c */
                    /* try { // try from 036d58e8 to 037d58f3 has its CatchHandler @ 036d5990 */
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
      }
                    /* try { // try from 036d58f4 to 037d593f has its CatchHandler @ 036d5574 */
      GGLDGAAPKCF__JNGBIOPBPOH(pSVar3,pSVar4,pSVar5,false,(IGNEHHMICKB_o *)0x0,in_x5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFNNJOLBMHN(List<JSONNode> NHIEAGIJAOF)  [RVA 0x35D5110]
// GGLDGAAPKCF$$LFNNJOLBMHN @ RVA 0x35D5110

void GGLDGAAPKCF__LFNNJOLBMHN
               (GGLDGAAPKCF_o *__this,System_Collections_Generic_List_JSONNode__o *NHIEAGIJAOF,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  GGLDGAAPKCF_c *method_00;
  System_String_o *b;
  SFRequestSender_o *pKVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  int IDPMJOKDHNP;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568ff2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_822);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_823);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_824);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_825);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JSONNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JSONNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JSONNode>_get_Current__);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    __this = (GGLDGAAPKCF_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<JSONNode>_GetEnumerator__);
    DAT_04568ff2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (NHIEAGIJAOF != (System_Collections_Generic_List_JSONNode__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)NHIEAGIJAOF,
               Method_System_Collections_Generic_List<JSONNode>_GetEnumerator__);
    IDPMJOKDHNP = 0;
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<JSONNode>_MoveNext__
                             ), pIVar1 = local_80.fields._current, bVar2) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_822,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_823,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(pSVar6,pSVar6);
      }
      pSVar7 = (SimpleJSON_JSONNode_o *)
               (*pIVar1->klass->vtable[7].methodPtr)(pIVar1,pSVar6,pIVar1->klass->vtable[7].method);
      pSVar6 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        method_00 = GGLDGAAPKCF_TypeInfo;
        if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
        }
        b = GGLDGAAPKCF__NGBJPMHMIIJ((MethodInfo *)method_00);
        bVar2 = System_String__op_Equality(pSVar6,b,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_824,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_825,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar7 = (SimpleJSON_JSONNode_o *)
                   (*pIVar1->klass->vtable[7].methodPtr)
                             (pIVar1,pSVar6,pIVar1->klass->vtable[7].method);
          iVar3 = OGMFFOMHGIA__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
          IDPMJOKDHNP = iVar3 + IDPMJOKDHNP;
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<JSONNode>_Dispose__);
    if (0 < IDPMJOKDHNP) {
      pKVar8 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      __this = (GGLDGAAPKCF_o *)0x0;
      if (pKVar8 == (SFRequestSender_o *)0x0) goto LAB_036d53cc;
      method_01 = extraout_x1;
      if ((pKVar8->fields).super._MGGBEPKMPCF_k__BackingField != false) {
        pKVar8 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        __this = (GGLDGAAPKCF_o *)0x0;
        if (pKVar8 == (SFRequestSender_o *)0x0) goto LAB_036d53cc;
        SFRequestSender__LIKCPEBFCEC(pKVar8,(MethodInfo *)0x0);
        method_01 = extraout_x1_00;
      }
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_01 = extraout_x1_01;
      }
      GGLDGAAPKCF__OJPAHKOPAAI(IDPMJOKDHNP,method_01);
    }
    return;
  }
LAB_036d53cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static string NCKNDNLKHHJ()  [RVA 0x35D458C]
// GGLDGAAPKCF$$NCKNDNLKHHJ @ RVA 0x35D458C

System_String_o * GGLDGAAPKCF__NCKNDNLKHHJ(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036d4594 to 037d459b has its CatchHandler @ 036d4700 */
                    /* try { // try from 036d45ac to 037d45bb has its CatchHandler @ 036d46e8 */
  if ((DAT_04568ff3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_826);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_827);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ff3 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d45fc to 037d461f has its CatchHandler @ 036d46ec */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_826,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_827,(MethodInfo *)0x0);
                    /* try { // try from 036d4620 to 037d46b3 has its CatchHandler @ 036d42f0 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private JSONNode APEHKFPAPCF(JSONNode FFJLPMFOGOI, string ABHMAEMOCCM)  [RVA 0x35D59D4]
// GGLDGAAPKCF$$APEHKFPAPCF @ RVA 0x35D59D4

SimpleJSON_JSONNode_o *
GGLDGAAPKCF__APEHKFPAPCF
          (GGLDGAAPKCF_o *__this,SimpleJSON_JSONNode_o *FFJLPMFOGOI,System_String_o *ABHMAEMOCCM,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  SimpleJSON_JSONNode_o *pSVar8;
  System_String_o *str2;
  System_String_o *str3;
  System_Collections_Generic_List_int__o *pSVar9;
  System_Int32_array *pSVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 auStack_f8 [72];
  SimpleJSON_JSONNode_Enumerator_Fields local_b0;
  int32_t local_64;
  
                    /* try { // try from 036d59e4 to 037d59e7 has its CatchHandler @ 036d5a10 */
                    /* try { // try from 036d59e8 to 037d5a1f has its CatchHandler @ 036d5574 */
  if ((DAT_04568ff4 & 1) == 0) {
                    /* catch() { ... } // from try @ 036d59e4 with catch @ 036d5a10 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_828);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_829);
                    /* try { // try from 036d5a20 to 037d5a27 has its CatchHandler @ 036d5a3c */
                    /* try { // try from 036d5a28 to 037d5a33 has its CatchHandler @ 036d5574 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_830);
                    /* try { // try from 036d5a34 to 037d5a3b has its CatchHandler @ 036d5a3c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_831);
                    /* catch() { ... } // from try @ 036d5a20 with catch @ 036d5a3c
                       catch() { ... } // from try @ 036d5a34 with catch @ 036d5a3c */
                    /* try { // try from 036d5a40 to 037d5c1f has its CatchHandler @ 036d5a40
                       catch() { ... } // from try @ 036d5a40 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5d60 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5d9c with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5f24 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5f60 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d6064 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d60c4 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d610c with catch @ 036d5a40
                       catch() { ... } // from try @ 036d6128 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d6168 with catch @ 036d5a40 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_832);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_833);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_834);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_835);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    DAT_04568ff4 = 1;
  }
  local_64 = 0;
  local_b0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_b0.m_Object.fields._getEnumeratorRetType = 0;
  local_b0.m_Object.fields._36_4_ = 0;
  local_b0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.m_Array.fields._index = 0;
  local_b0.m_Array.fields._version = 0;
  local_b0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.type = 0;
  local_b0._4_4_ = 0;
  local_b0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0.m_Object.fields._version = 0;
  local_b0.m_Object.fields._index = 0;
  if (FFJLPMFOGOI == (SimpleJSON_JSONNode_o *)0x0) {
LAB_036d5e30:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036d5e30 to 037d5e37 has its CatchHandler @ 036d5f44 */
    FUN_01bab8c8();
  }
  (*(FFJLPMFOGOI->klass->vtable)._30_unknown.methodPtr)
            (auStack_f8,FFJLPMFOGOI,(FFJLPMFOGOI->klass->vtable)._30_unknown.method);
  memcpy(&local_b0,auStack_f8,0x48);
  bVar3 = SimpleJSON_JSONNode_Enumerator__MoveNext
                    ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
  if (bVar3) {
    do {
      aKeyValue = SimpleJSON_JSONNode_Enumerator__get_Current
                            ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_828,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_829,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (pSVar4 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_036d5e30;
      pSVar8 = (SimpleJSON_JSONNode_o *)
               (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,pSVar7,(pSVar4->klass->vtable)._7_get_Item.method);
      local_64 = OGMFFOMHGIA__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_830,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_831,(MethodInfo *)0x0
                );
                    /* try { // try from 036d5c20 to 037d5c27 has its CatchHandler @ 036d610c */
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 036d5c40 to 037d5c47 has its CatchHandler @ 036d609c */
      pSVar8 = (SimpleJSON_JSONNode_o *)
               (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,pSVar7,(pSVar4->klass->vtable)._7_get_Item.method);
      pSVar7 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
      pSVar9 = (__this->fields).KNKAAIDGBJL;
      if (pSVar9 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d5e30;
                    /* try { // try from 036d5c5c to 037d5c63 has its CatchHandler @ 036d5d80 */
      bVar3 = System_Collections_Generic_List<int>__Contains
                        (pSVar9,local_64,Method_System_Collections_Generic_List<int>_Contains__);
      if (bVar3) {
                    /* try { // try from 036d5c78 to 037d5c7b has its CatchHandler @ 036d5d68 */
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_832,
                   (MethodInfo *)0x0);
                    /* try { // try from 036d5c98 to 037d5c9b has its CatchHandler @ 036d5d7c */
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d5cac to 037d5caf has its CatchHandler @ 036d5d64 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_833,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_834,
                   (MethodInfo *)0x0);
                    /* try { // try from 036d5cfc to 037d5d17 has its CatchHandler @ 036d5d6c */
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_835,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 036d5d28 to 037d5d2f has its CatchHandler @ 036d6080 */
        str3 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    /* try { // try from 036d5d44 to 037d5d47 has its CatchHandler @ 036d5d74 */
                    /* try { // try from 036d5d4c to 037d5d4f has its CatchHandler @ 036d5d70 */
        pSVar7 = System_String__Concat(pSVar7,ABHMAEMOCCM,str2,str3,(MethodInfo *)0x0);
                    /* try { // try from 036d5d54 to 037d5d5f has its CatchHandler @ 036d5d78 */
                    /* try { // try from 036d5d60 to 037d5d97 has its CatchHandler @ 036d5a40 */
                    /* catch() { ... } // from try @ 036d5cac with catch @ 036d5d64 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036d5c78 with catch @ 036d5d68 */
                    /* catch() { ... } // from try @ 036d5cfc with catch @ 036d5d6c */
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
                    /* catch() { ... } // from try @ 036d5d4c with catch @ 036d5d70 */
                    /* catch() { ... } // from try @ 036d5d44 with catch @ 036d5d74 */
                    /* catch() { ... } // from try @ 036d5d54 with catch @ 036d5d78 */
        UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d5c98 with catch @ 036d5d7c */
      }
      else {
                    /* catch() { ... } // from try @ 036d5c5c with catch @ 036d5d80 */
        bVar3 = System_String__op_Equality(pSVar7,ABHMAEMOCCM,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (bVar3) {
          pSVar9 = (__this->fields).KNKAAIDGBJL;
          if (pSVar9 != (System_Collections_Generic_List_int__o *)0x0) {
            pSVar10 = (pSVar9->fields)._items;
            (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
            if (pSVar10 != (System_Int32_array *)0x0) {
              uVar1 = (pSVar9->fields)._size;
              if ((uint)pSVar10->max_length <= uVar1) {
                System_Collections_Generic_List<int>__AddWithResize
                          (pSVar9,local_64,
                           *(MethodInfo_26C766C **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return pSVar4;
              }
              (pSVar9->fields)._size = uVar1 + 1;
                    /* try { // try from 036d5df4 to 037d5dfb has its CatchHandler @ 036d60a8 */
              pSVar10->m_Items[(int)uVar1] = local_64;
              return pSVar4;
            }
          }
          goto LAB_036d5e30;
        }
      }
                    /* try { // try from 036d5d98 to 037d5d9b has its CatchHandler @ 036d6068 */
                    /* try { // try from 036d5d9c to 037d5df3 has its CatchHandler @ 036d5a40 */
      bVar3 = SimpleJSON_JSONNode_Enumerator__MoveNext
                        ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
    } while (bVar3);
  }
                    /* try { // try from 036d5e14 to 037d5e1b has its CatchHandler @ 036d6098 */
  return (SimpleJSON_JSONNode_o *)0x0;
}


// ===== public void FADEOBNIFGK(Action CJNHFNHJHPE)  [RVA 0x35D5E34]
// GGLDGAAPKCF$$FADEOBNIFGK @ RVA 0x35D5E34

void GGLDGAAPKCF__FADEOBNIFGK(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 036d5e4c to 037d5e4f has its CatchHandler @ 036d5f2c */
  if ((DAT_04568ff5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ff5 = 1;
  }
  ppSVar4 = &(__this->fields).JDABHAFPPOL;
                    /* try { // try from 036d5e6c to 037d5e6f has its CatchHandler @ 036d5f40 */
  a = *ppSVar4;
                    /* try { // try from 036d5e80 to 037d5e83 has its CatchHandler @ 036d5f28 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static string NGBJPMHMIIJ()  [RVA 0x35D5924]
// GGLDGAAPKCF$$NGBJPMHMIIJ @ RVA 0x35D5924

System_String_o * GGLDGAAPKCF__NGBJPMHMIIJ(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036d5940 to 037d5943 has its CatchHandler @ 036d59b8 */
                    /* try { // try from 036d5944 to 037d594b has its CatchHandler @ 036d59cc */
                    /* try { // try from 036d594c to 037d594f has its CatchHandler @ 036d599c */
                    /* try { // try from 036d5950 to 037d5953 has its CatchHandler @ 036d5998 */
  if ((DAT_04568ff6 & 1) == 0) {
                    /* try { // try from 036d5954 to 037d5957 has its CatchHandler @ 036d5984 */
                    /* try { // try from 036d5958 to 037d595b has its CatchHandler @ 036d5980 */
                    /* try { // try from 036d595c to 037d59e3 has its CatchHandler @ 036d5574 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_836);
                    /* catch() { ... } // from try @ 036d5784 with catch @ 036d5960 */
                    /* catch() { ... } // from try @ 036d5760 with catch @ 036d5964 */
                    /* catch() { ... } // from try @ 036d578c with catch @ 036d5968 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_837);
                    /* catch() { ... } // from try @ 036d5748 with catch @ 036d596c */
                    /* catch() { ... } // from try @ 036d576c with catch @ 036d5970 */
                    /* catch() { ... } // from try @ 036d5874 with catch @ 036d5974 */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 036d5890 with catch @ 036d5978 */
                    /* catch() { ... } // from try @ 036d58d4 with catch @ 036d597c */
    DAT_04568ff6 = 1;
  }
                    /* catch() { ... } // from try @ 036d5958 with catch @ 036d5980 */
                    /* catch() { ... } // from try @ 036d5954 with catch @ 036d5984 */
                    /* catch() { ... } // from try @ 036d5868 with catch @ 036d5988 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 036d5884 with catch @ 036d598c */
                    /* catch() { ... } // from try @ 036d58e8 with catch @ 036d5990 */
                    /* catch() { ... } // from try @ 036d58a0 with catch @ 036d5994 */
                    /* catch() { ... } // from try @ 036d5950 with catch @ 036d5998 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_836,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d594c with catch @ 036d599c */
                    /* catch() { ... } // from try @ 036d572c with catch @ 036d59a0 */
                    /* catch() { ... } // from try @ 036d57c4 with catch @ 036d59a4 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 036d5810 with catch @ 036d59a8 */
                    /* catch() { ... } // from try @ 036d57f4 with catch @ 036d59ac */
                    /* catch() { ... } // from try @ 036d5804 with catch @ 036d59b0 */
                    /* catch() { ... } // from try @ 036d5820 with catch @ 036d59b4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_837,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d5940 with catch @ 036d59b8 */
                    /* catch() { ... } // from try @ 036d5704 with catch @ 036d59bc */
                    /* catch() { ... } // from try @ 036d57c8 with catch @ 036d59c0 */
                    /* catch() { ... } // from try @ 036d58a8 with catch @ 036d59c4 */
                    /* catch() { ... } // from try @ 036d5828 with catch @ 036d59c8 */
                    /* catch() { ... } // from try @ 036d5944 with catch @ 036d59cc */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void JNGBIOPBPOH(string PCPECHHMLEC, string EHNFGMGKCHO, string JDECODCCMHP, bool EOECLHJKEJL, IGNEHHMICKB EFGJLFEICDO)  [RVA 0x35D3288]
// GGLDGAAPKCF$$JNGBIOPBPOH @ RVA 0x35D3288

void GGLDGAAPKCF__JNGBIOPBPOH
               (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,
               System_String_o *JDECODCCMHP,bool EOECLHJKEJL,IGNEHHMICKB_o *EFGJLFEICDO,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this;
  NBLEEDEAPHB_o *__this_00;
  System_String_o **ppSVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  System_Object_array *pSVar6;
  ADDCOJMHMHE_o AStack_180;
  undefined1 auStack_f0 [8];
  System_String_o *local_e8;
  System_Collections_Generic_List_object__o *local_e0;
  IGNEHHMICKB_o *local_d8 [4];
  System_String_o *local_b8 [11];
  
  if ((DAT_04568ff7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
                    /* try { // try from 036d32ec to 037d3313 has its CatchHandler @ 036d34f4 */
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568ff7 = 1;
  }
  memset(auStack_f0,0,0x90);
  if (EFGJLFEICDO == (IGNEHHMICKB_o *)0x0) {
                    /* try { // try from 036d342c to 037d34bb has its CatchHandler @ 036d303c */
    pNVar5 = DialogsOpener__JNDPLPKDPCP
                       (PCPECHHMLEC,EHNFGMGKCHO,JDECODCCMHP,StringLiteral_1/*""*/,
                        (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,
                        true,true,(MethodInfo *)0x0);
    if (EOECLHJKEJL) {
      if (pNVar5 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_036d3548;
      bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pNVar5->klass->_2).naturalAligment) &&
         ((pNVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
        *(float *)&pNVar5[1].fields._bottomStripe =
             *(float *)&pNVar5[1].fields._bottomStripe + 350.0;
      }
      goto LAB_036d3520;
    }
  }
  else {
                    /* try { // try from 036d3348 to 037d3373 has its CatchHandler @ 036d34f0 */
    memset(auStack_f0,0,0x90);
    local_e8 = PCPECHHMLEC;
    thunk_FUN_01c20e04(&local_e8,PCPECHHMLEC);
    __this = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this,Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
                    /* try { // try from 036d33a4 to 037d33ab has its CatchHandler @ 036d34e4 */
    NBLEEDEAPHB___ctor(__this_00,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,
                       -1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                       (MethodInfo *)0x0);
    if (__this_00 == (NBLEEDEAPHB_o *)0x0) goto LAB_036d3548;
    ppSVar4 = &(__this_00->fields).ABCHAOKFLGL;
                    /* try { // try from 036d33bc to 037d33c7 has its CatchHandler @ 036d34dc */
    *ppSVar4 = EHNFGMGKCHO;
    thunk_FUN_01c20e04(ppSVar4,EHNFGMGKCHO);
    lVar3 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036d3548;
    pSVar6 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_036d3548;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar6->max_length) {
                    /* try { // try from 036d3408 to 037d342b has its CatchHandler @ 036d34e0 */
      (__this->fields)._size = uVar2 + 1;
      pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,__this_00);
    }
    else {
                    /* try { // try from 036d34bc to 037d34bf has its CatchHandler @ 036d34ec */
                    /* try { // try from 036d34c0 to 037d34c7 has its CatchHandler @ 036d34e8 */
                    /* try { // try from 036d34c8 to 037d34cb has its CatchHandler @ 036d303c */
      System_Collections_Generic_List<object>__AddWithResize
                (__this,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
                    /* try { // try from 036d34cc to 037d34cf has its CatchHandler @ 036d34d8 */
                    /* try { // try from 036d34d0 to 037d350b has its CatchHandler @ 036d303c */
    local_e0 = __this;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d34cc with catch @ 036d34d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d33bc with catch @ 036d34dc
                        */
    thunk_FUN_01c20e04(&local_e0,__this);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d3408 with catch @ 036d34e0
                        */
    local_d8[0] = EFGJLFEICDO;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d33a4 with catch @ 036d34e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d34c0 with catch @ 036d34e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d34bc with catch @ 036d34ec
                        */
    thunk_FUN_01c20e04(local_d8,EFGJLFEICDO);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d3348 with catch @ 036d34f0
                        */
    local_b8[0] = JDECODCCMHP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d32ec with catch @ 036d34f4
                        */
    thunk_FUN_01c20e04(local_b8,JDECODCCMHP);
                    /* try { // try from 036d350c to 037d350f has its CatchHandler @ 036d351c */
    memcpy(&AStack_180,auStack_f0,0x90);
    pNVar5 = DialogsOpener__NMHCCGPELBE(&AStack_180,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 036d350c with catch @ 036d351c */
  if (pNVar5 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_036d3548:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036d3520:
                    /* try { // try from 036d3524 to 037d358b has its CatchHandler @ 036d35a0 */
  (pNVar5->fields).IsQuestDialog = true;
  return;
}


// ===== public void DOFKHDEBDBF(Action CJNHFNHJHPE)  [RVA 0x35D5ED0]
// GGLDGAAPKCF$$DOFKHDEBDBF @ RVA 0x35D5ED0

void GGLDGAAPKCF__DOFKHDEBDBF(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 036d5ed0 to 037d5eeb has its CatchHandler @ 036d5f30 */
  if ((DAT_04568ff8 & 1) == 0) {
                    /* try { // try from 036d5ef8 to 037d5eff has its CatchHandler @ 036d6094 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ff8 = 1;
  }
  ppSVar4 = &(__this->fields).ODCAOCGHMPN;
                    /* try { // try from 036d5f08 to 037d5f0b has its CatchHandler @ 036d5f38 */
  a = *ppSVar4;
                    /* try { // try from 036d5f10 to 037d5f13 has its CatchHandler @ 036d5f34 */
                    /* try { // try from 036d5f18 to 037d5f23 has its CatchHandler @ 036d5f3c */
                    /* try { // try from 036d5f24 to 037d5f5b has its CatchHandler @ 036d5a40 */
                    /* catch() { ... } // from try @ 036d5e80 with catch @ 036d5f28 */
                    /* catch() { ... } // from try @ 036d5e4c with catch @ 036d5f2c */
                    /* catch() { ... } // from try @ 036d5ed0 with catch @ 036d5f30 */
                    /* catch() { ... } // from try @ 036d5f10 with catch @ 036d5f34 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 036d5f08 with catch @ 036d5f38 */
                    /* catch() { ... } // from try @ 036d5f18 with catch @ 036d5f3c */
                    /* catch() { ... } // from try @ 036d5e6c with catch @ 036d5f40 */
                    /* catch() { ... } // from try @ 036d5e30 with catch @ 036d5f44 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 036d5f5c to 037d5f5f has its CatchHandler @ 036d6074 */
                    /* try { // try from 036d5f60 to 037d6007 has its CatchHandler @ 036d5a40 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static string HJLMMLMBDDC()  [RVA 0x35D548C]
// GGLDGAAPKCF$$HJLMMLMBDDC @ RVA 0x35D548C

System_String_o * GGLDGAAPKCF__HJLMMLMBDDC(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04568ff9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_838);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_839);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ff9 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_838,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_839,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void BLANOELGAOG(Action CJNHFNHJHPE)  [RVA 0x35D5F6C]
// GGLDGAAPKCF$$BLANOELGAOG @ RVA 0x35D5F6C

void GGLDGAAPKCF__BLANOELGAOG(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568ffa & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568ffa = 1;
  }
  ppSVar4 = &(__this->fields).JDABHAFPPOL;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static string CCADEBAHIBF()  [RVA 0x35D44DC]
// GGLDGAAPKCF$$CCADEBAHIBF @ RVA 0x35D44DC

System_String_o * GGLDGAAPKCF__CCADEBAHIBF(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036d44ec to 037d4517 has its CatchHandler @ 036d4714 */
  if ((DAT_04568ffb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_840);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_841);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568ffb = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d4550 to 037d4553 has its CatchHandler @ 036d4710 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_840,(MethodInfo *)0x0);
                    /* try { // try from 036d455c to 037d4563 has its CatchHandler @ 036d4708 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_841,(MethodInfo *)0x0);
                    /* try { // try from 036d4570 to 037d4573 has its CatchHandler @ 036d470c */
                    /* try { // try from 036d4580 to 037d4583 has its CatchHandler @ 036d46f0 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void PPBANLLIGDK(GIBOBFHPAFE MPANAFCMKEB = 0)  [RVA 0x35D6008]
// GGLDGAAPKCF$$PPBANLLIGDK @ RVA 0x35D6008

void GGLDGAAPKCF__PPBANLLIGDK(GGLDGAAPKCF_o *__this,int32_t MPANAFCMKEB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  GCPFDLNAFDF_o *pGVar5;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar6;
  Core_Network_ServerProvider_o *__this_00;
  System_Action_bool__string__object__o *KCPFFLHCCIN;
  HFHIKPAKJFG_c *pHVar7;
  GCPFDLNAFDF_c *pGVar8;
  System_Action_o *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  HFHIKPAKJFG_o *pHVar12;
  System_String_o *str0;
  
                    /* try { // try from 036d6008 to 037d6043 has its CatchHandler @ 036d617c */
  if ((DAT_04568ffc & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object>_TypeInfo);
                    /* try { // try from 036d6044 to 037d6047 has its CatchHandler @ 036d60a4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_842);
                    /* try { // try from 036d6048 to 037d604b has its CatchHandler @ 036d60a0 */
                    /* try { // try from 036d604c to 037d604f has its CatchHandler @ 036d6090 */
                    /* try { // try from 036d6050 to 037d6053 has its CatchHandler @ 036d608c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_843);
                    /* try { // try from 036d6054 to 037d605b has its CatchHandler @ 036d6088 */
                    /* try { // try from 036d605c to 037d6063 has its CatchHandler @ 036d6084 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036d6064 to 037d60bf has its CatchHandler @ 036d5a40 */
                    /* catch() { ... } // from try @ 036d5d98 with catch @ 036d6068 */
    FUN_01bab630(&Method_GGLDGAAPKCF_GDPMDJIFOMA__);
                    /* catch() { ... } // from try @ 036d5f5c with catch @ 036d6074 */
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
                    /* catch() { ... } // from try @ 036d5d28 with catch @ 036d6080 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
                    /* catch() { ... } // from try @ 036d605c with catch @ 036d6084 */
                    /* catch() { ... } // from try @ 036d6054 with catch @ 036d6088 */
    DAT_04568ffc = 1;
  }
                    /* catch() { ... } // from try @ 036d6050 with catch @ 036d608c */
  pHVar12 = (__this->fields).AKOCHMGJNMB;
                    /* catch() { ... } // from try @ 036d604c with catch @ 036d6090 */
  if (pHVar12 != (HFHIKPAKJFG_o *)0x0) {
                    /* catch() { ... } // from try @ 036d5ef8 with catch @ 036d6094 */
                    /* catch() { ... } // from try @ 036d5e14 with catch @ 036d6098 */
    pHVar7 = pHVar12->klass;
    uVar1._0_1_ = (pHVar7->_2).rank;
    uVar1._1_1_ = (pHVar7->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 036d5c40 with catch @ 036d609c */
                    /* catch() { ... } // from try @ 036d6048 with catch @ 036d60a0 */
    uVar10 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 036d6044 with catch @ 036d60a4 */
                    /* catch() { ... } // from try @ 036d5df4 with catch @ 036d60a8 */
    if (uVar10 != 0) {
      piVar11 = &((pHVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
                    /* catch() { ... } // from try @ 036d60c0 with catch @ 036d60e8 */
          pVVar3 = pHVar7->vtable + (*piVar11 + 7);
          goto LAB_036d60ec;
        }
                    /* try { // try from 036d60c0 to 037d60c3 has its CatchHandler @ 036d60e8 */
        uVar10 = uVar10 - 1;
                    /* try { // try from 036d60c4 to 037d60f7 has its CatchHandler @ 036d5a40 */
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pHVar12,HFHIKPAKJFG_TypeInfo,7);
LAB_036d60ec:
    lVar4 = (*pVVar3->methodPtr)(pHVar12,pVVar3->method);
                    /* try { // try from 036d60f8 to 037d610b has its CatchHandler @ 036d617c */
    if (lVar4 == 0) {
      pSVar9 = (__this->fields).ODCAOCGHMPN;
                    /* try { // try from 036d6168 to 037d6173 has its CatchHandler @ 036d5a40 */
      if (pSVar9 != (System_Action_o *)0x0) {
                    /* try { // try from 036d6174 to 037d617b has its CatchHandler @ 036d617c */
                    /* catch() { ... } // from try @ 036d6008 with catch @ 036d617c
                       catch() { ... } // from try @ 036d60f8 with catch @ 036d617c
                       catch() { ... } // from try @ 036d6160 with catch @ 036d617c
                       catch() { ... } // from try @ 036d6174 with catch @ 036d617c */
                    /* WARNING: Could not recover jumptable at 0x036d618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar9->fields).super.super.invoke_impl)
                  ((pSVar9->fields).super.super.method_code,(pSVar9->fields).super.super.method);
        return;
      }
      return;
    }
                    /* catch() { ... } // from try @ 036d5c20 with catch @ 036d610c
                       try { // try from 036d610c to 037d6123 has its CatchHandler @ 036d5a40 */
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar5 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar5 != (GCPFDLNAFDF_o *)0x0) {
      pGVar8 = pGVar5->klass;
      uVar2._0_1_ = (pGVar8->_2).rank;
      uVar2._1_1_ = (pGVar8->_2).minimumAlignment;
                    /* try { // try from 036d6124 to 037d6127 has its CatchHandler @ 036d6150 */
                    /* try { // try from 036d6128 to 037d615f has its CatchHandler @ 036d5a40 */
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pGVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
            pVVar3 = pGVar8->vtable + (*piVar11 + 7);
            goto LAB_036d61a0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
                    /* catch() { ... } // from try @ 036d6124 with catch @ 036d6150 */
        } while (uVar10 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar5,HFHIKPAKJFG_TypeInfo,7);
                    /* try { // try from 036d6160 to 037d6167 has its CatchHandler @ 036d617c */
LAB_036d61a0:
      lVar4 = (*pVVar3->methodPtr)(pGVar5,pVVar3->method);
      if (lVar4 != 0) {
        str0 = *(System_String_o **)(lVar4 + 0x10);
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_842,
                   (MethodInfo *)0x0);
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_843,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(str0,pSVar6,(MethodInfo *)0x0);
        __this_00 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
        KCPFFLHCCIN = (System_Action_bool__string__object__o *)
                      thunk_FUN_01bda818(System_Action<bool,_string,_object>_TypeInfo);
        System_Action<bool,_object,_object>___ctor();
        if (__this_00 != (Core_Network_ServerProvider_o *)0x0) {
          Core_Network_ServerProvider__CheckLedger
                    (__this_00,pSVar6,KCPFFLHCCIN,MPANAFCMKEB,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NBJHJDNEKMI(int IDPMJOKDHNP)  [RVA 0x35D62B0]
// GGLDGAAPKCF$$NBJHJDNEKMI @ RVA 0x35D62B0

void GGLDGAAPKCF__NBJHJDNEKMI(int32_t IDPMJOKDHNP,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Roster_o *pAVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  MethodInfo *in_x5;
  int32_t local_44;
  
  local_44 = IDPMJOKDHNP;
  if ((DAT_04568ffd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_844);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_845);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_846);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_847);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_848);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_849);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_850);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_851);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_852);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_853);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_854);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_855);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_856);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_857);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568ffd = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_844,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_845,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (Roster_o *)0x0) {
    Roster__KKDCNDLEGPP(pAVar5,(long)local_44,false,(MethodInfo *)0x0);
    if (local_44 < 1) {
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
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_846,(MethodInfo *)0x0
                );
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_847,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    }
    else {
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (Roster_o *)0x0) goto LAB_036d68c4;
      pSVar3 = (pAVar5->fields).FAAJGHKHEBI;
    }
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_848,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_849,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_850,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_851,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar6;
        thunk_FUN_01c20e04(values->m_Items,pSVar6);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar3;
          thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_852,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_853,
                     (MethodInfo *)0x0);
          pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar3;
            thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
            pSVar3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
              pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar1,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_854,
                         (MethodInfo *)0x0);
              pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar2,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_855,
                         (MethodInfo *)0x0);
              pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar3;
                thunk_FUN_01c20e04();
                pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar1,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_856,
                           (MethodInfo *)0x0);
                pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar2,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_857,
                           (MethodInfo *)0x0);
                pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
                }
                GGLDGAAPKCF__JNGBIOPBPOH(pSVar4,pSVar3,pSVar6,false,(IGNEHHMICKB_o *)0x0,in_x5);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_036d68c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MBLOPJIFOMC(string ACCIHBHMFPN, int IDPMJOKDHNP, string NOPKDGGEPPP, ref bool FPPCHGKMNFF, ref bool MKAFADNLNIE)  [RVA 0x35D463C]
// GGLDGAAPKCF$$MBLOPJIFOMC @ RVA 0x35D463C

void GGLDGAAPKCF__MBLOPJIFOMC
               (GGLDGAAPKCF_o *__this,System_String_o *ACCIHBHMFPN,int32_t IDPMJOKDHNP,
               System_String_o *NOPKDGGEPPP,bool *FPPCHGKMNFF,bool *MKAFADNLNIE,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *pSVar6;
  long lVar7;
  Il2CppObject *pIVar8;
  GGLDGAAPKCF_c *pGVar9;
  MethodInfo *method_00;
  Roster_o *__this_00;
  System_String_o *PCPECHHMLEC;
  System_String_array *values;
  System_String_o *pSVar10;
  undefined8 uVar11;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar12;
  MethodInfo *method_02;
  int32_t local_6c;
  int32_t local_68;
  int32_t local_64;
  
  pMVar12 = (MethodInfo *)FPPCHGKMNFF;
  method_02 = (MethodInfo *)MKAFADNLNIE;
  local_64 = IDPMJOKDHNP;
  if ((DAT_04568ffe & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_4);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_858);
                    /* try { // try from 036d46b4 to 037d46b7 has its CatchHandler @ 036d4720 */
                    /* try { // try from 036d46b8 to 037d46bb has its CatchHandler @ 036d4704 */
                    /* try { // try from 036d46bc to 037d46bf has its CatchHandler @ 036d4720 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_859);
                    /* try { // try from 036d46c0 to 037d46c3 has its CatchHandler @ 036d46fc */
                    /* try { // try from 036d46c4 to 037d46c7 has its CatchHandler @ 036d471c */
                    /* try { // try from 036d46c8 to 037d46cb has its CatchHandler @ 036d46f8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_860);
                    /* try { // try from 036d46cc to 037d46cf has its CatchHandler @ 036d46f4 */
                    /* try { // try from 036d46d0 to 037d46d3 has its CatchHandler @ 036d471c */
                    /* try { // try from 036d46d4 to 037d46d7 has its CatchHandler @ 036d42f0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_861);
                    /* try { // try from 036d46d8 to 037d46db has its CatchHandler @ 036d46e4 */
                    /* try { // try from 036d46dc to 037d4737 has its CatchHandler @ 036d42f0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_862);
                    /* catch() { ... } // from try @ 036d46d8 with catch @ 036d46e4 */
                    /* catch() { ... } // from try @ 036d45ac with catch @ 036d46e8 */
                    /* catch() { ... } // from try @ 036d45fc with catch @ 036d46ec */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_863);
                    /* catch() { ... } // from try @ 036d4580 with catch @ 036d46f0 */
                    /* catch() { ... } // from try @ 036d46cc with catch @ 036d46f4 */
                    /* catch() { ... } // from try @ 036d46c8 with catch @ 036d46f8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_864);
                    /* catch() { ... } // from try @ 036d46c0 with catch @ 036d46fc */
                    /* catch() { ... } // from try @ 036d4594 with catch @ 036d4700 */
                    /* catch() { ... } // from try @ 036d46b8 with catch @ 036d4704 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_865);
                    /* catch() { ... } // from try @ 036d455c with catch @ 036d4708 */
                    /* catch() { ... } // from try @ 036d4570 with catch @ 036d470c */
                    /* catch() { ... } // from try @ 036d4550 with catch @ 036d4710 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_866);
                    /* catch() { ... } // from try @ 036d44ec with catch @ 036d4714 */
                    /* catch() { ... } // from try @ 036d4490 with catch @ 036d4718 */
                    /* catch() { ... } // from try @ 036d46c4 with catch @ 036d471c
                       catch() { ... } // from try @ 036d46d0 with catch @ 036d471c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_867);
                    /* catch() { ... } // from try @ 036d46b4 with catch @ 036d4720
                       catch() { ... } // from try @ 036d46bc with catch @ 036d4720 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_868);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_869);
                    /* try { // try from 036d4738 to 037d473b has its CatchHandler @ 036d4748 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_870);
                    /* catch() { ... } // from try @ 036d4738 with catch @ 036d4748 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_871);
                    /* try { // try from 036d4750 to 037d47b7 has its CatchHandler @ 036d47cc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_872);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_873);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_874);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_875);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_876);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_877);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_878);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036d47b8 to 037d47c3 has its CatchHandler @ 036d42f0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 036d47c4 to 037d47cb has its CatchHandler @ 036d47cc */
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
                    /* catch() { ... } // from try @ 036d4750 with catch @ 036d47cc
                       catch() { ... } // from try @ 036d47c4 with catch @ 036d47cc */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04568ffe = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_858,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_4,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (pSVar6 == (System_Object_array *)0x0) {
LAB_036d510c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((ACCIHBHMFPN == (System_String_o *)0x0) ||
     (lVar7 = thunk_FUN_01bda71c(ACCIHBHMFPN,(((pSVar6->obj).klass)->_1).element_class), lVar7 != 0)
     ) {
    if ((int)pSVar6->max_length == 0) goto LAB_036d50fc;
    pSVar6->m_Items[0] = (Il2CppObject *)ACCIHBHMFPN;
    thunk_FUN_01c20e04(pSVar6->m_Items,ACCIHBHMFPN);
    local_68 = IDPMJOKDHNP;
    pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
    if ((pIVar8 != (Il2CppObject *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pIVar8,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0))
    goto LAB_036d5100;
    if ((uint)pSVar6->max_length < 2) goto LAB_036d50fc;
    pSVar6->m_Items[1] = pIVar8;
    thunk_FUN_01c20e04(pSVar6->m_Items + 1,pIVar8);
    if ((NOPKDGGEPPP != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(NOPKDGGEPPP,(((pSVar6->obj).klass)->_1).element_class),
       lVar7 == 0)) goto LAB_036d5100;
    if ((uint)pSVar6->max_length < 3) goto LAB_036d50fc;
    pSVar6->m_Items[2] = (Il2CppObject *)NOPKDGGEPPP;
    thunk_FUN_01c20e04(pSVar6->m_Items + 2,NOPKDGGEPPP);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogFormat(pSVar5,pSVar6,(MethodInfo *)0x0);
    if (local_64 == 0) {
      return;
    }
    pGVar9 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar9 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar5 = GGLDGAAPKCF__INBGLAGLLIB((MethodInfo *)pGVar9);
    bVar2 = System_String__op_Equality(ACCIHBHMFPN,pSVar5,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(ulong)bVar2;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
    }
    if (bVar2) {
      pSVar5 = GGLDGAAPKCF__NGBJPMHMIIJ(method_00);
      bVar2 = System_String__op_Inequality(NOPKDGGEPPP,pSVar5,(MethodInfo *)0x0);
      iVar1 = local_64;
      if (!bVar2) {
        return;
      }
      pGVar9 = GGLDGAAPKCF_TypeInfo;
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        pGVar9 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
      }
      pSVar5 = GGLDGAAPKCF__HJLMMLMBDDC((MethodInfo *)pGVar9);
      pMVar12 = (MethodInfo *)0x0;
      bVar2 = System_String__op_Equality(NOPKDGGEPPP,pSVar5,(MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = GGLDGAAPKCF__NADBOGJANBC((GGLDGAAPKCF_o *)(ulong)bVar2,method_01);
        bVar2 = !bVar2;
      }
      else {
        bVar2 = false;
      }
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      GGLDGAAPKCF__OMAFJGBKLNJ(iVar1,bVar2,pMVar12);
LAB_036d50a4:
      *MKAFADNLNIE = true;
      return;
    }
    pSVar5 = GGLDGAAPKCF__LEPLIODHIPC(method_00);
    bVar2 = System_String__op_Equality(ACCIHBHMFPN,pSVar5,(MethodInfo *)0x0);
    iVar1 = local_64;
    if (bVar2) {
      pMVar12 = extraout_x1;
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar12 = extraout_x1_00;
      }
      GGLDGAAPKCF__NBJHJDNEKMI(iVar1,pMVar12);
      goto LAB_036d50a4;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_859,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_860,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(ACCIHBHMFPN,pSVar5,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_861,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_862,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(ACCIHBHMFPN,pSVar5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_863,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_864,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(ACCIHBHMFPN,pSVar5,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_865,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_866,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          bVar2 = System_String__op_Equality(ACCIHBHMFPN,pSVar5,(MethodInfo *)0x0);
          if (!bVar2) {
            bVar2 = GGLDGAAPKCF__GPDMMOIHHIK
                              ((GGLDGAAPKCF_o *)(ulong)bVar2,ACCIHBHMFPN,local_64,NOPKDGGEPPP,
                               pMVar12);
            if (bVar2) {
              return;
            }
            GGLDGAAPKCF__OJNBCAPCJBH
                      ((GGLDGAAPKCF_o *)0x0,ACCIHBHMFPN,local_64,NOPKDGGEPPP,FPPCHGKMNFF,MKAFADNLNIE
                       ,method);
            return;
          }
        }
      }
    }
    pGVar9 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar9 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar5 = GGLDGAAPKCF__HJLMMLMBDDC((MethodInfo *)pGVar9);
    bVar2 = System_String__op_Inequality(NOPKDGGEPPP,pSVar5,(MethodInfo *)0x0);
    if (bVar2) {
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (Roster_o *)0x0) goto LAB_036d510c;
      Roster__GHLNGBDFENI(__this_00,ACCIHBHMFPN,local_64,(MethodInfo *)0x0);
    }
    pGVar9 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar9 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar5 = GGLDGAAPKCF__HJLMMLMBDDC((MethodInfo *)pGVar9);
    bVar2 = System_String__op_Equality(NOPKDGGEPPP,pSVar5,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = OFFIONDOEPM__HHJFGJLPHCH(ACCIHBHMFPN,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_867,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_868,(MethodInfo *)0x0
                );
      PCPECHHMLEC = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_869,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_870,(MethodInfo *)0x0
                );
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto LAB_036d510c;
      if ((int)values->max_length == 0) goto LAB_036d50fc;
      values->m_Items[0] = pSVar10;
      thunk_FUN_01c20e04(values->m_Items,pSVar10);
      if ((uint)values->max_length < 2) goto LAB_036d50fc;
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_871,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_872,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto LAB_036d50fc;
      values->m_Items[2] = pSVar5;
      thunk_FUN_01c20e04(values->m_Items + 2,pSVar5);
      pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto LAB_036d50fc;
      values->m_Items[3] = pSVar5;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_873,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_874,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) goto LAB_036d50fc;
      values->m_Items[4] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_875,(MethodInfo *)0x0
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_876,(MethodInfo *)0x0
                );
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
      }
      GGLDGAAPKCF__JNGBIOPBPOH(PCPECHHMLEC,pSVar5,pSVar10,false,(IGNEHHMICKB_o *)0x0,method_02);
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_877,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_878,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_036d510c;
    if ((ACCIHBHMFPN == (System_String_o *)0x0) ||
       (lVar7 = thunk_FUN_01bda71c(ACCIHBHMFPN,(((pSVar6->obj).klass)->_1).element_class),
       lVar7 != 0)) {
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = (Il2CppObject *)ACCIHBHMFPN;
        thunk_FUN_01c20e04(pSVar6->m_Items,ACCIHBHMFPN);
        local_6c = local_64;
        pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
        if ((pIVar8 != (Il2CppObject *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(pIVar8,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0
           )) goto LAB_036d5100;
        if (1 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[1] = pIVar8;
          thunk_FUN_01c20e04(pSVar6->m_Items + 1,pIVar8);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(pSVar5,pSVar6,(MethodInfo *)0x0);
          *FPPCHGKMNFF = true;
          return;
        }
      }
LAB_036d50fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_036d5100:
  uVar11 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(uVar11,0);
}


// ===== private void GDPMDJIFOMA(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC)  [RVA 0x35D7088]
// GGLDGAAPKCF$$GDPMDJIFOMA @ RVA 0x35D7088

/* WARNING: Type propagation algorithm not settling */

void GGLDGAAPKCF__GDPMDJIFOMA
               (GGLDGAAPKCF_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  int iVar3;
  bool bVar4;
  int32_t CJNHFNHJHPE;
  int *piVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *arg0;
  System_String_o *arg1;
  SimpleJSON_JSONNode_o *pSVar9;
  Roster_o *pAVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  GGLDGAAPKCF_c *pGVar12;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar13;
  System_Action_o *pSVar14;
  int iStack_64;
  
  if ((DAT_04568fff & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_879);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_880);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_881);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_882);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_883);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_884);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_885);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_886);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_887);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_888);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_889);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_890);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&GIBOBFHPAFE_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568fff = 1;
  }
  if (EHPEBANNEAC == (Il2CppObject *)0x0) goto LAB_036d77fc;
  if ((EHPEBANNEAC->klass->_1).element_class != (GIBOBFHPAFE_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(EHPEBANNEAC);
  }
  piVar5 = (int *)thunk_FUN_01bda96c(EHPEBANNEAC);
  iVar3 = *piVar5;
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_879,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_880,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  iStack_64 = iVar3;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(GIBOBFHPAFE_TypeInfo,&iStack_64);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar1 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_883;
  if (!LKFALEIFDIO) {
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_881;
  }
  pSVar2 = (System_RuntimeFieldHandle_Fields *)
           &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_884;
  if (!LKFALEIFDIO) {
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_882;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar2->value,(MethodInfo *)0x0);
  arg1 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  pMVar13 = (MethodInfo *)OCMMDIHLKMH;
  pSVar8 = System_String__Format
                     (pSVar8,arg0,(Il2CppObject *)arg1,(Il2CppObject *)OCMMDIHLKMH,(MethodInfo *)0x0
                     );
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_885,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_886,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  }
  if (!LKFALEIFDIO) {
LAB_036d74f8:
    pSVar14 = (__this->fields).ODCAOCGHMPN;
    if (pSVar14 != (System_Action_o *)0x0) {
      (*(code *)(pSVar14->fields).super.super.invoke_impl)
                ((pSVar14->fields).super.super.method_code,(pSVar14->fields).super.super.method);
    }
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0)
  goto LAB_036d74f8;
  pSVar9 = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
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
  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar10 == (Roster_o *)0x0) goto LAB_036d77fc;
  pSVar11 = Roster__JGHPOCNCLBL(pAVar10,(MethodInfo *)0x0);
  (__this->fields).KNKAAIDGBJL = pSVar11;
  thunk_FUN_01c20e04();
  if (iVar3 == 2) {
    pGVar12 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar12 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar8 = GGLDGAAPKCF__NCKNDNLKHHJ((MethodInfo *)pGVar12);
    pSVar9 = GGLDGAAPKCF__APEHKFPAPCF(__this,pSVar9,pSVar8,pMVar13);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar4 = SimpleJSON_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_887,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_888,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
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
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_889,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_890,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      if (pSVar9 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_036d77fc;
      pSVar9 = (SimpleJSON_JSONNode_o *)
               (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,pSVar8,(pSVar9->klass->vtable)._7_get_Item.method);
      CJNHFNHJHPE = OGMFFOMHGIA__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
      if (pAVar10 == (Roster_o *)0x0) goto LAB_036d77fc;
      Roster__GMMADOHJHEB(pAVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
  }
  else if (iVar3 == 1) {
    pGVar12 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      pGVar12 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar8 = GGLDGAAPKCF__CCADEBAHIBF((MethodInfo *)pGVar12);
    pSVar9 = GGLDGAAPKCF__APEHKFPAPCF(__this,pSVar9,pSVar8,pMVar13);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar4 = SimpleJSON_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EOOEOHKLOFJ__CEMNLGBNNDO((MethodInfo *)0x0);
    }
  }
  else if (iVar3 == 0) {
    GGLDGAAPKCF__DHJGDFEMCKN(__this,pSVar9,false,pMVar13);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 036d778c to 037d7857 has its CatchHandler @ 036d778c
                       catch() { ... } // from try @ 036d778c with catch @ 036d778c
                       catch() { ... } // from try @ 036d78cc with catch @ 036d778c
                       catch() { ... } // from try @ 036d78f4 with catch @ 036d778c
                       catch() { ... } // from try @ 036d7968 with catch @ 036d778c
                       catch() { ... } // from try @ 036d79ac with catch @ 036d778c
                       catch() { ... } // from try @ 036d79dc with catch @ 036d778c */
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar10 != (Roster_o *)0x0) {
    Roster__EEIICBEOCOE(pAVar10,(__this->fields).KNKAAIDGBJL,(MethodInfo *)0x0);
    pSVar14 = (__this->fields).ODCAOCGHMPN;
    pMVar13 = extraout_x1;
    if (pSVar14 != (System_Action_o *)0x0) {
      (*(code *)(pSVar14->fields).super.super.invoke_impl)
                ((pSVar14->fields).super.super.method_code,(pSVar14->fields).super.super.method);
      pMVar13 = extraout_x1_00;
    }
    GGLDGAAPKCF__JHBPKMKKKJI(__this,pMVar13);
    return;
  }
LAB_036d77fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool GPDMMOIHHIK(string ACCIHBHMFPN, int IDPMJOKDHNP, string NOPKDGGEPPP)  [RVA 0x35D6978]
// GGLDGAAPKCF$$GPDMMOIHHIK @ RVA 0x35D6978

bool GGLDGAAPKCF__GPDMMOIHHIK
               (GGLDGAAPKCF_o *__this,System_String_o *ACCIHBHMFPN,int32_t IDPMJOKDHNP,
               System_String_o *NOPKDGGEPPP,MethodInfo *method)

{
  bool bVar1;
  RaidConfig_o *__this_00;
  RaidConfig_EFAJBOEHPLJ_o *pJVar2;
  PIADCKMDDAK_o *__this_01;
  GGLDGAAPKCF_c *method_00;
  System_String_o *pSVar3;
  PlayerData_o *__this_02;
  System_String_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *PCPECHHMLEC;
  System_String_array *values;
  System_String_o *pSVar7;
  System_Object_array *args;
  long lVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  MethodInfo *in_x5;
  int32_t local_58;
  int32_t local_54;
  
  local_54 = IDPMJOKDHNP;
  if ((DAT_04569000 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_5);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_891);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_892);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_893);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_894);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_895);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_896);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_897);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_898);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_899);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_900);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_901);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_902);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_903);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04569000 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (RaidConfig_o *)0x0) {
    pJVar2 = RaidConfig__BHJOLIJDBLO(__this_00,ACCIHBHMFPN,(MethodInfo *)0x0);
    if (pJVar2 == (RaidConfig_EFAJBOEHPLJ_o *)0x0) {
LAB_036d7050:
      return pJVar2 != (RaidConfig_EFAJBOEHPLJ_o *)0x0;
    }
    __this_01 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
    PIADCKMDDAK___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (PIADCKMDDAK_o *)0x0) goto LAB_036d7078;
    PIADCKMDDAK__HCOCAAIGNNL(__this_01,ACCIHBHMFPN,(MethodInfo *)0x0);
    (__this_01->fields).GDKPGIBMFPA = IDPMJOKDHNP;
    method_00 = GGLDGAAPKCF_TypeInfo;
    if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (GGLDGAAPKCF_c *)thunk_FUN_01ba7564();
    }
    pSVar3 = GGLDGAAPKCF__HJLMMLMBDDC((MethodInfo *)method_00);
    bVar1 = System_String__op_Inequality(NOPKDGGEPPP,pSVar3,(MethodInfo *)0x0);
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_02 == (PlayerData_o *)0x0) goto LAB_036d7078;
      PlayerData__KILLKMHKIMI(__this_02,__this_01,true,(MethodInfo *)0x0);
    }
    pSVar3 = (pJVar2->fields).super.APBICPEOMOM;
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
    if (0 < IDPMJOKDHNP) {
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_891,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_892,(MethodInfo *)0x0
                );
      PCPECHHMLEC = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_893,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_894,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (values == (System_String_array *)0x0) goto LAB_036d7078;
      if ((int)values->max_length == 0) goto LAB_036d7074;
      values->m_Items[0] = pSVar7;
      thunk_FUN_01c20e04(values->m_Items,pSVar7);
      if ((uint)values->max_length < 2) goto LAB_036d7074;
      values->m_Items[1] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_895,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_896,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) goto LAB_036d7074;
      values->m_Items[2] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
      if ((uint)values->max_length < 4) goto LAB_036d7074;
      values->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_897,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_898,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) goto LAB_036d7074;
      values->m_Items[4] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 4,pSVar3);
      pSVar3 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto LAB_036d7074;
      values->m_Items[5] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 5,pSVar3);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_899,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_900,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((uint)values->max_length < 7) goto LAB_036d7074;
      values->m_Items[6] = pSVar3;
      thunk_FUN_01c20e04();
      pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_901,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_902,(MethodInfo *)0x0
                );
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((GGLDGAAPKCF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GGLDGAAPKCF_TypeInfo);
      }
      GGLDGAAPKCF__JNGBIOPBPOH(PCPECHHMLEC,pSVar3,pSVar4,false,(IGNEHHMICKB_o *)0x0,in_x5);
    }
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_903,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_5,(MethodInfo *)0x0);
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    if (args != (System_Object_array *)0x0) {
      if ((ACCIHBHMFPN != (System_String_o *)0x0) &&
         (lVar8 = thunk_FUN_01bda71c(ACCIHBHMFPN,(((args->obj).klass)->_1).element_class),
         lVar8 == 0)) {
LAB_036d707c:
        uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar10,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)ACCIHBHMFPN;
        thunk_FUN_01c20e04(args->m_Items,ACCIHBHMFPN);
        local_58 = local_54;
        pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_58);
        if ((pIVar9 != (Il2CppObject *)0x0) &&
           (lVar8 = thunk_FUN_01bda71c(pIVar9,(((args->obj).klass)->_1).element_class), lVar8 == 0))
        goto LAB_036d707c;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar9;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar9);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(pSVar3,args,(MethodInfo *)0x0);
          goto LAB_036d7050;
        }
      }
LAB_036d7074:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_036d7078:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CNAPJKMPDNM(Action CJNHFNHJHPE)  [RVA 0x35D7808]
// GGLDGAAPKCF$$CNAPJKMPDNM @ RVA 0x35D7808

void GGLDGAAPKCF__CNAPJKMPDNM(GGLDGAAPKCF_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04569001 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04569001 = 1;
  }
  ppSVar4 = &(__this->fields).ODCAOCGHMPN;
  source = *ppSVar4;
                    /* try { // try from 036d7858 to 037d785f has its CatchHandler @ 036d7988 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 036d7874 to 037d787b has its CatchHandler @ 036d7984 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 036d7890 to 037d7897 has its CatchHandler @ 036d78e0 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static string LEPLIODHIPC()  [RVA 0x35D68C8]
// GGLDGAAPKCF$$LEPLIODHIPC @ RVA 0x35D68C8

System_String_o * GGLDGAAPKCF__LEPLIODHIPC(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04569002 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_904);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_905);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04569002 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_904,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_905,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor(HFHIKPAKJFG KHKENJGBOLM)  [RVA 0x35D78A4]
// GGLDGAAPKCF$$.ctor @ RVA 0x35D78A4

void GGLDGAAPKCF___ctor(GGLDGAAPKCF_o *__this,HFHIKPAKJFG_o *KHKENJGBOLM,MethodInfo *method)

{
                    /* try { // try from 036d78c4 to 037d78cb has its CatchHandler @ 036d7978 */
  if ((DAT_04569003 & 1) == 0) {
                    /* try { // try from 036d78cc to 037d78ef has its CatchHandler @ 036d778c */
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>__ctor__);
    DAT_04569003 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7890 with catch @ 036d78e0
                        */
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>__ctor__);
  (__this->fields).AKOCHMGJNMB = KHKENJGBOLM;
                    /* try { // try from 036d78f0 to 037d78f3 has its CatchHandler @ 036d796c */
                    /* try { // try from 036d78f4 to 037d7937 has its CatchHandler @ 036d778c */
  thunk_FUN_01c20e04(&__this->fields,KHKENJGBOLM);
  return;
}


// ===== private static void .cctor()  [RVA 0x35D7908]
// GGLDGAAPKCF$$.cctor @ RVA 0x35D7908

void GGLDGAAPKCF___cctor(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 036d7938 to 037d793b has its CatchHandler @ 036d7980 */
                    /* try { // try from 036d793c to 037d7943 has its CatchHandler @ 036d797c */
  if ((DAT_04569004 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_906);
                    /* try { // try from 036d7954 to 037d7967 has its CatchHandler @ 036d79f0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_907);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036d7968 to 037d79a7 has its CatchHandler @ 036d778c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d78f0 with catch @ 036d796c
                        */
    FUN_01bab630(&GGLDGAAPKCF_TypeInfo);
    DAT_04569004 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d78c4 with catch @ 036d7978
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d793c with catch @ 036d797c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7938 with catch @ 036d7980
                        */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7874 with catch @ 036d7984
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d7858 with catch @ 036d7988
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_906,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d79a8 to 037d79ab has its CatchHandler @ 036d79cc */
                    /* try { // try from 036d79ac to 037d79d3 has its CatchHandler @ 036d778c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_907,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d79a8 with catch @ 036d79cc */
  GGLDGAAPKCF_TypeInfo->static_fields->GMLHHNPAHHM = pSVar1;
                    /* try { // try from 036d79d4 to 037d79db has its CatchHandler @ 036d79f0 */
                    /* try { // try from 036d79dc to 037d79e7 has its CatchHandler @ 036d778c */
  thunk_FUN_01c20e04(GGLDGAAPKCF_TypeInfo->static_fields,pSVar1);
  return;
}

