// TypeDefIndex 1731
// Namespace: 
// public class DBGBHDDCAJC
// Fields:
//   private DBGBHDDCAJC.FODCLBHAEAG JDNKKGPNHPB; // 0x10
//   private List<string> KDIMDBHMBEM; // 0x18

// ===== public static DBGBHDDCAJC.GCALJPMPJFP DHJEDGPHIEL(string KGLJICLJHEL)  [RVA 0x31D8C40]
// DBGBHDDCAJC$$DHJEDGPHIEL @ RVA 0x31D8C40

int32_t DBGBHDDCAJC__DHJEDGPHIEL(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566d00 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    FUN_01bab630(&StringLiteral_6978/*"HIGH"*/);
    FUN_01bab630(&StringLiteral_8719/*"MEDIUM"*/);
    DAT_04566d00 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_8302/*"LOW"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_8719/*"MEDIUM"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6978/*"HIGH"*/,(MethodInfo *)0x0);
      iVar2 = 2;
      if (!bVar1) {
        iVar2 = 3;
      }
    }
  }
  return iVar2;
}


// ===== private static string MBFFGMHMHML(string KDPNKJLDLAG)  [RVA 0x31D8CFC]
// DBGBHDDCAJC$$MBFFGMHMHML @ RVA 0x31D8CFC

System_String_o * DBGBHDDCAJC__MBFFGMHMHML(System_String_o *KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566d01 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    FUN_01bab630(&StringLiteral_8719/*"MEDIUM"*/);
    DAT_04566d01 = 1;
  }
  bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8302/*"LOW"*/,(MethodInfo *)0x0);
  puVar2 = &StringLiteral_8719/*"MEDIUM"*/;
                    /* try { // try from 032d8d54 to 033d8e67 has its CatchHandler @ 032d8d54
                       catch() { ... } // from try @ 032d8d54 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8e90 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8f20 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8f9c with catch @ 032d8d54
                       catch() { ... } // from try @ 032d8fcc with catch @ 032d8d54
                       catch() { ... } // from try @ 032d9014 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d9030 with catch @ 032d8d54
                       catch() { ... } // from try @ 032d9070 with catch @ 032d8d54 */
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8719/*"MEDIUM"*/,(MethodInfo *)0x0),
     puVar2 = &StringLiteral_8302/*"LOW"*/, !bVar1)) {
    puVar2 = &StringLiteral_8719/*"MEDIUM"*/;
  }
  return (System_String_o *)*puVar2;
}


// ===== private void NOEJODPMGEB()  [RVA 0x31D8D80]
// DBGBHDDCAJC$$NOEJODPMGEB @ RVA 0x31D8D80

void DBGBHDDCAJC__NOEJODPMGEB(DBGBHDDCAJC_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
  if ((DAT_04566d02 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DBGBHDDCAJC_FODCLBHAEAG_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10633/*"QualityOption::turnOption - unknown type: {0}"*/);
    DAT_04566d02 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).JDNKKGPNHPB;
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      MGNPHCAAEIO_TypeInfo->static_fields->ONPPMIJCMPH = true;
    }
    else if (iVar1 == 2) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      MGNPHCAAEIO_TypeInfo->static_fields->NJDGNMENDPI = true;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* try { // try from 032d8e68 to 033d8e6f has its CatchHandler @ 032d8fac */
      local_14 = (__this->fields).JDNKKGPNHPB;
                    /* try { // try from 032d8e7c to 033d8e8f has its CatchHandler @ 032d9014 */
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(DBGBHDDCAJC_FODCLBHAEAG_TypeInfo,&local_14);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032d8ef8 to 033d8eff has its CatchHandler @ 032d8fa8 */
        FUN_01bab8c8();
      }
                    /* try { // try from 032d8e90 to 033d8ef7 has its CatchHandler @ 032d8d54 */
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10633/*"QualityOption::turnOption - unknown type: {0}"*/,args,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31D8F0C]
// DBGBHDDCAJC$$.ctor @ RVA 0x31D8F0C

/* WARNING: Removing unreachable block (ram,0x032d9298) */

