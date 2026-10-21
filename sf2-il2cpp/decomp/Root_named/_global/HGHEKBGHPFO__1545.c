// TypeDefIndex 1545
// Namespace: 
// public class HGHEKBGHPFO : LKIIOLIGOAN<PacksConfig>
// Fields:

// ===== internal static void EIBJKILKDFG(XmlNode CINHHCDJMFG, List<QuestCondition> HPACPFLKHPK)  [RVA 0x31A88EC]
// HGHEKBGHPFO$$EIBJKILKDFG @ RVA 0x31A88EC

/* WARNING: Removing unreachable block (ram,0x032a8bf4) */

void HGHEKBGHPFO__EIBJKILKDFG
               (System_Xml_XmlNode_o *CINHHCDJMFG,
               System_Collections_Generic_List_LEGDPJHPEOB__o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *CINHHCDJMFG_00;
  QuestCondition_o *__this;
  MethodInfo *method_00;
  long lVar5;
  QuestCondition_array *pLVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04566b1f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566b1f = 1;
  }
  if (CINHHCDJMFG == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(CINHHCDJMFG->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (CINHHCDJMFG,(CINHHCDJMFG->klass->vtable)._13_get_ChildNodes.method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_032a8a00;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032a8a00:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_032a8b90;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_032a8a60;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032a8a60:
    CINHHCDJMFG_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (CINHHCDJMFG_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((CINHHCDJMFG_00->klass->_2).naturalAligment < bVar1) ||
         ((CINHHCDJMFG_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(CINHHCDJMFG_00);
      }
    }
    __this = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
    QuestCondition___ctor(__this,(MethodInfo *)0x0);
    if (__this == (QuestCondition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (__this->klass->vtable)._6_HNIHOIAMDPC.method;
    (*(__this->klass->vtable)._6_HNIHOIAMDPC.methodPtr)(__this,CINHHCDJMFG_00);
    if ((__this->fields).ACCIHBHMFPN == 6) {
      HGHEKBGHPFO__EIBJKILKDFG(CINHHCDJMFG_00,(__this->fields).AHEFOIOKDOK,method_00);
    }
    lVar5 = Method_System_Collections_Generic_List<QuestCondition>_Add__;
    if (HPACPFLKHPK == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar6 = (HPACPFLKHPK->fields)._items;
    (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
    if (pLVar6 == (QuestCondition_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (HPACPFLKHPK->fields)._size;
    if (uVar2 < (uint)pLVar6->max_length) {
      (HPACPFLKHPK->fields)._size = uVar2 + 1;
      pLVar6->m_Items[(int)uVar2] = __this;
      thunk_FUN_01c20e04(pLVar6->m_Items + (int)uVar2,__this);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_032a8bac;
    }
  }
LAB_032a8b90:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032a8bac:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== protected override PacksConfig BKCFPHNEONL()  [RVA 0x31A8CCC]
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
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<QuestCondition>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<PackSettings>_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PackSettings_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PacksConfig_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10081/*"Packs"*/);
    FUN_01bab630(&StringLiteral_8532/*"Load: can't load config from file '"*/);
    FUN_01bab630(&StringLiteral_8118/*"ItemsPackLabel"*/);
    FUN_01bab630(&StringLiteral_8531/*"Load: can't find 'Talents' node in file '"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    auVar16 = FUN_01bab630(&StringLiteral_5476/*"DownloadConditions"*/);
    DAT_04566b20 = 1;
  }
  pSVar4 = HGHEKBGHPFO__CCPANHMBGPI(auVar16._0_8_,auVar16._8_8_);
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar5 == (System_Xml_XmlDocument_o *)0x0) {
    pSVar4 = HGHEKBGHPFO__CCPANHMBGPI((HGHEKBGHPFO_o *)0x0,method_00);
    puVar7 = &StringLiteral_8532/*"Load: can't load config from file '"*/;
  }
  else {
    auVar16 = (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar5,StringLiteral_10081/*"Packs"*/,(pSVar5->klass->vtable)._51_get_Item.method);
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
                          thunk_FUN_01bda818(System_Collections_Generic_List<QuestCondition>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                       Method_System_Collections_Generic_List<QuestCondition>__ctor__);
            method_01 = *(MethodInfo **)(*plVar8 + 0x470);
            CINHHCDJMFG = (System_Xml_XmlNode_o *)
                          (**(code **)(*plVar8 + 0x468))(plVar8,StringLiteral_5476/*"DownloadConditions"*/);
            HGHEKBGHPFO__EIBJKILKDFG(CINHHCDJMFG,HPACPFLKHPK,method_01);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar10,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
            packType = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                 (pSVar10,0,Method_EIABCPKDEBD_CKHGJBKDIID<PackType>__);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_8118/*"ItemsPackLabel"*/,(MethodInfo *)0x0);
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
    puVar7 = &StringLiteral_8531/*"Load: can't find 'Talents' node in file '"*/;
  }
  pSVar4 = System_String__Concat
                     ((System_String_o *)*puVar7,pSVar4,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
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


// ===== private string CCPANHMBGPI()  [RVA 0x31A93C0]
// HGHEKBGHPFO$$CCPANHMBGPI @ RVA 0x31A93C0

System_String_o * HGHEKBGHPFO__CCPANHMBGPI(HGHEKBGHPFO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b21 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1538/*"/packs.xml"*/);
    DAT_04566b21 = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar1 = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1538/*"/packs.xml"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x31A9430]
// HGHEKBGHPFO$$.ctor @ RVA 0x31A9430

void HGHEKBGHPFO___ctor(HGHEKBGHPFO_o *__this,MethodInfo *method)

{
  if ((DAT_04566b22 & 1) == 0) {
    FUN_01bab630(&Method_LKIIOLIGOAN<PacksConfig>__ctor__);
    DAT_04566b22 = 1;
  }
  LKIIOLIGOAN<object>___ctor((LKIIOLIGOAN_T__o *)__this,Method_LKIIOLIGOAN<PacksConfig>__ctor__);
  return;
}

