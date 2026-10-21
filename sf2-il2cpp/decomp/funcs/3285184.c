// OOMHDDBCBJP$$IOJIEDAEOBN @ RVA 0x3285184

/* WARNING: Removing unreachable block (ram,0x033853c0) */
/* WARNING: Removing unreachable block (ram,0x033853f0) */
/* WARNING: Removing unreachable block (ram,0x03385418) */

AFFHKININGD_o *
OOMHDDBCBJP__IOJIEDAEOBN(OOMHDDBCBJP_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *__this_00;
  System_Xml_XmlNodeList_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  AFFHKININGD_o *pAVar7;
  DPDDOKKMMOM_o *pDVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
                    /* try { // try from 0338518c to 03485193 has its CatchHandler @ 0338525c */
                    /* try { // try from 033851a4 to 034851ab has its CatchHandler @ 03385254 */
  if ((DAT_045672af & 1) == 0) {
                    /* try { // try from 033851b4 to 034851bb has its CatchHandler @ 03385244 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033851c8 to 034851cf has its CatchHandler @ 03385248 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 033851d4 to 034851df has its CatchHandler @ 03385258 */
    FUN_01bab630(&StringLiteral_6310);
    DAT_045672af = 1;
  }
  pDVar8 = (__this->fields).CIHKJLAGDLJ;
                    /* try { // try from 033851e8 to 0348520b has its CatchHandler @ 03385260 */
  if (((pDVar8 == (DPDDOKKMMOM_o *)0x0) ||
      (__this_00 = (pDVar8->fields).DMLGJFCNNJF, __this_00 == (System_Xml_XmlNode_o *)0x0)) ||
     (pSVar3 = System_Xml_XmlNode__SelectNodes(__this_00,StringLiteral_6310,(MethodInfo *)0x0),
     pSVar3 == (System_Xml_XmlNodeList_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0338520c to 03485237 has its CatchHandler @ 03385074 */
  plVar4 = (long *)(*(pSVar3->klass->vtable)._8_GetEnumerator.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._8_GetEnumerator.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03385238 to 0348523b has its CatchHandler @ 03385250 */
  iVar12 = 0;
  do {
                    /* try { // try from 0338523c to 0348523f has its CatchHandler @ 0338524c */
    lVar9 = *plVar4;
                    /* try { // try from 03385240 to 03485277 has its CatchHandler @ 03385074 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851b4 with catch @ 03385244
                        */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851c8 with catch @ 03385248
                        */
    if (uVar10 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338523c with catch @ 0338524c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03385238 with catch @ 03385250
                        */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851a4 with catch @ 03385254
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851d4 with catch @ 03385258
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338518c with catch @ 0338525c
                        */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0338527c to 034852a3 has its CatchHandler @ 03385074 */
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03385288;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033851e8 with catch @ 03385260
                        */
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 03385278 to 0348527b has its CatchHandler @ 0338529c */
LAB_03385288:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)0x0;
      break;
    }
    lVar9 = *plVar4;
                    /* catch() { ... } // from try @ 03385278 with catch @ 0338529c */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 033852a4 to 034852ab has its CatchHandler @ 033852c0 */
    if (uVar10 != 0) {
                    /* try { // try from 033852ac to 034852b7 has its CatchHandler @ 03385074 */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 033852b8 to 034852bf has its CatchHandler @ 033852c0 */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_033852e8;
        }
        uVar10 = uVar10 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033852a4 with catch @ 033852c0
                       catch(type#2 @ 00000000) { ... } // from try @ 033852b8 with catch @ 033852c0
                        */
        piVar11 = piVar11 + 4;
                    /* try { // try from 033852c4 to 034861df has its CatchHandler @ 033852c4
                       catch() { ... } // from try @ 033852c4 with catch @ 033852c4
                       catch() { ... } // from try @ 033863bc with catch @ 033852c4
                       catch() { ... } // from try @ 0338654c with catch @ 033852c4
                       catch() { ... } // from try @ 033866b4 with catch @ 033852c4
                       catch() { ... } // from try @ 033866f4 with catch @ 033852c4
                       catch() { ... } // from try @ 03386798 with catch @ 033852c4
                       catch() { ... } // from try @ 03386860 with catch @ 033852c4
                       catch() { ... } // from try @ 033868a0 with catch @ 033852c4 */
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_033852e8:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar6);
      }
    }
    bVar2 = iVar12 != DPJIDNBJIBG;
    iVar12 = iVar12 + 1;
  } while (bVar2);
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033853a8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033853a8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x033853ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar7 = (AFFHKININGD_o *)
           (*(__this->klass->vtable)._7_PLMHPLMOBIO.methodPtr)
                     (__this,plVar6,(ulong)(uint)DPJIDNBJIBG,
                      (__this->klass->vtable)._7_PLMHPLMOBIO.method);
  return pAVar7;
}