void DBGBHDDCAJC___ctor(DBGBHDDCAJC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  MethodInfo *method_00;
  long lVar11;
  System_String_array *pSVar12;
  ulong uVar13;
  int *piVar14;
  System_Collections_Generic_List_string__o **ppSVar15;
  
                    /* try { // try from 032d8f0c to 033d8f1f has its CatchHandler @ 032d8fb0 */
                    /* try { // try from 032d8f20 to 033d8f93 has its CatchHandler @ 032d8d54 */
  if ((DAT_04566d03 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 032d8f94 to 033d8f97 has its CatchHandler @ 032d8fa4 */
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 032d8f98 to 033d8f9b has its CatchHandler @ 032d8fa0 */
                    /* try { // try from 032d8f9c to 033d8fc7 has its CatchHandler @ 032d8d54 */
                    /* catch() { ... } // from try @ 032d8f98 with catch @ 032d8fa0 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 032d8f94 with catch @ 032d8fa4 */
                    /* catch() { ... } // from try @ 032d8ef8 with catch @ 032d8fa8 */
    DAT_04566d03 = 1;
  }
                    /* catch() { ... } // from try @ 032d8e68 with catch @ 032d8fac */
                    /* catch() { ... } // from try @ 032d8f0c with catch @ 032d8fb0 */
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar15 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar15 = pSVar4;
                    /* try { // try from 032d8fc8 to 033d8fcb has its CatchHandler @ 032d8ff0 */
                    /* try { // try from 032d8fcc to 033d8fff has its CatchHandler @ 032d8d54 */
  thunk_FUN_01c20e04(ppSVar15,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032d8fc8 with catch @ 032d8ff0 */
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 032d9000 to 033d9013 has its CatchHandler @ 032d9084 */
                    /* catch() { ... } // from try @ 032d8e7c with catch @ 032d9014
                       try { // try from 032d9014 to 033d902b has its CatchHandler @ 032d8d54 */
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    iVar3 = DBGBHDDCAJC__GIOOKIPAIAB(pSVar7,method_00);
    (__this->fields).JDNKKGPNHPB = iVar3;
                    /* try { // try from 032d902c to 033d902f has its CatchHandler @ 032d9058 */
                    /* try { // try from 032d9030 to 033d9067 has its CatchHandler @ 032d8d54 */
    plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                    /* catch() { ... } // from try @ 032d902c with catch @ 032d9058 */
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar8;
                    /* try { // try from 032d907c to 033d9083 has its CatchHandler @ 032d9084 */
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch() { ... } // from try @ 032d9000 with catch @ 032d9084
                       catch() { ... } // from try @ 032d9068 with catch @ 032d9084
                       catch() { ... } // from try @ 032d907c with catch @ 032d9084 */
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_032d90c4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_032d90c4:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_032d9238;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_032d9220;
        }
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_032d9124;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_032d9124:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        pSVar4 = *ppSVar15;
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = pSVar7;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pSVar7,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_032d9220:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_032d9254;
    }
  }
LAB_032d9238:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_032d9254:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


// ===== public void CMGOIFKPPPB()  [RVA 0x31D94E4]
// DBGBHDDCAJC$$CMGOIFKPPPB @ RVA 0x31D94E4

void DBGBHDDCAJC__CMGOIFKPPPB(DBGBHDDCAJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566d04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04566d04 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  b = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)0x0);
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) goto LAB_032d95d0;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current,b,(MethodInfo *)0x0);
  } while (!bVar1);
  DBGBHDDCAJC__NOEJODPMGEB(__this,method_00);
LAB_032d95d0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return;
}


// ===== public static bool JPMFEKNGHJF(string IMJHEANBDDA, string DFEGBKMFBMM)  [RVA 0x31D9660]
// DBGBHDDCAJC$$JPMFEKNGHJF @ RVA 0x31D9660

bool DBGBHDDCAJC__JPMFEKNGHJF
               (System_String_o *IMJHEANBDDA,System_String_o *DFEGBKMFBMM,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  iVar1 = DBGBHDDCAJC__DHJEDGPHIEL(IMJHEANBDDA,(MethodInfo *)DFEGBKMFBMM);
  iVar2 = DBGBHDDCAJC__DHJEDGPHIEL(DFEGBKMFBMM,method_00);
  return iVar2 < iVar1;
}


