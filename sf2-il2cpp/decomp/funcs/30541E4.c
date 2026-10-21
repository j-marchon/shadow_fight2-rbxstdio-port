// NHBBOEHHEKG$$BHAOABOGFHK @ RVA 0x30541E4

void NHBBOEHHEKG__BHAOABOGFHK
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
  UnityEngine_SpriteRenderer_o *__this_01;
  BCAEBMNHBAN_o *__this_02;
  UnityEngine_Material_o *pUVar6;
  undefined8 uVar7;
  MethodInfo *in_x5;
  System_String_o *pSVar8;
  UnityEngine_Color_o value;
  System_Nullable_Color__Fields local_58;
  
  if ((DAT_04565e66 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<SpriteDrawMode>__);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<SpriteMaskInteraction>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6497);
    FUN_01bab630(&StringLiteral_8857);
    FUN_01bab630(&StringLiteral_4476);
    FUN_01bab630(&StringLiteral_12313);
    FUN_01bab630(&StringLiteral_4422);
    FUN_01bab630(&StringLiteral_8018);
    FUN_01bab630(&StringLiteral_10267);
    FUN_01bab630(&StringLiteral_6498);
    DAT_04565e66 = 1;
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
            goto LAB_03154704;
          }
        }
        __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(__this_00,DMCFDIBHCPD,(MethodInfo *)0x0);
        if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_01 = (UnityEngine_SpriteRenderer_o *)
                        UnityEngine_GameObject__AddComponent<object>
                                  (__this_00,
                                   Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__),
           __this_01 != (UnityEngine_SpriteRenderer_o *)0x0)) {
          UnityEngine_SpriteRenderer__set_sprite
                    (__this_01,(UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_12313,(MethodInfo *)0x0);
            iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                              (pSVar4,1,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteDrawMode>__);
            UnityEngine_SpriteRenderer__set_drawMode(__this_01,iVar2,(MethodInfo *)0x0);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_8857,(MethodInfo *)0x0);
              iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteMaskInteraction>__);
              UnityEngine_SpriteRenderer__set_maskInteraction(__this_01,iVar2,(MethodInfo *)0x0);
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_4476,(MethodInfo *)0x0);
                if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if ((pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
                     (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_4476,(MethodInfo *)0x0),
                     pSVar4 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_03154704;
                  pSVar8 = (System_String_o *)
                           (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                                     (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
                  local_58.hasValue = false;
                  local_58._1_3_ = 0;
                  local_58.value.fields.r = 0.0;
                  local_58.value.fields.g = 0.0;
                  local_58.value.fields.b = 0.0;
                  local_58.value.fields.a = 0.0;
                  value = CFBGPBCDAGA__HPBCENEFAMD
                                    (pSVar8,1.0,(System_Nullable_Color__o *)&local_58,
                                     (MethodInfo *)0x0);
                  UnityEngine_SpriteRenderer__set_color(__this_01,value,(MethodInfo *)0x0);
                }
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_8018,(MethodInfo *)0x0);
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                  if (bVar1) {
                    __this_02 = BCAEBMNHBAN__AIHNLLGNBLC((MethodInfo *)0x0);
                    pUVar6 = UnityEngine_Renderer__get_material
                                       ((UnityEngine_Renderer_o *)__this_01,(MethodInfo *)0x0);
                    if (__this_02 == (BCAEBMNHBAN_o *)0x0) goto LAB_03154704;
                    pUVar6 = BCAEBMNHBAN__BNEAJEGGANE
                                       (__this_02,pUVar6,(UnityEngine_Sprite_o *)x,(MethodInfo *)0x0
                                       );
                    UnityEngine_Renderer__set_material
                              ((UnityEngine_Renderer_o *)__this_01,pUVar6,(MethodInfo *)0x0);
                  }
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_6497,(MethodInfo *)0x0);
                    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                    UnityEngine_SpriteRenderer__set_flipX(__this_01,bVar1,(MethodInfo *)0x0);
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_6498,(MethodInfo *)0x0);
                      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                      UnityEngine_SpriteRenderer__set_flipY(__this_01,bVar1,(MethodInfo *)0x0);
                      NHBBOEHHEKG__OOFFEHJNHFC
                                (AHDGNOJPPIB,DPOMBGDLHCJ,DMCFDIBHCPD,(UnityEngine_Sprite_o *)x,
                                 __this_00,in_x5);
                      MEHKKHFBNLM__EKPGACDAEJO(DPOMBGDLHCJ,__this_00,(MethodInfo *)0x0);
                      return;
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
LAB_03154704:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

