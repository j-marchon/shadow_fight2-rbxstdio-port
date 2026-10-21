// ACHLOMELAJE$$CIAADMKJGLF @ RVA 0x305B320

/* WARNING: Removing unreachable block (ram,0x0315b668) */

void ACHLOMELAJE__CIAADMKJGLF(ACHLOMELAJE_o *__this,OLKPEJMEBPJ_o *CNLGBOLFOJO,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  DNELIPCHKLK_o *pDVar3;
  System_String_o *b;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_01;
  OOMHDDBCBJP_o *__this_02;
  MethodInfo *method_00;
  System_Xml_XmlNode_o *pSVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04565ee9 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3445);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565ee9 = 1;
  }
  if ((CNLGBOLFOJO != (OLKPEJMEBPJ_o *)0x0) &&
     (pDVar3 = (CNLGBOLFOJO->fields).BBELCDHPJIP, pDVar3 != (DNELIPCHKLK_o *)0x0)) {
    b = (System_String_o *)
        (*(pDVar3->klass->vtable)._3_ToString.methodPtr)
                  (pDVar3,(pDVar3->klass->vtable)._3_ToString.method);
    pSVar8 = (__this->fields).super.HJKLIDCAEOE;
    if ((pSVar8 != (System_Xml_XmlNode_o *)0x0) &&
       ((plVar4 = (long *)(*(pSVar8->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar8,StringLiteral_3445,
                                     (pSVar8->klass->vtable)._51_get_Item.method),
        plVar4 != (long *)0x0 &&
        (plVar5 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210)),
        plVar5 != (long *)0x0)))) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0315b484;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0315b484:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) goto LAB_0315b578;
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0315b4e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315b4e4:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar9 = *plVar7;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(lVar9 + 0x238))(plVar7,*(undefined8 *)(lVar9 + 0x240));
        if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
        a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      } while (!bVar2);
      (**(code **)(*plVar4 + 0x2c8))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x2d0));
LAB_0315b578:
      plVar4 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0315b5dc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0315b5dc:
        (*(code *)*puVar6)(plVar4,puVar6[1]);
      }
      method_00 = (MethodInfo *)0x0;
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields).KBCAIBPDIKB;
      if (__this_01 != (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) {
        ACHLOMELAJE_MDHCBOFHAEL__CIAADMKJGLF(__this_01,CNLGBOLFOJO,method_00);
        __this_02 = (CNLGBOLFOJO->fields).MIFNFJDIPBL;
        if (__this_02 != (OOMHDDBCBJP_o *)0x0) {
          OOMHDDBCBJP__PGMIOJCMMOG(__this_02,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

