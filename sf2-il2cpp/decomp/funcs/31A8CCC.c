// HGHEKBGHPFO$$BKCFPHNEONL @ RVA 0x31A8CCC

/* WARNING: Removing unreachable block (ram,0x032a92ac) */
/* WARNING: Removing unreachable block (ram,0x032a9244) */

Core_Configs_Models_PacksConfig_o *
HGHEKBGHPFO__BKCFPHNEONL(HGHEKBGHPFO_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int32_t packType;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  System_Collections_Generic_List_object__o *__this_00;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_Collections_Generic_List_LEGDPJHPEOB__o *HPACPFLKHPK;
  System_Xml_XmlNode_o *CINHHCDJMFG;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *itemsPackLabel;
  Core_Configs_Models_PackSettings_o *__this_01;
  Core_Configs_Models_PacksConfig_o *pCVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = method;
  auVar16._0_8_ = __this;
  if ((DAT_04566b20 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<PackType>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PackSettings>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PackSettings>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<PackSettings>_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PackSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PacksConfig_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10081);
    FUN_01bab630(&StringLiteral_8532);
    FUN_01bab630(&StringLiteral_8118);
    FUN_01bab630(&StringLiteral_8531);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_853);
    auVar16 = FUN_01bab630(&StringLiteral_5476);
    DAT_04566b20 = 1;
  }
  pSVar4 = HGHEKBGHPFO__CCPANHMBGPI(auVar16._0_8_,auVar16._8_8_);
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar5 == (System_Xml_XmlDocument_o *)0x0) {
    pSVar4 = HGHEKBGHPFO__CCPANHMBGPI((HGHEKBGHPFO_o *)0x0,method_00);
    puVar7 = &StringLiteral_8532;
  }
  else {
    auVar16 = (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar5,StringLiteral_10081,(pSVar5->klass->vtable)._51_get_Item.method);
    plVar6 = auVar16._0_8_;
    if (plVar6 != (long *)0x0) {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<PackSettings>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,Method_System_Collections_Generic_List<PackSettings>__ctor__);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_032a8eec;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_032a8eec:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) goto LAB_032a9238;
          lVar12 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_032a919c;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_032a9184;
        }
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_032a8f4c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_032a8f4c:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar8);
          }
          iVar3 = (**(code **)(lVar12 + 0x1e8))(plVar8,*(undefined8 *)(lVar12 + 0x1f0));
          if (iVar3 == 1) {
            HPACPFLKHPK = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
                          thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                       Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
            method_01 = *(MethodInfo **)(*plVar8 + 0x470);
            CINHHCDJMFG = (System_Xml_XmlNode_o *)
                          (**(code **)(*plVar8 + 0x468))(plVar8,StringLiteral_5476);
            HGHEKBGHPFO__EIBJKILKDFG(CINHHCDJMFG,HPACPFLKHPK,method_01);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar10,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_13991,(MethodInfo *)0x0);
            packType = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                 (pSVar10,0,Method_EIABCPKDEBD_CKHGJBKDIID<PackType>__);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_8118,(MethodInfo *)0x0);
            itemsPackLabel =
                 EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar10,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            __this_01 = (Core_Configs_Models_PackSettings_o *)
                        thunk_FUN_01bda818(Core_Configs_Models_PackSettings_TypeInfo);
            Core_Configs_Models_PackSettings___ctor
                      (__this_01,pSVar4,packType,itemsPackLabel,
                       (System_Collections_Generic_IEnumerable_LEGDPJHPEOB__o *)HPACPFLKHPK,
                       (MethodInfo *)0x0);
            lVar12 = Method_System_Collections_Generic_List<PackSettings>_Add__;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar13 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar13->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar13->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
              thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar2,__this_01);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
      } while( true );
    }
    pSVar4 = HGHEKBGHPFO__CCPANHMBGPI((HGHEKBGHPFO_o *)0x0,auVar16._8_8_);
    puVar7 = &StringLiteral_8531;
  }
  pSVar4 = System_String__Concat
                     ((System_String_o *)*puVar7,pSVar4,StringLiteral_853,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
  pCVar11 = (Core_Configs_Models_PacksConfig_o *)
            thunk_FUN_01bda818(Core_Configs_Models_PacksConfig_TypeInfo);
  Core_Configs_Models_PacksConfig___ctor
            (pCVar11,(System_Collections_Generic_IEnumerable_PackSettings__o *)0x0,(MethodInfo *)0x0
            );
  return pCVar11;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_032a9184:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_032a922c;
    }
  }
LAB_032a919c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_032a922c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_032a9238:
  pCVar11 = (Core_Configs_Models_PacksConfig_o *)
            thunk_FUN_01bda818(Core_Configs_Models_PacksConfig_TypeInfo);
  Core_Configs_Models_PacksConfig___ctor
            (pCVar11,(System_Collections_Generic_IEnumerable_PackSettings__o *)__this_00,
             (MethodInfo *)0x0);
  return pCVar11;
}

