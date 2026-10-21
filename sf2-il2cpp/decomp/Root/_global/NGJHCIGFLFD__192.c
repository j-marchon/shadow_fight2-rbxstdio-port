// TypeDefIndex 192
// Namespace: 
// public class NGJHCIGFLFD : OANBNKOOJFH
// Fields:
//   public NGJHCIGFLFD.EOIMBBNLJGI BGHFADDGPAD; // 0x18
//   private List<OANBNKOOJFH> KDIMDBHMBEM; // 0x20

// ===== public void NIDKNDMBJNB(OANBNKOOJFH MLNEFBDGKEK)  [RVA 0x3117204]
// NGJHCIGFLFD$$NIDKNDMBJNB @ RVA 0x3117204

void NGJHCIGFLFD__NIDKNDMBJNB(NGJHCIGFLFD_o *__this,OANBNKOOJFH_o *MLNEFBDGKEK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  OANBNKOOJFH_array *pOVar3;
  
  if ((DAT_045665c0 & 1) == 0) {
                    /* try { // try from 03217228 to 0331722f has its CatchHandler @ 0321742c */
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__);
    DAT_045665c0 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* try { // try from 0321723c to 03317247 has its CatchHandler @ 03217428 */
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (OANBNKOOJFH_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = MLNEFBDGKEK;
                    /* try { // try from 03217288 to 03317297 has its CatchHandler @ 03217430 */
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,MLNEFBDGKEK);
        return;
      }
                    /* try { // try from 03217298 to 033172a3 has its CatchHandler @ 03217420 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)MLNEFBDGKEK,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDDOJNBEGNE(XmlNode MNPCOGBCAED)  [RVA 0x31172B0]
// NGJHCIGFLFD$$NDDOJNBEGNE @ RVA 0x31172B0

/* WARNING: Removing unreachable block (ram,0x03217588) */

void NGJHCIGFLFD__NDDOJNBEGNE
               (NGJHCIGFLFD_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  OANBNKOOJFH_o *item;
  System_Collections_Generic_List_OANBNKOOJFH__o *pSVar5;
  long lVar6;
  OANBNKOOJFH_array *pOVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045665c1 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 032172e4 to 033172f3 has its CatchHandler @ 03217430 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__);
                    /* try { // try from 032172f8 to 03317303 has its CatchHandler @ 0321741c */
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045665c1 = 1;
  }
  pSVar5 = (__this->fields).KDIMDBHMBEM;
  if (pSVar5 != (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
                    /* try { // try from 0321734c to 03317363 has its CatchHandler @ 03217430 */
    if ((MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (MNPCOGBCAED,
                                    (MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
                    /* try { // try from 03217368 to 03317387 has its CatchHandler @ 03217418 */
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 032173b4 to 033173cf has its CatchHandler @ 03217410 */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_032173e0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 032173d0 to 03317407 has its CatchHandler @ 03217104 */
LAB_032173e0:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_03217534;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0321751c;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 03217408 to 0331740b has its CatchHandler @ 03217424 */
                    /* try { // try from 0321740c to 03317447 has its CatchHandler @ 03217104 */
                    /* catch() { ... } // from try @ 032173b4 with catch @ 03217410 */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 03217288 with catch @ 03217430
                       catch() { ... } // from try @ 032172e4 with catch @ 03217430
                       catch() { ... } // from try @ 0321734c with catch @ 03217430 */
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03217440;
            }
                    /* catch() { ... } // from try @ 0321738c with catch @ 03217414 */
            uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 03217368 with catch @ 03217418 */
            piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 032172f8 with catch @ 0321741c */
          } while (uVar8 != 0);
        }
                    /* catch() { ... } // from try @ 03217298 with catch @ 03217420 */
                    /* catch() { ... } // from try @ 03217408 with catch @ 03217424 */
                    /* catch() { ... } // from try @ 0321723c with catch @ 03217428 */
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
                    /* catch() { ... } // from try @ 03217228 with catch @ 0321742c */
LAB_03217440:
                    /* try { // try from 03217448 to 0331744b has its CatchHandler @ 03217474 */
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 0321744c to 03317483 has its CatchHandler @ 03217104 */
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03217448 with catch @ 03217474 */
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = CKMOFDBAEKH__PLANLODIOHG(AHDGNOJPPIB,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__;
                    /* try { // try from 03217484 to 0331748b has its CatchHandler @ 032174a0 */
        if (item != (OANBNKOOJFH_o *)0x0) {
                    /* try { // try from 0321748c to 03317497 has its CatchHandler @ 03217104 */
          pSVar5 = (__this->fields).KDIMDBHMBEM;
          if (pSVar5 == (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03217498 to 0331749f has its CatchHandler @ 032174a0 */
          pOVar7 = (pSVar5->fields)._items;
                    /* catch() { ... } // from try @ 03217484 with catch @ 032174a0
                       catch() { ... } // from try @ 03217498 with catch @ 032174a0 */
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pOVar7 == (OANBNKOOJFH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pOVar7->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pOVar7->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pOVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
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
LAB_0321751c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03217550;
    }
  }
LAB_03217534:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03217550:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public override bool EPBENPDCBFE(IFBJEEAJGEO AHEFOIOKDOK)  [RVA 0x3117654]
// NGJHCIGFLFD$$EPBENPDCBFE @ RVA 0x3117654

bool NGJHCIGFLFD__EPBENPDCBFE(NGJHCIGFLFD_o *__this,IFBJEEAJGEO_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  System_String_o *pSVar4;
  undefined1 local_68 [8];
  void *pvStack_60;
  int local_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  Il2CppObject *local_40;
  
  if ((DAT_045665c2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NGJHCIGFLFD_EOIMBBNLJGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_4572/*"ConditionOperator::isEqual - wrong type: "*/);
    DAT_045665c2 = 1;
  }
  local_50 = (undefined1  [8])0x0;
  uStack_48._0_4_ = 0;
  uStack_48._4_4_ = 0;
  local_40 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
             (System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
  local_40 = (Il2CppObject *)CONCAT44(uStack_54,local_58);
  uStack_48 = pvStack_60;
  local_50 = local_68;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                       Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
      local_58 = (__this->fields).BGHFADDGPAD;
      if (local_58 == 1) {
        bVar2 = false;
      }
      else {
        if (local_58 != 2) {
          local_68 = (undefined1  [8])NGJHCIGFLFD_EOIMBBNLJGI_TypeInfo;
          pvStack_60 = (void *)0xffffffffffffffff;
          pSVar4 = System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat(StringLiteral_4572/*"ConditionOperator::isEqual - wrong type: "*/,pSVar4,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
          return false;
        }
        bVar2 = true;
      }
      bVar2 = OANBNKOOJFH__PNMBBPHANIK((OANBNKOOJFH_o *)__this,bVar2,(MethodInfo *)0x0);
      return bVar2;
    }
    if (local_40 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar3 = (*local_40->klass->vtable[6].methodPtr)
                      (local_40,AHEFOIOKDOK,local_40->klass->vtable[6].method);
    iVar1 = (__this->fields).BGHFADDGPAD;
    if ((uVar3 & 1) == 0 && iVar1 == 2) break;
    if (iVar1 == 1 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
      bVar2 = OANBNKOOJFH__PNMBBPHANIK((OANBNKOOJFH_o *)__this,true,(MethodInfo *)0x0);
LAB_032177b4:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
      return bVar2;
    }
  }
  bVar2 = OANBNKOOJFH__PNMBBPHANIK((OANBNKOOJFH_o *)__this,false,(MethodInfo *)0x0);
  goto LAB_032177b4;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31178F4]
// NGJHCIGFLFD$$HNIHOIAMDPC @ RVA 0x31178F4

void NGJHCIGFLFD__HNIHOIAMDPC
               (NGJHCIGFLFD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  int32_t iVar4;
  
  if ((DAT_045665c3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4571/*"ConditionOperator::ConditionOperator - wrong type: {0}"*/);
    FUN_01bab630(&StringLiteral_2641/*"AND"*/);
    FUN_01bab630(&StringLiteral_9685/*"OR"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_045665c3 = 1;
  }
  OANBNKOOJFH__HNIHOIAMDPC((OANBNKOOJFH_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(a,StringLiteral_9685/*"OR"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar4 = 1;
      }
      else {
        method_00 = (MethodInfo *)0x0;
        bVar1 = System_String__op_Equality(a,StringLiteral_2641/*"AND"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar4 = 2;
        }
        else {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (args == (System_Object_array *)0x0) goto LAB_03217a94;
          if ((a != (System_String_o *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
            uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar3,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          method_00 = (MethodInfo *)0x0;
          UnityEngine_Debug__LogErrorFormat(StringLiteral_4571/*"ConditionOperator::ConditionOperator - wrong type: {0}"*/,args,(MethodInfo *)0x0);
          iVar4 = 0;
        }
      }
      (__this->fields).BGHFADDGPAD = iVar4;
      NGJHCIGFLFD__NDDOJNBEGNE(__this,AHDGNOJPPIB,method_00);
      return;
    }
  }
LAB_03217a94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3117AA8]
// NGJHCIGFLFD$$.ctor @ RVA 0x3117AA8

void NGJHCIGFLFD___ctor(NGJHCIGFLFD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  System_Collections_Generic_List_OANBNKOOJFH__o **ppSVar1;
  
  if ((DAT_045665c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
    DAT_045665c4 = 1;
  }
  __this_00 = (System_Collections_Generic_List_OANBNKOOJFH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  OANBNKOOJFH___ctor((OANBNKOOJFH_o *)__this,2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03217b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  return;
}


// ===== public override void ENMHDGDKLJD()  [RVA 0x3117B4C]
// NGJHCIGFLFD$$ENMHDGDKLJD @ RVA 0x3117B4C

void NGJHCIGFLFD__ENMHDGDKLJD(NGJHCIGFLFD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045665c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
    DAT_045665c5 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[5].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[5].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x3117C9C]
// NGJHCIGFLFD$$.ctor @ RVA 0x3117C9C

void NGJHCIGFLFD___ctor(NGJHCIGFLFD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  System_Collections_Generic_List_OANBNKOOJFH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
    DAT_045665c6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OANBNKOOJFH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  OANBNKOOJFH___ctor((OANBNKOOJFH_o *)__this,2,(MethodInfo *)0x0);
  (__this->fields).BGHFADDGPAD = 2;
  return;
}

