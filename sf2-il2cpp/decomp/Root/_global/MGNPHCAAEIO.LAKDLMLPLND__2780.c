// TypeDefIndex 2780
// Namespace: 
// public class MGNPHCAAEIO.LAKDLMLPLND
// Fields:
//   public readonly List<int> IAECGNCFBJK; // 0x10

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3413080]
// MGNPHCAAEIO.LAKDLMLPLND$$HNIHOIAMDPC @ RVA 0x3413080

/* WARNING: Removing unreachable block (ram,0x035133a8) */

void MGNPHCAAEIO_LAKDLMLPLND__HNIHOIAMDPC
               (MGNPHCAAEIO_LAKDLMLPLND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t item;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar7;
  System_Int32_array *pSVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_int__o *__this_01;
  
                    /* try { // try from 03513084 to 03613087 has its CatchHandler @ 03513624 */
                    /* try { // try from 03513088 to 036130b3 has its CatchHandler @ 03513674 */
  if ((DAT_04568095 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 035130bc to 036130c7 has its CatchHandler @ 03513660 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
                    /* try { // try from 035130d8 to 03613103 has its CatchHandler @ 03513638 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_11300/*"RerollPrice"*/);
    DAT_04568095 = 1;
  }
                    /* try { // try from 03513104 to 03613113 has its CatchHandler @ 0351362c */
                    /* try { // try from 03513114 to 0361311f has its CatchHandler @ 03513620 */
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 0351316c to 03613177 has its CatchHandler @ 0351365c */
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035131a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 03513188 to 0361318f has its CatchHandler @ 0351370c */
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 03513198 to 0361319f has its CatchHandler @ 035136bc */
LAB_035131a8:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 035132fc to 036132ff has its CatchHandler @ 035136f8 */
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_03513340;
                    /* try { // try from 03513320 to 03613323 has its CatchHandler @ 035136d0 */
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
                    /* try { // try from 035131c0 to 036131cb has its CatchHandler @ 035136a8 */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03513200 to 0361320f has its CatchHandler @ 035136b4 */
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03513208;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 035131e4 to 036131eb has its CatchHandler @ 035136b8 */
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03513208:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 03513214 to 0361321f has its CatchHandler @ 035136b0 */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03513230 to 03613237 has its CatchHandler @ 035136e8 */
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* try { // try from 03513388 to 03613553 has its CatchHandler @ 03512c08 */
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
                    /* try { // try from 03513254 to 03613257 has its CatchHandler @ 03513704 */
    a = (System_String_o *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    bVar3 = System_String__op_Equality(a,StringLiteral_11300/*"RerollPrice"*/,(MethodInfo *)0x0);
    if (bVar3) {
      __this_01 = (__this->fields).IAECGNCFBJK;
                    /* try { // try from 03513270 to 03613273 has its CatchHandler @ 035136f0 */
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0351328c to 0361328f has its CatchHandler @ 035136c0 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      item = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      lVar7 = Method_System_Collections_Generic_List<int>_Add__;
      if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar8 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_01->fields)._size;
                    /* try { // try from 035132c4 to 036132c7 has its CatchHandler @ 035136f4 */
      if (uVar2 < (uint)pSVar8->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar8->m_Items[(int)uVar2] = item;
      }
      else {
                    /* try { // try from 035132e0 to 036132e3 has its CatchHandler @ 035136fc */
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_01,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
                    /* try { // try from 03513338 to 0361335b has its CatchHandler @ 03513710 */
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0351335c;
    }
  }
LAB_03513340:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0351335c:
                    /* try { // try from 0351335c to 0361336b has its CatchHandler @ 035136e0 */
  (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 03513370 to 0361337b has its CatchHandler @ 035136d4 */
                    /* try { // try from 03513380 to 03613387 has its CatchHandler @ 03513708 */
  return;
}


// ===== public void .ctor()  [RVA 0x3413488]
// MGNPHCAAEIO.LAKDLMLPLND$$.ctor @ RVA 0x3413488

void MGNPHCAAEIO_LAKDLMLPLND___ctor(MGNPHCAAEIO_LAKDLMLPLND_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568096 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_04568096 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  (__this->fields).IAECGNCFBJK = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

