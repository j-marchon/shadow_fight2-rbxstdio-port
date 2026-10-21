// TypeDefIndex 876
// Namespace: 
// public class IPEAKKBOJCA : EAAHMDAMHNI
// Fields:
//   private const string PAKPAFMGBPE = "And";
//   private const string ECACOCKENDA = "Or";
//   private string FDKHPNLBCGM; // 0x20
//   private List<EAAHMDAMHNI> KDIMDBHMBEM; // 0x28

// ===== public void .ctor()  [RVA 0x308F9EC]
// IPEAKKBOJCA$$.ctor @ RVA 0x308F9EC

void IPEAKKBOJCA___ctor(IPEAKKBOJCA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_EAAHMDAMHNI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566091 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo);
    DAT_04566091 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_EAAHMDAMHNI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  EAAHMDAMHNI___ctor((EAAHMDAMHNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void GIENGNEGHPJ(ABMJNMFPDEJ APOLFFJGBEO)  [RVA 0x308FA74]
// IPEAKKBOJCA$$GIENGNEGHPJ @ RVA 0x308FA74

void IPEAKKBOJCA__GIENGNEGHPJ(IPEAKKBOJCA_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566092 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    DAT_04566092 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  EAAHMDAMHNI__GIENGNEGHPJ((EAAHMDAMHNI_o *)__this,APOLFFJGBEO,(MethodInfo *)0x0);
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                (local_48.fields._current,APOLFFJGBEO.fields.LHNJNJMBLJM,
                 APOLFFJGBEO.fields.EMCFCMFGPME,(local_48.fields._current)->klass->vtable[6].method)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x308FBE0]
// IPEAKKBOJCA$$HNIHOIAMDPC @ RVA 0x308FBE0

/* WARNING: Removing unreachable block (ram,0x0318fee4) */

void IPEAKKBOJCA__HNIHOIAMDPC
               (IPEAKKBOJCA_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *IIBFFEPEHPF_00;
  EAAHMDAMHNI_o *item;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_01;
  long lVar6;
  EAAHMDAMHNI_array *pEVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04566093 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2948/*"And"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_04566093 = 1;
  }
  if ((IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                            (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_2948/*"And"*/,(MethodInfo *)0x0);
    (__this->fields).FDKHPNLBCGM = pSVar3;
    thunk_FUN_01c20e04();
    plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0318fd40;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
                    /* try { // try from 0318fd20 to 0328fdc7 has its CatchHandler @ 0318fd20
                       catch() { ... } // from try @ 0318fd20 with catch @ 0318fd20
                       catch() { ... } // from try @ 0318fe08 with catch @ 0318fd20
                       catch() { ... } // from try @ 0318fe94 with catch @ 0318fd20
                       catch() { ... } // from try @ 0318ff2c with catch @ 0318fd20 */
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318fd40:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0318fe90;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0318fe78;
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0318fda0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0318fda0:
        IIBFFEPEHPF_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (IIBFFEPEHPF_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0318fdc8 to 0328fdf3 has its CatchHandler @ 0318fe9c */
          if (((IIBFFEPEHPF_00->klass->_2).naturalAligment < bVar1) ||
             ((IIBFFEPEHPF_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = EAAHMDAMHNI__JCCANOCMAKD(IIBFFEPEHPF_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__;
        __this_01 = (__this->fields).KDIMDBHMBEM;
        if (__this_01 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pEVar7 = (__this_01->fields)._items;
                    /* try { // try from 0318fe00 to 0328fe07 has its CatchHandler @ 0318fe94 */
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pEVar7 == (EAAHMDAMHNI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0318fe08 to 0328fe8f has its CatchHandler @ 0318fd20 */
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pEVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pEVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pEVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0318fe78:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0318feac;
    }
  }
LAB_0318fe90:
                    /* try { // try from 0318fe90 to 0328fe93 has its CatchHandler @ 0318fe98 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318fe00 with catch @ 0318fe94
                       try { // try from 0318fe94 to 0328feb3 has its CatchHandler @ 0318fd20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318fe90 with catch @ 0318fe98
                        */
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318fdc8 with catch @ 0318fe9c
                        */
LAB_0318feac:
                    /* try { // try from 0318feb4 to 0328feb7 has its CatchHandler @ 0318fecc */
  (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch() { ... } // from try @ 0318feb4 with catch @ 0318fecc */
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x308FFB0]
// IPEAKKBOJCA$$RandomizeObscuredVars @ RVA 0x308FFB0

void IPEAKKBOJCA__RandomizeObscuredVars(IPEAKKBOJCA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566094 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    DAT_04566094 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[7].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[7].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public override bool DGCODECJJCC()  [RVA 0x3090100]
// IPEAKKBOJCA$$DGCODECJJCC @ RVA 0x3090100

bool IPEAKKBOJCA__DGCODECJJCC(IPEAKKBOJCA_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  byte bVar3;
  System_Collections_Generic_List_EAAHMDAMHNI__o *pSVar4;
  System_Exception_o *__this_00;
  undefined8 uVar5;
  System_String_o *str1;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04566095 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_2948/*"And"*/);
    FUN_01bab630(&StringLiteral_9975/*"Or"*/);
    DAT_04566095 = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields).FDKHPNLBCGM;
  bVar2 = System_String__op_Equality(pSVar6,StringLiteral_2948/*"And"*/,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = (__this->fields).KDIMDBHMBEM;
    if (pSVar4 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
LAB_031902e0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      pIVar1 = local_40.fields._current;
      if (!bVar2) goto LAB_031902b0;
      if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = (*(local_40.fields._current)->klass->vtable[4].methodPtr)
                        (local_40.fields._current,
                         (local_40.fields._current)->klass->vtable[4].method);
    } while (((bVar3 ^ *(char *)&pIVar1[1].monitor != '\0') & 1) != 0);
LAB_03190204:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    bVar2 = false;
  }
  else {
    bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9975/*"Or"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      str1 = (__this->fields).FDKHPNLBCGM;
      pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_15597/*"[TacticConditionOperator] Unhandled operator type : "*/);
      pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      System_Exception___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bb9178(&Method_IPEAKKBOJCA_DGCODECJJCC__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar5);
    }
    pSVar4 = (__this->fields).KDIMDBHMBEM;
    if (pSVar4 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) goto LAB_031902e0;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      pIVar1 = local_40.fields._current;
      if (!bVar2) goto LAB_03190204;
      if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = (*(local_40.fields._current)->klass->vtable[4].methodPtr)
                        (local_40.fields._current,
                         (local_40.fields._current)->klass->vtable[4].method);
    } while ((bool)(bVar3 & 1) == (*(char *)&pIVar1[1].monitor != '\0'));
LAB_031902b0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    bVar2 = true;
  }
  return bVar2;
}

