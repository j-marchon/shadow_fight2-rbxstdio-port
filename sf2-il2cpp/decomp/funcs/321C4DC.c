// Nekki.SF2.GUI.Pvp.PvpScene$$MCFIGAFCFIO @ RVA 0x321C4DC

/* WARNING: Removing unreachable block (ram,0x0331c8b8) */

System_Xml_XmlNode_o *
Nekki_SF2_GUI_Pvp_PvpScene__MCFIGAFCFIO(Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this_00;
  NLPJLHOEAOE_o *pNVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *__this_02;
  IFKFDFGNMMN_o *pIVar9;
  long lVar10;
  System_Xml_XmlNode_c *pSVar11;
  ulong uVar12;
  int *piVar13;
  System_String_o *pSVar14;
  int iVar15;
  
  if ((DAT_04566f1b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8596);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_20433);
    FUN_01bab630(&StringLiteral_3830);
    DAT_04566f1b = 1;
  }
  pSVar14 = (__this->fields).GOGMCKIMHDH;
  if (pSVar14 != (System_String_o *)0x0) {
    bVar2 = System_String__Equals(pSVar14,StringLiteral_20433,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (__this->fields).IIBLCIFHCCF;
      if (__this_00 == (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) goto LAB_0331c8b0;
      pSVar14 = Nekki_SF2_GUI_Pvp_LocationSelectModule__GetRandomItem(__this_00,(MethodInfo *)0x0);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((((pNVar3 != (NLPJLHOEAOE_o *)0x0) &&
         (pIVar9 = (pNVar3->fields).OMDCNDHOACL, pIVar9 != (IFKFDFGNMMN_o *)0x0)) &&
        (pSVar4 = (pIVar9->fields)._OLIGHNIEIGK_k__BackingField,
        pSVar4 != (System_Xml_XmlNode_o *)0x0)) &&
       ((plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar4,StringLiteral_8596,
                                     (pSVar4->klass->vtable)._51_get_Item.method),
        plVar5 != (long *)0x0 &&
        (plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
        plVar5 != (long *)0x0)))) {
      plVar6 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0331c698;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0331c698:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          pSVar4 = (System_Xml_XmlNode_o *)0x0;
          iVar15 = 6;
          goto LAB_0331c794;
        }
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0331c6f8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0331c6f8:
        pSVar4 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (pSVar4 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = pSVar4->klass;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->_2).naturalAligment < bVar1) ||
           ((pSVar11->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4);
        }
        __this_01 = (System_Xml_XmlAttributeCollection_o *)
                    (*(pSVar11->vtable)._16_get_Attributes.methodPtr)
                              (pSVar4,(pSVar11->vtable)._16_get_Attributes.method);
        if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_01,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = (System_String_o *)
                    (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        if (__this_02 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(__this_02,pSVar14,(MethodInfo *)0x0);
      } while (!bVar2);
      iVar15 = 5;
LAB_0331c794:
      plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0331c7f4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0331c7f4:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      if ((iVar15 != 6) && (iVar15 != 0)) {
        return pSVar4;
      }
      pSVar14 = System_String__Format(StringLiteral_3830,(Il2CppObject *)pSVar14,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0331c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar5 + 0x1c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0));
      return pSVar4;
    }
  }
LAB_0331c8b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

