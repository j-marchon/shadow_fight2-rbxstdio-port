// TypeDefIndex 2557
// Namespace: 
// public class OCABNNJIENC
// Fields:
//   public List<OCABNNJIENC.KMODKLKCHNL> EMJCDJMBIGI; // 0x10

// ===== public float JPONFNMFHGE(string BJEEDJEKAMF)  [RVA 0x339B434]
// OCABNNJIENC$$JPONFNMFHGE @ RVA 0x339B434

float OCABNNJIENC__JPONFNMFHGE
                (OCABNNJIENC_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t PIDMGHLCFAJ;
  System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *__this_01;
  Roster_o *__this_02;
  MethodInfo *method_00;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567c7b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_Dispose__
                );
                    /* try { // try from 0349b468 to 0359b46b has its CatchHandler @ 0349b470 */
                    /* try { // try from 0349b46c to 0359b48b has its CatchHandler @ 0349b368 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b468 with catch @ 0349b470
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_MoveNext__
                );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b414 with catch @ 0349b474
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_GetEnumerator__);
                    /* try { // try from 0349b48c to 0359b48f has its CatchHandler @ 0349b4b8 */
                    /* try { // try from 0349b490 to 0359b4c7 has its CatchHandler @ 0349b368 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c7b = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).EMJCDJMBIGI;
  if (__this_01 == (System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0349b48c with catch @ 0349b4b8 */
                    /* try { // try from 0349b4c8 to 0359b4cf has its CatchHandler @ 0349b4e4 */
                    /* try { // try from 0349b4d0 to 0359b4db has its CatchHandler @ 0349b368 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
                    /* try { // try from 0349b4dc to 0359b4e3 has its CatchHandler @ 0349b4e4 */
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349b4c8 with catch @ 0349b4e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0349b4dc with catch @ 0349b4e4
                        */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_MoveNext__
                      );
    __this_00 = local_50.fields._current;
    if (!bVar1) {
      fVar2 = 0.0;
      goto LAB_0349b588;
    }
    if ((OCABNNJIENC_KMODKLKCHNL_o *)local_50.fields._current == (OCABNNJIENC_KMODKLKCHNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality
                      (((OCABNNJIENC_KMODKLKCHNL_Fields *)((long)local_50.fields._current + 0x10))->
                       BJEEDJEKAMF,BJEEDJEKAMF,(MethodInfo *)0x0);
  } while (!bVar1);
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
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_02 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  PIDMGHLCFAJ = Roster__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0);
  fVar2 = OCABNNJIENC_KMODKLKCHNL__JPONFNMFHGE
                    ((OCABNNJIENC_KMODKLKCHNL_o *)__this_00,PIDMGHLCFAJ,method_00);
LAB_0349b588:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_Dispose__);
  return fVar2;
}


// ===== public void .ctor()  [RVA 0x339B7A8]
// OCABNNJIENC$$.ctor @ RVA 0x339B7A8

void OCABNNJIENC___ctor(OCABNNJIENC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c7c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>__ctor__);
                    /* try { // try from 0349b7e4 to 0359b7ef has its CatchHandler @ 0349b828 */
    FUN_01bab630(&System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_TypeInfo);
                    /* try { // try from 0349b7f0 to 0359b81b has its CatchHandler @ 0349b62c */
    DAT_04567c7c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>__ctor__);
  (__this->fields).EMJCDJMBIGI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0349b81c to 0359b823 has its CatchHandler @ 0349b834 */
                    /* try { // try from 0349b824 to 0359b843 has its CatchHandler @ 0349b62c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b7e4 with catch @ 0349b828
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b738 with catch @ 0349b82c
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x339B830]
// OCABNNJIENC$$HNIHOIAMDPC @ RVA 0x339B830

/* WARNING: Removing unreachable block (ram,0x0349bb78) */

void OCABNNJIENC__HNIHOIAMDPC
               (OCABNNJIENC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *MNPCOGBCAED;
  System_String_o *a;
  OCABNNJIENC_KMODKLKCHNL_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *pSVar6;
  long lVar7;
  OCABNNJIENC_KMODKLKCHNL_array *pOVar8;
  ulong uVar9;
  int *piVar10;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b728 with catch @ 0349b830
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b81c with catch @ 0349b834
                        */
                    /* try { // try from 0349b844 to 0359b847 has its CatchHandler @ 0349b86c */
                    /* try { // try from 0349b848 to 0359b873 has its CatchHandler @ 0349b62c */
  if ((DAT_04567c7d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* catch() { ... } // from try @ 0349b844 with catch @ 0349b86c */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 0349b874 to 0359b87b has its CatchHandler @ 0349b890 */
                    /* try { // try from 0349b87c to 0359b887 has its CatchHandler @ 0349b62c */
    FUN_01bab630(&OCABNNJIENC_KMODKLKCHNL_TypeInfo);
                    /* try { // try from 0349b888 to 0359b88f has its CatchHandler @ 0349b890 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_Add__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349b874 with catch @ 0349b890
                       catch(type#2 @ 00000000) { ... } // from try @ 0349b888 with catch @ 0349b890
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    DAT_04567c7d = 1;
  }
  pSVar6 = (__this->fields).EMJCDJMBIGI;
  if (pSVar6 != (System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *)0x0) {
    length = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0349b990;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0349b990:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0349bb14;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0349bafc;
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0349b9f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0349b9f0:
        MNPCOGBCAED = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (MNPCOGBCAED == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((MNPCOGBCAED->klass->_2).naturalAligment < bVar1) ||
           ((MNPCOGBCAED->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(MNPCOGBCAED);
        }
        a = (System_String_o *)
            (*(MNPCOGBCAED->klass->vtable)._8_unknown.methodPtr)
                      (MNPCOGBCAED,(MNPCOGBCAED->klass->vtable)._8_unknown.method);
        method_00 = (MethodInfo *)0x0;
        bVar3 = System_String__op_Equality(a,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (OCABNNJIENC_KMODKLKCHNL_o *)
                      thunk_FUN_01bda818(OCABNNJIENC_KMODKLKCHNL_TypeInfo);
          OCABNNJIENC_KMODKLKCHNL___ctor(__this_00,MNPCOGBCAED,method_00);
          lVar7 = Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_Add__;
          pSVar6 = (__this->fields).EMJCDJMBIGI;
          if (pSVar6 == (System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pOVar8 == (OCABNNJIENC_KMODKLKCHNL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pOVar8->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pOVar8->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pOVar8->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
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
LAB_0349bafc:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0349bb30;
    }
  }
LAB_0349bb14:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0349bb30:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

