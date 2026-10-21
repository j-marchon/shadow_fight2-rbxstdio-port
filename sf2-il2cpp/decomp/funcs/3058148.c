// NHBBOEHHEKG$$NFIOHOMJIJC @ RVA 0x3058148

void NHBBOEHHEKG__NFIOHOMJIJC
               (NHBBOEHHEKG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *NPNDHEBBEAD
               ,MEHKKHFBNLM_o *DPOMBGDLHCJ,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *DMCFDIBHCPD;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  long lVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_SpriteMask_o *__this_01;
  long *plVar6;
  undefined8 uVar7;
  MethodInfo *in_x5;
  System_String_o *pSVar8;
  float value;
  
  if ((DAT_04565e72 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<SpriteSortPoint>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteMask>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_3360);
    FUN_01bab630(&StringLiteral_4422);
    FUN_01bab630(&StringLiteral_6612);
    FUN_01bab630(&StringLiteral_6611);
    FUN_01bab630(&StringLiteral_4967);
    FUN_01bab630(&StringLiteral_3361);
    FUN_01bab630(&StringLiteral_2828);
    FUN_01bab630(&StringLiteral_10267);
    FUN_01bab630(&StringLiteral_12316);
    DAT_04565e72 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_4422,(MethodInfo *)0x0);
      DMCFDIBHCPD = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (DPOMBGDLHCJ != (MEHKKHFBNLM_o *)0x0) {
        pSVar8 = (DPOMBGDLHCJ->fields).KBOFABJIPPD;
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        x = (UnityEngine_Object_o *)
            NGCBNMBJMOE__NECCNHODCAE(NPNDHEBBEAD,DMCFDIBHCPD,pSVar8,true,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          if (bVar1) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            if (args != (System_Object_array *)0x0) {
              if ((DMCFDIBHCPD != (System_String_o *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(DMCFDIBHCPD,(((args->obj).klass)->_1).element_class),
                 lVar5 == 0)) {
                uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)DMCFDIBHCPD;
                thunk_FUN_01c20e04(args->m_Items,DMCFDIBHCPD);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10267,args,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            goto LAB_031586b0;
          }
        }
        __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(__this_00,DMCFDIBHCPD,(MethodInfo *)0x0);
        if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_01 = (UnityEngine_SpriteMask_o *)
                        UnityEngine_GameObject__AddComponent<object>
                                  (__this_00,
                                   Method_UnityEngine_GameObject_AddComponent<SpriteMask>__),
           __this_01 != (UnityEngine_SpriteMask_o *)0x0)) {
          UnityEngine_SpriteMask__set_sprite(__this_01,(UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_2828,(MethodInfo *)0x0);
            value = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.2,(MethodInfo *)0x0);
            UnityEngine_SpriteMask__set_alphaCutoff(__this_01,value,(MethodInfo *)0x0);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_12316,(MethodInfo *)0x0);
              iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteSortPoint>__);
              UnityEngine_SpriteMask__set_spriteSortPoint(__this_01,iVar2,(MethodInfo *)0x0);
              lVar5 = (*(AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.method)
              ;
              if (lVar5 == 0) {
                UnityEngine_SpriteMask__set_isCustomRangeActive(__this_01,false,(MethodInfo *)0x0);
LAB_03158674:
                NHBBOEHHEKG__OOFFEHJNHFC
                          (AHDGNOJPPIB,DPOMBGDLHCJ,DMCFDIBHCPD,(UnityEngine_Sprite_o *)x,__this_00,
                           in_x5);
                MEHKKHFBNLM__EKPGACDAEJO(DPOMBGDLHCJ,__this_00,(MethodInfo *)0x0);
                return;
              }
              plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.method);
              if (plVar6 != (long *)0x0) {
                pSVar8 = (System_String_o *)
                         (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                bVar1 = System_String__op_Equality(pSVar8,StringLiteral_4967,(MethodInfo *)0x0);
                UnityEngine_SpriteMask__set_isCustomRangeActive(__this_01,bVar1,(MethodInfo *)0x0);
                if (!bVar1) goto LAB_03158674;
                plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.method);
                if (plVar6 != (long *)0x0) {
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_6612,(MethodInfo *)0x0);
                    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                    UnityEngine_SpriteMask__set_frontSortingOrder(__this_01,iVar2,(MethodInfo *)0x0)
                    ;
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240))
                    ;
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_6611,(MethodInfo *)0x0);
                      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar4,string_TypeInfo->static_fields->Empty,
                                          (MethodInfo *)0x0);
                      iVar2 = UnityEngine_SortingLayer__NameToID(pSVar8,(MethodInfo *)0x0);
                      UnityEngine_SpriteMask__set_frontSortingLayerID
                                (__this_01,iVar2,(MethodInfo *)0x0);
                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                               (**(code **)(*plVar6 + 0x238))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar3,StringLiteral_3361,(MethodInfo *)0x0);
                        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                        UnityEngine_SpriteMask__set_backSortingOrder
                                  (__this_01,iVar2,(MethodInfo *)0x0);
                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                 (**(code **)(*plVar6 + 0x238))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar3,StringLiteral_3360,(MethodInfo *)0x0);
                          pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar4,string_TypeInfo->static_fields->Empty,
                                              (MethodInfo *)0x0);
                          iVar2 = UnityEngine_SortingLayer__NameToID(pSVar8,(MethodInfo *)0x0);
                          UnityEngine_SpriteMask__set_backSortingLayerID
                                    (__this_01,iVar2,(MethodInfo *)0x0);
                          goto LAB_03158674;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031586b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

