// TypeDefIndex 3117
// Namespace: 
// public class PFECHOJADFA
// Fields:
//   private List<OMNMIEMIMKC> INAJMPIJJOG; // 0x10
//   private List<PKKLIJLIKGF> PAPANCDPPIF; // 0x18

// ===== public bool BNNIDPDMOIL(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x34CD864]
// PFECHOJADFA$$BNNIDPDMOIL @ RVA 0x34CD864

bool PFECHOJADFA__BNNIDPDMOIL
               (PFECHOJADFA_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  ulong uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568692 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__,
                 NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA);
                    /* try { // try from 035cd898 to 036cd89f has its CatchHandler @ 035cd8f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
                    /* try { // try from 035cd8ac to 036cd8b7 has its CatchHandler @ 035cd8ec */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_get_Current__);
                    /* try { // try from 035cd8b8 to 036cd8df has its CatchHandler @ 035cd670 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
    DAT_04568692 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035cd8e0 to 036cd8e3 has its CatchHandler @ 035cd8e8 */
                    /* try { // try from 035cd8e4 to 036cd907 has its CatchHandler @ 035cd670 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cd8e0 with catch @ 035cd8e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cd8ac with catch @ 035cd8ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cd898 with catch @ 035cd8f0
                        */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_035cd934;
    }
                    /* try { // try from 035cd908 to 036cd90b has its CatchHandler @ 035cd92c */
                    /* try { // try from 035cd90c to 036cd933 has its CatchHandler @ 035cd670 */
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                      (local_48.fields._current,NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA,
                       (local_48.fields._current)->klass->vtable[4].method);
  } while ((uVar2 & 1) != 0);
  iVar3 = 4;
                    /* catch() { ... } // from try @ 035cd908 with catch @ 035cd92c */
LAB_035cd934:
                    /* try { // try from 035cd934 to 036cd93b has its CatchHandler @ 035cd950 */
                    /* try { // try from 035cd93c to 036cd947 has its CatchHandler @ 035cd670 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__);
                    /* try { // try from 035cd948 to 036cd94f has its CatchHandler @ 035cd950 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035cd934 with catch @ 035cd950
                       catch(type#2 @ 00000000) { ... } // from try @ 035cd948 with catch @ 035cd950
                        */
                    /* try { // try from 035cd954 to 036cdb0b has its CatchHandler @ 035cd954
                       catch() { ... } // from try @ 035cd954 with catch @ 035cd954
                       catch() { ... } // from try @ 035cdbfc with catch @ 035cd954
                       catch() { ... } // from try @ 035cdc9c with catch @ 035cd954
                       catch() { ... } // from try @ 035cdca4 with catch @ 035cd954
                       catch() { ... } // from try @ 035cdd58 with catch @ 035cd954 */
  return iVar3 != 4;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x34CD9D8]
// PFECHOJADFA$$.ctor @ RVA 0x34CD9D8

/* WARNING: Removing unreachable block (ram,0x035cdfbc) */
/* WARNING: Removing unreachable block (ram,0x035cdfb0) */

