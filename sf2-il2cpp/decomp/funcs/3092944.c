// CJMPPFAJNBH$$HNIHOIAMDPC @ RVA 0x3092944

/* WARNING: Removing unreachable block (ram,0x03192c74) */

int32_t CJMPPFAJNBH__HNIHOIAMDPC
                  (System_Xml_XmlNode_o *DMDFAKNEPGH,
                  System_Collections_Generic_List_CJMPPFAJNBH__o *HJCLPBKNLDP,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *a;
  CJMPPFAJNBH_o *__this;
  MethodInfo *method_00;
  long lVar7;
  CJMPPFAJNBH_array *pCVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_045660b4 & 1) == 0) {
    FUN_01bab630(&CJMPPFAJNBH_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CJMPPFAJNBH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CJMPPFAJNBH>_get_Count__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5266);
    DAT_045660b4 = 1;
  }
  if ((HJCLPBKNLDP != (System_Collections_Generic_List_CJMPPFAJNBH__o *)0x0) &&
     (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0)) {
    iVar1 = (HJCLPBKNLDP->fields)._size;
    plVar5 = (long *)(*(DMDFAKNEPGH->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._13_get_ChildNodes.method);
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
              goto LAB_03192a80;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03192a80:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_03192c30;
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_03192c08;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_03192bf0;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_03192ae0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03192ae0:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar2) ||
           ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO);
        }
        a = (System_String_o *)
            (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                      (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
        method_00 = (MethodInfo *)0x0;
        bVar4 = System_String__op_Equality(a,StringLiteral_5266,(MethodInfo *)0x0);
        if (bVar4) {
          auVar11 = thunk_FUN_01bda818(CJMPPFAJNBH_TypeInfo);
          __this = auVar11._0_8_;
          CJMPPFAJNBH___ctor(__this,auVar11._8_8_);
          if (__this == (CJMPPFAJNBH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          CJMPPFAJNBH__HNIHOIAMDPC(__this,JHMENEKPIBO,method_00);
          lVar7 = Method_System_Collections_Generic_List<CJMPPFAJNBH>_Add__;
          pCVar8 = (HJCLPBKNLDP->fields)._items;
          (HJCLPBKNLDP->fields)._version = (HJCLPBKNLDP->fields)._version + 1;
          if (pCVar8 == (CJMPPFAJNBH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar3 = (HJCLPBKNLDP->fields)._size;
          if (uVar3 < (uint)pCVar8->max_length) {
            (HJCLPBKNLDP->fields)._size = uVar3 + 1;
            pCVar8->m_Items[(int)uVar3] = __this;
            thunk_FUN_01c20e04(pCVar8->m_Items + (int)uVar3,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)HJCLPBKNLDP,
                       (Il2CppObject *)__this,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
LAB_03192bf0:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03192c24;
    }
  }
LAB_03192c08:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03192c24:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_03192c30:
  return (HJCLPBKNLDP->fields)._size - iVar1;
}

