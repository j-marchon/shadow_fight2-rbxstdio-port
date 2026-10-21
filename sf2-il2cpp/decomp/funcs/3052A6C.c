// NHBBOEHHEKG$$NCMFIAFIKNA @ RVA 0x3052A6C

/* WARNING: Removing unreachable block (ram,0x031535d4) */
/* WARNING: Removing unreachable block (ram,0x03153574) */

void NHBBOEHHEKG__NCMFIAFIKNA
               (NHBBOEHHEKG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *OOKEKJMFKPE
               ,MEHKKHFBNLM_o *NNPCEDEEBAH,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  UnityAnimator_o *pUVar8;
  long *plVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Object_o *x;
  Il2CppObject *original;
  System_Object_array *args;
  System_Collections_Generic_List_UnityAnimator__o *__this_00;
  System_NullReferenceException_o *__this_01;
  undefined8 uVar14;
  MethodInfo *pMVar15;
  MethodInfo *in_x5;
  long lVar16;
  UnityAnimator_array *pUVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  System_String_o *pSVar21;
  float fVar22;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityAnimator_PNHHAMAIIAB_o local_110;
  UnityAnimator_PNHHAMAIIAB_o local_f0;
  UnityAnimator_PNHHAMAIIAB_o local_d0;
  System_String_o *local_b0;
  UnityEngine_Object_o *pUStack_a8;
  UnityEngine_AnimationClip_o *pUStack_a0;
  undefined8 uStack_98;
  System_String_o *local_90;
  UnityEngine_Object_o *pUStack_88;
  UnityEngine_AnimationClip_o *pUStack_80;
  undefined8 uStack_78;
  
  if ((DAT_04565e5f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator>_Add__);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<UnityAnimator>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<UnityAnimator>__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14423);
    FUN_01bab630(&StringLiteral_12315);
    FUN_01bab630(&StringLiteral_14425);
    FUN_01bab630(&StringLiteral_8001);
    FUN_01bab630(&StringLiteral_10403);
    FUN_01bab630(&StringLiteral_14424);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_10267);
    FUN_01bab630(&StringLiteral_22451);
    FUN_01bab630(&StringLiteral_2966);
    FUN_01bab630(&StringLiteral_4964);
    DAT_04565e5f = 1;
  }
  pUStack_88 = (UnityEngine_Object_o *)0x0;
  local_90 = (System_String_o *)0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  pUStack_80 = (UnityEngine_AnimationClip_o *)0x0;
  pUStack_a8 = (UnityEngine_Object_o *)0x0;
  local_b0 = (System_String_o *)0x0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  pUStack_a0 = (UnityEngine_AnimationClip_o *)0x0;
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_03153558;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_2966,(MethodInfo *)0x0);
  pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03153558;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_8001,(MethodInfo *)0x0);
  bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
  pMVar15 = (MethodInfo *)0x0;
  bVar4 = System_String__op_Equality(pSVar7,StringLiteral_14425,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar8 = NHBBOEHHEKG__GCFGNPFKBHN((MethodInfo *)0x1);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pUVar8 = (UnityAnimator_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar8,
                        Method_UnityEngine_Object_Instantiate<UnityAnimator>__);
    if (pUVar8 != (UnityAnimator_o *)0x0) {
      (pUVar8->fields).IsLooped = bVar3;
      plVar9 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar9 != (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar16 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03152d44;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          pMVar15 = (MethodInfo *)0x0;
          puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03152d44:
          uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar18 & 1) == 0) {
            iVar20 = 4;
LAB_03153010:
            plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
            if (plVar9 == (long *)0x0) goto LAB_03153084;
            lVar16 = *plVar9;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 == 0) goto LAB_0315305c;
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_03153044;
          }
          lVar16 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_03152da4;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          pMVar15 = (MethodInfo *)0x1;
          puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03152da4:
          pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
               ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar11);
            }
          }
          NHBBOEHHEKG__FDCMAMGONDB(&local_d0,__this,pSVar11,pMVar15);
          pUStack_88 = (UnityEngine_Object_o *)local_d0.fields.KCLMKBAMNPA;
          local_90 = local_d0.fields.HHADPFIIKIG;
          uStack_78._0_4_ = local_d0.fields.BGDPMAEHOIC;
          uStack_78._4_4_ = local_d0.fields._28_4_;
          pUStack_80 = local_d0.fields.ONPNAGNAPOL;
          if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_12315,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
          bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar7,(MethodInfo *)0x0);
          if (bVar4) {
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_15021,(MethodInfo *)0x0);
            value.fields.x = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_15134,(MethodInfo *)0x0);
            fVar22 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            if ((value.fields.x != 0.0) || (fVar22 != 0.0)) {
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pUVar13 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
              if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              value.fields.y = -fVar22;
              value.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition(pUVar13,value,(MethodInfo *)0x0);
            }
          }
          else {
            if (NNPCEDEEBAH == (MEHKKHFBNLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar21 = (NNPCEDEEBAH->fields).KBOFABJIPPD;
            if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            x = (UnityEngine_Object_o *)
                NGCBNMBJMOE__NECCNHODCAE(OOKEKJMFKPE,pSVar7,pSVar21,true,(MethodInfo *)0x0);
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
            NHBBOEHHEKG__OOFFEHJNHFC
                      (pSVar11,NNPCEDEEBAH,pSVar7,(UnityEngine_Sprite_o *)x,pUVar12,in_x5);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar4) {
              if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (bVar4) {
                args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if ((pSVar7 != (System_String_o *)0x0) &&
                   (lVar16 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
                   lVar16 == 0)) {
                  uVar14 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                  FUN_01bab798(uVar14,0);
                }
                if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                args->m_Items[0] = (Il2CppObject *)pSVar7;
                thunk_FUN_01c20e04(args->m_Items,pSVar7);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10267,args,(MethodInfo *)0x0);
                iVar20 = 9;
                goto LAB_03153010;
              }
            }
            pUStack_88 = x;
            thunk_FUN_01c20e04((ulong)&local_90 | 8,x);
          }
          local_f0.fields.KCLMKBAMNPA = (UnityEngine_Sprite_o *)pUStack_88;
          local_f0.fields.HHADPFIIKIG = local_90;
          local_f0.fields.BGDPMAEHOIC = (int32_t)uStack_78;
          local_f0.fields._28_4_ = uStack_78._4_4_;
          local_f0.fields.ONPNAGNAPOL = pUStack_80;
          pMVar15 = (MethodInfo *)0x0;
          UnityAnimator__AddAnimation(pUVar8,&local_f0,(MethodInfo *)0x0);
        } while( true );
      }
    }
    goto LAB_03153558;
  }
  bVar4 = System_String__op_Equality(pSVar7,StringLiteral_14424,(MethodInfo *)0x0);
  pUVar8 = (UnityAnimator_o *)0x0;
  if (bVar4) goto LAB_03153098;
  goto LAB_03153460;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_03153044:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03153078;
    }
  }