void PFECHOJADFA___ctor(PFECHOJADFA_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  System_Collections_Generic_List_OMNMIEMIMKC__o *pSVar7;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar8;
  System_Xml_XmlNode_o *pSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  OMNMIEMIMKC_o *item;
  long *plVar12;
  undefined8 *puVar13;
  PKKLIJLIKGF_o *__this_00;
  System_Collections_IEnumerator_c *pSVar14;
  OMNMIEMIMKC_array *pOVar15;
  long lVar16;
  PKKLIJLIKGF_array *pPVar17;
  ulong uVar18;
  int32_t *piVar19;
  int *piVar20;
  System_Collections_Generic_List_PKKLIJLIKGF__o **ppSVar21;
  PFECHOJADFA_Fields *pPVar22;
  
  if ((DAT_04568693 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<OMNMIEMIMKC>_TypeInfo);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    DAT_04568693 = 1;
  }
  pSVar7 = (System_Collections_Generic_List_OMNMIEMIMKC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OMNMIEMIMKC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>__ctor__);
  pPVar22 = &__this->fields;
  pPVar22->INAJMPIJJOG = pSVar7;
  thunk_FUN_01c20e04(pPVar22,pSVar7);
  pSVar8 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  ppSVar21 = &(__this->fields).PAPANCDPPIF;
  *ppSVar21 = pSVar8;
  thunk_FUN_01c20e04(ppSVar21,pSVar8);
                    /* try { // try from 035cdb0c to 036cdb33 has its CatchHandler @ 035cdcc0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar9 = (System_Xml_XmlNode_o *)
           (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                     (JHMENEKPIBO,StringLiteral_4577/*"Conditions"*/,
                      (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
    pSVar10 = System_Xml_XmlNode__GetEnumerator(pSVar9,(MethodInfo *)0x0);
    if (pSVar10 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar14 = pSVar10->klass;
      uVar2._0_1_ = (pSVar14->_2).rank;
      uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar18 = (ulong)uVar2;
      if (uVar18 != 0) {
        piVar19 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar11 = pSVar14->vtable + *piVar19;
            goto LAB_035cdbbc;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
                    /* try { // try from 035cdb9c to 036cdbe3 has its CatchHandler @ 035cdcc4 */
        } while (uVar18 != 0);
      }
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,0)
      ;
LAB_035cdbbc:
      uVar18 = (*pVVar11->methodPtr)(pSVar10,pVVar11->method);
      if ((uVar18 & 1) == 0) {
                    /* try { // try from 035cdcd4 to 036cdcd7 has its CatchHandler @ 035cdce8 */
        plVar12 = (long *)thunk_FUN_01bda71c(pSVar10,System_IDisposable_TypeInfo);
        if (plVar12 == (long *)0x0) break;
        lVar16 = *plVar12;
                    /* catch() { ... } // from try @ 035cdcd4 with catch @ 035cdce8 */
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_035cdd10;
                    /* try { // try from 035cdcf0 to 036cdd57 has its CatchHandler @ 035cdd6c */
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_035cdcf8;
      }
      pSVar14 = pSVar10->klass;
      uVar3._0_1_ = (pSVar14->_2).rank;
      uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
      uVar18 = (ulong)uVar3;
      if (uVar18 != 0) {
        piVar19 = &((pSVar14->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar11 = pSVar14->vtable + (*piVar19 + 1);
            goto LAB_035cdc1c;
          }
          uVar18 = uVar18 - 1;
                    /* try { // try from 035cdbf4 to 036cdbfb has its CatchHandler @ 035cdcb4 */
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
                    /* try { // try from 035cdbfc to 036cdc8f has its CatchHandler @ 035cd954 */
      pVVar11 = (VirtualInvokeData *)FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,1)
      ;
LAB_035cdc1c:
      pSVar9 = (System_Xml_XmlNode_o *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
      if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar9->klass->_2).naturalAligment < bVar1) ||
           ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
      item = OMNMIEMIMKC__EOHMFJFFFIN(pSVar9,(MethodInfo *)0x0);
      lVar16 = Method_System_Collections_Generic_List<OMNMIEMIMKC>_Add__;
      if (item != (OMNMIEMIMKC_o *)0x0) {
        pSVar7 = pPVar22->INAJMPIJJOG;
        if (pSVar7 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pOVar15 = (pSVar7->fields)._items;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (pOVar15 == (OMNMIEMIMKC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar6 = (pSVar7->fields)._size;
                    /* try { // try from 035cdc90 to 036cdc97 has its CatchHandler @ 035cdcb8 */
        if (uVar6 < (uint)pOVar15->max_length) {
                    /* try { // try from 035cdc98 to 036cdc9b has its CatchHandler @ 035cdcb0 */
                    /* try { // try from 035cdc9c to 036cdc9f has its CatchHandler @ 035cd954 */
                    /* try { // try from 035cdca0 to 036cdca3 has its CatchHandler @ 035cdcac */
          (pSVar7->fields)._size = uVar6 + 1;
                    /* try { // try from 035cdca4 to 036cdcd3 has its CatchHandler @ 035cd954 */
          pOVar15->m_Items[(int)uVar6] = item;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdca0 with catch @ 035cdcac
                        */
          thunk_FUN_01c20e04(pOVar15->m_Items + (int)uVar6);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdc98 with catch @ 035cdcb0
                        */
        }
        else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdbf4 with catch @ 035cdcb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdc90 with catch @ 035cdcb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdb68 with catch @ 035cdcbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdb0c with catch @ 035cdcc0
                        */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cdb9c with catch @ 035cdcc4
                        */
        }
      }
    } while( true );
  }
  goto LAB_035cdd3c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_035cdcf8:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_035cdd2c;
    }
  }
