// NLPJLHOEAOE$$NBNPEHPHPFB @ RVA 0x31EEA44

/* WARNING: Removing unreachable block (ram,0x032eed48) */

void NLPJLHOEAOE__NBNPEHPHPFB
               (NLPJLHOEAOE_o *__this,AFFHKININGD_o *MHOFCOHFCGL,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  byte bVar1;
  uint16_t JDIHKNKFJMK;
  uint16_t EHEFEIEKHJO;
  uint HCILIHJHEOM;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  JBCGDIEHOHH_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04566db6 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JBCGDIEHOHH_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (NLPJLHOEAOE_o *)FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566db6 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    __this = (NLPJLHOEAOE_o *)0x0;
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
              goto LAB_032eeb50;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_032eeb50:
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) goto LAB_032eeca4;
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_032eec7c;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_032eec64;
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_032eebb0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_032eebb0:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (MHOFCOHFCGL == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        JDIHKNKFJMK = (MHOFCOHFCGL->fields).PFNGONCEHMH;
        EHEFEIEKHJO = (MHOFCOHFCGL->fields).DJFFHALCIEB;
        __this_00 = (JBCGDIEHOHH_o *)thunk_FUN_01bda818(JBCGDIEHOHH_TypeInfo);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        JBCGDIEHOHH___ctor(__this_00,AHDGNOJPPIB_00,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
        AFFHKININGD__EDLEFNEENJC(MHOFCOHFCGL,__this_00,(MethodInfo *)0x0);
      } while( true );
    }
  }
  goto LAB_032eed40;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_032eec64:
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_032eec98;
    }
  }
LAB_032eec7c:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_032eec98:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_032eeca4:
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
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  __this = (NLPJLHOEAOE_o *)0x0;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    HCILIHJHEOM = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
    __this = (NLPJLHOEAOE_o *)(ulong)HCILIHJHEOM;
    if (MHOFCOHFCGL != (AFFHKININGD_o *)0x0) {
      AFFHKININGD__EBKOKBBGNFM(MHOFCOHFCGL,HCILIHJHEOM,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032eed40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

