// BOFEMGGNODC$$IEFEBMICIHN @ RVA 0x32CCEE8

/* WARNING: Removing unreachable block (ram,0x033cd1c8) */

void BOFEMGGNODC__IEFEBMICIHN
               (BOFEMGGNODC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,LCKCDEKNLOA_o *DLOFGOGAGAA,
               System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  byte bVar1;
  System_Action_c *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *HCBBECJJIKK;
  BOFEMGGNODC_o *CPECAEHDDDB;
  System_Action_o *pSVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  System_Action_o **ppSVar9;
  
  if ((DAT_04567526 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567526 = 1;
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_033ccfe4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ccfe4:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) goto LAB_033cd134;
          lVar6 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_033cd108;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_033cd0f0;
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_033cd044;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033cd044:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        HCBBECJJIKK = (System_String_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        CPECAEHDDDB = PFLBGCPNEIM__EOHMFJFFFIN
                                (HCBBECJJIKK,(__this->fields)._LLOFHDDBKFD_k__BackingField,
                                 (__this->fields)._AFGEOOAHIGH_k__BackingField,AHDGNOJPPIB,
                                 (MethodInfo *)0x0);
        if (DLOFGOGAGAA == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LCKCDEKNLOA__IEFEBMICIHN(DLOFGOGAGAA,CPECAEHDDDB,(MethodInfo *)0x0);
      } while( true );
    }
    goto LAB_033cd1c0;
  }
  goto LAB_033cd134;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_033cd0f0:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_033cd124;
    }
  }
LAB_033cd108:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033cd124:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_033cd134:
  if (DLOFGOGAGAA != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__LEOHNCOCKCI(DLOFGOGAGAA,(MethodInfo *)0x0);
    ppSVar9 = &(DLOFGOGAGAA->fields).BHHLJDLBINB;
    pSVar5 = (System_Action_o *)
             System_Delegate__Combine
                       ((System_Delegate_o *)*ppSVar9,(System_Delegate_o *)IELDNEAAPBE,
                        (MethodInfo *)0x0);
    pSVar2 = System_Action_TypeInfo;
    if (pSVar5 == (System_Action_o *)0x0) {
      *ppSVar9 = (System_Action_o *)0x0;
    }
    else if ((pSVar5->klass != System_Action_TypeInfo) ||
            (*ppSVar9 = pSVar5, pSVar5->klass != pSVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5);
    }
    thunk_FUN_01c20e04(ppSVar9,pSVar5);
    return;
  }
LAB_033cd1c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

