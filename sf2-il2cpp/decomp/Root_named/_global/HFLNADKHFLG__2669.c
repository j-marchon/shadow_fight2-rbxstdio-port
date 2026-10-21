// TypeDefIndex 2669
// Namespace: 
// public static class HFLNADKHFLG
// Fields:

// ===== private static void HNOMDBJEICP(XmlNode NMONNKBNOCM, XmlNode BALEHOBMFNN, List<MGNDHCBAPEN<string, XmlNode>> PHOLAJOMLEL, List<string> FHOOAEFKILG)  [RVA 0x33C1B90]
// HFLNADKHFLG$$HNOMDBJEICP @ RVA 0x33C1B90

/* WARNING: Removing unreachable block (ram,0x034c1fcc) */

void HFLNADKHFLG__HNOMDBJEICP
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *BALEHOBMFNN,
               System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL,
               System_Collections_Generic_List_string__o *FHOOAEFKILG,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Il2CppObject *a;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  Il2CppObject *JGGJNLLANAE;
  System_String_o *b;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *b_00;
  MGNDHCBAPEN_string__XmlNode__o *__this_00;
  MethodInfo *method_00;
  long lVar6;
  MGNDHCBAPEN_string__XmlNode__array *pMVar7;
  ulong uVar8;
  int *piVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 034c1b90 to 035c1b97 has its CatchHandler @ 034c2130 */
                    /* try { // try from 034c1ba4 to 035c1bbf has its CatchHandler @ 034c2144 */
  if ((DAT_04567dd9 & 1) == 0) {
                    /* try { // try from 034c1bd0 to 035c1bd7 has its CatchHandler @ 034c2110 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
                    /* try { // try from 034c1bf0 to 035c1bfb has its CatchHandler @ 034c20f8 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 034c1bfc to 035c1c0b has its CatchHandler @ 034c2104 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 034c1c0c to 035c1c1b has its CatchHandler @ 034c212c */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* try { // try from 034c1c30 to 035c1c37 has its CatchHandler @ 034c20fc */
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_XmlNode>__ctor__);
                    /* try { // try from 034c1c38 to 035c1c47 has its CatchHandler @ 034c210c */
    FUN_01bab630(&MGNDHCBAPEN<string,_XmlNode>_TypeInfo);
                    /* try { // try from 034c1c48 to 035c1c57 has its CatchHandler @ 034c2100 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 034c1c58 to 035c1c67 has its CatchHandler @ 034c2108 */
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
                    /* try { // try from 034c1c68 to 035c1c73 has its CatchHandler @ 034c2124 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567dd9 = 1;
  }
                    /* try { // try from 034c1c78 to 035c1c87 has its CatchHandler @ 034c2128 */
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (FHOOAEFKILG == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034c1c78 with catch @ 034c2128 */
    FUN_01bab8c8();
  }
  uVar1 = (FHOOAEFKILG->fields)._size;
  method_00 = (MethodInfo *)(ulong)uVar1;
                    /* try { // try from 034c1c8c to 035c1c97 has its CatchHandler @ 034c20e8 */
  (FHOOAEFKILG->fields)._size = 0;
  (FHOOAEFKILG->fields)._version = (FHOOAEFKILG->fields)._version + 1;
  if (0 < (int)uVar1) {
    System_Array__Clear((System_Array_o *)(FHOOAEFKILG->fields)._items,0,uVar1,(MethodInfo *)0x0);
  }
                    /* try { // try from 034c1cb4 to 035c1cbb has its CatchHandler @ 034c20f4 */
                    /* try { // try from 034c1cc0 to 035c1ccb has its CatchHandler @ 034c209c */
                    /* try { // try from 034c1cd8 to 035c1cf7 has its CatchHandler @ 034c2140 */
  HFLNADKHFLG__FOAAADFCOHK(NMONNKBNOCM,FHOOAEFKILG,method_00);
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)FHOOAEFKILG,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
                    /* try { // try from 034c1cf8 to 035c1d03 has its CatchHandler @ 034c20b8 */
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    do {
                    /* try { // try from 034c1d18 to 035c1d1f has its CatchHandler @ 034c20e0 */
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      a = local_80.fields._current;
      if (!bVar3) {
                    /* try { // try from 034c2058 to 035c205b has its CatchHandler @ 034c2064 */
                    /* try { // try from 034c205c to 035c2163 has its CatchHandler @ 034c1a10 */
                    /* catch() { ... } // from try @ 034c1d64 with catch @ 034c2060 */
                    /* catch() { ... } // from try @ 034c2058 with catch @ 034c2064 */
                    /* catch() { ... } // from try @ 034c1d70 with catch @ 034c2068 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* catch() { ... } // from try @ 034c1ea4 with catch @ 034c206c */
                    /* catch() { ... } // from try @ 034c1ebc with catch @ 034c2070 */
                    /* catch() { ... } // from try @ 034c1e70 with catch @ 034c2074 */
                    /* catch() { ... } // from try @ 034c2054 with catch @ 034c2078 */
                    /* catch() { ... } // from try @ 034c1ecc with catch @ 034c207c */
                    /* catch() { ... } // from try @ 034c1e80 with catch @ 034c2080 */
                    /* catch() { ... } // from try @ 034c2050 with catch @ 034c2084 */
                    /* catch() { ... } // from try @ 034c1edc with catch @ 034c2088 */
        return;
      }
                    /* try { // try from 034c1d20 to 035c1d2b has its CatchHandler @ 034c20a4 */
      if (BALEHOBMFNN == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034c2024 with catch @ 034c2118 */
        FUN_01bab8c8();
      }
                    /* try { // try from 034c1d34 to 035c1d3b has its CatchHandler @ 034c20a8 */
      plVar4 = (long *)(*(BALEHOBMFNN->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (BALEHOBMFNN,(BALEHOBMFNN->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034c2020 with catch @ 034c211c */
        FUN_01bab8c8();
      }
                    /* try { // try from 034c1d48 to 035c1d4f has its CatchHandler @ 034c20bc */
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
                    /* try { // try from 034c1d64 to 035c1d6b has its CatchHandler @ 034c2060 */
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 034c1d70 to 035c1d7f has its CatchHandler @ 034c2068 */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_034c1da0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
                    /* try { // try from 034c1d84 to 035c1d9f has its CatchHandler @ 034c213c */
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c1da0:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) goto LAB_034c1f48;
                    /* try { // try from 034c1db0 to 035c1db7 has its CatchHandler @ 034c20e4 */
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 034c1df0 to 035c1dfb has its CatchHandler @ 034c20f0 */
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_034c1e00;
            }
                    /* try { // try from 034c1dd4 to 035c1dd7 has its CatchHandler @ 034c20a0 */
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
                    /* try { // try from 034c1de4 to 035c1def has its CatchHandler @ 034c20b4 */
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c1e00:
                    /* try { // try from 034c1e08 to 035c1e27 has its CatchHandler @ 034c2138 */
        JGGJNLLANAE = (Il2CppObject *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (JGGJNLLANAE == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034c1e28 to 035c1e3f has its CatchHandler @ 034c2134 */
        if (((JGGJNLLANAE->klass->_2).naturalAligment < bVar2) ||
           ((JGGJNLLANAE->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JGGJNLLANAE);
        }
                    /* try { // try from 034c1e40 to 035c1e4b has its CatchHandler @ 034c20dc */
        b = (System_String_o *)
            (*JGGJNLLANAE->klass->vtable[8].methodPtr)
                      (JGGJNLLANAE,JGGJNLLANAE->klass->vtable[8].method);
                    /* try { // try from 034c1e50 to 035c1e5f has its CatchHandler @ 034c20ec */
                    /* try { // try from 034c1e60 to 035c1e6b has its CatchHandler @ 034c20d8 */
        __this = (System_Xml_XmlAttributeCollection_o *)
                 (*JGGJNLLANAE->klass->vtable[0x10].methodPtr)
                           (JGGJNLLANAE,JGGJNLLANAE->klass->vtable[0x10].method);
        if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 034c1e70 to 035c1e7b has its CatchHandler @ 034c2074 */
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 034c1e80 to 035c1e87 has its CatchHandler @ 034c2080 */
        b_00 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 034c1e88 to 035c1e93 has its CatchHandler @ 034c2094 */
                    /* try { // try from 034c1e94 to 035c1e9f has its CatchHandler @ 034c2098 */
        bVar3 = System_String__op_Equality(StringLiteral_12864/*"Template"*/,b,(MethodInfo *)0x0);
      } while ((!bVar3) ||
              (bVar3 = System_String__op_Equality((System_String_o *)a,b_00,(MethodInfo *)0x0),
              !bVar3
                    /* try { // try from 034c1ea4 to 035c1eaf has its CatchHandler @ 034c206c */));
                    /* try { // try from 034c1eb4 to 035c1ebb has its CatchHandler @ 034c2090 */
                    /* try { // try from 034c1ebc to 035c1ecb has its CatchHandler @ 034c2070 */
      __this_00 = (MGNDHCBAPEN_string__XmlNode__o *)
                  thunk_FUN_01bda818(MGNDHCBAPEN<string,_XmlNode>_TypeInfo);
                    /* try { // try from 034c1ecc to 035c1ed7 has its CatchHandler @ 034c207c */
      MGNDHCBAPEN<object,_object>___ctor
                ((MGNDHCBAPEN_T1__T2__o *)__this_00,a,JGGJNLLANAE,
                 Method_MGNDHCBAPEN<string,_XmlNode>__ctor__);
      lVar6 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_Add__;
                    /* try { // try from 034c1edc to 035c1ee3 has its CatchHandler @ 034c2088 */
      if (PHOLAJOMLEL == (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034c1ee4 to 035c201b has its CatchHandler @ 034c1a10 */
      pMVar7 = (PHOLAJOMLEL->fields)._items;
      (PHOLAJOMLEL->fields)._version = (PHOLAJOMLEL->fields)._version + 1;
      if (pMVar7 == (MGNDHCBAPEN_string__XmlNode__array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (PHOLAJOMLEL->fields)._size;
      if (uVar1 < (uint)pMVar7->max_length) {
        (PHOLAJOMLEL->fields)._size = uVar1 + 1;
        pMVar7->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar7->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                   (Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
LAB_034c1f48:
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
    } while (plVar4 == (long *)0x0);
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034c1fbc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034c1fbc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  } while( true );
}


// ===== private static int FOAAADFCOHK(XmlNode AHDGNOJPPIB, List<string> KENFFDHLNDA)  [RVA 0x33C21C8]
// HFLNADKHFLG$$FOAAADFCOHK @ RVA 0x33C21C8

int32_t HFLNADKHFLG__FOAAADFCOHK
                  (System_Xml_XmlNode_o *AHDGNOJPPIB,
                  System_Collections_Generic_List_string__o *KENFFDHLNDA,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_00;
  System_String_array *collection;
  
  if ((DAT_04567dda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567dda = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
      __this_00 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (((__this_00 != (System_String_o *)0x0) &&
          (collection = System_String__Split(__this_00,0x7c,0,(MethodInfo *)0x0),
          KENFFDHLNDA != (System_Collections_Generic_List_string__o *)0x0)) &&
         (System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     Method_System_Collections_Generic_List<string>_AddRange__),
         collection != (System_String_array *)0x0)) {
        return (int32_t)collection->max_length;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void EFBDLCFADNH(XmlNode NMONNKBNOCM, XmlNode AELAFOPLMOP, string KGLJICLJHEL)  [RVA 0x33C22A0]
// HFLNADKHFLG$$EFBDLCFADNH @ RVA 0x33C22A0

void HFLNADKHFLG__EFBDLCFADNH
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  long lVar1;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  
  if (NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0) {
    lVar1 = (*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                      (NMONNKBNOCM,KGLJICLJHEL,(NMONNKBNOCM->klass->vtable)._51_get_Item.method);
    if (lVar1 == 0) {
      if (AELAFOPLMOP == (System_Xml_XmlNode_o *)0x0) goto LAB_034c2314;
      JOHFLOEABJL = (System_Xml_XmlNode_o *)
                    (*(AELAFOPLMOP->klass->vtable)._51_get_Item.methodPtr)
                              (AELAFOPLMOP,KGLJICLJHEL,
                               (AELAFOPLMOP->klass->vtable)._51_get_Item.method);
      if (JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) {
        EIABCPKDEBD__DGPOFACHGMP(NMONNKBNOCM,JOHFLOEABJL,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_034c2314:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NKLGCNHLBAF(string LFGKEPCBPKF, string NMNFJILAIKB)  [RVA 0x33C2318]
// HFLNADKHFLG$$NKLGCNHLBAF @ RVA 0x33C2318

void HFLNADKHFLG__NKLGCNHLBAF
               (System_String_o *LFGKEPCBPKF,System_String_o *NMNFJILAIKB,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this;
  
  if ((DAT_04567ddb & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04567ddb = 1;
  }
  __this = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this,(MethodInfo *)0x0);
  HFLNADKHFLG__NKLGCNHLBAF(LFGKEPCBPKF,__this,method);
  GIAMPEGMNHE__LFKDDMKHGEA(__this,NMNFJILAIKB,(MethodInfo *)0x0);
  return;
}


// ===== private static void AAJAEHMJCPM(XmlNode NMONNKBNOCM, XmlNode BALEHOBMFNN, List<MGNDHCBAPEN<string, XmlNode>> PHOLAJOMLEL, List<string> FHOOAEFKILG)  [RVA 0x33C28E0]
// HFLNADKHFLG$$AAJAEHMJCPM @ RVA 0x33C28E0

void HFLNADKHFLG__AAJAEHMJCPM
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *BALEHOBMFNN,
               System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL,
               System_Collections_Generic_List_string__o *FHOOAEFKILG,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567ddc & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
                    /* try { // try from 034c2980 to 035c2c83 has its CatchHandler @ 034c2980
                       catch() { ... } // from try @ 034c2980 with catch @ 034c2980
                       catch() { ... } // from try @ 034c2d68 with catch @ 034c2980
                       catch() { ... } // from try @ 034c2ffc with catch @ 034c2980
                       catch() { ... } // from try @ 034c3098 with catch @ 034c2980
                       catch() { ... } // from try @ 034c30a0 with catch @ 034c2980
                       catch() { ... } // from try @ 034c30ac with catch @ 034c2980
                       catch() { ... } // from try @ 034c3184 with catch @ 034c2980
                       catch() { ... } // from try @ 034c3218 with catch @ 034c2980 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567ddc = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (PHOLAJOMLEL != (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)0x0) {
    length = (PHOLAJOMLEL->fields)._size;
    (PHOLAJOMLEL->fields)._size = 0;
    (PHOLAJOMLEL->fields)._version = (PHOLAJOMLEL->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(PHOLAJOMLEL->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    HFLNADKHFLG__HNOMDBJEICP(NMONNKBNOCM,BALEHOBMFNN,PHOLAJOMLEL,FHOOAEFKILG,method);
    pMVar5 = extraout_x1;
    if (0 < (PHOLAJOMLEL->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_034c2b54;
        HFLNADKHFLG__HNOMDBJEICP(pIVar2[1].monitor,BALEHOBMFNN,PHOLAJOMLEL,FHOOAEFKILG,method);
        index = index + 1;
        pMVar5 = extraout_x1_00;
      } while (index < (PHOLAJOMLEL->fields)._size);
    }
    HFLNADKHFLG__DNKBNOPCLII(PHOLAJOMLEL,pMVar5);
    pSVar3 = StringLiteral_1/*""*/;
    if ((PHOLAJOMLEL->fields)._size == 0) {
      return;
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_GetEnumerator__)
    ;
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_MoveNext__
                             ), pIVar2 = local_70.fields._current, bVar1) {
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar5 = StringLiteral_22485/*"|"*/;
      pSVar3 = System_String__Concat
                         (pSVar3,(System_String_o *)local_70.fields._current[1].klass,
                          (System_String_o *)StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
      HFLNADKHFLG__FJAGBCICPJJ(NMONNKBNOCM,pIVar2[1].monitor,pMVar5);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_Dispose__
              );
    if ((((pSVar3 != (System_String_o *)0x0) &&
         (pSVar3 = System_String__Substring
                             (pSVar3,0,(pSVar3->fields)._stringLength + -1,(MethodInfo *)0x0),
         NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0)) &&
        (__this = (System_Xml_XmlAttributeCollection_o *)
                  (*(NMONNKBNOCM->klass->vtable)._16_get_Attributes.methodPtr)
                            (NMONNKBNOCM,(NMONNKBNOCM->klass->vtable)._16_get_Attributes.method),
        __this != (System_Xml_XmlAttributeCollection_o *)0x0)) &&
       (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0),
       pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pSVar3,(pSVar4->klass->vtable)._10_set_Value.method);
      return;
    }
  }
LAB_034c2b54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FJAGBCICPJJ(XmlNode NMONNKBNOCM, XmlNode AELAFOPLMOP)  [RVA 0x33C2D14]
// HFLNADKHFLG$$FJAGBCICPJJ @ RVA 0x33C2D14

void HFLNADKHFLG__FJAGBCICPJJ
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               MethodInfo *method)

{
  System_Xml_XmlNode_o *NMONNKBNOCM_00;
  System_Xml_XmlNode_o *AELAFOPLMOP_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 034c2d24 to 035c2d3f has its CatchHandler @ 034c30bc */
                    /* try { // try from 034c2d5c to 035c2d67 has its CatchHandler @ 034c30cc */
                    /* try { // try from 034c2d68 to 035c2f1b has its CatchHandler @ 034c2980 */
  if ((DAT_04567ddd & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_12811/*"Tactics"*/);
    FUN_01bab630(&StringLiteral_2731/*"Actions"*/);
    FUN_01bab630(&StringLiteral_7634/*"Intervals"*/);
    FUN_01bab630(&StringLiteral_8605/*"Locks"*/);
    FUN_01bab630(&StringLiteral_14762/*"Velocity"*/);
    FUN_01bab630(&StringLiteral_5995/*"Events"*/);
    FUN_01bab630(&StringLiteral_2803/*"Align"*/);
    FUN_01bab630(&StringLiteral_11897/*"SetDirection"*/);
    DAT_04567ddd = 1;
  }
  HFLNADKHFLG__BOEHFFCDAJO(NMONNKBNOCM,AELAFOPLMOP,method);
  HFLNADKHFLG__CCFENILEEEF(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_5995/*"Events"*/,in_x3);
  HFLNADKHFLG__CCFENILEEEF(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_4577/*"Conditions"*/,in_x3);
  HFLNADKHFLG__CCFENILEEEF(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_8605/*"Locks"*/,in_x3);
  HFLNADKHFLG__CCFENILEEEF(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_7634/*"Intervals"*/,in_x3);
  HFLNADKHFLG__CCFENILEEEF(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_2731/*"Actions"*/,in_x3);
  HFLNADKHFLG__EFBDLCFADNH(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_11897/*"SetDirection"*/,in_x3);
  HFLNADKHFLG__EFBDLCFADNH(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_2803/*"Align"*/,in_x3);
  HFLNADKHFLG__EFBDLCFADNH(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_14762/*"Velocity"*/,in_x3);
  HFLNADKHFLG__EFBDLCFADNH(NMONNKBNOCM,AELAFOPLMOP,StringLiteral_12811/*"Tactics"*/,in_x3);
  if (NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0) {
    NMONNKBNOCM_00 =
         (System_Xml_XmlNode_o *)
         (*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                   (NMONNKBNOCM,StringLiteral_12811/*"Tactics"*/,(NMONNKBNOCM->klass->vtable)._51_get_Item.method
                   );
    if (AELAFOPLMOP != (System_Xml_XmlNode_o *)0x0) {
      AELAFOPLMOP_00 =
           (System_Xml_XmlNode_o *)
           (*(AELAFOPLMOP->klass->vtable)._51_get_Item.methodPtr)
                     (AELAFOPLMOP,StringLiteral_12811/*"Tactics"*/,
                      (AELAFOPLMOP->klass->vtable)._51_get_Item.method);
      HFLNADKHFLG__CCFENILEEEF(NMONNKBNOCM_00,AELAFOPLMOP_00,StringLiteral_4577/*"Conditions"*/,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void GFFMEMGCOAG(XmlDocument LKILNGEECIJ)  [RVA 0x33C362C]
// HFLNADKHFLG$$GFFMEMGCOAG @ RVA 0x33C362C

/* WARNING: Removing unreachable block (ram,0x034c3acc) */
/* WARNING: Removing unreachable block (ram,0x034c3c88) */

void HFLNADKHFLG__GFFMEMGCOAG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  int local_64;
  
  auVar14._8_8_ = method;
  auVar14._0_8_ = LKILNGEECIJ;
  if ((DAT_04567dde & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlElement_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_7634/*"Intervals"*/);
    FUN_01bab630(&StringLiteral_9222/*"Moves"*/);
    FUN_01bab630(&StringLiteral_9225/*"Movesxml"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    auVar14 = FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_04567dde = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    auVar14 = (*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                        (LKILNGEECIJ,StringLiteral_9225/*"Movesxml"*/,
                         (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    plVar6 = auVar14._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar14._8_8_;
    auVar14 = auVar2 << 0x40;
    if (plVar6 != (long *)0x0) {
      auVar14 = (**(code **)(*plVar6 + 0x468))
                          (plVar6,StringLiteral_9222/*"Moves"*/,*(undefined8 *)(*plVar6 + 0x470));
      plVar6 = auVar14._0_8_;
      local_64 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar14._8_8_;
      auVar14 = auVar3 << 0x40;
      if (plVar6 != (long *)0x0) {
        auVar14 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
        plVar6 = auVar14._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar14._8_8_;
        auVar14 = auVar4 << 0x40;
        if (plVar6 != (long *)0x0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar11 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_034c37dc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c37dc:
            uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if ((uVar12 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
              if (plVar6 == (long *)0x0) {
                return;
              }
              lVar11 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 == 0) goto LAB_034c3b98;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_034c3b80;
            }
            lVar11 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_034c383c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c383c:
            plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            lVar11 = *plVar8;
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
            plVar8 = (long *)(**(code **)(lVar11 + 0x468))
                                       (plVar8,StringLiteral_7634/*"Intervals"*/,*(undefined8 *)(lVar11 + 0x470));
            if (plVar8 != (long *)0x0) {
              plVar8 = (long *)(**(code **)(*plVar8 + 0x208))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x210));
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
LAB_034c38bc:
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_034c3908;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c3908:
              uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
              if ((uVar12 & 1) != 0) {
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_034c3968;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3968:
                plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                   (*(System_Xml_XmlNode_c **)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(plVar9);
                }
                __this = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
                if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                        (__this,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                bVar5 = System_String__op_Equality(pSVar10,StringLiteral_3160/*"Attack"*/,(MethodInfo *)0x0);
                if (bVar5) {
                  pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                  lVar11 = *plVar9;
                  bVar1 = (System_Xml_XmlElement_TypeInfo->_2).naturalAligment;
                  if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                     (*(System_Xml_XmlElement_c **)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8)
                      != System_Xml_XmlElement_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(plVar9);
                  }
                  (**(code **)(lVar11 + 0x558))
                            (plVar9,StringLiteral_7230/*"ID"*/,pSVar10,*(undefined8 *)(lVar11 + 0x560));
                  local_64 = local_64 + 1;
                }
                goto LAB_034c38bc;
              }
              plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
              if (plVar8 != (long *)0x0) {
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_034c3abc;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar7 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_034c3abc:
                (*(code *)*puVar7)(plVar8,puVar7[1]);
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar14._0_8_,auVar14._8_8_);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_034c3b80:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_034c3bb4;
    }
  }
LAB_034c3b98:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_034c3bb4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


// ===== private static void BOEHFFCDAJO(XmlNode NMONNKBNOCM, XmlNode AELAFOPLMOP)  [RVA 0x33C2F00]
// HFLNADKHFLG$$BOEHFFCDAJO @ RVA 0x33C2F00

/* WARNING: Removing unreachable block (ram,0x034c3184) */

void HFLNADKHFLG__BOEHFFCDAJO
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttribute_o *JOHFLOEABJL;
  System_String_o *name;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
                    /* try { // try from 034c2f1c to 035c2f43 has its CatchHandler @ 034c3184 */
  if ((DAT_04567ddf & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_04567ddf = 1;
  }
  if ((AELAFOPLMOP == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(AELAFOPLMOP->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AELAFOPLMOP,(AELAFOPLMOP->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034c2f78 to 035c2fb3 has its CatchHandler @ 034c3188 */
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 034c2fbc to 035c2fd7 has its CatchHandler @ 034c30c0 */
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034c2fe8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c2fe8:
                    /* try { // try from 034c2ff0 to 035c2ffb has its CatchHandler @ 034c30d8 */
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 034c2c84 with catch @ 034c30dc */
                    /* catch() { ... } // from try @ 034c2ce0 with catch @ 034c30e0 */
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
                    /* try { // try from 034c30f8 to 035c30fb has its CatchHandler @ 034c3110 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_034c3124;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
                    /* try { // try from 034c2ffc to 035c3087 has its CatchHandler @ 034c2980 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_034c3048;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3048:
    JOHFLOEABJL = (System_Xml_XmlAttribute_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
                    /* try { // try from 034c3088 to 035c308b has its CatchHandler @ 034c30d4 */
                    /* try { // try from 034c308c to 035c308f has its CatchHandler @ 034c30d0 */
                    /* try { // try from 034c3090 to 035c3093 has its CatchHandler @ 034c30c8 */
                    /* try { // try from 034c3094 to 035c3097 has its CatchHandler @ 034c30c4 */
    name = (System_String_o *)
           (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                     (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
                    /* try { // try from 034c3098 to 035c309b has its CatchHandler @ 034c2980 */
    if (NMONNKBNOCM == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034c309c to 035c309f has its CatchHandler @ 034c30b8 */
                    /* try { // try from 034c30a0 to 035c30a7 has its CatchHandler @ 034c2980 */
                    /* try { // try from 034c30a8 to 035c30ab has its CatchHandler @ 034c30b4 */
                    /* try { // try from 034c30ac to 035c30f7 has its CatchHandler @ 034c2980 */
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(NMONNKBNOCM->klass->vtable)._16_get_Attributes.methodPtr)
                       (NMONNKBNOCM,(NMONNKBNOCM->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 034c30a8 with catch @ 034c30b4 */
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 034c309c with catch @ 034c30b8 */
                    /* catch() { ... } // from try @ 034c2d24 with catch @ 034c30bc */
                    /* catch() { ... } // from try @ 034c2fbc with catch @ 034c30c0 */
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034c3094 with catch @ 034c30c4 */
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 034c3090 with catch @ 034c30c8 */
                    /* catch() { ... } // from try @ 034c2d5c with catch @ 034c30cc */
                    /* catch() { ... } // from try @ 034c308c with catch @ 034c30d0 */
                    /* catch() { ... } // from try @ 034c3088 with catch @ 034c30d4 */
      EIABCPKDEBD__DGPOFACHGMP(NMONNKBNOCM,JOHFLOEABJL,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034c2ff0 with catch @ 034c30d8 */
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
                    /* catch() { ... } // from try @ 034c30f8 with catch @ 034c3110 */
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034c3140;
    }
  }
LAB_034c3124:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034c3140:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* try { // try from 034c3150 to 035c3183 has its CatchHandler @ 034c322c */
  return;
}


// ===== private static void CCFENILEEEF(XmlNode NMONNKBNOCM, XmlNode AELAFOPLMOP, string KGLJICLJHEL)  [RVA 0x33C3260]
// HFLNADKHFLG$$CCFENILEEEF @ RVA 0x33C3260

/* WARNING: Removing unreachable block (ram,0x034c355c) */

void HFLNADKHFLG__CCFENILEEEF
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567de0 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11379/*"RewriteTemplates"*/);
    DAT_04567de0 = 1;
  }
  if (AELAFOPLMOP == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar3 = (System_Xml_XmlNode_o *)
           (*(AELAFOPLMOP->klass->vtable)._51_get_Item.methodPtr)
                     (AELAFOPLMOP,KGLJICLJHEL,(AELAFOPLMOP->klass->vtable)._51_get_Item.method);
  if (NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                               (NMONNKBNOCM,KGLJICLJHEL,
                                (NMONNKBNOCM->klass->vtable)._51_get_Item.method);
    if (plVar4 == (long *)0x0) {
      bVar2 = false;
    }
    else {
      __this = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034c3554;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_11379/*"RewriteTemplates"*/,(MethodInfo *)0x0);
      bVar2 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
    }
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    if (bVar2 != false) {
      return;
    }
    JHMENEKPIBO = (System_Xml_XmlNode_o *)
                  (*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                            (NMONNKBNOCM,KGLJICLJHEL,
                             (NMONNKBNOCM->klass->vtable)._51_get_Item.method);
    if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
      EIABCPKDEBD__DGPOFACHGMP(NMONNKBNOCM,pSVar3,(MethodInfo *)0x0);
      return;
    }
    plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_034c33f0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c33f0:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar7 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_034c34f4;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_034c34dc;
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_034c3450;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3450:
        pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
             ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar3);
          }
        }
        EIABCPKDEBD__DGPOFACHGMP(JHMENEKPIBO,pSVar3,(MethodInfo *)0x0);
      } while( true );
    }
  }
LAB_034c3554:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_034c34dc:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_034c352c;
    }
  }
LAB_034c34f4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034c352c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== private static void PPMHALAEKLH(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE)  [RVA 0x33C3D84]
// HFLNADKHFLG$$PPMHALAEKLH @ RVA 0x33C3D84

/* WARNING: Removing unreachable block (ram,0x034c3fb4) */

void HFLNADKHFLG__PPMHALAEKLH
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04567de1 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567de1 = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_034c3e68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c3e68:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_034c3f64;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_034c3ec8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3ec8:
    JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
         ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JOHFLOEABJL);
      }
    }
    EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JOHFLOEABJL,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_034c3f80;
    }
  }
LAB_034c3f64:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034c3f80:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== public static void NKLGCNHLBAF(string LFGKEPCBPKF, XmlDocument BAHGPKGMMPC)  [RVA 0x33C2390]
// HFLNADKHFLG$$NKLGCNHLBAF @ RVA 0x33C2390

/* WARNING: Removing unreachable block (ram,0x034c2764) */
/* WARNING: Removing unreachable block (ram,0x034c2814) */

void HFLNADKHFLG__NKLGCNHLBAF
               (System_String_o *LFGKEPCBPKF,System_Xml_XmlDocument_o *BAHGPKGMMPC,
               MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *pSVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL;
  System_Collections_Generic_List_string__o *FHOOAEFKILG;
  long *plVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Xml_XmlNode_o *JGHIJMJNJLE;
  System_Xml_XmlElement_o *pSVar6;
  undefined8 *puVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04567de2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12865/*"Templates"*/);
    FUN_01bab630(&StringLiteral_9222/*"Moves"*/);
    FUN_01bab630(&StringLiteral_9225/*"Movesxml"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_13926/*"Triggers"*/);
    DAT_04567de2 = 1;
  }
  pMVar8 = (MethodInfo *)0x1;
  pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC(LFGKEPCBPKF,StringLiteral_1/*""*/,0,true,true,false,(MethodInfo *)0x0)
  ;
  if (pSVar2 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  PHOLAJOMLEL = (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_TypeInfo
                                  );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>__ctor__);
  FHOOAEFKILG = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)FHOOAEFKILG,
             Method_System_Collections_Generic_List<string>__ctor__);
  plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar2,StringLiteral_9225/*"Movesxml"*/,(pSVar2->klass->vtable)._51_get_Item.method)
  ;
  if (plVar3 != (long *)0x0) {
    pSVar4 = (System_Xml_XmlNode_o *)
             (**(code **)(*plVar3 + 0x468))
                       (plVar3,StringLiteral_12865/*"Templates"*/,*(undefined8 *)(*plVar3 + 0x470));
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_9225/*"Movesxml"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar5 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar3 + 0x468))
                         (plVar3,StringLiteral_9222/*"Moves"*/,*(undefined8 *)(*plVar3 + 0x470));
      plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar2,StringLiteral_9225/*"Movesxml"*/,
                                  (pSVar2->klass->vtable)._51_get_Item.method);
      if (plVar3 != (long *)0x0) {
        JGHIJMJNJLE = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar3 + 0x468))
                                (plVar3,StringLiteral_13926/*"Triggers"*/,*(undefined8 *)(*plVar3 + 0x470));
        pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(BAHGPKGMMPC,StringLiteral_9225/*"Movesxml"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)pSVar6,pSVar5,(MethodInfo *)0x0);
        if ((pSVar5 != (System_Xml_XmlNode_o *)0x0) &&
           (plVar3 = (long *)(*(pSVar5->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (pSVar5,(pSVar5->klass->vtable)._13_get_ChildNodes.method),
           plVar3 != (long *)0x0)) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_034c2634;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c2634:
            uVar10 = (*(code *)*puVar7)(plVar3,puVar7[1]);
            if ((uVar10 & 1) == 0) {
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              if (plVar3 == (long *)0x0) goto LAB_034c2758;
              lVar9 = *plVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_034c2730;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_034c2718;
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_034c2694;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c2694:
            pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar3,puVar7[1]);
            if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64();
              }
            }
            HFLNADKHFLG__AAJAEHMJCPM(pSVar5,pSVar4,PHOLAJOMLEL,FHOOAEFKILG,pMVar8);
          } while( true );
        }
      }
    }
  }
  goto LAB_034c280c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_034c2718:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_034c274c;
    }
  }
LAB_034c2730:
  puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034c274c:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
LAB_034c2758:
  if (BAHGPKGMMPC != (System_Xml_XmlDocument_o *)0x0) {
    pSVar5 = (System_Xml_XmlNode_o *)
             (*(BAHGPKGMMPC->klass->vtable)._51_get_Item.methodPtr)
                       (BAHGPKGMMPC,StringLiteral_9225/*"Movesxml"*/,
                        (BAHGPKGMMPC->klass->vtable)._51_get_Item.method);
    pMVar8 = (MethodInfo *)0x0;
    pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(pSVar5,StringLiteral_12865/*"Templates"*/,(MethodInfo *)0x0);
    HFLNADKHFLG__LANCGJALKOC((System_Xml_XmlNode_o *)pSVar6,pSVar4,pMVar8);
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(BAHGPKGMMPC->klass->vtable)._51_get_Item.methodPtr)
                       (BAHGPKGMMPC,StringLiteral_9225/*"Movesxml"*/,
                        (BAHGPKGMMPC->klass->vtable)._51_get_Item.method);
    pMVar8 = (MethodInfo *)0x0;
    pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(pSVar4,StringLiteral_13926/*"Triggers"*/,(MethodInfo *)0x0);
    HFLNADKHFLG__PPMHALAEKLH((System_Xml_XmlNode_o *)pSVar6,JGHIJMJNJLE,pMVar8);
    HFLNADKHFLG__GFFMEMGCOAG(BAHGPKGMMPC,method_00);
    return;
  }
LAB_034c280c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void DNKBNOPCLII(List<MGNDHCBAPEN<string, XmlNode>> PHOLAJOMLEL)  [RVA 0x33C2BD4]
// HFLNADKHFLG$$DNKBNOPCLII @ RVA 0x33C2BD4

void HFLNADKHFLG__DNKBNOPCLII
               (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  int index;
  int32_t index_00;
  Il2CppClass *a;
  void *pvVar5;
  
  if ((DAT_04567de3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__);
    DAT_04567de3 = 1;
  }
  if (PHOLAJOMLEL == (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)0x0) {
LAB_034c2d10:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar4 = (PHOLAJOMLEL->fields)._size;
  if (0 < iVar4) {
    index = 0;
    do {
      iVar1 = index + 1;
      index_00 = iVar1;
      if (iVar1 < iVar4) {
        do {
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                             );
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
          a = pIVar3[1].klass;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                             );
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
                    /* try { // try from 034c2c84 to 035c2cab has its CatchHandler @ 034c30dc */
          bVar2 = System_String__op_Equality
                            ((System_String_o *)a,(System_String_o *)pIVar3[1].klass,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                               );
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
            pvVar5 = pIVar3[1].monitor;
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                               );
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034c2d10;
            if (pvVar5 == pIVar3[1].monitor) {
              System_Collections_Generic_List<object>__RemoveAt
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                         Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_RemoveAt__
                        );
              index_00 = index_00 + -1;
            }
          }
                    /* try { // try from 034c2ce0 to 035c2d1b has its CatchHandler @ 034c30e0 */
          iVar4 = (PHOLAJOMLEL->fields)._size;
          index_00 = index_00 + 1;
        } while (index_00 < iVar4);
      }
      index = iVar1;
    } while (iVar1 < iVar4);
  }
  return;
}


// ===== private static void LANCGJALKOC(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE)  [RVA 0x33C4078]
// HFLNADKHFLG$$LANCGJALKOC @ RVA 0x33C4078

/* WARNING: Removing unreachable block (ram,0x034c4358) */

void HFLNADKHFLG__LANCGJALKOC
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  System_Xml_XmlElement_o *pSVar5;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04567de4 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567de4 = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034c41a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c41a0:
    uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_034c42f4;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_034c4200;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c4200:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar4);
      }
    }
    pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(KENFFDHLNDA,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar5,StringLiteral_9327/*"Name"*/,pSVar6,(pSVar5->klass->vtable)._66_SetAttribute.method);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_034c4310;
    }
  }
LAB_034c42f4:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034c4310:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