LAB_035cdd10:
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_035cdd2c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_035cdd3c:
                    /* try { // try from 035cdd58 to 036cdd63 has its CatchHandler @ 035cd954 */
  pSVar9 = (System_Xml_XmlNode_o *)
           (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                     (JHMENEKPIBO,StringLiteral_5703/*"Enchantments"*/,
                      (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if (pSVar9 == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
                    /* try { // try from 035cdd64 to 036cdd6b has its CatchHandler @ 035cdd6c */
  pSVar10 = System_Xml_XmlNode__GetEnumerator(pSVar9,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035cdcf0 with catch @ 035cdd6c
                       catch(type#2 @ 00000000) { ... } // from try @ 035cdd64 with catch @ 035cdd6c
                        */
  if (pSVar10 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar14 = pSVar10->klass;
    uVar4._0_1_ = (pSVar14->_2).rank;
    uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
    uVar18 = (ulong)uVar4;
    if (uVar18 != 0) {
      piVar19 = &((pSVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar11 = pSVar14->vtable + *piVar19;
          goto LAB_035cdddc;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_035cdddc:
    uVar18 = (*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if ((uVar18 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_01bda71c(pSVar10,System_IDisposable_TypeInfo);
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar16 = *plVar12;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 == 0) goto LAB_035cdf44;
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    pSVar14 = pSVar10->klass;
    uVar5._0_1_ = (pSVar14->_2).rank;
    uVar5._1_1_ = (pSVar14->_2).minimumAlignment;
    uVar18 = (ulong)uVar5;
    if (uVar18 != 0) {
      piVar19 = &((pSVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar11 = pSVar14->vtable + (*piVar19 + 1);
          goto LAB_035cde3c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar11 = (VirtualInvokeData *)FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_035cde3c:
    pSVar9 = (System_Xml_XmlNode_o *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (pSVar9 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar9->klass->_2).naturalAligment < bVar1) ||
         ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar9);
      }
    }
    pSVar8 = *ppSVar21;
    __this_00 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
    PKKLIJLIKGF___ctor(__this_00,pSVar9,(MethodInfo *)0x0);
    lVar16 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
    if (pSVar8 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar17 = (pSVar8->fields)._items;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (pPVar17 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar6 = (pSVar8->fields)._size;
    if (uVar6 < (uint)pPVar17->max_length) {
      (pSVar8->fields)._size = uVar6 + 1;
      pPVar17->m_Items[(int)uVar6] = __this_00;
      thunk_FUN_01c20e04(pPVar17->m_Items + (int)uVar6,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_035cdf60;
    }
  }
LAB_035cdf44:
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_035cdf60:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return;
}


// ===== public List<PKKLIJLIKGF> FIAHMKOGKNH()  [RVA 0x34CE144]
// PFECHOJADFA$$FIAHMKOGKNH @ RVA 0x34CE144

System_Collections_Generic_List_PKKLIJLIKGF__o *
PFECHOJADFA__FIAHMKOGKNH(PFECHOJADFA_o *__this,MethodInfo *method)

{
  return (__this->fields).PAPANCDPPIF;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x34CE14C]
// PFECHOJADFA$$RandomizeObscuredVars @ RVA 0x34CE14C

void PFECHOJADFA__RandomizeObscuredVars(PFECHOJADFA_o *__this,MethodInfo *method)

{
  System_Action_OMNMIEMIMKC__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  System_Action_OMNMIEMIMKC__o *action;
  
  if ((DAT_04568694 & 1) == 0) {
    FUN_01bab630(&System_Action<OMNMIEMIMKC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    FUN_01bab630(&Method_PFECHOJADFA_<>c_EKMLLOCFPGP__);
    FUN_01bab630(&PFECHOJADFA_<>c_TypeInfo);
    DAT_04568694 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).INAJMPIJJOG;
  if ((PFECHOJADFA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PFECHOJADFA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = PFECHOJADFA_<>c_TypeInfo->static_fields->__9__8_0;
  if (action == (System_Action_OMNMIEMIMKC__o *)0x0) {
    if ((PFECHOJADFA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PFECHOJADFA_<>c_TypeInfo,method);
    }
    action = (System_Action_OMNMIEMIMKC__o *)thunk_FUN_01bda818(System_Action<OMNMIEMIMKC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &PFECHOJADFA_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<OMNMIEMIMKC> MFIECKACLFG()  [RVA 0x34CE250]
// PFECHOJADFA$$MFIECKACLFG @ RVA 0x34CE250

System_Collections_Generic_List_OMNMIEMIMKC__o *
PFECHOJADFA__MFIECKACLFG(PFECHOJADFA_o *__this,MethodInfo *method)

{
  return (__this->fields).INAJMPIJJOG;
}

