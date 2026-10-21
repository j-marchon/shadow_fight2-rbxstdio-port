// AFIEAGJGHGK$$ABCNILIJHCG @ RVA 0x3168DF4

/* WARNING: Removing unreachable block (ram,0x032690dc) */

void AFIEAGJGHGK__ABCNILIJHCG
               (AFIEAGJGHGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlNodeList_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *CMBPNGHLCKH;
  AFIEAGJGHGK_PACFKHPIMAP_o *__this_00;
  MethodInfo *method_00;
  long lVar6;
  AFIEAGJGHGK_PACFKHPIMAP_array *pAVar7;
  ulong uVar8;
  int *piVar9;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_01;
  
  if ((DAT_045668d9 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_Add__);
    FUN_01bab630(&AFIEAGJGHGK_PACFKHPIMAP_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9544);
    DAT_045668d9 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar3 = System_Xml_XmlNode__SelectNodes(AHDGNOJPPIB,StringLiteral_9544,(MethodInfo *)0x0);
    if (pSVar3 != (System_Xml_XmlNodeList_o *)0x0) {
      plVar4 = (long *)(*(pSVar3->klass->vtable)._8_GetEnumerator.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._8_GetEnumerator.method);
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
              goto LAB_03268f18;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03268f18:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0326907c;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03269064;
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03268f78;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03268f78:
        CMBPNGHLCKH = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (CMBPNGHLCKH != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((CMBPNGHLCKH->klass->_2).naturalAligment < bVar1) ||
             ((CMBPNGHLCKH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(CMBPNGHLCKH);
          }
        }
        __this_01 = (__this->fields).DIMDJNDKCBG;
        __this_00 = (AFIEAGJGHGK_PACFKHPIMAP_o *)
                    thunk_FUN_01bda818(AFIEAGJGHGK_PACFKHPIMAP_TypeInfo);
        AFIEAGJGHGK_PACFKHPIMAP___ctor(__this_00,CMBPNGHLCKH,method_00);
        lVar6 = Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_Add__;
        if (__this_01 == (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar7 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pAVar7 == (AFIEAGJGHGK_PACFKHPIMAP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pAVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pAVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pAVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,(MethodInfo_26E4DAC *)method_00);
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
LAB_03269064:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03269098;
    }
  }
LAB_0326907c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03269098:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

