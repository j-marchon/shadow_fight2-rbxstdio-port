// FDJKKAFIEFB$$PGAOEMFNKCA @ RVA 0x35B23B8

/* WARNING: Removing unreachable block (ram,0x036b29c4) */
/* WARNING: Removing unreachable block (ram,0x036b27b0) */
/* WARNING: Removing unreachable block (ram,0x036b2a00) */
/* WARNING: Removing unreachable block (ram,0x036b2a0c) */

void FDJKKAFIEFB__PGAOEMFNKCA
               (FDJKKAFIEFB_o *__this,System_String_o *DDMGAEHAGMN,System_String_o *LFGKEPCBPKF,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *LNGCJJNKOID;
  System_String_o *AJNKKPBBGKG;
  System_Func_TSource__IEnumerable_TResult___o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  long lVar10;
  System_Collections_Generic_IEnumerable_TResult__c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  UniRx_ReactiveCollection_GIDPGJAAOJA__o *source;
  undefined1 auVar15 [16];
  
  if ((DAT_04568ea4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
    FUN_01bab630(&Method_FDJKKAFIEFB_EDHDJBHADAK_CACOKDGBCIB__);
    FUN_01bab630(&FDJKKAFIEFB_EDHDJBHADAK_TypeInfo);
    FUN_01bab630(&
                 Method_System_Linq_Enumerable_SelectMany<GIDPGJAAOJA,_KeyValuePair<string,_string>>__
                );
    FUN_01bab630(&System_Func<GIDPGJAAOJA,_IEnumerable<KeyValuePair<string,_string>>>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13826);
    FUN_01bab630(&StringLiteral_14981);
    FUN_01bab630(&StringLiteral_8588);
    DAT_04568ea4 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_EDHDJBHADAK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_036b29f8;
  __this_00[1].klass = (Il2CppClass *)DDMGAEHAGMN;
  thunk_FUN_01c20e04(__this_00 + 1,DDMGAEHAGMN);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).ELBMCMNELDD;
  (__this->fields)._LDHHEDNNHJF_k__BackingField = false;
  if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto LAB_036b29f8;
  System_Collections_Generic_Dictionary<object,_object>__Clear
            (__this_01,Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
  method_00 = (MethodInfo *)0x1;
  pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(LFGKEPCBPKF,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar4,StringLiteral_8588,(pSVar4->klass->vtable)._51_get_Item.method)
  ;
  if ((plVar5 != (long *)0x0) &&
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                 (plVar5,StringLiteral_14981,*(undefined8 *)(*plVar5 + 0x470)),
     plVar5 != (long *)0x0)) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_036b25f4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b25f4:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_036b27b4;
          lVar10 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_036b277c;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_036b2764;
        }
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_036b2654;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_036b2654:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        iVar3 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        if (iVar3 == 1) {
          __this_02 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
            LNGCJJNKOID = (System_String_o *)0x0;
          }
          else {
            if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this_02,StringLiteral_13826,(MethodInfo *)0x0);
            LNGCJJNKOID = EIABCPKDEBD__JPKEHIBGOEM
                                    (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,
                                     (MethodInfo *)0x0);
          }
          AJNKKPBBGKG = (System_String_o *)
                        (**(code **)(*plVar7 + 0x3c8))(plVar7,*(undefined8 *)(*plVar7 + 0x3d0));
          FDJKKAFIEFB__AJKJDLLNCNM(__this,LNGCJJNKOID,AJNKKPBBGKG,method_00);
        }
      } while( true );
    }
    goto LAB_036b29f8;
  }
  goto LAB_036b27b4;
LAB_036b294c:
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_036b29ac;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036b29ac:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  (__this->fields)._LDHHEDNNHJF_k__BackingField = true;
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_036b2764:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_036b2798;
    }
  }
LAB_036b277c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036b2798:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_036b27b4:
  source = (__this->fields).IEPHFPONOOO;
  selector = (System_Func_TSource__IEnumerable_TResult___o *)
             thunk_FUN_01bda818(
                               System_Func<GIDPGJAAOJA,_IEnumerable<KeyValuePair<string,_string>>>_TypeInfo
                               );
  System_Func<object,_object>___ctor();
  pSVar8 = System_Linq_Enumerable__SelectMany<object,_KeyValuePair<object,_object>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                      Method_System_Linq_Enumerable_SelectMany<GIDPGJAAOJA,_KeyValuePair<string,_string>>__
                     );
  if (pSVar8 != (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
    pSVar11 = pSVar8->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
    if (uVar12 != 0) {
      piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)
            System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo) {
          pVVar9 = pSVar11->vtable + *piVar13;
          goto LAB_036b2858;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar9 = (VirtualInvokeData *)
             FUN_01b81914(pSVar8,
                          System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo
                          ,0);
LAB_036b2858:
    plVar5 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_036b28c8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b28c8:
      uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar12 & 1) == 0) goto LAB_036b294c;
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)
               (piVar14 + -2) ==
              System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_036b2924;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01b81914(plVar5,
                            System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo
                            ,0);
LAB_036b2924:
      auVar15 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      FDJKKAFIEFB__AJKJDLLNCNM(__this,auVar15._0_8_,auVar15._8_8_,(MethodInfo *)auVar15._8_8_);
    } while( true );
  }
LAB_036b29f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

