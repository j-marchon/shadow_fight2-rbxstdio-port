// MGNPHCAAEIO$$EDMKKOOINBI @ RVA 0x340509C

/* WARNING: Removing unreachable block (ram,0x03505440) */

int32_t MGNPHCAAEIO__EDMKKOOINBI(System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *__this;
  MNKGBNEMPCI_o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MNKGBNEMPCI__o *pSVar6;
  long lVar7;
  System_Xml_XmlNode_c *pSVar8;
  MNKGBNEMPCI_array *pMVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
  if ((DAT_0456800f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MNKGBNEMPCI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MNKGBNEMPCI>_Clear__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MNKGBNEMPCI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3114);
    DAT_0456800f = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pSVar6 = MGNPHCAAEIO_TypeInfo->static_fields->CGDCBPHBFDE;
  if (pSVar6 != (System_Collections_Generic_List_MNKGBNEMPCI__o *)0x0) {
    length = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (ELOCKFLGKNO,
                                    (ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      iVar12 = 0;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar7 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03505228;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03505228:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return iVar12;
          }
          lVar7 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 == 0) goto LAB_035053dc;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_035053c4;
        }
        lVar7 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03505288;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03505288:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = AHDGNOJPPIB->klass;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar8->_2).naturalAligment < bVar1) ||
           ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        __this = (System_String_o *)
                 (*(pSVar8->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB,(pSVar8->vtable)._8_unknown.method);
        if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals(__this,StringLiteral_3114,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (MNKGBNEMPCI_o *)thunk_FUN_01bda818(MNKGBNEMPCI_TypeInfo);
          MNKGBNEMPCI___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (MNKGBNEMPCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          MNKGBNEMPCI__HNIHOIAMDPC(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          lVar7 = Method_System_Collections_Generic_List<MNKGBNEMPCI>_Add__;
          pSVar6 = MGNPHCAAEIO_TypeInfo->static_fields->CGDCBPHBFDE;
          if (pSVar6 == (System_Collections_Generic_List_MNKGBNEMPCI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar9 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pMVar9 == (MNKGBNEMPCI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pMVar9->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pMVar9->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pMVar9->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          iVar12 = iVar12 + 1;
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
LAB_035053c4:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_035053f8;
    }
  }
LAB_035053dc:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_035053f8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return iVar12;
}

