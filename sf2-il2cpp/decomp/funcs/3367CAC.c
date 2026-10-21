// MDFGJKBMECA$$ABCNILIJHCG @ RVA 0x3367CAC

/* WARNING: Removing unreachable block (ram,0x03467f5c) */
/* WARNING: Removing unreachable block (ram,0x03467fa0) */

bool MDFGJKBMECA__ABCNILIJHCG
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *PCCHGBJONLN;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MethodInfo *in_x3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04567ad0 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9548);
    DAT_04567ad0 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_9548,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar2 == (long *)0x0) {
      return true;
    }
    PCCHGBJONLN = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                    );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)PCCHGBJONLN,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03467e18;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_03467e18:
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) goto LAB_03467f50;
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_03467f28;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_03467f10;
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_03467e78;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_03467e78:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB);
          }
        }
        if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MDFGJKBMECA__NDAHBJOBBFF(BCKBBGCOMJD,AHDGNOJPPIB,PCCHGBJONLN,in_x3);
      } while( true );
    }
  }
  goto LAB_03467f98;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03467f10:
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03467f44;
    }
  }
LAB_03467f28:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_03467f44:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_03467f50:
  if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
    GBJGJEGPHKD__NKGOBNPBCDM(BCKBBGCOMJD,PCCHGBJONLN,(MethodInfo *)0x0);
    return true;
  }
LAB_03467f98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

