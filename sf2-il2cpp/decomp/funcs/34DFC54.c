// ANFOHCGLHID$$GGGLOMJOGNP @ RVA 0x34DFC54

void ANFOHCGLHID__GGGLOMJOGNP(MethodInfo *method)

{
  undefined8 *puVar1;
  bool_conflict bVar2;
  bool bVar3;
  CFGLKHFFEKA_o *pCVar4;
  CFGLKHFFEKA_o *__this;
  System_String_o *pSVar5;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  long *plVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  undefined8 uVar10;
  ANFOHCGLHID_c *method_00;
  uint CFHHLCMKGCH;
  ANFOHCGLHID_HLMLMHPDHOG_o *pAVar11;
  
  if ((DAT_04568725 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_6688);
    FUN_01bab630(&StringLiteral_5330);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_5196);
    FUN_01bab630(&StringLiteral_6687);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_14765);
    FUN_01bab630(&StringLiteral_1558);
    FUN_01bab630(&StringLiteral_21893);
    FUN_01bab630(&StringLiteral_6689);
    FUN_01bab630(&StringLiteral_14775);
    DAT_04568725 = 1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ANFOHCGLHID_TypeInfo->static_fields->AEFEDMKJKJE != false) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    __this = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
    CFGLKHFFEKA___ctor(__this,(MethodInfo *)0x0);
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar11 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
    if (pAVar11 != (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) {
      bVar2 = (pAVar11->fields).BGGCAGBJCLA;
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (bVar2 == false) {
        pSVar5 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
      }
      else {
        pSVar5 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
      }
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar11 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
      if (pAVar11 != (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) {
        CFHHLCMKGCH = (uint)(pAVar11->fields).BGGCAGBJCLA;
        puVar1 = &StringLiteral_21892;
        if (CFHHLCMKGCH != 0) {
          puVar1 = &StringLiteral_21893;
        }
        EKEMDOEAFHP = GIAMPEGMNHE__IBJOMPOLPCC
                                (pSVar5,(System_String_o *)*puVar1,CFHHLCMKGCH,true,true,false,
                                 (MethodInfo *)0x0);
        if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_6687,(MethodInfo *)0x0);
        }
        else {
          plVar6 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                                     (EKEMDOEAFHP,StringLiteral_11416,
                                      (EKEMDOEAFHP->klass->vtable)._51_get_Item.method);
          if (plVar6 == (long *)0x0) goto LAB_035e0204;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                     (plVar6,StringLiteral_14775,*(undefined8 *)(*plVar6 + 0x470));
          if (plVar6 == (long *)0x0) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_6689,(MethodInfo *)0x0);
          }
          else {
            plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_14765,*(undefined8 *)(*plVar6 + 0x470))
            ;
            if (plVar7 == (long *)0x0) goto LAB_035e0204;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035e0204;
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_14694,(MethodInfo *)0x0);
            if (pCVar4 == (CFGLKHFFEKA_o *)0x0) goto LAB_035e0204;
            uVar10 = (*(pCVar4->klass->vtable)._3_ToString.methodPtr)
                               (pCVar4,(pCVar4->klass->vtable)._3_ToString.method);
            if (pSVar9 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_035e0204;
            (*(pSVar9->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar9,uVar10,(pSVar9->klass->vtable)._10_set_Value.method);
            plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_5196,*(undefined8 *)(*plVar6 + 0x470));
            if (plVar6 == (long *)0x0) goto LAB_035e0204;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035e0204;
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_14694,(MethodInfo *)0x0);
            pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
            if (__this == (CFGLKHFFEKA_o *)0x0) goto LAB_035e0204;
            CFGLKHFFEKA__JAGMOPPIMKB(__this,pSVar5,(MethodInfo *)0x0);
            if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar5 = CFGLKHFFEKA__ALBJPLAPOBO(__this,(MethodInfo *)0x0);
            pSVar5 = System_String__Concat(StringLiteral_6688,pSVar5,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          }
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          EOAOCPLIKOI__HBOMFJGJNFM(pCVar4,__this,(MethodInfo *)0x0);
          IBILBKNKKDG__ACNFBPJGBDP(pCVar4,(MethodInfo *)0x0);
          if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,StringLiteral_1558,(MethodInfo *)0x0);
          GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar5,(MethodInfo *)0x0);
        }
        if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IDDIABHBDEE__FKLCGHKBKHK((MethodInfo *)0x0);
        method_00 = ANFOHCGLHID_TypeInfo;
        if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (ANFOHCGLHID_c *)thunk_FUN_01ba7564();
        }
        pSVar5 = ANFOHCGLHID__PPGCNAHEAME((MethodInfo *)method_00);
        bVar3 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar5,(MethodInfo *)0x0);
        if (!bVar3) {
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar4 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
          if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
          }
          bVar3 = CFGLKHFFEKA__INMJFGMNBEB(pCVar4,pSVar5,(MethodInfo *)0x0);
          if (bVar3) {
            if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar4 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
            pSVar5 = System_String__Format
                               (StringLiteral_5330,(Il2CppObject *)pCVar4,(Il2CppObject *)pSVar5,
                                (MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            AAPGCAPGBLG__KEKJKEKNLHL((MethodInfo *)0x0);
          }
        }
        goto LAB_035e01cc;
      }
    }
LAB_035e0204:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035e01cc:
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ANFOHCGLHID_TypeInfo->static_fields->AEFEDMKJKJE = false;
  return;
}

