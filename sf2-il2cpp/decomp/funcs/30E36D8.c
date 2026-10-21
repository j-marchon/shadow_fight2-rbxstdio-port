// POECGHDENAF$$ABCNILIJHCG @ RVA 0x30E36D8

/* WARNING: Removing unreachable block (ram,0x031e3a30) */
/* WARNING: Removing unreachable block (ram,0x031e3990) */

bool POECGHDENAF__ABCNILIJHCG
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Collections_Generic_List_XmlNode__o *PDHLJKEDECI,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this;
  Il2CppObject *pIVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *CMBPNGHLCKH;
  GBJGJEGPHKD_o *PFKGKBNBGED;
  MethodInfo *in_x3;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int index;
  int index_00;
  
                    /* try { // try from 031e3704 to 032e370b has its CatchHandler @ 031e3f34 */
  if ((DAT_045663cc & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
                    /* try { // try from 031e3740 to 032e379f has its CatchHandler @ 031e3f40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045663cc = 1;
  }
  if ((BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0) ||
     (__this = GBJGJEGPHKD__HMAAHELNECD(BCKBBGCOMJD,(MethodInfo *)0x0),
     PDHLJKEDECI == (System_Collections_Generic_List_XmlNode__o *)0x0)) {
LAB_031e3a2c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((PDHLJKEDECI->fields)._size < 1) {
LAB_031e39fc:
    GBJGJEGPHKD__POBIFAEFKHC(BCKBBGCOMJD,(MethodInfo *)0x0);
    return true;
  }
  index = 0;
  index_00 = 0;
LAB_031e37a0:
                    /* try { // try from 031e37a0 to 032e37ab has its CatchHandler @ 031e3f30 */
  pIVar2 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)PDHLJKEDECI,index,
                      Method_System_Collections_Generic_List<XmlNode>_get_Item__);
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (plVar3 = (long *)(*pIVar2->klass->vtable[0xd].methodPtr)
                                 (pIVar2,pIVar2->klass->vtable[0xd].method), plVar3 != (long *)0x0))
  {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                    /* try { // try from 031e37e0 to 032e380b has its CatchHandler @ 031e3f44 */
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
                    /* try { // try from 031e3828 to 032e3e27 has its CatchHandler @ 031e2854 */
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_031e3834;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 031e381c to 032e3827 has its CatchHandler @ 031e3f38 */
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031e3834:
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar6 & 1) == 0) goto LAB_031e38fc;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_031e3894;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031e3894:
      CMBPNGHLCKH = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (CMBPNGHLCKH != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((CMBPNGHLCKH->klass->_2).naturalAligment < bVar1) ||
           ((CMBPNGHLCKH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(CMBPNGHLCKH);
        }
      }
      if (__this == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      PFKGKBNBGED = (GBJGJEGPHKD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this,index_00,
                               Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      POECGHDENAF__NDAHBJOBBFF(PFKGKBNBGED,(IEFEBEDLHNN_o *)PFKGKBNBGED,CMBPNGHLCKH,in_x3);
      index_00 = index_00 + 1;
    } while( true );
  }
  goto LAB_031e3a2c;
LAB_031e38fc:
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031e3978;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031e3978:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  index = index + 1;
  if ((PDHLJKEDECI->fields)._size <= index) goto LAB_031e39fc;
  goto LAB_031e37a0;
}