LAB_0315305c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_03153078:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03153084:
  if (iVar20 != 4) {
    if (iVar20 != 0) {
      return;
    }
LAB_03153098:
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_4964,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
      pMVar15 = (MethodInfo *)(__this->fields).ELNOBGPJBKH;
      pSVar7 = System_String__Format
                         (StringLiteral_22451,StringLiteral_10403,(Il2CppObject *)pMVar15,
                          (Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      original = UnityEngine_Resources__Load<object>
                           (pSVar7,Method_UnityEngine_Resources_Load<UnityAnimator>__);
      if (original == (Il2CppObject *)0x0) {
        pSVar21 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4179);
        pSVar7 = System_String__Concat(pSVar21,pSVar7,(MethodInfo *)0x0);
        thunk_FUN_01bb9178(&System_NullReferenceException_TypeInfo);
        __this_01 = (System_NullReferenceException_o *)thunk_FUN_01bda818();
        System_NullReferenceException___ctor(__this_01,pSVar7,(MethodInfo *)0x0);
        uVar14 = thunk_FUN_01bb9178(&Method_NHBBOEHHEKG_NCMFIAFIKNA__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_01,uVar14);
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar8 = (UnityAnimator_o *)
               UnityEngine_Object__Instantiate<object>
                         (original,Method_UnityEngine_Object_Instantiate<UnityAnimator>__);
      if (pUVar8 != (UnityAnimator_o *)0x0) {
        (pUVar8->fields).IsLooped = bVar3;
        plVar9 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
        if (plVar9 != (long *)0x0) {
          plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar16 = *plVar9;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_031531e8;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            pMVar15 = (MethodInfo *)0x0;
            puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_031531e8:
            uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar18 & 1) == 0) {
              plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
              if (plVar9 == (long *)0x0) goto LAB_03153460;
              lVar16 = *plVar9;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 == 0) goto LAB_031533a8;
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              goto LAB_03153390;
            }
            lVar16 = *plVar9;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar10 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_03153248;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            pMVar15 = (MethodInfo *)0x1;
            puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03153248:
            pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar11);
              }
            }
            NHBBOEHHEKG__FDCMAMGONDB(&local_d0,__this,pSVar11,pMVar15);
            pUStack_a8 = (UnityEngine_Object_o *)local_d0.fields.KCLMKBAMNPA;
            local_b0 = local_d0.fields.HHADPFIIKIG;
            uStack_98._0_4_ = local_d0.fields.BGDPMAEHOIC;
            uStack_98._4_4_ = local_d0.fields._28_4_;
            pUStack_a0 = local_d0.fields.ONPNAGNAPOL;
            if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_15021,(MethodInfo *)0x0);
            value_00.fields.x = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_15134,(MethodInfo *)0x0);
            fVar22 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar13 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
            if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            value_00.fields.y = -fVar22;
            value_00.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(pUVar13,value_00,(MethodInfo *)0x0);
            local_110.fields.KCLMKBAMNPA = (UnityEngine_Sprite_o *)pUStack_a8;
            local_110.fields.HHADPFIIKIG = local_b0;
            local_110.fields.BGDPMAEHOIC = (int32_t)uStack_98;
            local_110.fields._28_4_ = uStack_98._4_4_;
            local_110.fields.ONPNAGNAPOL = pUStack_a0;
            pMVar15 = (MethodInfo *)0x0;
            UnityAnimator__AddAnimation(pUVar8,&local_110,(MethodInfo *)0x0);
          } while( true );
        }
      }
    }
    goto LAB_03153558;
  }
  goto LAB_03153460;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_03153390:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03153450;
    }
  }
LAB_031533a8:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_03153450:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03153460:
  lVar16 = Method_System_Collections_Generic_List<UnityAnimator>_Add__;
  if ((NNPCEDEEBAH != (MEHKKHFBNLM_o *)0x0) &&
     (__this_00 = (NNPCEDEEBAH->fields).PHCHEEPCEOO,
     __this_00 != (System_Collections_Generic_List_UnityAnimator__o *)0x0)) {
    pUVar17 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pUVar17 != (UnityAnimator_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar17->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar17->m_Items[(int)uVar2] = pUVar8;
        thunk_FUN_01c20e04(pUVar17->m_Items + (int)uVar2,pUVar8);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      if (pUVar8 != (UnityAnimator_o *)0x0) {
        UnityEngine_Object__set_name
                  ((UnityEngine_Object_o *)pUVar8,StringLiteral_14423,(MethodInfo *)0x0);
        pUVar12 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
        MEHKKHFBNLM__EKPGACDAEJO(NNPCEDEEBAH,pUVar12,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03153558:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

