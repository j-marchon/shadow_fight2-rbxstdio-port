// AMIINPEKKFB$$LEDEFAKNIDE @ RVA 0x3510744

/* WARNING: Removing unreachable block (ram,0x03610b54) */

void AMIINPEKKFB__LEDEFAKNIDE(IGFGDDANEPE_o *ENHJPOHLMCL,int32_t EBDDELGICGB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  DEKKGJNMFEB_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int32_t local_64;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036106c8 with catch @ 03610744
                       catch(type#2 @ 00000000) { ... } // from try @ 0361073c with catch @ 03610744
                        */
  if ((DAT_045688ea & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_5703);
    FUN_01bab630(&StringLiteral_3114);
    DAT_045688ea = 1;
  }
  local_64 = 0;
  if ((ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) &&
     (pSVar3 = (ENHJPOHLMCL->fields).DMLGJFCNNJF, pSVar3 != (System_Xml_XmlNode_o *)0x0)) {
    pSVar3 = (System_Xml_XmlNode_o *)
             (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar3,StringLiteral_5703,(pSVar3->klass->vtable)._51_get_Item.method);
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036108b0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036108b0:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
                    /* try { // try from 03610a94 to 03710ad7 has its CatchHandler @ 03610900 */
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03610ae0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03610ac8;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03610900 to 03710a17 has its CatchHandler @ 03610900
                       catch() { ... } // from try @ 03610900 with catch @ 03610900
                       catch() { ... } // from try @ 03610a94 with catch @ 03610900
                       catch() { ... } // from try @ 03610af4 with catch @ 03610900
                       catch() { ... } // from try @ 03610b34 with catch @ 03610900
                       catch() { ... } // from try @ 03610bb8 with catch @ 03610900 */
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03610910;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03610910:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03610b34 to 03710baf has its CatchHandler @ 03610900 */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03610b30 to 03710b33 has its CatchHandler @ 03610ba0 */
          FUN_01babc64(plVar6);
        }
        lVar9 = (**(code **)(*plVar6 + 0x468))
                          (plVar6,StringLiteral_11876,*(undefined8 *)(*plVar6 + 0x470));
        if (lVar9 != 0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                     (plVar6,StringLiteral_11876,*(undefined8 *)(*plVar6 + 0x470));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this,StringLiteral_3114,(MethodInfo *)0x0);
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = (System_String_o *)
                   (*(pSVar7->klass->vtable)._8_get_Name.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._8_get_Name.method);
          bVar2 = System_String__op_Equality(pSVar8,StringLiteral_3114,(MethodInfo *)0x0);
          if (bVar2) {
            if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_00 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_64 = DEKKGJNMFEB__HNBCOIJFCCA(__this_00,EBDDELGICGB,(MethodInfo *)0x0);
            pSVar8 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    /* try { // try from 03610a18 to 03710a1f has its CatchHandler @ 03610b0c */
            (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar7,pSVar8,(pSVar7->klass->vtable)._10_set_Value.method);
          }
                    /* try { // try from 03610a34 to 03710a37 has its CatchHandler @ 03610af8 */
          IGFGDDANEPE__LPLGJMMAKJG(ENHJPOHLMCL,pSVar3,true,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
                    /* try { // try from 03610a50 to 03710a53 has its CatchHandler @ 03610b00 */
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03610a74 to 03710a7f has its CatchHandler @ 03610b14 */
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03610a88 to 03710a93 has its CatchHandler @ 03610b18 */
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
                    /* try { // try from 03610ad8 to 03710adb has its CatchHandler @ 03610b10 */
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03610ac8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03610af0 to 03710af3 has its CatchHandler @ 03610afc */
                    /* try { // try from 03610af4 to 03710b2f has its CatchHandler @ 03610900 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a34 with catch @ 03610af8
                        */
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03610afc;
    }
  }
LAB_03610ae0:
                    /* try { // try from 03610ae0 to 03710ae3 has its CatchHandler @ 03610b08 */
                    /* try { // try from 03610ae8 to 03710aeb has its CatchHandler @ 03610b04 */
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03610afc:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610af0 with catch @ 03610afc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a50 with catch @ 03610b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ae8 with catch @ 03610b04
                        */
  (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a18 with catch @ 03610b0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ad8 with catch @ 03610b10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a74 with catch @ 03610b14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a88 with catch @ 03610b18
                        */
  return;
}

