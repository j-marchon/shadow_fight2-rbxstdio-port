// OOMHDDBCBJP$$INCIBBGABCB @ RVA 0x3284C10

/* WARNING: Removing unreachable block (ram,0x03384f38) */

AFFHKININGD_o *
OOMHDDBCBJP__INCIBBGABCB(OOMHDDBCBJP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  AFFHKININGD_o *pAVar3;
  System_Xml_XmlNode_o *__this_01;
  System_Xml_XmlNodeList_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  MethodInfo *method_00;
  DPDDOKKMMOM_o *pDVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  
  if ((DAT_045672ae & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 03384c58 to 03484c7f has its CatchHandler @ 03384f4c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_045672ae = 1;
  }
  __this_00 = (__this->fields).IJKFPEPDAKK;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<string>_Contains__;
    bVar2 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)KGLJICLJHEL,
                       (MethodInfo_26E513C *)
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (!bVar2) {
      return (AFFHKININGD_o *)0x0;
    }
                    /* try { // try from 03384cb4 to 03484cdf has its CatchHandler @ 03384f48 */
    pAVar3 = OOMHDDBCBJP__PFAOOMAGCHN(__this,KGLJICLJHEL,method_00);
    if (pAVar3 != (AFFHKININGD_o *)0x0) {
      return pAVar3;
    }
    pDVar8 = (__this->fields).CIHKJLAGDLJ;
    if (((pDVar8 != (DPDDOKKMMOM_o *)0x0) &&
        (__this_01 = (pDVar8->fields).DMLGJFCNNJF, __this_01 != (System_Xml_XmlNode_o *)0x0)) &&
       (pSVar4 = System_Xml_XmlNode__SelectNodes(__this_01,StringLiteral_6310,(MethodInfo *)0x0),
       pSVar4 != (System_Xml_XmlNodeList_o *)0x0)) {
      plVar5 = (long *)(*(pSVar4->klass->vtable)._8_GetEnumerator.methodPtr)
                                 (pSVar4,(pSVar4->klass->vtable)._8_GetEnumerator.method);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d4c with catch @ 03384f34 */
        FUN_01bab8c8();
      }
                    /* try { // try from 03384d20 to 03484d27 has its CatchHandler @ 03384f38 */
      uVar12 = 0;
      do {
        lVar9 = *plVar5;
                    /* try { // try from 03384d30 to 03484d37 has its CatchHandler @ 03384f28 */
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
                    /* try { // try from 03384d44 to 03484d47 has its CatchHandler @ 03384f30 */
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03384d68 to 03484d6f has its CatchHandler @ 03384f20 */
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03384d74;
            }
                    /* try { // try from 03384d4c to 03484d57 has its CatchHandler @ 03384f34 */
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03384d74:
                    /* try { // try from 03384d78 to 03484d7f has its CatchHandler @ 03384f1c */
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          pAVar3 = (AFFHKININGD_o *)0x0;
          goto LAB_03384e8c;
        }
                    /* try { // try from 03384d84 to 03484da7 has its CatchHandler @ 03384f24 */
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03384dd4;
            }
                    /* try { // try from 03384da8 to 03484edf has its CatchHandler @ 03384ac8 */
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03384dd4:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d30 with catch @ 03384f28 */
          FUN_01bab8c8();
        }
        lVar9 = *plVar7;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* catch() { ... } // from try @ 03384d68 with catch @ 03384f20 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d84 with catch @ 03384f24 */
          FUN_01babc64(plVar7);
        }
        __this_02 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(lVar9 + 0x238))(plVar7,*(undefined8 *)(lVar9 + 0x240));
        if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384ef4 with catch @ 03384f2c */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_02,StringLiteral_9327,(MethodInfo *)0x0);
        a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar2) goto LAB_03384e6c;
        uVar12 = uVar12 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03384d44 with catch @ 03384f30 */
  FUN_01bab8c8();
LAB_03384e6c:
  pAVar3 = (AFFHKININGD_o *)
           (*(__this->klass->vtable)._7_PLMHPLMOBIO.methodPtr)
                     (__this,plVar7,(ulong)uVar12,(__this->klass->vtable)._7_PLMHPLMOBIO.method);
LAB_03384e8c:
  plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03384ee8 to 03484eeb has its CatchHandler @ 03384f44 */
                    /* try { // try from 03384eec to 03484eef has its CatchHandler @ 03384f40 */
                    /* try { // try from 03384ef0 to 03484ef3 has its CatchHandler @ 03384f3c */
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03384ef4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 03384ee0 to 03484ee7 has its CatchHandler @ 03384f50 */
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03384ef4:
                    /* try { // try from 03384ef4 to 03484ef7 has its CatchHandler @ 03384f2c */
                    /* try { // try from 03384ef8 to 03484efb has its CatchHandler @ 03384f18 */
                    /* try { // try from 03384efc to 03484eff has its CatchHandler @ 03384f14 */
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
                    /* try { // try from 03384f04 to 03484f07 has its CatchHandler @ 03384f10 */
                    /* try { // try from 03384f08 to 03484f67 has its CatchHandler @ 03384ac8 */
                    /* catch() { ... } // from try @ 03384f04 with catch @ 03384f10 */
                    /* catch() { ... } // from try @ 03384efc with catch @ 03384f14 */
                    /* catch() { ... } // from try @ 03384ef8 with catch @ 03384f18 */
                    /* catch() { ... } // from try @ 03384d78 with catch @ 03384f1c */
  return pAVar3;
}

