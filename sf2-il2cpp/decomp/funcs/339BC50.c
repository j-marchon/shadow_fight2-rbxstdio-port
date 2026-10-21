// OCABNNJIENC.KMODKLKCHNL$$.ctor @ RVA 0x339BC50

/* WARNING: Removing unreachable block (ram,0x0349c024) */

void OCABNNJIENC_KMODKLKCHNL___ctor
               (OCABNNJIENC_KMODKLKCHNL_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar4;
  System_Collections_Generic_List_FCGINHCODAI__o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *IDAKJHIMAHA;
  FCGINHCODAI_o *__this_01;
  long lVar8;
  FCGINHCODAI_array *pFVar9;
  ulong uVar10;
  int *piVar11;
  System_Collections_Generic_List_FCGINHCODAI__o **ppSVar12;
  
  if ((DAT_04567c7e & 1) == 0) {
    FUN_01bab630(&FCGINHCODAI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FCGINHCODAI>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567c7e = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(MNPCOGBCAED->klass->vtable)._16_get_Attributes.methodPtr)
                            (MNPCOGBCAED,(MNPCOGBCAED->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields).BJEEDJEKAMF = pSVar4;
    thunk_FUN_01c20e04();
    pSVar5 = (System_Collections_Generic_List_FCGINHCODAI__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<FCGINHCODAI>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<FCGINHCODAI>__ctor__);
    ppSVar12 = &(__this->fields).JBCBCLOPOPI;
    *ppSVar12 = pSVar5;
    thunk_FUN_01c20e04(ppSVar12,pSVar5);
    plVar6 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (MNPCOGBCAED,(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0349be38;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0349be38:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar10 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_0349bfc0;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0349bfa8;
        }
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0349be98;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0349be98:
        IDAKJHIMAHA = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (IDAKJHIMAHA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((IDAKJHIMAHA->klass->_2).naturalAligment < bVar1) ||
           ((IDAKJHIMAHA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(IDAKJHIMAHA);
        }
        pSVar4 = (System_String_o *)
                 (*(IDAKJHIMAHA->klass->vtable)._8_unknown.methodPtr)
                           (IDAKJHIMAHA,(IDAKJHIMAHA->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar4,StringLiteral_8409,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = (FCGINHCODAI_o *)thunk_FUN_01bda818(FCGINHCODAI_TypeInfo);
          FCGINHCODAI___ctor(__this_01,IDAKJHIMAHA,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<FCGINHCODAI>_Add__;
          pSVar5 = *ppSVar12;
          if (pSVar5 == (System_Collections_Generic_List_FCGINHCODAI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pFVar9 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pFVar9 == (FCGINHCODAI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pFVar9->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pFVar9->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pFVar9->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_01
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0349bfa8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0349bfdc;
    }
  }
LAB_0349bfc0:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0349bfdc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

