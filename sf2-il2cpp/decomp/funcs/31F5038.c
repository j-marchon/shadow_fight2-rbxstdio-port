// NLPJLHOEAOE$$BGBBEOJGEID @ RVA 0x31F5038

/* WARNING: Removing unreachable block (ram,0x033058e4) */
/* WARNING: Removing unreachable block (ram,0x03305aa4) */

void NLPJLHOEAOE__BGBBEOJGEID(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *__this_00;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar3;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  undefined8 *puVar6;
  NLPJLHOEAOE_o *__this_01;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  Il2CppClass *pIVar7;
  Il2CppClass ***pppIVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  long lVar9;
  NLPJLHOEAOE_c *pNVar10;
  PJKHAJKEHEL_o *pPVar11;
  ulong uVar12;
  int *piVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_Enumerator_T__o SStack_98;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  
  if ((DAT_04566e20 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_get_Current__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_GetEnumerator__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_12866);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566e20 = 1;
    method = extraout_x1;
  }
  SStack_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_80.fields._index = 0;
  SStack_80.fields._version = 0;
  SStack_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KBGICKAOBAI;
  if (__this_00 == (System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&SStack_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_GetEnumerator__);
  SStack_80.fields._index = SStack_98.fields._index;
  SStack_80.fields._version = SStack_98.fields._version;
  SStack_80.fields._list = SStack_98.fields._list;
  SStack_80.fields._current = SStack_98.fields._current;
  do {
    do {
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&SStack_80,
                           Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_MoveNext__
                          );
        pIVar14 = SStack_80.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&SStack_80,
                     Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_Dispose__
                    );
          return;
        }
        if (SStack_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (SStack_80.fields._current[2].klass == (Il2CppClass *)0x0);
      method_00 = (MethodInfo *)0x0;
      bVar2 = System_String__Equals
                        ((System_String_o *)SStack_80.fields._current[2].klass,
                         string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    } while (bVar2);
    pNVar3 = NLPJLHOEAOE__ADKMBOALAKN(__this,(System_String_o *)pIVar14[2].klass,method_00);
    pSVar4 = (__this->fields).EGJHNECPGGM;
    if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar4,StringLiteral_14862,
                                (pSVar4->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    JHMENEKPIBO = (System_Xml_XmlElement_o *)
                  (**(code **)(*plVar5 + 0x468))
                            (plVar5,StringLiteral_12866,*(undefined8 *)(*plVar5 + 0x470));
    if (JHMENEKPIBO == (System_Xml_XmlElement_o *)0x0) {
      pSVar4 = (__this->fields).EGJHNECPGGM;
      if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      JHMENEKPIBO_00 =
           (System_Xml_XmlNode_o *)
           (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                     (pSVar4,StringLiteral_14862,(pSVar4->klass->vtable)._51_get_Item.method);
      JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO_00,StringLiteral_12866,(MethodInfo *)0x0);
      if (JHMENEKPIBO == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03305760;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03305760:
      uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        __this_01 = (NLPJLHOEAOE_o *)0x0;
        bVar2 = false;
        goto LAB_03305854;
      }
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_033057c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033057c0:
      __this_01 = (NLPJLHOEAOE_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (__this_01 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar10 = __this_01->klass;
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pNVar10->_2).naturalAligment < bVar1) ||
         ((pNVar10->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
      __this_02 = (System_Xml_XmlAttributeCollection_o *)
                  (*(code *)pNVar10[1].rgctx_data)(__this_01,pNVar10[1]._2.typeHierarchy);
      if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_02,StringLiteral_9327,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,pIVar14[2].monitor,(MethodInfo *)0x0);
    } while (!bVar2);
    bVar2 = true;
LAB_03305854:
    plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033058c8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033058c8:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if (bVar2) {
      if (pNVar3 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
      if (pNVar3 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar11 = (pNVar3->fields).BAKIMFMMFMP;
      if (pPVar11 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (NLPJLHOEAOE_o *)
                  EIABCPKDEBD__DGPOFACHGMP
                            ((System_Xml_XmlNode_o *)JHMENEKPIBO,(pPVar11->fields).JHFENACKNPG,
                             (MethodInfo *)0x0);
      NLPJLHOEAOE__JKLPNLPAODO(__this_01,(System_Xml_XmlNode_o *)__this_01,pIVar14[1].monitor,in_x3)
      ;
    }
    in_x3 = (MethodInfo *)0x1;
    pIVar7 = (Il2CppClass *)
             NLPJLHOEAOE__MDEGKNMDKPN
                       (__this,(System_Xml_XmlNode_o *)__this_01,(pNVar3->fields).BAKIMFMMFMP,true,
                        in_x4);
    pIVar14 = pIVar14 + 1;
    pIVar14->klass = pIVar7;
    thunk_FUN_01c20e04(pIVar14);
    if (pIVar14->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pppIVar8 = &(pIVar14->klass->_1).implementedInterfaces;
    *pppIVar8 = (Il2CppClass **)__this_01;
    thunk_FUN_01c20e04(pppIVar8,__this_01);
  } while( true );
}

