// MGNPHCAAEIO$$KLDHIMFIMMP @ RVA 0x340D8BC

/* WARNING: Removing unreachable block (ram,0x0350dd18) */

void MGNPHCAAEIO__KLDHIMFIMMP(System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_String_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *JGGJNLLANAE;
  MGNDHCBAPEN_string__string__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *pSVar10;
  long lVar11;
  MGNDHCBAPEN_string__string__array *pMVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_04568055 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_Clear__);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_string>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568055 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pSVar10 = MGNPHCAAEIO_TypeInfo->static_fields->POFHDIJIOFL;
  if (pSVar10 != (System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *)0x0) {
    length = (pSVar10->fields)._size;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (ELOCKFLGKNO,
                                    (ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar4;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0350da70;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0350da70:
        uVar13 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar13 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar4;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_0350dca8;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0350dc90;
        }
        lVar11 = *plVar4;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0350dad0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0350dad0:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar6);
        }
        pSVar7 = (System_String_o *)
                 (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        bVar3 = System_String__op_Equality(StringLiteral_8095,pSVar7,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_13991,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
          JGGJNLLANAE = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar10 = MGNPHCAAEIO_TypeInfo->static_fields->POFHDIJIOFL;
          __this = (MGNDHCBAPEN_string__string__o *)
                   thunk_FUN_01bda818(MGNDHCBAPEN<string,_string>_TypeInfo);
          MGNDHCBAPEN<object,_object>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this,(Il2CppObject *)pSVar7,
                     (Il2CppObject *)JGGJNLLANAE,Method_MGNDHCBAPEN<string,_string>__ctor__);
          lVar11 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_Add__;
          if (pSVar10 == (System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar12 = (pSVar10->fields)._items;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (pMVar12 == (MGNDHCBAPEN_string__string__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar10->fields)._size;
          if (uVar2 < (uint)pMVar12->max_length) {
            (pSVar10->fields)._size = uVar2 + 1;
            pMVar12->m_Items[(int)uVar2] = __this;
            thunk_FUN_01c20e04(pMVar12->m_Items + (int)uVar2,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
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
LAB_0350dc90:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0350dcc4;
    }
  }
LAB_0350dca8:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0350dcc4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

