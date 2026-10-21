// POLAJNLKPAK$$HNIHOIAMDPC @ RVA 0x313BBAC

/* WARNING: Removing unreachable block (ram,0x0323c550) */
/* WARNING: Removing unreachable block (ram,0x0323c298) */
/* WARNING: Removing unreachable block (ram,0x0323c534) */

bool POLAJNLKPAK__HNIHOIAMDPC
               (POLAJNLKPAK_o *__this,System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int32_t iVar4;
  uint32_t uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  System_Xml_XmlAttributeCollection_o *pSVar12;
  System_Xml_XmlAttribute_o *pSVar13;
  long *plVar14;
  Il2CppClass *pIVar15;
  System_Object_array *args;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  System_Collections_Generic_Dictionary_object__object__o *pSVar20;
  
  if ((DAT_04566731 & 1) == 0) {
    FUN_01bab630(&POLAJNLKPAK_ACFKGGIJHBH_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_set_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_set_Item__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&POLAJNLKPAK_MEEBKGDAIGB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_7237);
    FUN_01bab630(&StringLiteral_6930);
    FUN_01bab630(&StringLiteral_21812);
    FUN_01bab630(&StringLiteral_8888);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8898);
    FUN_01bab630(&StringLiteral_10222);
    FUN_01bab630(&StringLiteral_12396);
    FUN_01bab630(&StringLiteral_10213);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11861);
    FUN_01bab630(&StringLiteral_5546);
    DAT_04566731 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_11861,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) goto LAB_0323c434;
    plVar7 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
LAB_0323bd64:
      do {
        lVar17 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0323bdb0;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0323bdb0:
        uVar18 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar18 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_0323c434;
          lVar17 = *plVar7;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_0323c408;
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_0323c3f0;
        }
        lVar17 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_0323be10;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0323be10:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar17 = *plVar9;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(lVar17 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar9);
        }
        iVar3 = (**(code **)(lVar17 + 0x1e8))(plVar9,*(undefined8 *)(lVar17 + 0x1f0));
        if (iVar3 != 8) {
          pSVar10 = (System_String_o *)
                    (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          bVar2 = System_String__op_Equality(pSVar10,StringLiteral_10213,(MethodInfo *)0x0);
          if (bVar2) {
            pIVar11 = (Il2CppObject *)thunk_FUN_01bda818(POLAJNLKPAK_ACFKGGIJHBH_TypeInfo);
            System_Object___ctor(pIVar11,(MethodInfo *)0x0);
            pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar12,StringLiteral_8898,(MethodInfo *)0x0);
            iVar4 = GIAMPEGMNHE__NANCFCIGNEE(pSVar13,0x7fffffff,(MethodInfo *)0x0);
            if (pIVar11 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            *(int32_t *)((long)&pIVar11[1].klass + 4) = iVar4;
            pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar12,StringLiteral_12396,(MethodInfo *)0x0);
            pSVar10 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar13,StringLiteral_1,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(pSVar10,StringLiteral_5546,(MethodInfo *)0x0);
            *(bool *)&pIVar11[1].klass = bVar2;
            if (bVar2) {
              bVar2 = true;
            }
            else {
              bVar2 = System_String__op_Equality(pSVar10,StringLiteral_7237,(MethodInfo *)0x0);
            }
            *(bool *)((long)&pIVar11[1].klass + 1) = bVar2;
            pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar12,StringLiteral_6930,(MethodInfo *)0x0);
            pSVar10 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar13,(System_String_o *)0x0,(MethodInfo *)0x0);
            pIVar11[1].monitor = pSVar10;
            thunk_FUN_01c20e04();
            pSVar20 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).JPGEBIDNGPB;
            pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar12,StringLiteral_9327,(MethodInfo *)0x0);
            pSVar10 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar13,(System_String_o *)0x0,(MethodInfo *)0x0);
            if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar20,(Il2CppObject *)pSVar10,pIVar11,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_set_Item__
                      );
          }
          else {
            bVar2 = System_String__op_Equality(pSVar10,StringLiteral_10222,(MethodInfo *)0x0);
            if (bVar2) {
              plVar9 = (long *)(**(code **)(*plVar9 + 0x208))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x210));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                lVar17 = *plVar9;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0323bff4;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_0323bff4:
                uVar18 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                if ((uVar18 & 1) == 0) goto LAB_0323c208;
                lVar17 = *plVar9;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar8 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_0323c054;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_0323c054:
                plVar14 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
                if (plVar14 != (long *)0x0) {
                  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                  if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                     (*(System_Xml_XmlNode_c **)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8)
                      != System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(plVar14);
                  }
                }
                pIVar11 = (Il2CppObject *)thunk_FUN_01bda818(POLAJNLKPAK_MEEBKGDAIGB_TypeInfo);
                System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240))
                ;
                if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar12,StringLiteral_9327,(MethodInfo *)0x0);
                pIVar15 = (Il2CppClass *)
                          GIAMPEGMNHE__LFCNNAGLPHO(pSVar13,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                if (pIVar11 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar11[1].klass = pIVar15;
                thunk_FUN_01c20e04();
                pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240))
                ;
                if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar12,StringLiteral_8888,(MethodInfo *)0x0);
                uVar5 = GIAMPEGMNHE__JIONICBNBJE(pSVar13,0,(MethodInfo *)0x0);
                *(uint32_t *)&pIVar11[1].monitor = uVar5;
                pSVar20 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).DBGJIKCFLGB;
                if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Collections_Generic_Dictionary<object,_object>__set_Item
                          (pSVar20,(Il2CppObject *)pIVar11[1].klass,pIVar11,
                           Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_set_Item__
                          );
              } while( true );
            }
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pSVar10 != (System_String_o *)0x0) &&
               (lVar17 = thunk_FUN_01bda71c(pSVar10,(((args->obj).klass)->_1).element_class),
               lVar17 == 0)) {
              uVar16 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar16,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = (Il2CppObject *)pSVar10;
            thunk_FUN_01c20e04(args->m_Items,pSVar10);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_21812,args,(MethodInfo *)0x0);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_0323c208:
  plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
  if (plVar9 != (long *)0x0) {
    lVar17 = *plVar9;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
          puVar8 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0323c280;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar8 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_0323c280:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  goto LAB_0323bd64;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0323c3f0:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0323c424;
    }
  }
LAB_0323c408:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0323c424:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0323c434:
  return plVar6 != (long *)0x0;
}

