// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$DNDJHELACIG @ RVA 0x352C99C

/* WARNING: Removing unreachable block (ram,0x0362cce4) */

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__DNDJHELACIG
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  System_Xml_XmlNode_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *pNVar9;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *OPIPLFKCFPA;
  undefined8 *puVar10;
  System_Collections_IEnumerator_c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = method;
  auVar16._0_8_ = __this;
  if ((DAT_04568a35 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<CreditsScreenElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_4889);
    auVar16 = FUN_01bab630(&StringLiteral_1);
    DAT_04568a35 = 1;
  }
  pSVar4 = Nekki_SF2_GUI_Common_Credits_CreditsScreen__KCODMKBDGIA(auVar16._0_8_,auVar16._8_8_);
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_1,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar5 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  __this_00 = (System_Xml_XmlNode_o *)
              (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar5,StringLiteral_4889,(pSVar5->klass->vtable)._51_get_Item.method);
  if (__this_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_Xml_XmlNode__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar11 = pSVar6->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar2;
    if (uVar13 != 0) {
      piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar11->vtable + *piVar14;
          goto LAB_0362cb04;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0362cb04:
    uVar13 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if ((uVar13 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_0362cc80;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    pSVar11 = pSVar6->klass;
    uVar3._0_1_ = (pSVar11->_2).rank;
    uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar11->vtable + (*piVar14 + 1);
          goto LAB_0362cb64;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0362cb64:
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if (plVar8 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
    }
    parent = (__this->fields)._ElementsParent;
    pNVar9 = (__this->fields)._ElementPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar9 = (Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar9,parent,false,
                        Method_UnityEngine_Object_Instantiate<CreditsScreenElement>__);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_01,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    OPIPLFKCFPA = (System_String_o *)
                  (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
    if (pNVar9 == (Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Common_Credits_CreditsScreenElement__Refresh
              (pNVar9,pSVar4,OPIPLFKCFPA,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0362cc9c;
    }
  }
LAB_0362cc80:
  puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0362cc9c:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
  return;
}

