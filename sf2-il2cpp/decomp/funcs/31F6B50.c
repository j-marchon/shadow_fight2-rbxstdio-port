// NLPJLHOEAOE$$LGPNDHHGADC @ RVA 0x31F6B50

/* WARNING: Removing unreachable block (ram,0x032f70a8) */

void NLPJLHOEAOE__LGPNDHHGADC
               (NLPJLHOEAOE_o *__this,System_String_o *HEEJOJAGIKC,System_String_o *HBDNGIDONHG,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  long *plVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  FPPKHNNABAD_o *__this_02;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  System_String_o *pSVar11;
  
  if ((DAT_04566dcd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FPPKHNNABAD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10724);
    FUN_01bab630(&StringLiteral_8485);
    FUN_01bab630(&StringLiteral_8484);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8482);
    FUN_01bab630(&StringLiteral_210);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_10642);
    FUN_01bab630(&StringLiteral_8486);
    DAT_04566dcd = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(HEEJOJAGIKC,(MethodInfo *)0x0);
  if (bVar2) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar7 = &StringLiteral_8485;
  }
  else {
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(HBDNGIDONHG,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar11 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
      pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar11,HEEJOJAGIKC,1,true,true,false,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
        plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar4,StringLiteral_11416,
                                    (pSVar4->klass->vtable)._51_get_Item.method);
        if (((plVar5 != (long *)0x0) ||
            (plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                        (pSVar4,StringLiteral_10724,
                                         (pSVar4->klass->vtable)._51_get_Item.method),
            plVar5 != (long *)0x0)) &&
           (plVar6 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210))
           , plVar6 != (long *)0x0)) {
          iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          if (iVar3 < 1) {
            pSVar11 = System_String__Concat
                                (StringLiteral_8482,HEEJOJAGIKC,StringLiteral_210,(MethodInfo *)0x0)
            ;
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
          }
          plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
          if (plVar5 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0))
            ;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              do {
                lVar8 = *plVar5;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_032f6e60;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032f6e60:
                uVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
                if ((uVar9 & 1) == 0) goto LAB_032f6fc4;
                lVar8 = *plVar5;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto LAB_032f6ec0;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_032f6ec0:
                AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar5,puVar7[1]);
                if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                   ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(AHDGNOJPPIB);
                }
                pSVar11 = (System_String_o *)
                          (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                                    (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
                bVar2 = System_String__op_Inequality(pSVar11,StringLiteral_10642,(MethodInfo *)0x0);
              } while (bVar2);
              __this_00 = (System_Xml_XmlAttributeCollection_o *)
                          (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                    (AHDGNOJPPIB,
                                     (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
              if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
              pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                  (LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
              bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar11,(MethodInfo *)0x0);
            } while ((bVar2) ||
                    (bVar2 = System_String__op_Inequality(pSVar11,HBDNGIDONHG,(MethodInfo *)0x0),
                    bVar2));
            __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            __this_02 = (FPPKHNNABAD_o *)thunk_FUN_01bda818(FPPKHNNABAD_TypeInfo);
            FPPKHNNABAD___ctor(__this_02,AHDGNOJPPIB,HEEJOJAGIKC,(MethodInfo *)0x0);
            if (__this_01 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            Nekki_SF2_Core_Quests_QuestsManager__AddQuest(__this_01,__this_02,(MethodInfo *)0x0);
LAB_032f6fc4:
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 != (long *)0x0) {
              lVar8 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
                    puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_032f7068;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032f7068:
              (*(code *)*puVar7)(plVar5,puVar7[1]);
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar11 = System_String__Concat(StringLiteral_8484,HEEJOJAGIKC,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      goto LAB_032f6c9c;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar7 = &StringLiteral_8486;
  }
  pSVar11 = (System_String_o *)*puVar7;
LAB_032f6c9c:
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  return;
}

