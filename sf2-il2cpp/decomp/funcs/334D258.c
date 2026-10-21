// PFOMHOLCODE$$IEFEBMICIHN @ RVA 0x334D258

/* WARNING: Removing unreachable block (ram,0x0344d4bc) */

void PFOMHOLCODE__IEFEBMICIHN
               (PFOMHOLCODE_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,LCKCDEKNLOA_o *DLOFGOGAGAA,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *HCBBECJJIKK;
  BOFEMGGNODC_o *CPECAEHDDDB;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04567a12 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567a12 = 1;
  }
  if ((NPLGCIFGFOK == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
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
          goto LAB_0344d340;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_0344d340:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0344d464;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0344d3a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_0344d3a0:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0344d3d4 to 0354d527 has its CatchHandler @ 0344d3d4
                       catch() { ... } // from try @ 0344d3d4 with catch @ 0344d3d4
                       catch() { ... } // from try @ 0344d544 with catch @ 0344d3d4
                       catch() { ... } // from try @ 0344d5f4 with catch @ 0344d3d4
                       catch() { ... } // from try @ 0344d61c with catch @ 0344d3d4
                       catch() { ... } // from try @ 0344d65c with catch @ 0344d3d4 */
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
                            (HCBBECJJIKK,(__this->fields).super._LLOFHDDBKFD_k__BackingField,
                             (__this->fields).super._AFGEOOAHIGH_k__BackingField,AHDGNOJPPIB,
                             (MethodInfo *)0x0);
    if (DLOFGOGAGAA == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LCKCDEKNLOA__IEFEBMICIHN(DLOFGOGAGAA,CPECAEHDDDB,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0344d480;
    }
  }
LAB_0344d464:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_0344d480:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

