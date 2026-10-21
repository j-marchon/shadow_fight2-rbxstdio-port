// FMOACLJMJKF$$KCFGDEFAHLD @ RVA 0x3087670

/* WARNING: Removing unreachable block (ram,0x03187bcc) */
/* WARNING: Removing unreachable block (ram,0x03187be0) */

void FMOACLJMJKF__KCFGDEFAHLD(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  System_Xml_XmlNode_o *ELOCKFLGKNO;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *KENFFDHLNDA;
  System_String_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *PHOLAJOMLEL;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  il2cpp_array_size_t iVar11;
  undefined1 auVar12 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  auVar12._8_8_ = method;
  auVar12._0_8_ = LKILNGEECIJ;
  if ((DAT_0456602b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12811);
    FUN_01bab630(&StringLiteral_12818);
    FUN_01bab630(&StringLiteral_12807);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_12864);
    auVar12 = FUN_01bab630(&StringLiteral_1);
    DAT_0456602b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    auVar12 = (*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                        (LKILNGEECIJ,StringLiteral_12818,
                         (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    plVar5 = auVar12._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar12._8_8_;
    auVar12 = auVar2 << 0x40;
    if (plVar5 != (long *)0x0) {
      ELOCKFLGKNO = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar5 + 0x468))
                              (plVar5,StringLiteral_12811,*(undefined8 *)(*plVar5 + 0x470));
      if (ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) {
        return;
      }
      auVar12 = (*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                          (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
      plVar5 = auVar12._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar12._8_8_;
      auVar12 = auVar3 << 0x40;
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0318786c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318786c:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_03187b28;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_03187b10;
          }
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_031878cc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_031878cc:
          KENFFDHLNDA = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((KENFFDHLNDA->klass->_2).naturalAligment < bVar1) ||
             ((KENFFDHLNDA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(KENFFDHLNDA);
          }
          pSVar7 = (System_String_o *)
                   (*(KENFFDHLNDA->klass->vtable)._8_unknown.methodPtr)
                             (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._8_unknown.method);
          bVar4 = System_String__op_Equality(pSVar7,StringLiteral_12807,(MethodInfo *)0x0);
          if (bVar4) {
            __this = (System_Xml_XmlAttributeCollection_o *)
                     (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                               (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method);
            if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this,StringLiteral_12864,(MethodInfo *)0x0);
            if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
              if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              collection = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0);
              PHOLAJOMLEL = (System_Collections_Generic_List_string__o *)
                            thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
              System_Collections_Generic_List<object>___ctor
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                         Method_System_Collections_Generic_List<string>__ctor__);
              if (PHOLAJOMLEL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_List<object>__AddRange
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                         (System_Collections_Generic_IEnumerable_T__o *)collection,
                         Method_System_Collections_Generic_List<string>_AddRange__);
              if (collection == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar11 = collection->max_length;
              FMOACLJMJKF__JGPKFEOBBCP(PHOLAJOMLEL,method_00);
              if (0 < (int)iVar11) {
                FMOACLJMJKF__KMGOILJJOPB(ELOCKFLGKNO,KENFFDHLNDA,PHOLAJOMLEL,0,in_x4);
              }
              pSVar7 = StringLiteral_1;
              if ((PHOLAJOMLEL->fields)._size != 0) {
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_98,(System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                           Method_System_Collections_Generic_List<string>_GetEnumerator__);
                local_80.fields._index = local_98.fields._index;
                local_80.fields._version = local_98.fields._version;
                local_80.fields._list = local_98.fields._list;
                local_80.fields._current = local_98.fields._current;
                while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                         (&local_80,
                                          Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                         ), bVar4) {
                  pSVar7 = System_String__Concat
                                     (pSVar7,(System_String_o *)local_80.fields._current,
                                      StringLiteral_22485,(MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                bVar4 = System_String__op_Inequality(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
                if (bVar4) {
                  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = System_String__Remove
                                     (pSVar7,(pSVar7->fields)._stringLength + -1,(MethodInfo *)0x0);
                }
                (*(LBJNDMNEJJB->klass->vtable)._10_set_Value.methodPtr)
                          (LBJNDMNEJJB,pSVar7,(LBJNDMNEJJB->klass->vtable)._10_set_Value.method);
              }
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar12._0_8_,auVar12._8_8_);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03187b10:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03187b44;
    }
  }
LAB_03187b28:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03187b44:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

