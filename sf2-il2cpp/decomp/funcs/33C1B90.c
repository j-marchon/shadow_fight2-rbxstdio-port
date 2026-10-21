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
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 034c1c58 to 035c1c67 has its CatchHandler @ 034c2108 */
    FUN_01bab630(&StringLiteral_12864);
                    /* try { // try from 034c1c68 to 035c1c73 has its CatchHandler @ 034c2124 */
    FUN_01bab630(&StringLiteral_1);
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
                                (__this,StringLiteral_9327,(MethodInfo *)0x0);
                    /* try { // try from 034c1e80 to 035c1e87 has its CatchHandler @ 034c2080 */
        b_00 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 034c1e88 to 035c1e93 has its CatchHandler @ 034c2094 */
                    /* try { // try from 034c1e94 to 035c1e9f has its CatchHandler @ 034c2098 */
        bVar3 = System_String__op_Equality(StringLiteral_12864,b,(MethodInfo *)0x0);
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

