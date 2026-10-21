// FOKJBDHLIMG$$FBKGMIENPFK @ RVA 0x309E9CC

/* WARNING: Removing unreachable block (ram,0x0319f140) */
/* WARNING: Removing unreachable block (ram,0x0319f130) */

void FOKJBDHLIMG__FBKGMIENPFK
               (FOKJBDHLIMG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *ONLOEDAIEOJ;
  System_String_o *OCFNILDEHHP;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  long *plVar10;
  FOKJBDHLIMG_o *__this_00;
  HEFOANCOHDC_o *pHVar11;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04566132 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9209);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_14589);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5304);
    DAT_04566132 = 1;
  }
  pSVar12 = (__this->fields).CNLHOAHDHCF;
  if (pSVar12 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar3 = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (0 < iVar3) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0319eb3c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319eb3c:
        uVar14 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar14 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_0319f024;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0319f00c;
        }
        lVar13 = *plVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0319eb9c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319eb9c:
        pSVar6 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (pSVar6 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar6);
        }
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_8409,(MethodInfo *)0x0);
          iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_5304,(MethodInfo *)0x0);
          ONLOEDAIEOJ = (MethodInfo *)
                        EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_9209,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          OCFNILDEHHP = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
          EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC(__this,pSVar9,method_00);
          if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
            plVar10 = (long *)(*(pSVar6->klass->vtable)._13_get_ChildNodes.methodPtr)
                                        (pSVar6,(pSVar6->klass->vtable)._13_get_ChildNodes.method);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_00 = (FOKJBDHLIMG_o *)
                        (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            if ((int)__this_00 < 1) {
              FOKJBDHLIMG__HEDKEHDPKAP
                        (__this,EIKFGOCCOIE,iVar3,(System_String_o *)ONLOEDAIEOJ,OCFNILDEHHP,in_x5);
              in_x3 = ONLOEDAIEOJ;
            }
            else {
              pHVar11 = FOKJBDHLIMG__FMFCHMPPCBH(__this_00,EIKFGOCCOIE,pSVar6,in_x3);
              if (pHVar11 != EIKFGOCCOIE) {
                in_x3 = ONLOEDAIEOJ;
                FOKJBDHLIMG__HEDKEHDPKAP
                          (__this,pHVar11,iVar3,(System_String_o *)ONLOEDAIEOJ,OCFNILDEHHP,in_x5);
              }
              plVar10 = (long *)(*(pSVar6->klass->vtable)._13_get_ChildNodes.methodPtr)
                                          (pSVar6,(pSVar6->klass->vtable)._13_get_ChildNodes.method)
              ;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
LAB_0319ed88:
              lVar13 = *plVar10;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0319edd4;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar5 = (undefined8 *)FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0)
              ;
LAB_0319edd4:
              uVar14 = (*(code *)*puVar5)(plVar10,puVar5[1]);
              if ((uVar14 & 1) != 0) {
                lVar13 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar5 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto LAB_0319ee34;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar5 = (undefined8 *)
                         FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319ee34:
                pSVar6 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar10,puVar5[1]);
                if (pSVar6 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pSVar6);
                }
                pSVar9 = (System_String_o *)
                         (*(pSVar6->klass->vtable)._8_unknown.methodPtr)
                                   (pSVar6,(pSVar6->klass->vtable)._8_unknown.method);
                if (pSVar9 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar2 = System_String__Equals(pSVar9,StringLiteral_14589,(MethodInfo *)0x0);
                if (bVar2) {
                  pHVar11 = FOKJBDHLIMG__FBBGALKOPNG((FOKJBDHLIMG_o *)0x1,EIKFGOCCOIE,pSVar6,in_x3);
                  in_x3 = ONLOEDAIEOJ;
                  FOKJBDHLIMG__HEDKEHDPKAP
                            (__this,pHVar11,iVar3,(System_String_o *)ONLOEDAIEOJ,OCFNILDEHHP,in_x5);
                }
                goto LAB_0319ed88;
              }
              plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
              if (plVar10 != (long *)0x0) {
                lVar13 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                      puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0319ef38;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar5 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0319ef38:
                (*(code *)*puVar5)(plVar10,puVar5[1]);
              }
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0319f00c:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0319f040;
    }
  }
LAB_0319f024:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0319f040:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

