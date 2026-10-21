// TypeDefIndex 501
// Namespace: 
// public class FNEMMDECEIJ
// Fields:
//   public FPLCEOJCPOD KCMANELFDOC; // 0x10

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3589F1C]
// FNEMMDECEIJ$$HNIHOIAMDPC @ RVA 0x3589F1C

/* WARNING: Removing unreachable block (ram,0x0368a19c) */

void FNEMMDECEIJ__HNIHOIAMDPC
               (FNEMMDECEIJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  int32_t CJNHFNHJHPE;
  FPLCEOJCPOD_o *pFVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *PMACBPAMPJA;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
                    /* try { // try from 03689f34 to 03789f43 has its CatchHandler @ 03689f44 */
  if ((DAT_04568d30 & 1) == 0) {
                    /* catch() { ... } // from try @ 03689e78 with catch @ 03689f44
                       catch() { ... } // from try @ 03689f34 with catch @ 03689f44 */
                    /* try { // try from 03689f48 to 03789f4b has its CatchHandler @ 03689f54 */
                    /* try { // try from 03689f4c to 03789f57 has its CatchHandler @ 03689bc4 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* catch() { ... } // from try @ 03689f48 with catch @ 03689f54 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_04568d30 = 1;
  }
  pFVar2 = (__this->fields).KCMANELFDOC;
  if (((pFVar2 == (FPLCEOJCPOD_o *)0x0) ||
      (FPLCEOJCPOD__NDNPGAKJLHM(pFVar2,(MethodInfo *)0x0),
      AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0)) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0368a014;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0368a014:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
                    /* try { // try from 0368a114 to 0378a1b7 has its CatchHandler @ 0368a114
                       catch() { ... } // from try @ 0368a114 with catch @ 0368a114
                       catch() { ... } // from try @ 0368a280 with catch @ 0368a114
                       catch() { ... } // from try @ 0368a2c8 with catch @ 0368a114
                       catch() { ... } // from try @ 0368a310 with catch @ 0368a114 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0368a140;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0368a074;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0368a074:
    LBJNDMNEJJB = (System_Xml_XmlAttribute_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((LBJNDMNEJJB->klass->_2).naturalAligment < bVar1) ||
       ((LBJNDMNEJJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(LBJNDMNEJJB);
    }
    PMACBPAMPJA = (System_String_o *)
                  (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                            (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
    CJNHFNHJHPE = GIAMPEGMNHE__NANCFCIGNEE(LBJNDMNEJJB,0,(MethodInfo *)0x0);
    pFVar2 = (__this->fields).KCMANELFDOC;
    if (pFVar2 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    FPLCEOJCPOD__FOOHBJNHOKK(pFVar2,PMACBPAMPJA,CJNHFNHJHPE,false,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0368a15c;
    }
  }
LAB_0368a140:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0368a15c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public void .ctor()  [RVA 0x358A26C]
// FNEMMDECEIJ$$.ctor @ RVA 0x358A26C

void FNEMMDECEIJ___ctor(FNEMMDECEIJ_o *__this,MethodInfo *method)

{
  FPLCEOJCPOD_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0368a26c to 0378a277 has its CatchHandler @ 0368a284 */
                    /* try { // try from 0368a27c to 0378a27f has its CatchHandler @ 0368a294 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a20c with catch @ 0368a280
                       try { // try from 0368a280 to 0378a2af has its CatchHandler @ 0368a114 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a26c with catch @ 0368a284
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a1e8 with catch @ 0368a288
                        */
  if ((DAT_04568d31 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a238 with catch @ 0368a28c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a210 with catch @ 0368a290
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a1d8 with catch @ 0368a294
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0368a27c with catch @ 0368a294
                        */
    FUN_01bab630(&FPLCEOJCPOD_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a1b8 with catch @ 0368a298
                        */
    DAT_04568d31 = 1;
    method = extraout_x1;
  }
  __this_00 = (FPLCEOJCPOD_o *)thunk_FUN_01bda818(FPLCEOJCPOD_TypeInfo,method);
                    /* try { // try from 0368a2b0 to 0378a2c7 has its CatchHandler @ 0368a308 */
  FPLCEOJCPOD___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).KCMANELFDOC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0368a2c8 to 0378a2f7 has its CatchHandler @ 0368a114 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

