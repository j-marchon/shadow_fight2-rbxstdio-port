// TypeDefIndex 3434
// Namespace: 
// public class NDGHNMIHOMN
// Fields:
//   public List<KKCEIILPLEC> PEMHPNLDPHD; // 0x10
//   public float EAOAPACLBID; // 0x18
//   public float EDKNLOPAJIC; // 0x1C
//   public float HHAJAMHDBKG; // 0x20

// ===== public KKCEIILPLEC PBOALOOBNEK(int DPJIDNBJIBG)  [RVA 0x3563F88]
// NDGHNMIHOMN$$PBOALOOBNEK @ RVA 0x3563F88

KKCEIILPLEC_o *
NDGHNMIHOMN__PBOALOOBNEK(NDGHNMIHOMN_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_KKCEIILPLEC__o *__this_00;
  KKCEIILPLEC_o *pKVar1;
  
  if ((DAT_04568be2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Item__);
    DAT_04568be2 = 1;
  }
  __this_00 = (__this->fields).PEMHPNLDPHD;
  if (__this_00 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      pKVar1 = (KKCEIILPLEC_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Item__);
      return pKVar1;
    }
    return (KKCEIILPLEC_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float DIIDLOEMDAD(int DPJIDNBJIBG)  [RVA 0x3564008]
// NDGHNMIHOMN$$DIIDLOEMDAD @ RVA 0x3564008

float NDGHNMIHOMN__DIIDLOEMDAD(NDGHNMIHOMN_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  KKCEIILPLEC_o *pKVar1;
  float fVar2;
  
  pKVar1 = NDGHNMIHOMN__PBOALOOBNEK(__this,DPJIDNBJIBG,method);
  if (pKVar1 == (KKCEIILPLEC_o *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (pKVar1->fields).AHBMDAOKIEL;
  }
  return fVar2;
}


// ===== public void .ctor()  [RVA 0x3564028]
// NDGHNMIHOMN$$.ctor @ RVA 0x3564028

void NDGHNMIHOMN___ctor(NDGHNMIHOMN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KKCEIILPLEC__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568be3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KKCEIILPLEC>_TypeInfo);
    DAT_04568be3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KKCEIILPLEC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KKCEIILPLEC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KKCEIILPLEC>__ctor__);
  (__this->fields).PEMHPNLDPHD = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35640B0]
// NDGHNMIHOMN$$HNIHOIAMDPC @ RVA 0x35640B0

/* WARNING: Removing unreachable block (ram,0x036646c8) */
/* WARNING: Removing unreachable block (ram,0x03664778) */

void NDGHNMIHOMN__HNIHOIAMDPC
               (NDGHNMIHOMN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  KKCEIILPLEC_o *__this_00;
  System_String_o *pSVar8;
  System_Collections_Generic_List_KKCEIILPLEC__o *pSVar9;
  long lVar10;
  KKCEIILPLEC_array *pKVar11;
  ulong uVar12;
  int *piVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  if ((DAT_04568be4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KKCEIILPLEC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Count__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5952/*"Error: InternalSettings->StyleLevels: Attribute Penalty is absent!"*/);
    FUN_01bab630(&StringLiteral_12501/*"StyleMultiplier"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5953/*"Error: InternalSettings->StyleLevels: Attribute StylePerHit is absent!"*/);
    FUN_01bab630(&StringLiteral_3395/*"BarImage"*/);
    FUN_01bab630(&StringLiteral_12503/*"StylePerHit"*/);
    FUN_01bab630(&StringLiteral_5236/*"DecreaseSpeed"*/);
    FUN_01bab630(&StringLiteral_5954/*"Error: InternalSettings->StyleLevels: Styles is absent!"*/);
    FUN_01bab630(&StringLiteral_10201/*"Penalty"*/);
    FUN_01bab630(&StringLiteral_12891/*"TextImage"*/);
    FUN_01bab630(&StringLiteral_5951/*"Error: InternalSettings->StyleLevels: Attribute DecreaseSpeed is absent!"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568be4 = 1;
  }
  pSVar9 = (__this->fields).PEMHPNLDPHD;
  if (pSVar9 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
    length = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_12503/*"StylePerHit"*/,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_5953/*"Error: InternalSettings->StyleLevels: Attribute StylePerHit is absent!"*/,(MethodInfo *)0x0);
      }
      else {
        fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
        (__this->fields).EAOAPACLBID = fVar14;
      }
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_5236/*"DecreaseSpeed"*/,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5951/*"Error: InternalSettings->StyleLevels: Attribute DecreaseSpeed is absent!"*/,(MethodInfo *)0x0);
        }
        else {
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          (__this->fields).EDKNLOPAJIC = fVar14;
        }
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_10201/*"Penalty"*/,(MethodInfo *)0x0);
          if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_5952/*"Error: InternalSettings->StyleLevels: Attribute Penalty is absent!"*/,(MethodInfo *)0x0);
          }
          else {
            fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
            (__this->fields).HHAJAMHDBKG = fVar14;
          }
          plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
          if (plVar5 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0))
            ;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar10 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_03664420;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03664420:
              uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar12 & 1) == 0) {
                plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
                if (plVar5 == (long *)0x0) goto LAB_036646bc;
                lVar10 = *plVar5;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 == 0) goto LAB_03664694;
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                goto LAB_0366467c;
              }
              lVar10 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_03664480;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03664480:
              plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
              if (plVar7 != (long *)0x0) {
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
                   (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                    System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(plVar7);
                }
              }
              auVar15 = thunk_FUN_01bda818(KKCEIILPLEC_TypeInfo);
              __this_00 = auVar15._0_8_;
              KKCEIILPLEC___ctor(__this_00,auVar15._8_8_);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
              pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              if (__this_00 == (KKCEIILPLEC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (__this_00->fields).JIJLBFGKNJK = pSVar8;
              thunk_FUN_01c20e04();
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_12501/*"StyleMultiplier"*/,(MethodInfo *)0x0);
              fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
              (__this_00->fields).AHBMDAOKIEL = fVar14;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_12891/*"TextImage"*/,(MethodInfo *)0x0);
              pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this_00->fields).AABGOBCHPJC = pSVar8;
              thunk_FUN_01c20e04();
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_3395/*"BarImage"*/,(MethodInfo *)0x0);
              pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this_00->fields).GLJCNAPKAFN = pSVar8;
              thunk_FUN_01c20e04();
              lVar10 = Method_System_Collections_Generic_List<KKCEIILPLEC>_Add__;
              pSVar9 = (__this->fields).PEMHPNLDPHD;
              if (pSVar9 == (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pKVar11 = (pSVar9->fields)._items;
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pKVar11 == (KKCEIILPLEC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar9->fields)._size;
              if (uVar2 < (uint)pKVar11->max_length) {
                (pSVar9->fields)._size = uVar2 + 1;
                pKVar11->m_Items[(int)uVar2] = __this_00;
                thunk_FUN_01c20e04(pKVar11->m_Items + (int)uVar2,__this_00);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_03664770;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0366467c:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_036646b0;
    }
  }
LAB_03664694:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036646b0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_036646bc:
  pSVar9 = (__this->fields).PEMHPNLDPHD;
  if (pSVar9 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
    if ((pSVar9->fields)._size == 0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5954/*"Error: InternalSettings->StyleLevels: Styles is absent!"*/,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03664770:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

