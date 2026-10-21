// TypeDefIndex 610
// Namespace: 
// public class IKCANHIFLGJ
// Fields:
//   public int PBMOPGPGINM; // 0x10
//   private long KOKABJPFGCA; // 0x18
//   private Dictionary<long, string> AIOEOHCLJIL; // 0x20
//   private readonly string[] IJAMBHAFPIE; // 0x28

// ===== public void .ctor()  [RVA 0x35C0088]
// IKCANHIFLGJ$$.ctor @ RVA 0x35C0088

void IKCANHIFLGJ___ctor(IKCANHIFLGJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__string__o *__this_00;
  System_Collections_Generic_Dictionary_long__string__o **ppSVar1;
  System_String_array *pSVar2;
  System_String_array **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f14 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_string>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22532/*"Нар2"*/);
    FUN_01bab630(&StringLiteral_14674/*"VIOL$"*/);
    FUN_01bab630(&StringLiteral_1608/*"1 2"*/);
    FUN_01bab630(&StringLiteral_14673/*"VIOL 1"*/);
    FUN_01bab630(&StringLiteral_14676/*"VIOL^"*/);
    FUN_01bab630(&StringLiteral_14675/*"VIOLATIONLONG"*/);
    FUN_01bab630(&StringLiteral_14672/*"VIOL "*/);
    FUN_01bab630(&StringLiteral_21969/*"vi"*/);
    FUN_01bab630(&StringLiteral_1925/*"12"*/);
    FUN_01bab630(&StringLiteral_22533/*"Нарабвгде1"*/);
    FUN_01bab630(&StringLiteral_21982/*"viol"*/);
    FUN_01bab630(&StringLiteral_1942/*"1;2"*/);
    DAT_04568f14 = 1;
    method = extraout_x1;
  }
  (__this->fields).KOKABJPFGCA = 1;
  __this_00 = (System_Collections_Generic_Dictionary_long__string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_string>_TypeInfo,method
                                );
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_string>__ctor__);
  ppSVar1 = &(__this->fields).AIOEOHCLJIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pSVar2 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = StringLiteral_22533/*"Нарабвгде1"*/;
      thunk_FUN_01c20e04(pSVar2->m_Items);
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = StringLiteral_22532/*"Нар2"*/;
        thunk_FUN_01c20e04(pSVar2->m_Items + 1);
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = StringLiteral_1925/*"12"*/;
          thunk_FUN_01c20e04(pSVar2->m_Items + 2);
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = StringLiteral_1942/*"1;2"*/;
            thunk_FUN_01c20e04(pSVar2->m_Items + 3);
            if (4 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[4] = StringLiteral_1608/*"1 2"*/;
              thunk_FUN_01c20e04(pSVar2->m_Items + 4);
              if (5 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[5] = StringLiteral_21969/*"vi"*/;
                thunk_FUN_01c20e04(pSVar2->m_Items + 5);
                if (6 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[6] = StringLiteral_14675/*"VIOLATIONLONG"*/;
                  thunk_FUN_01c20e04(pSVar2->m_Items + 6);
                  if (7 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[7] = StringLiteral_21982/*"viol"*/;
                    thunk_FUN_01c20e04(pSVar2->m_Items + 7);
                    if (8 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[8] = StringLiteral_14672/*"VIOL "*/;
                      thunk_FUN_01c20e04(pSVar2->m_Items + 8);
                      if (9 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[9] = StringLiteral_14673/*"VIOL 1"*/;
                        thunk_FUN_01c20e04(pSVar2->m_Items + 9);
                        if (10 < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[10] = StringLiteral_14674/*"VIOL$"*/;
                          thunk_FUN_01c20e04(pSVar2->m_Items + 10);
                          if (0xb < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[0xb] = StringLiteral_14676/*"VIOL^"*/;
                            thunk_FUN_01c20e04();
                            ppSVar3 = &(__this->fields).IJAMBHAFPIE;
                            *ppSVar3 = pSVar2;
                            thunk_FUN_01c20e04(ppSVar3,pSVar2);
                            System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
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
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKGBFEKOKBE(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x35C03C0]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C03C0

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x3;
  
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
    CJNHFNHJHPE = IKCANHIFLGJ__KKGBFEKOKBE
                            (__this,(KGCNBJOCNHC->fields).LLBEKLPKDHK,
                             (KGCNBJOCNHC->fields).ANAJGHJEEOC,in_x3);
    MGDJPGGPDJI__OFDBFMLANAH(KGCNBJOCNHC,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKGBFEKOKBE(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x35C05C8]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C05C8

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t startIndex;
  System_String_o *pSVar1;
  MethodInfo *in_x3;
  System_String_o *str0;
  
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    pSVar1 = IKCANHIFLGJ__KKGBFEKOKBE
                       (__this,(HEHMPFLAEGE->fields).LLBEKLPKDHK,(HEHMPFLAEGE->fields).ANAJGHJEEOC,
                        in_x3);
    GKLPDMLELJF__OFDBFMLANAH(HEHMPFLAEGE,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (HEHMPFLAEGE->fields).FFOIEHLJLDA;
    if (pSVar1 != (System_String_o *)0x0) {
      startIndex = System_String__IndexOf(pSVar1,0x23,(MethodInfo *)0x0);
      if (-1 < startIndex) {
        str0 = (HEHMPFLAEGE->fields).LLBEKLPKDHK;
        pSVar1 = System_String__Substring(pSVar1,startIndex,(MethodInfo *)0x0);
        pSVar1 = System_String__Concat(str0,pSVar1,(MethodInfo *)0x0);
      }
                    /* try { // try from 036c063c to 037c0717 has its CatchHandler @ 036c063c
                       catch() { ... } // from try @ 036c063c with catch @ 036c063c
                       catch() { ... } // from try @ 036c0734 with catch @ 036c063c
                       catch() { ... } // from try @ 036c077c with catch @ 036c063c
                       catch() { ... } // from try @ 036c07ac with catch @ 036c063c */
      GKLPDMLELJF__GCAEKDKFFKK(HEHMPFLAEGE,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool NEHFPNBCOLO(string KGLJICLJHEL)  [RVA 0x35C0654]
// IKCANHIFLGJ$$NEHFPNBCOLO @ RVA 0x35C0654

bool IKCANHIFLGJ__NEHFPNBCOLO(IKCANHIFLGJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568f15 & 1) == 0) {
    __this = (IKCANHIFLGJ_o *)FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04568f15 = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(KGLJICLJHEL,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private string KKGBFEKOKBE(string KGLJICLJHEL, long FKIGDGJPIAC)  [RVA 0x35C03F0]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C03F0

System_String_o *
IKCANHIFLGJ__KKGBFEKOKBE
          (IKCANHIFLGJ_o *__this,System_String_o *KGLJICLJHEL,int64_t FKIGDGJPIAC,MethodInfo *method
          )

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__string__o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *str1;
  
  if ((DAT_04568f16 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_26);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3901);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3902);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3903);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_get_Item__);
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_04568f16 = 1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = IONAICHLBOO__FLLFECJDJHD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return KGLJICLJHEL;
  }
  pSVar2 = (__this->fields).AIOEOHCLJIL;
  if (pSVar2 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,FKIGDGJPIAC,
                       Method_System_Collections_Generic_Dictionary<long,_string>_ContainsKey__);
    if (bVar1) {
      pSVar2 = (__this->fields).AIOEOHCLJIL;
      if (pSVar2 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
        pSVar3 = (System_String_o *)
                 System_Collections_Generic_Dictionary<long,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                            FKIGDGJPIAC,
                            Method_System_Collections_Generic_Dictionary<long,_string>_get_Item__);
        return pSVar3;
      }
    }
    else {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3901,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3902,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      str1 = System_Int64__ToString((int64_t)&(__this->fields).KOKABJPFGCA,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).AIOEOHCLJIL;
      (__this->fields).KOKABJPFGCA = (__this->fields).KOKABJPFGCA + 1;
      if (pSVar2 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
        System_Collections_Generic_Dictionary<long,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,FKIGDGJPIAC,
                   (Il2CppObject *)pSVar3,
                   Method_System_Collections_Generic_Dictionary<long,_string>_Add__);
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKGBFEKOKBE(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x35C06A8]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C06A8

/* WARNING: Removing unreachable block (ram,0x036c08a0) */

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  MGDJPGGPDJI_o *__this_01;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x3;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568f17 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_04568f17 = 1;
  }
  if ((PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) ||
     (__this_00 = (PBNPKBJKFHE->fields).MABPCBMOECE,
     __this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036c0718 to 037c071f has its CatchHandler @ 036c0760 */
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__)
  ;
                    /* try { // try from 036c0728 to 037c0733 has its CatchHandler @ 036c075c */
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0728 with catch @ 036c075c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0718 with catch @ 036c0760
                        */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c078c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 036c0778 to 037c077b has its CatchHandler @ 036c079c */
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 036c077c to 037c07a3 has its CatchHandler @ 036c063c */
LAB_036c078c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) {
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return;
      }
      pSVar6 = pSVar4->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 == 0) goto LAB_036c0854;
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      break;
    }
                    /* catch() { ... } // from try @ 036c0778 with catch @ 036c079c */
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 036c07a4 to 037c07ab has its CatchHandler @ 036c07c0 */
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
                    /* try { // try from 036c07ac to 037c07b7 has its CatchHandler @ 036c063c */
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 036c07b8 to 037c07bf has its CatchHandler @ 036c07c0 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c07e8;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c07a4 with catch @ 036c07c0
                       catch(type#2 @ 00000000) { ... } // from try @ 036c07b8 with catch @ 036c07c0
                        */
        uVar7 = uVar7 - 1;
                    /* try { // try from 036c07c4 to 037c0863 has its CatchHandler @ 036c07c4
                       catch() { ... } // from try @ 036c07c4 with catch @ 036c07c4
                       catch() { ... } // from try @ 036c08bc with catch @ 036c07c4
                       catch() { ... } // from try @ 036c08e8 with catch @ 036c07c4
                       catch() { ... } // from try @ 036c091c with catch @ 036c07c4
                       catch() { ... } // from try @ 036c094c with catch @ 036c07c4 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_036c07e8:
    __this_01 = (MGDJPGGPDJI_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (__this_01 == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036c0894 to 037c089f has its CatchHandler @ 036c08f8 */
      FUN_01bab8c8();
    }
    CJNHFNHJHPE = IKCANHIFLGJ__KKGBFEKOKBE
                            (__this,(__this_01->fields).LLBEKLPKDHK,(__this_01->fields).ANAJGHJEEOC,
                             in_x3);
    MGDJPGGPDJI__OFDBFMLANAH(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 036c0864 to 037c086b has its CatchHandler @ 036c0900 */
      pVVar5 = pSVar6->vtable + *piVar8;
      goto LAB_036c0870;
    }
  }
LAB_036c0854:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_036c0870:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* try { // try from 036c088c to 037c0893 has its CatchHandler @ 036c08f4 */
  return;
}


// ===== private void KKGBFEKOKBE(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x35C0954]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C0954

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
                    /* try { // try from 036c0958 to 037c095f has its CatchHandler @ 036c0960 */
  if (HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c0944 with catch @ 036c0960
                       catch(type#2 @ 00000000) { ... } // from try @ 036c0958 with catch @ 036c0960
                        */
    IKCANHIFLGJ__KKGBFEKOKBE(__this,(HEHMPFLAEGE->fields).MCOPPCNPAHF,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KHONLKFPFLF()  [RVA 0x35C096C]
// IKCANHIFLGJ$$KHONLKFPFLF @ RVA 0x35C096C

void IKCANHIFLGJ__KHONLKFPFLF(IKCANHIFLGJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__string__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f18 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_string>_Clear__);
    DAT_04568f18 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).AIOEOHCLJIL;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__string__o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<long,_string>_Clear__);
    (__this->fields).KOKABJPFGCA = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void KKGBFEKOKBE(OLCBPIHLPEC BLLGOMMBCPF)  [RVA 0x35C09C8]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C09C8

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,OLCBPIHLPEC_o *BLLGOMMBCPF,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x3;
  
  if (BLLGOMMBCPF != (OLCBPIHLPEC_o *)0x0) {
    CJNHFNHJHPE = IKCANHIFLGJ__KKGBFEKOKBE
                            (__this,(BLLGOMMBCPF->fields).IAEBJKOPDAO,
                             (BLLGOMMBCPF->fields).NGODFBDEMLE,in_x3);
    OLCBPIHLPEC__EEMGLBFKELA(BLLGOMMBCPF,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKGBFEKOKBE(EPCCNLNOALL DKMMBMBMJBO)  [RVA 0x35C09F8]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C09F8

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,EPCCNLNOALL_o *DKMMBMBMJBO,MethodInfo *method)

{
  if (DKMMBMBMJBO != (EPCCNLNOALL_o *)0x0) {
    IKCANHIFLGJ__KKGBFEKOKBE(__this,(DKMMBMBMJBO->fields).OPHCNELIOLD,method);
    IKCANHIFLGJ__KKGBFEKOKBE(__this,(DKMMBMBMJBO->fields).KOGEBALMCBB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKGBFEKOKBE(KAMBBJFPLGM HEHMPFLAEGE)  [RVA 0x35C0A2C]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C0A2C

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,KAMBBJFPLGM_o *HEHMPFLAEGE,MethodInfo *method)

{
  EOLFEKNCPLM_o *pEVar1;
  
  if ((HEHMPFLAEGE != (KAMBBJFPLGM_o *)0x0) &&
     (pEVar1 = (HEHMPFLAEGE->fields).FLAFELDNABC, pEVar1 != (EOLFEKNCPLM_o *)0x0)) {
    IKCANHIFLGJ__KKGBFEKOKBE(__this,(pEVar1->fields).MCOPPCNPAHF,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KNANFMMEGHO(IMessage IKKAMAMLIKA, Type IAFPOHBOGEL)  [RVA 0x35C0A4C]
// IKCANHIFLGJ$$KNANFMMEGHO @ RVA 0x35C0A4C

void IKCANHIFLGJ__KNANFMMEGHO
               (IKCANHIFLGJ_o *__this,Google_Protobuf_IMessage_o *IKKAMAMLIKA,
               System_Type_o *IAFPOHBOGEL,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *s;
  MethodInfo *pMVar3;
  
  if ((DAT_04568f19 & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    FUN_01bab630(&StringLiteral_4283/*"ChatEvent"*/);
    FUN_01bab630(&StringLiteral_4396/*"ClanMember"*/);
    FUN_01bab630(&StringLiteral_10571/*"PublicPlayer"*/);
    FUN_01bab630(&StringLiteral_12058/*"ShortPlayer"*/);
    FUN_01bab630(&StringLiteral_12059/*"ShortPlayers"*/);
    FUN_01bab630(&StringLiteral_4373/*"Clan"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_4383/*"ClanJoinInfo"*/);
    DAT_04568f19 = 1;
  }
  if (IAFPOHBOGEL == (System_Type_o *)0x0) {
LAB_036c0ea4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  s = (System_String_o *)
      (*(IAFPOHBOGEL->klass->vtable)._8_unknown.methodPtr)
                (IAFPOHBOGEL,(IAFPOHBOGEL->klass->vtable)._8_unknown.method);
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
  if (uVar2 < 0x4463d3ba) {
    if (uVar2 < 0x1c70fc21) {
      if (uVar2 == 0x35ee259) {
                    /* try { // try from 036c0cf8 to 037c0cff has its CatchHandler @ 036c0d54 */
        pMVar3 = (MethodInfo *)0x0;
        bVar1 = System_String__op_Equality(s,StringLiteral_4283/*"ChatEvent"*/,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 036c0d14 to 037c0d1b has its CatchHandler @ 036c0d4c */
          if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
            IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
          }
          else {
                    /* try { // try from 036c0d1c to 037c0d43 has its CatchHandler @ 036c0bc0 */
            if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)OLCBPIHLPEC_TypeInfo) {
              IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
            }
          }
          IKCANHIFLGJ__KKGBFEKOKBE(__this,(OLCBPIHLPEC_o *)IKKAMAMLIKA,pMVar3);
          return;
        }
      }
      else if (uVar2 == 0x1c70fc20) {
        pMVar3 = (MethodInfo *)0x0;
        bVar1 = System_String__op_Equality(s,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
            IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
          }
          else {
                    /* try { // try from 036c0bc0 to 037c0cf7 has its CatchHandler @ 036c0bc0
                       catch() { ... } // from try @ 036c0bc0 with catch @ 036c0bc0
                       catch() { ... } // from try @ 036c0d1c with catch @ 036c0bc0
                       catch() { ... } // from try @ 036c0d48 with catch @ 036c0bc0
                       catch() { ... } // from try @ 036c0d70 with catch @ 036c0bc0
                       catch() { ... } // from try @ 036c0db0 with catch @ 036c0bc0 */
            if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)KAMBBJFPLGM_TypeInfo) {
              IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
            }
          }
          IKCANHIFLGJ__KKGBFEKOKBE(__this,(KAMBBJFPLGM_o *)IKKAMAMLIKA,pMVar3);
          return;
        }
      }
    }
    else if (uVar2 == 0x3e6a5570) {
                    /* try { // try from 036c0d70 to 037c0da7 has its CatchHandler @ 036c0bc0 */
      pMVar3 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(s,StringLiteral_12058/*"ShortPlayer"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
          IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
        }
        else {
                    /* catch() { ... } // from try @ 036c0d6c with catch @ 036c0d98 */
          if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)GKLPDMLELJF_TypeInfo) {
            IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
          }
        }
LAB_036c0e90:
        IKCANHIFLGJ__KKGBFEKOKBE(__this,(GKLPDMLELJF_o *)IKKAMAMLIKA,pMVar3);
        return;
      }
    }
    else if (uVar2 == 0x4463d3b9) {
      pMVar3 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(s,StringLiteral_12059/*"ShortPlayers"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
          IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
        }
        else if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)LFELBGMCDHD_TypeInfo) {
          IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
        }
        IKCANHIFLGJ__KKGBFEKOKBE(__this,(LFELBGMCDHD_o *)IKKAMAMLIKA,pMVar3);
        return;
      }
    }
  }
  else if (uVar2 < 0xc151467e) {
    if (uVar2 == 0xbfb3ba09) {
      pMVar3 = (MethodInfo *)0x0;
                    /* try { // try from 036c0d44 to 037c0d47 has its CatchHandler @ 036c0d50 */
                    /* try { // try from 036c0d48 to 037c0d6b has its CatchHandler @ 036c0bc0 */
      bVar1 = System_String__op_Equality(s,StringLiteral_4383/*"ClanJoinInfo"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0d14 with catch @ 036c0d4c
                        */
      if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0d44 with catch @ 036c0d50
                        */
        if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
          IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
        }
        else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0cf8 with catch @ 036c0d54
                        */
          if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)EPCCNLNOALL_TypeInfo) {
            IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
          }
        }
        IKCANHIFLGJ__KKGBFEKOKBE(__this,(EPCCNLNOALL_o *)IKKAMAMLIKA,pMVar3);
        return;
      }
    }
    else if (uVar2 == 0xc151467d) {
      pMVar3 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(s,StringLiteral_4373/*"Clan"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
          IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
        }
        else if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)OJEHKJHEBID_TypeInfo) {
          IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
        }
        IKCANHIFLGJ__KKGBFEKOKBE(__this,(OJEHKJHEBID_o *)IKKAMAMLIKA,pMVar3);
        return;
      }
    }
  }
  else if (uVar2 == 0xdb93fd35) {
                    /* try { // try from 036c0db0 to 037c0dbb has its CatchHandler @ 036c0bc0 */
    pMVar3 = (MethodInfo *)0x0;
                    /* try { // try from 036c0dbc to 037c0dc3 has its CatchHandler @ 036c0dc4 */
    bVar1 = System_String__op_Equality(s,StringLiteral_10571/*"PublicPlayer"*/,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c0da8 with catch @ 036c0dc4
                       catch(type#2 @ 00000000) { ... } // from try @ 036c0dbc with catch @ 036c0dc4
                        */
    if (bVar1) {
      if ((IKKAMAMLIKA != (Google_Protobuf_IMessage_o *)0x0) &&
         (IKKAMAMLIKA->klass == (Google_Protobuf_IMessage_c *)EOLFEKNCPLM_TypeInfo)) {
        IKKAMAMLIKA = IKKAMAMLIKA[1].monitor;
        goto LAB_036c0e90;
      }
      goto LAB_036c0ea4;
    }
  }
  else if (uVar2 == 0xfb56e0fb) {
    pMVar3 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality(s,StringLiteral_4396/*"ClanMember"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (IKKAMAMLIKA == (Google_Protobuf_IMessage_o *)0x0) {
        IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
      }
      else if (IKKAMAMLIKA->klass != (Google_Protobuf_IMessage_c *)MGDJPGGPDJI_TypeInfo) {
        IKKAMAMLIKA = (Google_Protobuf_IMessage_o *)0x0;
      }
      IKCANHIFLGJ__KKGBFEKOKBE(__this,(MGDJPGGPDJI_o *)IKKAMAMLIKA,pMVar3);
      return;
    }
  }
  return;
}


// ===== private void KKGBFEKOKBE(LFELBGMCDHD KIFIMBGOPFG)  [RVA 0x35C0EA8]
// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C0EA8

/* WARNING: Removing unreachable block (ram,0x036c1084) */

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,LFELBGMCDHD_o *KIFIMBGOPFG,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568f1a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_GetEnumerator__);
    DAT_04568f1a = 1;
  }
  if ((KIFIMBGOPFG == (LFELBGMCDHD_o *)0x0) ||
     (__this_00 = (KIFIMBGOPFG->fields).EHBNKDHKJNI,
     __this_00 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c0f8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_036c0f8c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) break;
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<GKLPDMLELJF>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c0fe8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_036c0fe8:
    HEHMPFLAEGE = (GKLPDMLELJF_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    IKCANHIFLGJ__KKGBFEKOKBE(__this,HEHMPFLAEGE,method);
  } while( true );
  if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar6 = pSVar4->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar3;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c1058;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_036c1058:
    (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  }
  return;
}


// ===== private string NOLANIBGHDH(string KGLJICLJHEL, out bool EJMPOFKGOJL)  [RVA 0x35C1134]
// IKCANHIFLGJ$$NOLANIBGHDH @ RVA 0x35C1134

System_String_o *
IKCANHIFLGJ__NOLANIBGHDH
          (IKCANHIFLGJ_o *__this,System_String_o *KGLJICLJHEL,bool *EJMPOFKGOJL,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  IKCANHIFLGJ_o *__this_00;
  MethodInfo *method_00;
  System_String_array *pSVar5;
  
  method_00 = (MethodInfo *)EJMPOFKGOJL;
  if ((DAT_04568f1b & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568f1b = 1;
  }
  if (KGLJICLJHEL != (System_String_o *)0x0) {
    __this_00 = (IKCANHIFLGJ_o *)
                (*(KGLJICLJHEL->klass->vtable)._2_GetHashCode.methodPtr)
                          (KGLJICLJHEL,(KGLJICLJHEL->klass->vtable)._2_GetHashCode.method);
    uVar3 = (uint)__this_00;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      __this_00 = (IKCANHIFLGJ_o *)thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    bVar4 = IKCANHIFLGJ__NEHFPNBCOLO(__this_00,KGLJICLJHEL,method_00);
    if ((bVar4) || ((__this->fields).PBMOPGPGINM <= (int)(uVar1 % 100))) {
      *EJMPOFKGOJL = false;
    }
    else {
      *EJMPOFKGOJL = true;
      pSVar5 = (__this->fields).IJAMBHAFPIE;
      if (pSVar5 == (System_String_array *)0x0) goto LAB_036c1220;
      uVar3 = (uint)pSVar5->max_length;
      iVar2 = 0;
      if (uVar3 != 0) {
        iVar2 = (int)uVar1 / (int)uVar3;
      }
      uVar1 = uVar1 - iVar2 * uVar3;
      if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      KGLJICLJHEL = pSVar5->m_Items[uVar1];
    }
    return KGLJICLJHEL;
  }
LAB_036c1220:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

