// FEPPOONJCGI$$CGFJFHHCIGF @ RVA 0x30B0C04

/* WARNING: Removing unreachable block (ram,0x031b0f08) */

bool FEPPOONJCGI__CGFJFHHCIGF(FEPPOONJCGI_o *__this,KAJIALENBGD_o *LFOOJOJHDFM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_01;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int index;
  
  if ((DAT_045661e8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_RemoveAt__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_045661e8 = 1;
  }
  pSVar3 = (__this->fields).EDIFMNKDBMF;
  if ((pSVar3 == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  index = 0;
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031b0d28;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031b0d28:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      bVar2 = false;
      goto LAB_031b0e5c;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 031b0d84 to 032b0daf has its CatchHandler @ 031b0db0 */
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_031b0d88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 031b0db0 with catch @ 031b0d64
                       catch() { ... } // from try @ 031b0de0 with catch @ 031b0d64
                       catch() { ... } // from try @ 031b0e78 with catch @ 031b0d64
                       catch() { ... } // from try @ 031b0e8c with catch @ 031b0d64 */
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031b0d88:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar7 = *plVar6;
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b0d84 with catch @ 031b0db0
                       try { // try from 031b0db0 to 032b0dc7 has its CatchHandler @ 031b0d64 */
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
                    /* try { // try from 031b0dc8 to 032b0ddf has its CatchHandler @ 031b0e84 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(lVar7 + 0x238))(plVar6,*(undefined8 *)(lVar7 + 0x240));
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 031b0de0 to 032b0e67 has its CatchHandler @ 031b0d64 */
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    if (LFOOJOJHDFM == (KAJIALENBGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality(a,(LFOOJOJHDFM->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (bVar2) break;
    index = index + 1;
  } while( true );
  pSVar3 = (__this->fields).EDIFMNKDBMF;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar3->klass->vtable)._25_RemoveChild.methodPtr)
            (pSVar3,plVar6,(pSVar3->klass->vtable)._25_RemoveChild.method);
  __this_01 = (__this->fields).GNGLHGOGCBO;
  if (__this_01 == (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__RemoveAt
            ((System_Collections_Generic_List_object__o *)__this_01,index,
             Method_System_Collections_Generic_List<KAJIALENBGD>_RemoveAt__);
  bVar2 = true;
LAB_031b0e5c:
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
                    /* try { // try from 031b0e68 to 032b0e77 has its CatchHandler @ 031b0e84 */
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
                    /* try { // try from 031b0e78 to 032b0e87 has its CatchHandler @ 031b0d64 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 031b0dc8 with catch @ 031b0e84
                       catch() { ... } // from try @ 031b0e68 with catch @ 031b0e84 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 031b0e88 to 032b0e8b has its CatchHandler @ 031b0e94 */
                    /* try { // try from 031b0e8c to 032b0e97 has its CatchHandler @ 031b0d64 */
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031b0ebc;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b0e88 with catch @ 031b0e94
                        */
        uVar8 = uVar8 - 1;
                    /* try { // try from 031b0e98 to 032b1443 has its CatchHandler @ 031b0e98
                       catch() { ... } // from try @ 031b0e98 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b1608 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b199c with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2394 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b23d0 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2404 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b24ac with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2558 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b25f8 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b27b8 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2910 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2960 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b297c with catch @ 031b0e98
                       catch() { ... } // from try @ 031b29c8 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b29fc with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2a48 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2a5c with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2aac with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2b50 with catch @ 031b0e98 */
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031b0ebc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return bVar2;
}

