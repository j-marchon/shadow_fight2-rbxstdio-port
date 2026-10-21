// TypeDefIndex 2201
// Namespace: 
// public class LGFLCMBIFCN
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private List<BFBONKPKBNL> PJGPKMDGOIE; // 0x18

// ===== public void RandomizeObscuredVars()  [RVA 0x32E7100]
// LGFLCMBIFCN$$RandomizeObscuredVars @ RVA 0x32E7100

void LGFLCMBIFCN__RandomizeObscuredVars(LGFLCMBIFCN_o *__this,MethodInfo *method)

{
  System_Action_BFBONKPKBNL__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_BFBONKPKBNL__o *__this_00;
  System_Action_BFBONKPKBNL__o *action;
  
  if ((DAT_04567618 & 1) == 0) {
    FUN_01bab630(&System_Action<BFBONKPKBNL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BFBONKPKBNL>_ForEach__);
    FUN_01bab630(&Method_LGFLCMBIFCN_<>c_IHKPAIEEGDP__);
    FUN_01bab630(&LGFLCMBIFCN_<>c_TypeInfo);
    DAT_04567618 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).PJGPKMDGOIE;
  if ((LGFLCMBIFCN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LGFLCMBIFCN_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = LGFLCMBIFCN_<>c_TypeInfo->static_fields->__9__9_0;
  if (action == (System_Action_BFBONKPKBNL__o *)0x0) {
    if ((LGFLCMBIFCN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LGFLCMBIFCN_<>c_TypeInfo,method);
    }
    action = (System_Action_BFBONKPKBNL__o *)thunk_FUN_01bda818(System_Action<BFBONKPKBNL>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &LGFLCMBIFCN_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_BFBONKPKBNL__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<BFBONKPKBNL>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x32E7204]
// LGFLCMBIFCN$$HCOCAAIGNNL @ RVA 0x32E7204

void LGFLCMBIFCN__HCOCAAIGNNL(LGFLCMBIFCN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x32E720C]
// LGFLCMBIFCN$$.ctor @ RVA 0x32E720C

/* WARNING: Removing unreachable block (ram,0x033e7598) */

void LGFLCMBIFCN___ctor(LGFLCMBIFCN_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_BFBONKPKBNL__o *pSVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  BFBONKPKBNL_o *__this_01;
  long lVar7;
  BFBONKPKBNL_array *pBVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_BFBONKPKBNL__o **ppSVar11;
  
  if ((DAT_04567619 & 1) == 0) {
    FUN_01bab630(&BFBONKPKBNL_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BFBONKPKBNL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BFBONKPKBNL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BFBONKPKBNL>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567619 = 1;
  }
  pSVar3 = (System_Collections_Generic_List_BFBONKPKBNL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<BFBONKPKBNL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<BFBONKPKBNL>__ctor__);
  ppSVar11 = &(__this->fields).PJGPKMDGOIE;
  *ppSVar11 = pSVar3;
  thunk_FUN_01c20e04(ppSVar11,pSVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
    thunk_FUN_01c20e04(&__this->fields,pSVar4);
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_033e73d0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e73d0:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_033e7538;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033e7520;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_033e7430;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e7430:
        JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033e746c to 034e7473 has its CatchHandler @ 033e7628 */
          if (((JHMENEKPIBO_00->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO_00);
          }
        }
        pSVar3 = *ppSVar11;
        __this_01 = (BFBONKPKBNL_o *)thunk_FUN_01bda818(BFBONKPKBNL_TypeInfo);
                    /* try { // try from 033e7480 to 034e748b has its CatchHandler @ 033e7624 */
        BFBONKPKBNL___ctor(__this_01,JHMENEKPIBO_00,(MethodInfo *)0x0);
        lVar7 = Method_System_Collections_Generic_List<BFBONKPKBNL>_Add__;
        if (pSVar3 == (System_Collections_Generic_List_BFBONKPKBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pBVar8 = (pSVar3->fields)._items;
                    /* try { // try from 033e749c to 034e74a7 has its CatchHandler @ 033e7618 */
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (pBVar8 == (BFBONKPKBNL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar3->fields)._size;
                    /* try { // try from 033e74b4 to 034e74bf has its CatchHandler @ 033e7620 */
        if (uVar2 < (uint)pBVar8->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pBVar8->m_Items[(int)uVar2] = __this_01;
          thunk_FUN_01c20e04(pBVar8->m_Items + (int)uVar2,__this_01);
        }
        else {
                    /* try { // try from 033e74d4 to 034e74df has its CatchHandler @ 033e7614 */
                    /* try { // try from 033e74e0 to 034e760b has its CatchHandler @ 033e70e4 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_033e7520:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_033e7554;
    }
  }
LAB_033e7538:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033e7554:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public List<BFBONKPKBNL> LNPEPJINIHN()  [RVA 0x32E7660]
// LGFLCMBIFCN$$LNPEPJINIHN @ RVA 0x32E7660

System_Collections_Generic_List_BFBONKPKBNL__o *
LGFLCMBIFCN__LNPEPJINIHN(LGFLCMBIFCN_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033e7638 with catch @ 033e7660 */
  return (__this->fields).PJGPKMDGOIE;
}


// ===== public BFBONKPKBNL BKBONMDJJBE(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x32E7668]
// LGFLCMBIFCN$$BKBONMDJJBE @ RVA 0x32E7668

BFBONKPKBNL_o *
LGFLCMBIFCN__BKBONMDJJBE(LGFLCMBIFCN_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BFBONKPKBNL__o *__this_00;
  BFBONKPKBNL_o *pBVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 033e7668 to 034e766f has its CatchHandler @ 033e7684 */
                    /* try { // try from 033e7670 to 034e767b has its CatchHandler @ 033e70e4 */
                    /* try { // try from 033e767c to 034e7683 has its CatchHandler @ 033e7684 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e7668 with catch @ 033e7684
                       catch(type#2 @ 00000000) { ... } // from try @ 033e767c with catch @ 033e7684
                        */
  if ((DAT_0456761a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BFBONKPKBNL>_GetEnumerator__);
    DAT_0456761a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PJGPKMDGOIE;
  if (__this_00 == (System_Collections_Generic_List_BFBONKPKBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BFBONKPKBNL>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_MoveNext__);
    pBVar2 = (BFBONKPKBNL_o *)local_48.fields._current;
    if (!bVar1) {
      pBVar2 = (BFBONKPKBNL_o *)0x0;
      break;
    }
    if ((BFBONKPKBNL_o *)local_48.fields._current == (BFBONKPKBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = BFBONKPKBNL__HDHADDGFBDM
                      ((BFBONKPKBNL_o *)local_48.fields._current,NKCMBEFHFII,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_Dispose__);
  return pBVar2;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x32E77C4]
// LGFLCMBIFCN$$KCHJCGEMCGE @ RVA 0x32E77C4

System_String_o * LGFLCMBIFCN__KCHJCGEMCGE(LGFLCMBIFCN_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}

