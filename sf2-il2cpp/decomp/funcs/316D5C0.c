// JHHFDBLANPH$$.ctor @ RVA 0x316D5C0

/* WARNING: Removing unreachable block (ram,0x0326db68) */
/* WARNING: Removing unreachable block (ram,0x0326dd74) */

void JHHFDBLANPH___ctor(JHHFDBLANPH_o *__this,System_Xml_XmlDocument_o *EPHIMGPGNPK,
                       System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *__this_00;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *GNEFHGGHFBL;
  System_String_o *pSVar7;
  long *plVar8;
  long *plVar9;
  System_String_array *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04566906 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_19666);
    FUN_01bab630(&StringLiteral_20233);
    FUN_01bab630(&StringLiteral_21057);
    FUN_01bab630(&StringLiteral_17719);
    FUN_01bab630(&StringLiteral_18346);
    FUN_01bab630(&StringLiteral_19289);
    DAT_04566906 = 1;
  }
  __this_00 = (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>__ctor__);
  (__this->fields).EJNOBBDDBDO = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (EIJDDKJONFO != (System_String_o *)0x0) {
    pSVar4 = System_String__ToLower(EIJDDKJONFO,(MethodInfo *)0x0);
    (__this->fields).MKEEEDOKPMM = pSVar4;
    thunk_FUN_01c20e04();
    if ((((EPHIMGPGNPK != (System_Xml_XmlDocument_o *)0x0) &&
         (plVar5 = (long *)(*(EPHIMGPGNPK->klass->vtable)._51_get_Item.methodPtr)
                                     (EPHIMGPGNPK,StringLiteral_20233,
                                      (EPHIMGPGNPK->klass->vtable)._51_get_Item.method),
         plVar5 != (long *)0x0)) &&
        (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                    (plVar5,StringLiteral_17719,*(undefined8 *)(*plVar5 + 0x470)),
        plVar5 != (long *)0x0)) &&
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
       plVar5 != (long *)0x0)) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (System_String_o *)0x0;
LAB_0326d778:
      do {
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0326d7c4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326d7c4:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0326dc74;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0326dc5c;
        }
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0326d824;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326d824:
        GNEFHGGHFBL = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (GNEFHGGHFBL == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((GNEFHGGHFBL->klass->_2).naturalAligment < bVar1) ||
           ((GNEFHGGHFBL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(GNEFHGGHFBL);
        }
        pSVar7 = (System_String_o *)
                 (*(GNEFHGGHFBL->klass->vtable)._8_unknown.methodPtr)
                           (GNEFHGGHFBL,(GNEFHGGHFBL->klass->vtable)._8_unknown.method);
        bVar2 = System_String__op_Equality(pSVar7,StringLiteral_19289,(MethodInfo *)0x0);
        if (bVar2) {
          plVar8 = (long *)(*(GNEFHGGHFBL->klass->vtable)._18_get_FirstChild.methodPtr)
                                     (GNEFHGGHFBL,
                                      (GNEFHGGHFBL->klass->vtable)._18_get_FirstChild.method);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar4 = (System_String_o *)
                   (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        }
        else {
          bVar2 = System_String__op_Equality(pSVar4,StringLiteral_18346,(MethodInfo *)0x0);
          if (bVar2) {
            JHHFDBLANPH__FIJCDMCDGCF(__this,GNEFHGGHFBL,(__this->fields).EJNOBBDDBDO,method);
          }
          bVar2 = System_String__op_Equality(pSVar4,StringLiteral_19666,(MethodInfo *)0x0);
          if (bVar2) {
            plVar8 = (long *)(*(GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (GNEFHGGHFBL,
                                        (GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.method);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0))
            ;
            do {
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
LAB_0326d8f0:
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0326d93c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326d93c:
              uVar12 = (*(code *)*puVar6)(plVar8,puVar6[1]);
              if ((uVar12 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                if (plVar8 == (long *)0x0) break;
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 == 0) goto LAB_0326db3c;
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_0326db24;
              }
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0326d99c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326d99c:
              plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar9);
              }
              pSVar7 = (System_String_o *)
                       (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              bVar2 = System_String__op_Equality(pSVar7,StringLiteral_19289,(MethodInfo *)0x0);
              if (!bVar2) {
                bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21057,(MethodInfo *)0x0);
                if (bVar2) {
                  plVar9 = (long *)(**(code **)(*plVar9 + 600))
                                             (plVar9,*(undefined8 *)(*plVar9 + 0x260));
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = (System_String_o *)
                           (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
                  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = System_String__Substring
                                     (pSVar7,1,(pSVar7->fields)._stringLength + -2,(MethodInfo *)0x0
                                     );
                  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  method = (MethodInfo *)0x0;
                  pSVar10 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0);
                  if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  if ((uint)pSVar10->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8d0();
                  }
                  iVar3 = System_Int32__Parse(pSVar10->m_Items[1],(MethodInfo *)0x0);
                  (__this->fields).IOMNCJGDGNC = iVar3;
                }
                goto LAB_0326d8f0;
              }
              plVar9 = (long *)(**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260))
              ;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = (System_String_o *)
                       (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            } while( true );
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0326db24:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0326db58;
    }
  }
LAB_0326db3c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0326db58:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  goto LAB_0326d778;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0326dc5c:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0326dc90;
    }
  }
LAB_0326dc74:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0326dc90:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

