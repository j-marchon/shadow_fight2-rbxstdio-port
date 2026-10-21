// TypeDefIndex 1238
// Namespace: 
// public class POLAJNLKPAK
// Fields:
//   private readonly Dictionary<string, POLAJNLKPAK.ACFKGGIJHBH> JPGEBIDNGPB; // 0x10
//   private readonly Dictionary<string, POLAJNLKPAK.MEEBKGDAIGB> DBGJIKCFLGB; // 0x18

// ===== public int MGNCJHLPPFA(string LMPMHKIABOM)  [RVA 0x313BB28]
// POLAJNLKPAK$$MGNCJHLPPFA @ RVA 0x313BB28

int32_t POLAJNLKPAK__MGNCJHLPPFA
                  (POLAJNLKPAK_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_28;
  
  if ((DAT_04566730 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                );
    DAT_04566730 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JPGEBIDNGPB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LMPMHKIABOM,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323bba8;
      iVar2 = *(int32_t *)((long)&local_28[1].klass + 4);
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
LAB_0323bba8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HNIHOIAMDPC(XmlDocument LKILNGEECIJ)  [RVA 0x313BBAC]
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
    FUN_01bab630(&StringLiteral_7237/*"IGNORE"*/);
    FUN_01bab630(&StringLiteral_6930/*"GroupName"*/);
    FUN_01bab630(&StringLiteral_21812/*"unknown node with name {0} into the ServerPerks"*/);
    FUN_01bab630(&StringLiteral_8888/*"MaxInstances"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8898/*"MaxUses"*/);
    FUN_01bab630(&StringLiteral_10222/*"PerkGroups"*/);
    FUN_01bab630(&StringLiteral_12396/*"Status"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11861/*"ServerPerks"*/);
    FUN_01bab630(&StringLiteral_5546/*"ENABLE"*/);
    DAT_04566731 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_11861/*"ServerPerks"*/,
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
          bVar2 = System_String__op_Equality(pSVar10,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
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
                                (pSVar12,StringLiteral_8898/*"MaxUses"*/,(MethodInfo *)0x0);
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
                                (pSVar12,StringLiteral_12396/*"Status"*/,(MethodInfo *)0x0);
            pSVar10 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar13,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(pSVar10,StringLiteral_5546/*"ENABLE"*/,(MethodInfo *)0x0);
            *(bool *)&pIVar11[1].klass = bVar2;
            if (bVar2) {
              bVar2 = true;
            }
            else {
              bVar2 = System_String__op_Equality(pSVar10,StringLiteral_7237/*"IGNORE"*/,(MethodInfo *)0x0);
            }
            *(bool *)((long)&pIVar11[1].klass + 1) = bVar2;
            pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar12,StringLiteral_6930/*"GroupName"*/,(MethodInfo *)0x0);
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
                                (pSVar12,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
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
            bVar2 = System_String__op_Equality(pSVar10,StringLiteral_10222/*"PerkGroups"*/,(MethodInfo *)0x0);
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
                                    (pSVar12,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
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
                                    (pSVar12,StringLiteral_8888/*"MaxInstances"*/,(MethodInfo *)0x0);
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
            UnityEngine_Debug__LogErrorFormat(StringLiteral_21812/*"unknown node with name {0} into the ServerPerks"*/,args,(MethodInfo *)0x0);
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


// ===== public string LMFIOPLCOHM(string LMPMHKIABOM)  [RVA 0x313C6D4]
// POLAJNLKPAK$$LMFIOPLCOHM @ RVA 0x313C6D4

System_String_o *
POLAJNLKPAK__LMFIOPLCOHM(POLAJNLKPAK_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  void **ppvVar2;
  Il2CppObject *local_28;
  
  if ((DAT_04566732 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                );
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566732 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JPGEBIDNGPB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LMPMHKIABOM,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323c768;
      ppvVar2 = &local_28[1].monitor;
    }
    else {
      ppvVar2 = (void **)&StringLiteral_1/*""*/;
    }
    return *ppvVar2;
  }
LAB_0323c768:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HNIHOIAMDPC(string FELBILGDDDN)  [RVA 0x313C76C]
// POLAJNLKPAK$$HNIHOIAMDPC @ RVA 0x313C76C

bool POLAJNLKPAK__HNIHOIAMDPC(POLAJNLKPAK_o *__this,System_String_o *FELBILGDDDN,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlDocument_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566733 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04566733 = 1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (__this_00->klass->vtable)._86_Load.method;
    (*(__this_00->klass->vtable)._86_Load.methodPtr)(__this_00,FELBILGDDDN);
    bVar1 = POLAJNLKPAK__HNIHOIAMDPC(__this,__this_00,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public uint PECPNLGPMEO(string LNIGANCLDGE)  [RVA 0x313C7F4]
// POLAJNLKPAK$$PECPNLGPMEO @ RVA 0x313C7F4

uint32_t POLAJNLKPAK__PECPNLGPMEO
                   (POLAJNLKPAK_o *__this,System_String_o *LNIGANCLDGE,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_28;
  
  if ((DAT_04566734 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TryGetValue__
                );
    DAT_04566734 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).DBGJIKCFLGB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LNIGANCLDGE,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323c874;
      uVar2 = *(uint32_t *)&local_28[1].monitor;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_0323c874:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x313C878]
// POLAJNLKPAK$$.ctor @ RVA 0x313C878

void POLAJNLKPAK___ctor(POLAJNLKPAK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__POLAJNLKPAK_MEEBKGDAIGB__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566735 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TypeInfo);
    DAT_04566735 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>__ctor__);
  (__this->fields).JPGEBIDNGPB =
       (System_Collections_Generic_Dictionary_string__POLAJNLKPAK_ACFKGGIJHBH__o *)pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>__ctor__);
  ppSVar2 = &(__this->fields).DBGJIKCFLGB;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__POLAJNLKPAK_MEEBKGDAIGB__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x313C954]
// POLAJNLKPAK$$NDNPGAKJLHM @ RVA 0x313C954

void POLAJNLKPAK__NDNPGAKJLHM(POLAJNLKPAK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566736 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_Clear__
                );
    DAT_04566736 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JPGEBIDNGPB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,
               Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_Clear__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public bool IOELKHFHKGO(string LMPMHKIABOM)  [RVA 0x313C9A4]
// POLAJNLKPAK$$IOELKHFHKGO @ RVA 0x313C9A4

bool POLAJNLKPAK__IOELKHFHKGO(POLAJNLKPAK_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_28;
  
  if ((DAT_04566737 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                );
    DAT_04566737 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JPGEBIDNGPB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LMPMHKIABOM,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323ca2c;
      bVar1 = *(char *)((long)&local_28[1].klass + 1) != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0323ca2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool JFGBPBOCOIC(string LMPMHKIABOM)  [RVA 0x313CA30]
// POLAJNLKPAK$$JFGBPBOCOIC @ RVA 0x313CA30

bool POLAJNLKPAK__JFGBPBOCOIC(POLAJNLKPAK_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_28;
  
  if ((DAT_04566738 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                );
    DAT_04566738 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JPGEBIDNGPB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LMPMHKIABOM,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323cab8;
      bVar1 = *(char *)&local_28[1].klass != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0323cab8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

