// NLPJLHOEAOE$$KFOBDALBBMM @ RVA 0x31FD3C0

/* WARNING: Removing unreachable block (ram,0x032fd940) */

void NLPJLHOEAOE__KFOBDALBBMM
               (NLPJLHOEAOE_o *__this,System_String_o *HEEJOJAGIKC,System_String_o *EKOABHFOJFK,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  FPPKHNNABAD_o *__this_01;
  MethodInfo *method_00;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04566e42 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FPPKHNNABAD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8483);
    FUN_01bab630(&StringLiteral_10724);
    FUN_01bab630(&StringLiteral_8485);
    FUN_01bab630(&StringLiteral_8484);
    FUN_01bab630(&StringLiteral_8482);
    FUN_01bab630(&StringLiteral_433);
    FUN_01bab630(&StringLiteral_210);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_10642);
    FUN_01bab630(&StringLiteral_7435);
    DAT_04566e42 = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(HEEJOJAGIKC,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = StringLiteral_8485;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar4 = StringLiteral_8485;
    }
  }
  else {
    bVar2 = NLPJLHOEAOE__BIEJGEEBBDI(__this,HEEJOJAGIKC,(MethodInfo *)EKOABHFOJFK);
    if (!bVar2) {
      return;
    }
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
    pSVar4 = GIAMPEGMNHE__JIGCIBMKDAL(pSVar4,HEEJOJAGIKC,(MethodInfo *)0x0);
    pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,1,true,true,false,(MethodInfo *)0x0);
    if (pSVar5 != (System_Xml_XmlDocument_o *)0x0) {
      plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar5,StringLiteral_11416,
                                  (pSVar5->klass->vtable)._51_get_Item.method);
      if (((plVar6 != (long *)0x0) ||
          (plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                      (pSVar5,StringLiteral_10724,
                                       (pSVar5->klass->vtable)._51_get_Item.method),
          plVar6 != (long *)0x0)) &&
         (plVar7 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
         plVar7 != (long *)0x0)) {
        iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        if (iVar3 < 1) {
          pSVar4 = System_String__Concat
                             (StringLiteral_8482,HEEJOJAGIKC,StringLiteral_210,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
        if (plVar6 != (long *)0x0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar9 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_032fd6c4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_032fd6c4:
            uVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            if ((uVar10 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
              if (plVar6 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar6;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_032fd8a8;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032fd890;
            }
            lVar9 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_032fd724;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_032fd724:
            JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar6,puVar8[1]);
            if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO);
            }
            pSVar4 = (System_String_o *)
                     (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
            bVar2 = System_String__op_Equality(pSVar4,StringLiteral_10642,(MethodInfo *)0x0);
            if (bVar2) {
              __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
              __this_01 = (FPPKHNNABAD_o *)thunk_FUN_01bda818(FPPKHNNABAD_TypeInfo);
              FPPKHNNABAD___ctor(__this_01,JHMENEKPIBO,HEEJOJAGIKC,(MethodInfo *)0x0);
              if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              Nekki_SF2_Core_Quests_QuestsManager__AddQuest(__this_00,__this_01,(MethodInfo *)0x0);
            }
            else {
              pSVar4 = (System_String_o *)
                       (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
              method_00 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_7435,(MethodInfo *)0x0);
              if (bVar2) {
                NLPJLHOEAOE__PBGBOLODIPO(__this,JHMENEKPIBO,method_00);
              }
              else {
                pSVar4 = (System_String_o *)
                         (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                                   (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
                pSVar4 = System_String__Concat
                                   (StringLiteral_8483,HEEJOJAGIKC,StringLiteral_433,pSVar4,
                                    (MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
              }
            }
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = System_String__Concat(StringLiteral_8484,HEEJOJAGIKC,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_032fd890:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_032fd8fc;
    }
  }
LAB_032fd8a8:
  puVar8 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_032fd8fc:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
  return;
}