// ===== public static string IPNPDKDBIGC(DBGBHDDCAJC.GCALJPMPJFP KGLJICLJHEL)  [RVA 0x31D9690]
// DBGBHDDCAJC$$IPNPDKDBIGC @ RVA 0x31D9690

System_String_o * DBGBHDDCAJC__IPNPDKDBIGC(int32_t KGLJICLJHEL,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566d05 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    FUN_01bab630(&StringLiteral_6978/*"HIGH"*/);
    FUN_01bab630(&StringLiteral_9299/*"NONE"*/);
    FUN_01bab630(&StringLiteral_8719/*"MEDIUM"*/);
    DAT_04566d05 = 1;
  }
  if ((uint)KGLJICLJHEL < 3) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_8302/*"LOW"*/_03fc6510)[KGLJICLJHEL];
  }
  else {
    puVar1 = &StringLiteral_9299/*"NONE"*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static string POBBPPFDCJB(string KDPNKJLDLAG)  [RVA 0x31D9710]
// DBGBHDDCAJC$$POBBPPFDCJB @ RVA 0x31D9710

System_String_o * DBGBHDDCAJC__POBBPPFDCJB(System_String_o *KDPNKJLDLAG,MethodInfo *method)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566d06 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    FUN_01bab630(&StringLiteral_6978/*"HIGH"*/);
    FUN_01bab630(&StringLiteral_8719/*"MEDIUM"*/);
    DAT_04566d06 = 1;
  }
  bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8302/*"LOW"*/,(MethodInfo *)0x0);
  puVar2 = &StringLiteral_8719/*"MEDIUM"*/;
  if (!bVar1) {
    bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_8719/*"MEDIUM"*/,(MethodInfo *)0x0);
    puVar2 = &StringLiteral_6978/*"HIGH"*/;
    if ((!bVar1) &&
       (bVar1 = System_String__op_Equality(KDPNKJLDLAG,StringLiteral_6978/*"HIGH"*/,(MethodInfo *)0x0),
       puVar2 = &StringLiteral_8302/*"LOW"*/, !bVar1)) {
      puVar2 = &StringLiteral_6978/*"HIGH"*/;
    }
  }
  return (System_String_o *)*puVar2;
}


// ===== public static DBGBHDDCAJC.FODCLBHAEAG GIOOKIPAIAB(string KGLJICLJHEL)  [RVA 0x31D9370]
// DBGBHDDCAJC$$GIOOKIPAIAB @ RVA 0x31D9370

int32_t DBGBHDDCAJC__GIOOKIPAIAB(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04566d07 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11831/*"SequencesOff"*/);
    FUN_01bab630(&StringLiteral_11126/*"ReduceFPS"*/);
    FUN_01bab630(&StringLiteral_10632/*"QualityOption::getOptionFromString - unknown type: {0}"*/);
    FUN_01bab630(&StringLiteral_10159/*"ParticlesOff"*/);
    DAT_04566d07 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11126/*"ReduceFPS"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_10159/*"ParticlesOff"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11831/*"SequencesOff"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 3;
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((KGLJICLJHEL != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
        thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10632/*"QualityOption::getOptionFromString - unknown type: {0}"*/,args,(MethodInfo *)0x0);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


// ===== public static string CKLKBKIECEF(string KDPNKJLDLAG, string NBBPAKAGEOP)  [RVA 0x31D97BC]
// DBGBHDDCAJC$$CKLKBKIECEF @ RVA 0x31D97BC

System_String_o *
DBGBHDDCAJC__CKLKBKIECEF
          (System_String_o *KDPNKJLDLAG,System_String_o *NBBPAKAGEOP,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)NBBPAKAGEOP;
  if ((DAT_04566d08 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8302/*"LOW"*/);
    DAT_04566d08 = 1;
    method_00 = extraout_x1;
  }
  iVar1 = DBGBHDDCAJC__DHJEDGPHIEL(NBBPAKAGEOP,method_00);
  if (iVar1 - 2U < 2) {
    pSVar2 = DBGBHDDCAJC__POBBPPFDCJB(KDPNKJLDLAG,method_01);
    return pSVar2;
  }
  if (iVar1 == 1) {
    pSVar2 = DBGBHDDCAJC__MBFFGMHMHML(KDPNKJLDLAG,method_01);
    return pSVar2;
  }
  return StringLiteral_8302/*"LOW"*/;
}

