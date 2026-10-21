// FPPKHNNABAD$$MLJDPILPJDE @ RVA 0x322023C

/* WARNING: Removing unreachable block (ram,0x0332066c) */

void FPPKHNNABAD__MLJDPILPJDE
               (System_Xml_XmlNode_o *IIBFFEPEHPF,
               System_Collections_Generic_List_LEGDPJHPEOB__o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  LEGDPJHPEOB_o *pLVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *IIBFFEPEHPF_00;
  MethodInfo *method_00;
  LEGDPJHPEOB_array *pLVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04566f2d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrimExcess__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566f2d = 1;
  }
  if (IIBFFEPEHPF == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (iVar3 == 1) {
      plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._18_get_FirstChild.methodPtr)
                                 (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._18_get_FirstChild.method
                                 );
      if (plVar4 == (long *)0x0) goto LAB_03320664;
      iVar3 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if (iVar3 == 3) {
        pLVar5 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
        LEGDPJHPEOB___ctor(pLVar5,(MethodInfo *)0x0);
        if ((pLVar5 != (LEGDPJHPEOB_o *)0x0) &&
           ((*(pLVar5->klass->vtable)._6_HNIHOIAMDPC.methodPtr)
                      (pLVar5,IIBFFEPEHPF,(pLVar5->klass->vtable)._6_HNIHOIAMDPC.method),
           lVar8 = Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__,
           HPACPFLKHPK != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0)) {
          pLVar7 = (HPACPFLKHPK->fields)._items;
          (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
          if (pLVar7 != (LEGDPJHPEOB_array *)0x0) {
            uVar2 = (HPACPFLKHPK->fields)._size;
            if (uVar2 < (uint)pLVar7->max_length) {
              (HPACPFLKHPK->fields)._size = uVar2 + 1;
              pLVar7->m_Items[(int)uVar2] = pLVar5;
              thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar2,pLVar5);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                         (Il2CppObject *)pLVar5,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_0332060c;
          }
        }
        goto LAB_03320664;
      }
    }
    plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0332042c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0332042c:
        uVar9 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_03320604;
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_033205c4;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_033205ac;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0332048c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0332048c:
        IIBFFEPEHPF_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (IIBFFEPEHPF_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((IIBFFEPEHPF_00->klass->_2).naturalAligment < bVar1) ||
             ((IIBFFEPEHPF_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(IIBFFEPEHPF_00);
          }
        }
        pLVar5 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
        LEGDPJHPEOB___ctor(pLVar5,(MethodInfo *)0x0);
        if (pLVar5 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (pLVar5->klass->vtable)._6_HNIHOIAMDPC.method;
        (*(pLVar5->klass->vtable)._6_HNIHOIAMDPC.methodPtr)(pLVar5,IIBFFEPEHPF_00);
        if ((pLVar5->fields).ACCIHBHMFPN == 6) {
          FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF_00,(pLVar5->fields).AHEFOIOKDOK,method_00);
        }
        lVar8 = Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__;
        if (HPACPFLKHPK == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pLVar7 = (HPACPFLKHPK->fields)._items;
        (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
        if (pLVar7 == (LEGDPJHPEOB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (HPACPFLKHPK->fields)._size;
        if (uVar2 < (uint)pLVar7->max_length) {
          (HPACPFLKHPK->fields)._size = uVar2 + 1;
          pLVar7->m_Items[(int)uVar2] = pLVar5;
          thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar2,pLVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,(Il2CppObject *)pLVar5
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  goto LAB_03320664;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_033205ac:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_033205f8;
    }
  }
LAB_033205c4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033205f8:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_03320604:
  if (HPACPFLKHPK != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
LAB_0332060c:
    System_Collections_Generic_List<object>__TrimExcess
              ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
               Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrimExcess__);
    return;
  }
LAB_03320664:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

