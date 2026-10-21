// ACHLOMELAJE$$CFCOAILIDJD @ RVA 0x305DC54

/* WARNING: Removing unreachable block (ram,0x0315dfb4) */

void ACHLOMELAJE__CFCOAILIDJD(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  HOOAAGABMBL_o *__this_01;
  MethodInfo *extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  DOPEEDABNEK_o *__this_02;
  undefined1 auVar9 [16];
  
  if ((DAT_04565ea5 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8116);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_4836);
    DAT_04565ea5 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_4836,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 == (long *)0x0) {
      return;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                               (plVar3,StringLiteral_8116,*(undefined8 *)(*plVar3 + 0x470));
    if (plVar3 == (long *)0x0) {
      return;
    }
    auVar9 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    method = auVar9._8_8_;
    plVar3 = auVar9._0_8_;
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0315ddbc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0315ddbc:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_0315df50;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0315df38;
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0315de1c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315de1c:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar5);
          }
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0)
        ;
        if (__this_02 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = DOPEEDABNEK__CKKIPBAIEMN(__this_02,KGLJICLJHEL,(MethodInfo *)0x0);
        if ((__this_01 != (HOOAAGABMBL_o *)0x0) &&
           ((__this_01->fields)._FLBALKBPCFG_k__BackingField == 0)) {
          HOOAAGABMBL__GEBIJFANLGH(__this_01,true,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0315df38:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0315df6c;
    }
  }
LAB_0315df50:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0315df6c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

