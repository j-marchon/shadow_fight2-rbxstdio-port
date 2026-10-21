// Original name: Nekki.SF2.Core.Fights.Location  (obfuscated NHBBOEHHEKG)
// TypeDefIndex 773
// Namespace: 
// public class Location
// Fields:
//   public const int HHBNCNODGNE = -3;
//   public const float ALLEOHHLDCD = 45;
//   private const string EGCELJOLPPJ = "params.xml";
//   private const string KLKCBNOEHIF = "Prefabs/Fight/FightEffectAnimator";
//   private const string NAHMFFIKOHE = "Prefabs/Fight/CustomFightEffectAnimators/";
//   private const string MKGJPHCKBEG = "CustomAnimations/UnityAnimations/";
//   private static string HEHNLPHCLPF; // 0x0
//   private static string KMNMOCMAHEJ; // 0x8
//   private static string GFCKIHFODNP; // 0x10
//   private string ELNOBGPJBKH; // 0x10
//   public string KGLJICLJHEL; // 0x18
//   private string FNLFDPAJACB; // 0x20
//   public List<string> OECKCNINPHL; // 0x28
//   public int MMJKLMAJCMF; // 0x30
//   public float IDBMGJFGIJH; // 0x34
//   public float KKHNKBHNHGF; // 0x38
//   public float PJKMBLALCBB; // 0x3C
//   public float NMFKJBOAOLK; // 0x40
//   public float DAPHCPICAAC; // 0x44
//   public Vector3f IFNNNFMACDH; // 0x48
//   public Vector3f OGNCBOHIMFJ; // 0x50
//   public Color GLECOLINCIH; // 0x58
//   public List<MEHKKHFBNLM> JDLKPFCELNF; // 0x68
//   public MEHKKHFBNLM CLFNHGGJHCA; // 0x70
//   private static UnityAnimator BHLAIPNCPEJ; // 0x18

// ===== private void NCMFIAFIKNA(XmlNode AHDGNOJPPIB, string OOKEKJMFKPE, MEHKKHFBNLM NNPCEDEEBAH)  [RVA 0x3052A6C]
// Location$$NCMFIAFIKNA @ RVA 0x3052A6C

/* WARNING: Removing unreachable block (ram,0x031535d4) */
/* WARNING: Removing unreachable block (ram,0x03153574) */

void Location__NCMFIAFIKNA
               (Location_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *OOKEKJMFKPE
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
    FUN_01bab630(&StringLiteral_14423/*"UnityAnimation"*/);
    FUN_01bab630(&StringLiteral_12315/*"SpriteName"*/);
    FUN_01bab630(&StringLiteral_14425/*"UnityAnimationDefault"*/);
    FUN_01bab630(&StringLiteral_8001/*"IsLooped"*/);
    FUN_01bab630(&StringLiteral_10403/*"Prefabs/Fight/CustomFightEffectAnimators/"*/);
    FUN_01bab630(&StringLiteral_14424/*"UnityAnimationCustomAnimator"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_10267/*"Pic: {0}"*/);
    FUN_01bab630(&StringLiteral_22451/*"{0}{1}/{2}"*/);
    FUN_01bab630(&StringLiteral_2966/*"AnimType"*/);
    FUN_01bab630(&StringLiteral_4964/*"CustomAnimatorName"*/);
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
                     (pSVar5,StringLiteral_2966/*"AnimType"*/,(MethodInfo *)0x0);
  pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03153558;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_8001/*"IsLooped"*/,(MethodInfo *)0x0);
  bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
  pMVar15 = (MethodInfo *)0x0;
  bVar4 = System_String__op_Equality(pSVar7,StringLiteral_14425/*"UnityAnimationDefault"*/,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar8 = Location__GCFGNPFKBHN((MethodInfo *)0x1);
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
          Location__FDCMAMGONDB(&local_d0,__this,pSVar11,pMVar15);
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
                             (pSVar5,StringLiteral_12315/*"SpriteName"*/,(MethodInfo *)0x0);
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
                               (pSVar5,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
            value.fields.x = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
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
            Location__OOFFEHJNHFC
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
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10267/*"Pic: {0}"*/,args,(MethodInfo *)0x0);
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
  bVar4 = System_String__op_Equality(pSVar7,StringLiteral_14424/*"UnityAnimationCustomAnimator"*/,(MethodInfo *)0x0);
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
                         (pSVar5,StringLiteral_4964/*"CustomAnimatorName"*/,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
      pMVar15 = (MethodInfo *)(__this->fields).ELNOBGPJBKH;
      pSVar7 = System_String__Format
                         (StringLiteral_22451/*"{0}{1}/{2}"*/,StringLiteral_10403/*"Prefabs/Fight/CustomFightEffectAnimators/"*/,(Il2CppObject *)pMVar15,
                          (Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      original = UnityEngine_Resources__Load<object>
                           (pSVar7,Method_UnityEngine_Resources_Load<UnityAnimator>__);
      if (original == (Il2CppObject *)0x0) {
        pSVar21 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4179/*"Cant load animator at path :"*/);
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
            Location__FDCMAMGONDB(&local_d0,__this,pSVar11,pMVar15);
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
                               (pSVar5,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
            value_00.fields.x = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
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
                  ((UnityEngine_Object_o *)pUVar8,StringLiteral_14423/*"UnityAnimation"*/,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x3053F94]
// Location$$.ctor @ RVA 0x3053F94

void Location___ctor(Location_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  Vector3f_o *pCVar2;
  Vector3f_o **ppCVar3;
  MEHKKHFBNLM_o **ppMVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MEHKKHFBNLM__o **ppSVar5;
  
  if ((DAT_04565e60 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565e60 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).OECKCNINPHL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).IFNNNFMACDH;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).OGNCBOHIMFJ;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (__this->fields).KGLJICLJHEL = GameUtils_TypeInfo->static_fields->IKFICENDNCL;
  thunk_FUN_01c20e04();
  ppMVar4 = &(__this->fields).CLFNHGGJHCA;
  *ppMVar4 = (MEHKKHFBNLM_o *)0x0;
  (__this->fields).PJKMBLALCBB = 0.0;
  (__this->fields).NMFKJBOAOLK = 0.0;
  (__this->fields).IDBMGJFGIJH = 0.0;
  (__this->fields).KKHNKBHNHGF = 0.0;
  (__this->fields).DAPHCPICAAC = 0.0;
  thunk_FUN_01c20e04(ppMVar4,0);
  ppSVar5 = &(__this->fields).JDLKPFCELNF;
  *ppSVar5 = (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0;
  thunk_FUN_01c20e04(ppSVar5,0);
  return;
}


// ===== public Vector3f POHCCECOMPF()  [RVA 0x30540E8]
// Location$$POHCCECOMPF @ RVA 0x30540E8

Vector3f_o * Location__POHCCECOMPF(Location_o *__this,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = Vector3f__DJOFPNGJPFM
                        ((__this->fields).IFNNNFMACDH,(__this->fields).OGNCBOHIMFJ,(MethodInfo *)0x0
                        );
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__PGLILPKGILI(__this_00,0.5,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OOFFEHJNHFC(XmlNode AHDGNOJPPIB, MEHKKHFBNLM DPOMBGDLHCJ, string EGANPPCJHNI, Sprite DMMLPNCPPHD, GameObject CMMIJCJOBBF)  [RVA 0x3053B70]
// Location$$OOFFEHJNHFC @ RVA 0x3053B70

void Location__OOFFEHJNHFC
               (System_Xml_XmlNode_o *AHDGNOJPPIB,MEHKKHFBNLM_o *DPOMBGDLHCJ,
               System_String_o *EGANPPCJHNI,UnityEngine_Sprite_o *DMMLPNCPPHD,
               UnityEngine_GameObject_o *CMMIJCJOBBF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Predicate_T__o *match;
  UnityEngine_Transform_o *pUVar5;
  JHHFDBLANPH_o *pJVar6;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *__this;
  float fVar7;
  float fVar8;
  float zAngle;
  float fVar9;
  float fVar10;
  undefined8 in_d1;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  
  uVar11 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04565e61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Find__);
    FUN_01bab630(&Method_NHBBOEHHEKG_POFBDJKDFAF_OGFLEOHMLGK__);
    FUN_01bab630(&Location_POFBDJKDFAF_TypeInfo);
    FUN_01bab630(&System_Predicate<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
    FUN_01bab630(&StringLiteral_11428/*"Rotation"*/);
    FUN_01bab630(&StringLiteral_14946/*"Width"*/);
    FUN_01bab630(&StringLiteral_4450/*"CocosAnimationData Found"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_7065/*"Height"*/);
    DAT_04565e61 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(Location_POFBDJKDFAF_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)EGANPPCJHNI;
    thunk_FUN_01c20e04(pIVar2 + 1,EGANPPCJHNI);
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
      fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11428/*"Rotation"*/,(MethodInfo *)0x0);
          zAngle = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_14946/*"Width"*/,(MethodInfo *)0x0);
            fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_7065/*"Height"*/,(MethodInfo *)0x0);
              fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
              if (DMMLPNCPPHD != (UnityEngine_Sprite_o *)0x0) {
                UVar16 = UnityEngine_Sprite__get_rect(DMMLPNCPPHD,(MethodInfo *)0x0);
                fVar14 = UVar16.fields.m_Width;
                UVar16 = UnityEngine_Sprite__get_rect(DMMLPNCPPHD,(MethodInfo *)0x0);
                fVar15 = UVar16.fields.m_Height;
                if (DPOMBGDLHCJ != (MEHKKHFBNLM_o *)0x0) {
                  pJVar6 = (DPOMBGDLHCJ->fields).JHHFDBLANPH;
                  if (pJVar6 == (JHHFDBLANPH_o *)0x0) {
                    bVar1 = false;
                    fVar13 = 0.0;
                    fVar12 = 0.0;
                  }
                  else {
                    __this = (pJVar6->fields).EJNOBBDDBDO;
                    match = (System_Predicate_T__o *)
                            thunk_FUN_01bda818(UVar16.fields.m_XMin,
                                               CONCAT44(uVar11,UVar16.fields.m_YMin),
                                               UVar16.fields.m_Width,
                                               System_Predicate<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
                    System_Predicate<object>___ctor();
                    if ((__this == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0
                        ) || (pIVar2 = System_Collections_Generic_List<object>__Find
                                                 ((System_Collections_Generic_List_object__o *)
                                                  __this,match,
                                                  Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Find__
                                                 ), pIVar2 == (Il2CppObject *)0x0))
                    goto LAB_03153f90;
                    fVar12 = *(float *)&pIVar2[2].monitor;
                    fVar13 = *(float *)((long)&pIVar2[2].monitor + 4);
                    fVar14 = *(float *)((long)&pIVar2[3].klass + 4);
                    fVar15 = *(float *)&pIVar2[3].monitor;
                    bVar1 = *(char *)&pIVar2[3].klass != '\0';
                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                    }
                    UnityEngine_Debug__LogError(StringLiteral_4450/*"CocosAnimationData Found"*/,(MethodInfo *)0x0);
                  }
                  if ((CMMIJCJOBBF != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0),
                     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                    value.fields.y = fVar13 - fVar8;
                    value.fields.x = fVar7 + fVar12;
                    value.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
                    if (bVar1) {
                      pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03153f90;
                      UnityEngine_Transform__Rotate(pUVar5,0.0,0.0,90.0,(MethodInfo *)0x0);
                      fVar9 = fVar9 / fVar14;
                      fVar14 = fVar10 / fVar15;
                    }
                    else {
                      fVar14 = fVar9 / fVar14;
                      fVar9 = fVar10 / fVar15;
                    }
                    pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                      value_00.fields.y = fVar9;
                      value_00.fields.x = fVar14;
                      value_00.fields.z = 1.0;
                      UnityEngine_Transform__set_localScale(pUVar5,value_00,(MethodInfo *)0x0);
                      pUVar5 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                        value_01.fields.y = fVar13 * fVar9 - fVar8;
                        value_01.fields.x = fVar7 + fVar12 * fVar14;
                        value_01.fields.z = 0.0;
                        UnityEngine_Transform__set_localPosition(pUVar5,value_01,(MethodInfo *)0x0);
                        pUVar5 = UnityEngine_GameObject__get_transform
                                           (CMMIJCJOBBF,(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__Rotate(pUVar5,0.0,0.0,zAngle,(MethodInfo *)0x0);
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
    }
  }
LAB_03153f90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string HLAPKOIPADD()  [RVA 0x3054128]
// Location$$HLAPKOIPADD @ RVA 0x3054128

System_String_o * Location__HLAPKOIPADD(Location_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565e62 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12921/*"Textures/Locations/{0}"*/);
    DAT_04565e62 = 1;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_12921/*"Textures/Locations/{0}"*/,(Il2CppObject *)(__this->fields).ELNOBGPJBKH,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static UnityAnimator GCFGNPFKBHN()  [RVA 0x3053834]
// Location$$GCFGNPFKBHN @ RVA 0x3053834

UnityAnimator_o * Location__GCFGNPFKBHN(MethodInfo *method)

{
  bool bVar1;
  UnityAnimator_o **ppUVar2;
  UnityAnimator_o *pUVar3;
  
  if ((DAT_04565e63 & 1) == 0) {
    FUN_01bab630(&Location_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<UnityAnimator>__);
    FUN_01bab630(&StringLiteral_10404/*"Prefabs/Fight/FightEffectAnimator"*/);
    DAT_04565e63 = 1;
  }
  pUVar3 = Location_TypeInfo->static_fields->BHLAIPNCPEJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityAnimator_o *)
             UnityEngine_Resources__Load<object>
                       (StringLiteral_10404/*"Prefabs/Fight/FightEffectAnimator"*/,Method_UnityEngine_Resources_Load<UnityAnimator>__);
    ppUVar2 = &Location_TypeInfo->static_fields->BHLAIPNCPEJ;
    *ppUVar2 = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return Location_TypeInfo->static_fields->BHLAIPNCPEJ;
}


// ===== private UnityAnimator.PNHHAMAIIAB FDCMAMGONDB(XmlNode AHDGNOJPPIB)  [RVA 0x305390C]
// Location$$FDCMAMGONDB @ RVA 0x305390C

void Location__FDCMAMGONDB
               (UnityAnimator_PNHHAMAIIAB_o *__return_storage_ptr__,Location_o *__this,
               System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_AnimationClip_o *pUVar8;
  System_NullReferenceException_o *__this_00;
  undefined8 uVar9;
  System_String_o *local_50;
  UnityEngine_Sprite_o *pUStack_48;
  UnityEngine_AnimationClip_o *local_40;
  undefined8 local_38;
  
  if ((DAT_04565e64 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<WrapMode>__);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<AnimationClip>__);
    FUN_01bab630(&StringLiteral_2985/*"AnimatonPath"*/);
    FUN_01bab630(&StringLiteral_4963/*"CustomAnimations/UnityAnimations/"*/);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    FUN_01bab630(&StringLiteral_14989/*"WrapMode"*/);
    FUN_01bab630(&StringLiteral_2984/*"AnimatonName"*/);
    DAT_04565e64 = 1;
  }
  pUStack_48 = (UnityEngine_Sprite_o *)0x0;
  local_50 = (System_String_o *)0x0;
  local_38 = 0;
  local_40 = (UnityEngine_AnimationClip_o *)0x0;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_2985/*"AnimatonPath"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar5 = System_String__Concat
                           (StringLiteral_4963/*"CustomAnimations/UnityAnimations/"*/,(__this->fields).ELNOBGPJBKH,(MethodInfo *)0x0);
      }
                    /* try { // try from 03153a10 to 03253a5b has its CatchHandler @ 03153a10
                       catch() { ... } // from try @ 03153a10 with catch @ 03153a10
                       catch() { ... } // from try @ 03153a88 with catch @ 03153a10
                       catch() { ... } // from try @ 03153abc with catch @ 03153a10
                       catch() { ... } // from try @ 03153b1c with catch @ 03153a10
                       catch() { ... } // from try @ 03153b28 with catch @ 03153a10 */
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_2984/*"AnimatonName"*/,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03153a5c to 03253a77 has its CatchHandler @ 03153a8c */
        pSVar7 = System_String__Format
                           (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar5,(Il2CppObject *)pSVar6,
                            (MethodInfo *)0x0);
        pUVar8 = (UnityEngine_AnimationClip_o *)
                 UnityEngine_ResourcesAndBundles__Load<object>
                           (pSVar7,Method_UnityEngine_ResourcesAndBundles_Load<AnimationClip>__);
        if (pUVar8 == (UnityEngine_AnimationClip_o *)0x0) {
          pSVar7 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_22364/*"{0}/{1}"*/);
                    /* try { // try from 03153b0c to 03253b1b has its CatchHandler @ 03153b20 */
          pSVar5 = System_String__Format
                             (pSVar7,(Il2CppObject *)pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0
                             );
                    /* try { // try from 03153b1c to 03253b23 has its CatchHandler @ 03153a10 */
                    /* catch() { ... } // from try @ 03153aa4 with catch @ 03153b20
                       catch() { ... } // from try @ 03153b0c with catch @ 03153b20 */
                    /* try { // try from 03153b24 to 03253b27 has its CatchHandler @ 03153b30 */
          pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4178/*"Cant load anim at path "*/);
                    /* try { // try from 03153b28 to 03253b33 has its CatchHandler @ 03153a10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03153b24 with catch @ 03153b30
                        */
          pSVar5 = System_String__Concat(pSVar6,pSVar5,(MethodInfo *)0x0);
          thunk_FUN_01bb9178(&System_NullReferenceException_TypeInfo);
          __this_00 = (System_NullReferenceException_o *)thunk_FUN_01bda818();
          System_NullReferenceException___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
          uVar9 = thunk_FUN_01bb9178(&Method_NHBBOEHHEKG_FDCMAMGONDB__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar9);
        }
                    /* try { // try from 03153a84 to 03253a87 has its CatchHandler @ 03153a88 */
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03153a84 with catch @ 03153a88
                       try { // try from 03153a88 to 03253aa3 has its CatchHandler @ 03153a10 */
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03153a5c with catch @ 03153a8c
                        */
                    /* try { // try from 03153aa4 to 03253abb has its CatchHandler @ 03153b20 */
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_14989/*"WrapMode"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                            (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<WrapMode>__);
          local_38 = CONCAT44(local_38._4_4_,iVar2);
                    /* try { // try from 03153abc to 03253b0b has its CatchHandler @ 03153a10 */
          local_40 = pUVar8;
          thunk_FUN_01c20e04(&local_40,pUVar8);
          local_50 = pSVar6;
          thunk_FUN_01c20e04(&local_50,pSVar6);
          (__return_storage_ptr__->fields).KCLMKBAMNPA = pUStack_48;
          (__return_storage_ptr__->fields).HHADPFIIKIG = local_50;
          *(undefined8 *)&(__return_storage_ptr__->fields).BGDPMAEHOIC = local_38;
          (__return_storage_ptr__->fields).ONPNAGNAPOL = local_40;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PKHLGDMJPMF HANHAIIAEPB()  [RVA 0x3054174]
// Location$$HANHAIIAEPB @ RVA 0x3054174

PKHLGDMJPMF_o * Location__HANHAIIAEPB(Location_o *__this,MethodInfo *method)

{
  PKHLGDMJPMF_o *__this_00;
  MethodInfo *extraout_x1;
  float fVar1;
  float fVar2;
  
  if ((DAT_04565e65 & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04565e65 = 1;
    method = extraout_x1;
  }
  fVar1 = (__this->fields).NMFKJBOAOLK;
  fVar2 = (__this->fields).DAPHCPICAAC;
  __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo,method);
  PKHLGDMJPMF___ctor(__this_00,fVar1 * 0.5,fVar2 * 0.5,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private void BHAOABOGFHK(XmlNode AHDGNOJPPIB, string NPNDHEBBEAD, MEHKKHFBNLM DPOMBGDLHCJ)  [RVA 0x30541E4]
// Location$$BHAOABOGFHK @ RVA 0x30541E4

void Location__BHAOABOGFHK
               (Location_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *NPNDHEBBEAD
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
    FUN_01bab630(&StringLiteral_6497/*"FlipX"*/);
    FUN_01bab630(&StringLiteral_8857/*"MaskInteraction"*/);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_12313/*"SpriteDrawMode"*/);
    FUN_01bab630(&StringLiteral_4422/*"ClassName"*/);
    FUN_01bab630(&StringLiteral_8018/*"IsOpaque"*/);
    FUN_01bab630(&StringLiteral_10267/*"Pic: {0}"*/);
    FUN_01bab630(&StringLiteral_6498/*"FlipY"*/);
    DAT_04565e66 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_4422/*"ClassName"*/,(MethodInfo *)0x0);
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
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10267/*"Pic: {0}"*/,args,(MethodInfo *)0x0);
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
                               (pSVar3,StringLiteral_12313/*"SpriteDrawMode"*/,(MethodInfo *)0x0);
            iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                              (pSVar4,1,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteDrawMode>__);
            UnityEngine_SpriteRenderer__set_drawMode(__this_01,iVar2,(MethodInfo *)0x0);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_8857/*"MaskInteraction"*/,(MethodInfo *)0x0);
              iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteMaskInteraction>__);
              UnityEngine_SpriteRenderer__set_maskInteraction(__this_01,iVar2,(MethodInfo *)0x0);
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
                if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if ((pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
                     (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0),
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
                                     (pSVar3,StringLiteral_8018/*"IsOpaque"*/,(MethodInfo *)0x0);
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
                                       (pSVar3,StringLiteral_6497/*"FlipX"*/,(MethodInfo *)0x0);
                    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                    UnityEngine_SpriteRenderer__set_flipX(__this_01,bVar1,(MethodInfo *)0x0);
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_6498/*"FlipY"*/,(MethodInfo *)0x0);
                      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                      UnityEngine_SpriteRenderer__set_flipY(__this_01,bVar1,(MethodInfo *)0x0);
                      Location__OOFFEHJNHFC
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


// ===== private ChangingSprite IPDANBHLKLG(XmlNode AHDGNOJPPIB, string HGDBMAGKALN, MEHKKHFBNLM DPOMBGDLHCJ)  [RVA 0x3054718]
// Location$$IPDANBHLKLG @ RVA 0x3054718

ChangingSprite_o *
Location__IPDANBHLKLG
          (Location_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *HGDBMAGKALN,
          MEHKKHFBNLM_o *DPOMBGDLHCJ,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  Il2CppClass *pIVar9;
  System_Predicate_T__o *match;
  JHHFDBLANPH_MNHKJDJJINH_o *IGMLPNCPHLD;
  ChangingSprite_o *__this_00;
  ulong uVar10;
  MethodInfo *in_x5;
  JHHFDBLANPH_o *pJVar11;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *__this_01;
  System_String_o *JPPLEGNJFMJ;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  
  if ((DAT_04565e67 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<SpriteDrawMode>__);
    FUN_01bab630(&ChangingSprite_TypeInfo);
    FUN_01bab630(&Method_NHBBOEHHEKG_LMPHJBAKDPL_DIPEMEKCHCE__);
    FUN_01bab630(&Location_LMPHJBAKDPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Find__);
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 031547a8 to 032547f7 has its CatchHandler @ 031547a8
                       catch() { ... } // from try @ 031547a8 with catch @ 031547a8
                       catch() { ... } // from try @ 03154840 with catch @ 031547a8
                       catch() { ... } // from try @ 03154884 with catch @ 031547a8
                       catch() { ... } // from try @ 031548d4 with catch @ 031547a8 */
    FUN_01bab630(&System_Predicate<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
    FUN_01bab630(&StringLiteral_12313/*"SpriteDrawMode"*/);
    FUN_01bab630(&StringLiteral_12292/*"Speed"*/);
    FUN_01bab630(&StringLiteral_4422/*"ClassName"*/);
    FUN_01bab630(&StringLiteral_10270/*"PictureLocation"*/);
    FUN_01bab630(&StringLiteral_9807/*"Offset"*/);
                    /* try { // try from 031547f8 to 03254803 has its CatchHandler @ 03154894 */
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_12917/*"Textures/Location_effects/"*/);
    FUN_01bab630(&StringLiteral_3156/*"Atlases/"*/);
    FUN_01bab630(&StringLiteral_14946/*"Width"*/);
    FUN_01bab630(&StringLiteral_10182/*"Pause"*/);
                    /* try { // try from 0315482c to 0325483f has its CatchHandler @ 0315488c */
    FUN_01bab630(&StringLiteral_4450/*"CocosAnimationData Found"*/);
                    /* try { // try from 03154840 to 03254877 has its CatchHandler @ 031547a8 */
    FUN_01bab630(&StringLiteral_12911/*"Textures/"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_10269/*"Picture"*/);
    FUN_01bab630(&StringLiteral_11832/*"Sequention"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
                    /* try { // try from 03154878 to 0325487b has its CatchHandler @ 03154890 */
                    /* try { // try from 0315487c to 0325487f has its CatchHandler @ 03154888 */
    FUN_01bab630(&StringLiteral_10168/*"Path"*/);
                    /* try { // try from 03154880 to 03254883 has its CatchHandler @ 03154884 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03154880 with catch @ 03154884
                       try { // try from 03154884 to 032548ab has its CatchHandler @ 031547a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0315487c with catch @ 03154888
                        */
    FUN_01bab630(&StringLiteral_18657/*"global"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0315482c with catch @ 0315488c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03154878 with catch @ 03154890
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031547f8 with catch @ 03154894
                        */
    FUN_01bab630(&StringLiteral_6577/*"FrameEnd"*/);
    FUN_01bab630(&StringLiteral_6582/*"FrameStart"*/);
                    /* try { // try from 031548ac to 032548af has its CatchHandler @ 031548bc */
    FUN_01bab630(&StringLiteral_7065/*"Height"*/);
    DAT_04565e67 = 1;
  }
                    /* catch() { ... } // from try @ 031548ac with catch @ 031548bc */
                    /* try { // try from 031548c8 to 032548d3 has its CatchHandler @ 031548e8 */
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 031548d4 to 032548df has its CatchHandler @ 031547a8 */
                    /* try { // try from 031548e0 to 032548e7 has its CatchHandler @ 031548e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031548c8 with catch @ 031548e8
                       catch(type#2 @ 00000000) { ... } // from try @ 031548e0 with catch @ 031548e8
                        */
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_10270/*"PictureLocation"*/,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar6,StringLiteral_18657/*"global"*/,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_12917/*"Textures/Location_effects/"*/;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      if (!bVar1) {
        pSVar6 = HGDBMAGKALN;
      }
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_10168/*"Path"*/,(MethodInfo *)0x0);
      if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_10168/*"Path"*/,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(StringLiteral_12911/*"Textures/"*/,pSVar6,(MethodInfo *)0x0);
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar7,StringLiteral_10269/*"Picture"*/,(MethodInfo *)0x0);
        if (bVar1) {
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda818(Location_LMPHJBAKDPL_TypeInfo);
          System_Object___ctor(pIVar8,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_4422/*"ClassName"*/,(MethodInfo *)0x0);
          pIVar9 = (Il2CppClass *)
                   EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03154fe8;
          pIVar8 = pIVar8 + 1;
          pIVar8->klass = pIVar9;
          thunk_FUN_01c20e04(pIVar8,pIVar9);
          if (DPOMBGDLHCJ == (MEHKKHFBNLM_o *)0x0) goto LAB_03154fe8;
          pJVar11 = (DPOMBGDLHCJ->fields).JHHFDBLANPH;
          if (pJVar11 == (JHHFDBLANPH_o *)0x0) {
            IGMLPNCPHLD = (JHHFDBLANPH_MNHKJDJJINH_o *)0x0;
          }
          else {
            __this_01 = (pJVar11->fields).EJNOBBDDBDO;
            match = (System_Predicate_T__o *)
                    thunk_FUN_01bda818(System_Predicate<JHHFDBLANPH_MNHKJDJJINH>_TypeInfo);
            System_Predicate<object>___ctor();
            if (__this_01 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
            goto LAB_03154fe8;
            IGMLPNCPHLD = (JHHFDBLANPH_MNHKJDJJINH_o *)
                          System_Collections_Generic_List<object>__Find
                                    ((System_Collections_Generic_List_object__o *)__this_01,match,
                                     Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Find__
                                    );
            if (IGMLPNCPHLD != (JHHFDBLANPH_MNHKJDJJINH_o *)0x0) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_4450/*"CocosAnimationData Found"*/,(MethodInfo *)0x0);
            }
          }
          __this_00 = (ChangingSprite_o *)thunk_FUN_01bda818(ChangingSprite_TypeInfo);
          ChangingSprite___ctor(__this_00,0,AHDGNOJPPIB,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_10182/*"Pause"*/,(MethodInfo *)0x0);
          fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          if (__this_00 == (ChangingSprite_o *)0x0) goto LAB_03154fe8;
          (__this_00->fields).PLABOODCDAJ = fVar12;
          pIVar9 = pIVar8->klass;
          JPPLEGNJFMJ = (DPOMBGDLHCJ->fields).KBOFABJIPPD;
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_14946/*"Width"*/,(MethodInfo *)0x0);
          fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_7065/*"Height"*/,(MethodInfo *)0x0);
          fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          in_x5 = (MethodInfo *)0x0;
          ChangingSprite__CGJEJAPKEHG
                    (__this_00,pSVar6,(System_String_o *)pIVar9,JPPLEGNJFMJ,IGMLPNCPHLD,fVar12,
                     fVar13,(MethodInfo *)0x0);
        }
        else {
          __this_00 = (ChangingSprite_o *)0x0;
        }
        bVar1 = System_String__op_Equality(pSVar7,StringLiteral_11832/*"Sequention"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (GameUtils_TypeInfo->static_fields->ONPPMIJCMPH != false) {
            return (ChangingSprite_o *)0x0;
          }
          __this_00 = (ChangingSprite_o *)thunk_FUN_01bda818(ChangingSprite_TypeInfo);
          ChangingSprite___ctor(__this_00,1,AHDGNOJPPIB,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_10182/*"Pause"*/,(MethodInfo *)0x0);
          fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          if (__this_00 == (ChangingSprite_o *)0x0) goto LAB_03154fe8;
          (__this_00->fields).PLABOODCDAJ = fVar12;
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_4422/*"ClassName"*/,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat(pSVar6,StringLiteral_3156/*"Atlases/"*/,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_12292/*"Speed"*/,(MethodInfo *)0x0);
          fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_14946/*"Width"*/,(MethodInfo *)0x0);
          fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_7065/*"Height"*/,(MethodInfo *)0x0);
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_6582/*"FrameStart"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,1,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_6577/*"FrameEnd"*/,(MethodInfo *)0x0);
          iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03154fe8;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_9807/*"Offset"*/,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          in_x5 = (__this_00->klass->vtable)._4_KLGJMPDHMKE.method;
          uVar10 = (*(__this_00->klass->vtable)._4_KLGJMPDHMKE.methodPtr)
                             (CONCAT44(extraout_var,fVar12),CONCAT44(extraout_var_00,fVar13),
                              CONCAT44(extraout_var_01,fVar14),CONCAT44(extraout_var_02,fVar15),
                              __this_00,pSVar7,pSVar6,(ulong)(iVar2 - 1),(ulong)(iVar3 - 1));
          if ((uVar10 & 1) == 0) {
            return (ChangingSprite_o *)0x0;
          }
        }
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_12313/*"SpriteDrawMode"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                            (pSVar5,1,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteDrawMode>__);
          if (__this_00 != (ChangingSprite_o *)0x0) {
            ChangingSprite__LDPAAFEFBCL(__this_00,iVar2,(MethodInfo *)0x0);
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
              fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
                fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
                ChangingSprite__GFECOLFOILC(__this_00,fVar12,-fVar13,(MethodInfo *)0x0);
                Location__HOIKEDLOBJE(__this,AHDGNOJPPIB,__this_00,HGDBMAGKALN,DPOMBGDLHCJ,in_x5)
                ;
                if (DPOMBGDLHCJ != (MEHKKHFBNLM_o *)0x0) {
                  MEHKKHFBNLM__JHFPMMMPGGJ(DPOMBGDLHCJ,__this_00,(MethodInfo *)0x0);
                  return __this_00;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03154fe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string AFKICLAFDKC, string OJFFGFPNOBM)  [RVA 0x30567FC]
// Location$$.ctor @ RVA 0x30567FC

void Location___ctor(Location_o *__this,System_String_o *AFKICLAFDKC,
                       System_String_o *OJFFGFPNOBM,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  Vector3f_o *pCVar2;
  Vector3f_o **ppCVar3;
  System_String_o *message;
  System_String_o **ppSVar4;
  MEHKKHFBNLM_o **ppMVar5;
  System_Collections_Generic_List_MEHKKHFBNLM__o **ppSVar6;
  
  if ((DAT_04565e68 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_8591/*"Location:"*/);
    DAT_04565e68 = 1;
  }
                    /* try { // try from 03156894 to 0325698f has its CatchHandler @ 03156894
                       catch() { ... } // from try @ 03156894 with catch @ 03156894
                       catch() { ... } // from try @ 03156a64 with catch @ 03156894
                       catch() { ... } // from try @ 03156aa8 with catch @ 03156894
                       catch() { ... } // from try @ 03156bf0 with catch @ 03156894 */
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).OECKCNINPHL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).IFNNNFMACDH;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).OGNCBOHIMFJ;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  message = System_String__Concat(StringLiteral_8591/*"Location:"*/,AFKICLAFDKC,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).KGLJICLJHEL;
  *ppSVar4 = AFKICLAFDKC;
  thunk_FUN_01c20e04(ppSVar4,AFKICLAFDKC);
  (__this->fields).PJKMBLALCBB = 0.0;
  (__this->fields).NMFKJBOAOLK = 0.0;
  (__this->fields).IDBMGJFGIJH = 0.0;
  (__this->fields).KKHNKBHNHGF = 0.0;
  (__this->fields).DAPHCPICAAC = 0.0;
  ppSVar4 = &(__this->fields).FNLFDPAJACB;
  *ppSVar4 = OJFFGFPNOBM;
  thunk_FUN_01c20e04(ppSVar4,OJFFGFPNOBM);
  ppMVar5 = &(__this->fields).CLFNHGGJHCA;
  *ppMVar5 = (MEHKKHFBNLM_o *)0x0;
  thunk_FUN_01c20e04(ppMVar5,0);
  ppSVar6 = &(__this->fields).JDLKPFCELNF;
  *ppSVar6 = (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0;
                    /* try { // try from 03156990 to 03256997 has its CatchHandler @ 03156a74 */
  thunk_FUN_01c20e04(ppSVar6,0);
  return;
}


// ===== public string FIMJOAKEGNL()  [RVA 0x30569A0]
// Location$$FIMJOAKEGNL @ RVA 0x30569A0

System_String_o * Location__FIMJOAKEGNL(Location_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_string__o *EDEHNHIHDDH;
  
                    /* try { // try from 031569a8 to 032569af has its CatchHandler @ 03156a70 */
                    /* try { // try from 031569b4 to 032569bb has its CatchHandler @ 03156a6c */
  if ((DAT_04565e69 & 1) == 0) {
    FUN_01bab630(&Method_LIIFLGALGNK_DEICJJOIDDF<string>__);
                    /* try { // try from 031569cc to 032569d3 has its CatchHandler @ 03156a68 */
                    /* try { // try from 031569d4 to 032569df has its CatchHandler @ 03156a64 */
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04565e69 = 1;
    method = extraout_x1;
  }
  EDEHNHIHDDH = (__this->fields).OECKCNINPHL;
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031569f8 to 03256a63 has its CatchHandler @ 03156a78 */
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  pSVar1 = (System_String_o *)
           LIIFLGALGNK__DEICJJOIDDF<object>
                     ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                      Method_LIIFLGALGNK_DEICJJOIDDF<string>__);
  return pSVar1;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x3056A10]
// Location$$NDNPGAKJLHM @ RVA 0x3056A10

void Location__NDNPGAKJLHM(Location_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_MEHKKHFBNLM__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565e6a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_Clear__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569d4 with catch @ 03156a64
                       try { // try from 03156a64 to 03256a8f has its CatchHandler @ 03156894 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569cc with catch @ 03156a68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569b4 with catch @ 03156a6c
                        */
    DAT_04565e6a = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569a8 with catch @ 03156a70
                        */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03156990 with catch @ 03156a74
                        */
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031569f8 with catch @ 03156a78
                        */
  pSVar2 = (__this->fields).JDLKPFCELNF;
  if (pSVar2 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) {
                    /* try { // try from 03156a90 to 03256aa7 has its CatchHandler @ 03156be8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
                    /* try { // try from 03156aa8 to 03256bd7 has its CatchHandler @ 03156894 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__
                             ), bVar1) {
      if ((MEHKKHFBNLM_o *)local_38.fields._current == (MEHKKHFBNLM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      MEHKKHFBNLM__JODGPLBHHIA((MEHKKHFBNLM_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    pSVar2 = (__this->fields).JDLKPFCELNF;
    if (pSVar2 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string NKJDKKCJIEM(string COMFLKNJFLN)  [RVA 0x3056B94]
// Location$$NKJDKKCJIEM @ RVA 0x3056B94

System_String_o *
Location__NKJDKKCJIEM(Location_o *__this,System_String_o *COMFLKNJFLN,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565e6b & 1) == 0) {
    FUN_01bab630(&StringLiteral_12941/*"Textures/{0}"*/);
    DAT_04565e6b = 1;
  }
  pSVar1 = System_String__Format(StringLiteral_12941/*"Textures/{0}"*/,(Il2CppObject *)COMFLKNJFLN,(MethodInfo *)0x0);
                    /* try { // try from 03156bd8 to 03256be7 has its CatchHandler @ 03156be8 */
  if (pSVar1 != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 03156a90 with catch @ 03156be8
                       catch() { ... } // from try @ 03156bd8 with catch @ 03156be8 */
                    /* try { // try from 03156bec to 03256bef has its CatchHandler @ 03156bf8 */
                    /* try { // try from 03156bf0 to 03256bfb has its CatchHandler @ 03156894 */
    pSVar1 = System_String__Remove(pSVar1,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EPNFJNCPIFC(XmlNode AHDGNOJPPIB, MEHKKHFBNLM DPOMBGDLHCJ, int ACCIHBHMFPN)  [RVA 0x3056BF8]
// Location$$EPNFJNCPIFC @ RVA 0x3056BF8

void Location__EPNFJNCPIFC
               (Location_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MEHKKHFBNLM_o *DPOMBGDLHCJ,
               int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  ChangingSprite_o *__this_00;
  float OAGELANKMBH;
  float fVar5;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03156bec with catch @ 03156bf8
                        */
  if ((DAT_04565e6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ChangingSprite_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_4422/*"ClassName"*/);
    FUN_01bab630(&StringLiteral_12918/*"Textures/Location_effects/Particles/"*/);
                    /* try { // try from 03156c64 to 03256d13 has its CatchHandler @ 03156c64
                       catch() { ... } // from try @ 03156c64 with catch @ 03156c64
                       catch() { ... } // from try @ 03156e20 with catch @ 03156c64
                       catch() { ... } // from try @ 03156e74 with catch @ 03156c64
                       catch() { ... } // from try @ 03156ec0 with catch @ 03156c64
                       catch() { ... } // from try @ 03157028 with catch @ 03156c64 */
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_21815/*"unknown type in parseParticleEffect"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    DAT_04565e6c = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (GameUtils_TypeInfo->static_fields->NJDGNMENDPI != false) {
    return;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_4422/*"ClassName"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03156d14 to 03256d1b has its CatchHandler @ 03156e88 */
    pSVar4 = System_String__Concat(StringLiteral_12918/*"Textures/Location_effects/Particles/"*/,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03156d2c to 03256d33 has its CatchHandler @ 03156e84 */
    __this_00 = (ChangingSprite_o *)thunk_FUN_01bda818(ChangingSprite_TypeInfo);
                    /* try { // try from 03156d38 to 03256d3f has its CatchHandler @ 03156e80 */
    ChangingSprite___ctor(__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 03156d50 to 03256d57 has its CatchHandler @ 03156e7c */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03156d58 to 03256d63 has its CatchHandler @ 03156e78 */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
                    /* try { // try from 03156d74 to 03256d7b has its CatchHandler @ 03156e74 */
      OAGELANKMBH = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03156d90 to 03256db3 has its CatchHandler @ 03156e8c */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03156dc0 to 03256e1f has its CatchHandler @ 03156e90 */
        if ((ACCIHBHMFPN != 1) && (ACCIHBHMFPN != 0)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03156e20 to 03256e4b has its CatchHandler @ 03156c64 */
          UnityEngine_Debug__Log(StringLiteral_21815/*"unknown type in parseParticleEffect"*/,(MethodInfo *)0x0);
          return;
        }
        if (__this_00 != (ChangingSprite_o *)0x0) {
          bVar1 = ChangingSprite__ODHMPKGLNPP(__this_00,pSVar4,OAGELANKMBH,-fVar5,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          if (DPOMBGDLHCJ != (MEHKKHFBNLM_o *)0x0) {
            MEHKKHFBNLM__GFFDLGBPMHM(DPOMBGDLHCJ,__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HOIKEDLOBJE(XmlNode ELOCKFLGKNO, ChangingSprite HPACPFLKHPK, string HGDBMAGKALN, MEHKKHFBNLM DPOMBGDLHCJ)  [RVA 0x3054FF4]
// Location$$HOIKEDLOBJE @ RVA 0x3054FF4

/* WARNING: Removing unreachable block (ram,0x031565dc) */
/* WARNING: Removing unreachable block (ram,0x031565c4) */
/* WARNING: Removing unreachable block (ram,0x0315659c) */
/* WARNING: Removing unreachable block (ram,0x0315658c) */
/* WARNING: Removing unreachable block (ram,0x031565b4) */

void Location__HOIKEDLOBJE
               (Location_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,ChangingSprite_o *HPACPFLKHPK,
               System_String_o *HGDBMAGKALN,MEHKKHFBNLM_o *DPOMBGDLHCJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *s;
  ChangingSprite_o *DMMLPNCPPHD;
  MGNDHCBAPEN_float__float__o *pMVar6;
  long *plVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  MEHKKHFBNLM_o *method_00;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  method_00 = DPOMBGDLHCJ;
  if ((DAT_04565e6d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12140/*"SimpleEffect"*/);
    FUN_01bab630(&StringLiteral_10208/*"Period"*/);
    FUN_01bab630(&StringLiteral_12352/*"StartAngle"*/);
    FUN_01bab630(&StringLiteral_12292/*"Speed"*/);
    FUN_01bab630(&StringLiteral_13916/*"Transparency"*/);
    FUN_01bab630(&StringLiteral_9994/*"OscillationX"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_9807/*"Offset"*/);
    FUN_01bab630(&StringLiteral_9995/*"OscillationY"*/);
    FUN_01bab630(&StringLiteral_11428/*"Rotation"*/);
    FUN_01bab630(&StringLiteral_11078/*"ReappearX"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_5616/*"Ease"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_11079/*"ReappearY"*/);
    DAT_04565e6d = 1;
  }
  if ((ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03155170:
  do {
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_031551bc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031551bc:
    uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_031562dc;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_031562c4;
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0315521c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315521c:
    JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
       ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JHMENEKPIBO);
    }
    s = (System_String_o *)
        (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                  (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
    uVar3 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
    if (uVar3 < 0x9b72ef05) {
      if (uVar3 < 0xa6b8021) {
        if (uVar3 == 0x232777f) {
          bVar2 = System_String__op_Equality(s,StringLiteral_11428/*"Rotation"*/,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_12352/*"StartAngle"*/,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (HPACPFLKHPK->fields).CMMGIKGFNOF = fVar15;
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_9807/*"Offset"*/,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            ChangingSprite__EJCNFEDPCOP(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
            plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (JHMENEKPIBO,
                                        (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0))
            ;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_03155d90;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03155d90:
              uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              if ((uVar12 & 1) == 0) goto LAB_03155ee4;
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_03155df0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03155df0:
              plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar8);
              }
              pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar9,StringLiteral_10208/*"Period"*/,(MethodInfo *)0x0);
              fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
              pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar9,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
              fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
              pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar9,StringLiteral_5616/*"Ease"*/,(MethodInfo *)0x0);
              fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
              ChangingSprite__CGDANJBIKGL(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
            } while( true );
          }
        }
        else if ((uVar3 == 0xa6b8020) &&
                (bVar2 = System_String__op_Equality(s,StringLiteral_12292/*"Speed"*/,(MethodInfo *)0x0), bVar2)
                ) {
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03156578 to 032565cf has its CatchHandler @ 0315662c */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
          fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ChangingSprite__ICBFBLDJMIM(HPACPFLKHPK,fVar15,fVar16,(MethodInfo *)0x0);
        }
      }
      else if (uVar3 == 0x8cb9ad17) {
        bVar2 = System_String__op_Equality(s,StringLiteral_13916/*"Transparency"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_9807/*"Offset"*/,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ChangingSprite__IFHBIJJJPEG(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
          plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (JHMENEKPIBO,
                                      (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_03155aa8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03155aa8:
            uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if ((uVar12 & 1) == 0) goto LAB_03155bfc;
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_03155b08;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03155b08:
            plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(plVar8);
            }
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_10208/*"Period"*/,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_5616/*"Ease"*/,(MethodInfo *)0x0);
            fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            ChangingSprite__FHPMJKKELEN(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
          } while( true );
        }
      }
      else if ((uVar3 == 0x9b72ef04) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_9994/*"OscillationX"*/,(MethodInfo *)0x0), bVar2)) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9807/*"Offset"*/,(MethodInfo *)0x0);
        fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
        if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ChangingSprite__IEJFHDGIKJG(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
        plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (JHMENEKPIBO,
                                    (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03155440;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03155440:
          uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if ((uVar12 & 1) == 0) goto LAB_031556a4;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_031554a0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_031554a0:
          plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar8);
          }
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_10208/*"Period"*/,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_5616/*"Ease"*/,(MethodInfo *)0x0);
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          ChangingSprite__DEPAPJCFOLJ(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
        } while( true );
      }
    }
    else if (uVar3 < 0xa1c5e65b) {
      if (uVar3 == 0x9c72f097) {
        bVar2 = System_String__op_Equality(s,StringLiteral_9995/*"OscillationY"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_9807/*"Offset"*/,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ChangingSprite__JDHHCOGPMOM(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
          plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (JHMENEKPIBO,
                                      (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_031557fc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_031557fc:
            uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if ((uVar12 & 1) == 0) goto LAB_03155950;
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0315585c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315585c:
            plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(plVar8);
            }
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_10208/*"Period"*/,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_5616/*"Ease"*/,(MethodInfo *)0x0);
            fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            ChangingSprite__KPPJNBBDFAL(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
          } while( true );
        }
      }
      else if ((uVar3 == 0xa1c5e65a) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_12140/*"SimpleEffect"*/,(MethodInfo *)0x0), bVar2))
      {
        DMMLPNCPPHD = Location__IPDANBHLKLG
                                (__this,JHMENEKPIBO,HGDBMAGKALN,DPOMBGDLHCJ,(MethodInfo *)method_00)
        ;
        if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ChangingSprite__ACHCKILJGJK(HPACPFLKHPK,DMMLPNCPPHD,(MethodInfo *)0x0);
      }
    }
    else if (uVar3 == 0xde216af0) {
      bVar2 = System_String__op_Equality(s,StringLiteral_11079/*"ReappearY"*/,(MethodInfo *)0x0);
      if (bVar2) {
        pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(JHMENEKPIBO,0.0,0.0,(MethodInfo *)0x0);
        if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ChangingSprite__HPONNCNPPNC(HPACPFLKHPK,pMVar6,(MethodInfo *)0x0);
      }
    }
    else if ((uVar3 == 0xdf216c83) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_11078/*"ReappearX"*/,(MethodInfo *)0x0), bVar2)) {
      pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(JHMENEKPIBO,0.0,0.0,(MethodInfo *)0x0);
      if (HPACPFLKHPK == (ChangingSprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ChangingSprite__HNODMGDOOAI(HPACPFLKHPK,pMVar6,(MethodInfo *)0x0);
    }
  } while( true );
LAB_03155950:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_031559d0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_031559d0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
LAB_03155bfc:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03155c7c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03155c7c:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
LAB_031556a4:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03155724;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03155724:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
LAB_03155ee4:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03155f64;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03155f64:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_031562c4:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_031562f8;
    }
  }
LAB_031562dc:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031562f8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public void ECPBBMDOEKB(byte[] CLNMDFIMKAK)  [RVA 0x3056E48]
// Location$$ECPBBMDOEKB @ RVA 0x3056E48

void Location__ECPBBMDOEKB
               (Location_o *__this,System_Byte_array *CLNMDFIMKAK,MethodInfo *method)

{
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_00;
  Il2CppObject *pIVar1;
  ulong uVar2;
  
                    /* try { // try from 03156e4c to 03256e53 has its CatchHandler @ 03156e8c */
                    /* try { // try from 03156e54 to 03256e5b has its CatchHandler @ 03156e90 */
                    /* try { // try from 03156e5c to 03256e67 has its CatchHandler @ 03156e8c */
  if ((DAT_04565e6e & 1) == 0) {
                    /* try { // try from 03156e68 to 03256e73 has its CatchHandler @ 03156e90 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Count__);
                    /* catch() { ... } // from try @ 03156d74 with catch @ 03156e74
                       try { // try from 03156e74 to 03256ea7 has its CatchHandler @ 03156c64 */
                    /* catch() { ... } // from try @ 03156d58 with catch @ 03156e78 */
                    /* catch() { ... } // from try @ 03156d50 with catch @ 03156e7c */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__);
                    /* catch() { ... } // from try @ 03156d38 with catch @ 03156e80 */
                    /* catch() { ... } // from try @ 03156d2c with catch @ 03156e84 */
    DAT_04565e6e = 1;
  }
                    /* catch() { ... } // from try @ 03156d14 with catch @ 03156e88 */
  if (CLNMDFIMKAK != (System_Byte_array *)0x0) {
                    /* catch() { ... } // from try @ 03156d90 with catch @ 03156e8c
                       catch() { ... } // from try @ 03156e4c with catch @ 03156e8c
                       catch() { ... } // from try @ 03156e5c with catch @ 03156e8c */
                    /* catch() { ... } // from try @ 03156dc0 with catch @ 03156e90
                       catch() { ... } // from try @ 03156e54 with catch @ 03156e90
                       catch() { ... } // from try @ 03156e68 with catch @ 03156e90 */
    if (0 < (int)CLNMDFIMKAK->max_length) {
      uVar2 = 0;
      do {
                    /* try { // try from 03156ea8 to 03256ebf has its CatchHandler @ 03157020 */
        __this_00 = (__this->fields).JDLKPFCELNF;
        if (__this_00 == (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) goto LAB_03156f14;
        if ((long)(__this_00->fields)._size <= (long)uVar2) {
          return;
        }
                    /* try { // try from 03156ec0 to 0325700f has its CatchHandler @ 03156c64 */
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)uVar2,
                            Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__);
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03156f14;
        if ((uint)CLNMDFIMKAK->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (pIVar1[2].monitor == (UnityEngine_GameObject_o *)0x0) goto LAB_03156f14;
        UnityEngine_GameObject__SetActive
                  (pIVar1[2].monitor,CLNMDFIMKAK->m_Items[uVar2] != 0,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)CLNMDFIMKAK->max_length);
    }
    return;
  }
LAB_03156f14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string DELGACJHIMA(string JEDJNEFCHFH)  [RVA 0x3056F1C]
// Location$$DELGACJHIMA @ RVA 0x3056F1C

System_String_o * Location__DELGACJHIMA(System_String_o *JEDJNEFCHFH,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e6f & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_22365/*"{0}/{1}/{1}_{2}"*/);
    FUN_01bab630(&StringLiteral_20153/*"params.xml"*/);
    DAT_04565e6f = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar1 = SF2Paths__DPOEFEMDMJI((MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (StringLiteral_22365/*"{0}/{1}/{1}_{2}"*/,(Il2CppObject *)pSVar1,(Il2CppObject *)JEDJNEFCHFH,
                      StringLiteral_20153/*"params.xml"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private string GKJLMKDFAPA()  [RVA 0x3056FB4]
// Location$$GKJLMKDFAPA @ RVA 0x3056FB4

System_String_o * Location__GKJLMKDFAPA(Location_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Location__DELGACJHIMA((__this->fields).ELNOBGPJBKH,method);
  return pSVar1;
}


// ===== public void HLAKMKPFDAC()  [RVA 0x3056FBC]
// Location$$HLAKMKPFDAC @ RVA 0x3056FBC

/* WARNING: Removing unreachable block (ram,0x031576bc) */

void Location__HLAKMKPFDAC(Location_o *__this,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_00;
  System_Collections_Generic_List_MEHKKHFBNLM__o **ppSVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *pSVar11;
  System_String_array *pSVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  Location_Fields *pNVar16;
  int NGPAOPCDOLF;
  System_Collections_Generic_List_string__o **ppSVar17;
  float fVar18;
  UnityEngine_Color_o UVar19;
  System_Nullable_Color__Fields local_58;
  
  if ((DAT_04565e70 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 03157010 to 0325701f has its CatchHandler @ 03157020 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
                    /* catch() { ... } // from try @ 03156ea8 with catch @ 03157020
                       catch() { ... } // from try @ 03157010 with catch @ 03157020 */
                    /* try { // try from 03157024 to 03257027 has its CatchHandler @ 03157030 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 03157028 to 03257033 has its CatchHandler @ 03156c64 */
                    /* catch() { ... } // from try @ 03157024 with catch @ 03157030 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEHKKHFBNLM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_14851/*"Wall"*/);
    FUN_01bab630(&StringLiteral_6604/*"FrictionForce"*/);
    FUN_01bab630(&StringLiteral_6500/*"Floor"*/);
    FUN_01bab630(&StringLiteral_11416/*"Root"*/);
    FUN_01bab630(&StringLiteral_9259/*"Music"*/);
    FUN_01bab630(&StringLiteral_14946/*"Width"*/);
    FUN_01bab630(&StringLiteral_10367/*"PositionY"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_7065/*"Height"*/);
    DAT_04565e70 = 1;
  }
  pNVar16 = &__this->fields;
  pNVar16->ELNOBGPJBKH = (__this->fields).KGLJICLJHEL;
  thunk_FUN_01c20e04(pNVar16);
  pSVar4 = Location__DELGACJHIMA(pNVar16->ELNOBGPJBKH,method_00);
  method_01 = (MethodInfo *)0x1;
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_1/*""*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar5 != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar5,StringLiteral_11416/*"Root"*/,
                                (pSVar5->klass->vtable)._51_get_Item.method);
    ppSVar17 = &(__this->fields).OECKCNINPHL;
    pSVar11 = *ppSVar17;
    if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar11->fields)._size;
      (pSVar11->fields)._size = 0;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (0 < length) {
        method_01 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar3 = System_String__op_Inequality
                        ((__this->fields).FNLFDPAJACB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      lVar13 = Method_System_Collections_Generic_List<string>_Add__;
      if (bVar3) {
        pSVar11 = (__this->fields).OECKCNINPHL;
        if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031576b4;
        pSVar4 = (__this->fields).FNLFDPAJACB;
        pSVar12 = (pSVar11->fields)._items;
        (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) goto LAB_031576b4;
        uVar2 = (pSVar11->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (pSVar11->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = pSVar4;
          thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        if (plVar6 == (long *)0x0) goto LAB_031576b4;
      }
      else {
                    /* try { // try from 031571d0 to 0325731b has its CatchHandler @ 031571d0
                       catch() { ... } // from try @ 031571d0 with catch @ 031571d0
                       catch() { ... } // from try @ 031575d0 with catch @ 031571d0
                       catch() { ... } // from try @ 03157644 with catch @ 031571d0
                       catch() { ... } // from try @ 03157718 with catch @ 031571d0 */
        if ((plVar6 == (long *)0x0) ||
           (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
           pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031576b4;
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_9259/*"Music"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) goto LAB_031576b4;
        method_01 = (MethodInfo *)0x0;
        pSVar12 = System_String__Split(pSVar4,0x7c,0,(MethodInfo *)0x0);
        pSVar11 = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar11,
                   (System_Collections_Generic_IEnumerable_T__o *)pSVar12,
                   Method_System_Collections_Generic_List<string>__ctor__);
        *ppSVar17 = pSVar11;
        thunk_FUN_01c20e04(ppSVar17,pSVar11);
      }
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_6604/*"FrictionForce"*/,(MethodInfo *)0x0);
        if (DAT_04565f2f == '\0') {
          FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
          DAT_04565f2f = '\x01';
        }
        fVar18 = EIABCPKDEBD__GICIEKCGOHA
                           (pSVar8,EBGMOLCMOHK_TypeInfo->static_fields->OFBMPPNJNDB,
                            (MethodInfo *)0x0);
        if (DAT_04565f30 == '\0') {
          FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
          DAT_04565f30 = '\x01';
        }
        EBGMOLCMOHK_TypeInfo->static_fields->DBIHPEGBLNF = fVar18;
                    /* try { // try from 0315731c to 03257337 has its CatchHandler @ 0315760c */
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_14851/*"Wall"*/,(MethodInfo *)0x0);
                    /* try { // try from 03157344 to 0325734b has its CatchHandler @ 03157600 */
          fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
          (__this->fields).PJKMBLALCBB = fVar18;
                    /* try { // try from 0315735c to 03257363 has its CatchHandler @ 031575fc */
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                    /* try { // try from 03157368 to 0325736f has its CatchHandler @ 031575f8 */
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_6500/*"Floor"*/,(MethodInfo *)0x0);
                    /* try { // try from 03157380 to 03257387 has its CatchHandler @ 031575f4 */
                    /* try { // try from 03157388 to 03257393 has its CatchHandler @ 031575f0 */
            fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
            (__this->fields).IDBMGJFGIJH = fVar18;
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                    /* try { // try from 031573a4 to 032573ab has its CatchHandler @ 031575ec */
            if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_10367/*"PositionY"*/,(MethodInfo *)0x0);
                    /* try { // try from 031573c4 to 032573e7 has its CatchHandler @ 03157614 */
              fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
              (__this->fields).KKHNKBHNHGF = fVar18;
              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
              if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 031573f4 to 03257437 has its CatchHandler @ 03157610 */
                pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar7,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
                pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                local_58.hasValue = false;
                local_58._1_3_ = 0;
                local_58.value.fields.r = 0.0;
                local_58.value.fields.g = 0.0;
                local_58.value.fields.b = 0.0;
                local_58.value.fields.a = 0.0;
                UVar19 = CFBGPBCDAGA__HPBCENEFAMD
                                   (pSVar4,1.0,(System_Nullable_Color__o *)&local_58,
                                    (MethodInfo *)0x0);
                (__this->fields).GLECOLINCIH.fields.r = UVar19.fields.r;
                (__this->fields).GLECOLINCIH.fields.g = UVar19.fields.g;
                (__this->fields).GLECOLINCIH.fields.b = UVar19.fields.b;
                (__this->fields).GLECOLINCIH.fields.a = UVar19.fields.a;
                pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_14946/*"Width"*/,(MethodInfo *)0x0);
                    /* try { // try from 03157450 to 03257457 has its CatchHandler @ 03157604 */
                  fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
                  (__this->fields).NMFKJBOAOLK = fVar18;
                    /* try { // try from 03157470 to 0325748f has its CatchHandler @ 031575dc */
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                  if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar7,StringLiteral_7065/*"Height"*/,(MethodInfo *)0x0);
                    /* try { // try from 0315749c to 032574a3 has its CatchHandler @ 031575d4 */
                    fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
                    (__this->fields).DAPHCPICAAC = fVar18;
                    /* try { // try from 031574b0 to 032574d7 has its CatchHandler @ 03157604 */
                    __this_00 = (System_Collections_Generic_List_MEHKKHFBNLM__o *)
                                thunk_FUN_01bda818(
                                                  System_Collections_Generic_List<MEHKKHFBNLM>_TypeInfo
                                                  );
                    System_Collections_Generic_List<object>___ctor
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               Method_System_Collections_Generic_List<MEHKKHFBNLM>__ctor__);
                    ppSVar9 = &(__this->fields).JDLKPFCELNF;
                    *ppSVar9 = __this_00;
                    thunk_FUN_01c20e04(ppSVar9,__this_00);
                    plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x210));
                    if (plVar6 != (long *)0x0) {
                    /* try { // try from 031574f0 to 0325750f has its CatchHandler @ 031575d8 */
                      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                                 (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      NGPAOPCDOLF = 0;
                      do {
                        lVar13 = *plVar6;
                    /* try { // try from 0315751c to 03257523 has its CatchHandler @ 031575d0 */
                        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                    /* try { // try from 03157538 to 0325753b has its CatchHandler @ 03157604 */
                            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0315755c to 0325757b has its CatchHandler @ 03157608 */
                              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                              goto LAB_03157564;
                            }
                    /* try { // try from 0315753c to 0325754b has its CatchHandler @ 031575e8 */
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar10 = (undefined8 *)
                                  FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03157564:
                        uVar14 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                        if ((uVar14 & 1) == 0) {
                          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                    /* try { // try from 0315762c to 03257643 has its CatchHandler @ 03157710 */
                          if (plVar6 == (long *)0x0) {
                            return;
                          }
                          lVar13 = *plVar6;
                          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                          if (uVar14 == 0) goto LAB_03157664;
                    /* try { // try from 03157644 to 032576ff has its CatchHandler @ 031571d0 */
                          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          goto LAB_0315764c;
                        }
                        lVar13 = *plVar6;
                        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                        if (uVar14 != 0) {
                    /* try { // try from 03157588 to 03257593 has its CatchHandler @ 031575e4 */
                          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 031575bc to 032575cf has its CatchHandler @ 03157614 */
                              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_031575c4;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                    /* try { // try from 031575a4 to 032575a7 has its CatchHandler @ 031575e0 */
                        puVar10 = (undefined8 *)
                                  FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_031575c4:
                        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar6,puVar10[1])
                        ;
                    /* catch() { ... } // from try @ 0315751c with catch @ 031575d0
                       try { // try from 031575d0 to 0325762b has its CatchHandler @ 031571d0 */
                    /* catch() { ... } // from try @ 0315749c with catch @ 031575d4 */
                        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 031574f0 with catch @ 031575d8 */
                    /* catch() { ... } // from try @ 03157470 with catch @ 031575dc */
                    /* catch() { ... } // from try @ 031575a4 with catch @ 031575e0 */
                    /* catch() { ... } // from try @ 03157588 with catch @ 031575e4 */
                          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 0315753c with catch @ 031575e8 */
                    /* catch() { ... } // from try @ 031573a4 with catch @ 031575ec */
                    /* catch() { ... } // from try @ 03157388 with catch @ 031575f0 */
                    /* catch() { ... } // from try @ 03157380 with catch @ 031575f4 */
                    /* catch() { ... } // from try @ 03157368 with catch @ 031575f8 */
                    /* catch() { ... } // from try @ 0315735c with catch @ 031575fc */
                    /* catch() { ... } // from try @ 03157344 with catch @ 03157600 */
                          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01babc64(AHDGNOJPPIB);
                          }
                        }
                    /* catch() { ... } // from try @ 03157450 with catch @ 03157604
                       catch() { ... } // from try @ 031574b0 with catch @ 03157604
                       catch() { ... } // from try @ 03157538 with catch @ 03157604 */
                    /* catch() { ... } // from try @ 0315755c with catch @ 03157608 */
                    /* catch() { ... } // from try @ 0315731c with catch @ 0315760c */
                    /* catch() { ... } // from try @ 031573f4 with catch @ 03157610 */
                        Location__DAHBGDAKELO(__this,AHDGNOJPPIB,NGPAOPCDOLF,method_01);
                    /* catch() { ... } // from try @ 031573c4 with catch @ 03157614
                       catch() { ... } // from try @ 031575bc with catch @ 03157614 */
                        NGPAOPCDOLF = NGPAOPCDOLF + -3;
                      } while( true );
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
LAB_031576b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0315764c:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03157680;
    }
  }
LAB_03157664:
  puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03157680:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  return;
}


// ===== private void DAHBGDAKELO(XmlNode AHDGNOJPPIB, int NGPAOPCDOLF)  [RVA 0x3057784]
// Location$$DAHBGDAKELO @ RVA 0x3057784

/* WARNING: Removing unreachable block (ram,0x03157eb0) */
/* WARNING: Removing unreachable block (ram,0x03157fdc) */

void Location__DAHBGDAKELO
               (Location_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t NGPAOPCDOLF,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  MEHKKHFBNLM_o *__this_00;
  Location_o *__this_01;
  System_String_o *OOKEKJMFKPE;
  System_String_o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  long lVar10;
  MEHKKHFBNLM_array *pMVar11;
  ulong uVar12;
  int *piVar13;
  MEHKKHFBNLM_o **ppMVar14;
  Vector3f_o *pCVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_04565e71 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_Add__);
    FUN_01bab630(&MEHKKHFBNLM_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12140/*"SimpleEffect"*/);
    FUN_01bab630(&StringLiteral_12314/*"SpriteMask"*/);
    FUN_01bab630(&StringLiteral_10324/*"PlayerPositionY"*/);
    FUN_01bab630(&StringLiteral_10323/*"PlayerPositionX"*/);
    FUN_01bab630(&StringLiteral_6197/*"Factor"*/);
    FUN_01bab630(&StringLiteral_3149/*"Atlas"*/);
    FUN_01bab630(&StringLiteral_9178/*"ModelsViewer"*/);
    FUN_01bab630(&StringLiteral_9414/*"NewParticleEffect"*/);
    FUN_01bab630(&StringLiteral_10157/*"ParticleEffect"*/);
    FUN_01bab630(&StringLiteral_11718/*"Scaling"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_5763/*"EnemyPositionX"*/);
    FUN_01bab630(&StringLiteral_8592/*"Location::ParseLayer: already found Game-Layer, please check corresponding params.xml"*/);
    FUN_01bab630(&StringLiteral_5764/*"EnemyPositionY"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_10168/*"Path"*/);
    FUN_01bab630(&StringLiteral_4962/*"CustomAnimation"*/);
    DAT_04565e71 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_11718/*"Scaling"*/,(MethodInfo *)0x0);
    iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
    __this_00 = (MEHKKHFBNLM_o *)thunk_FUN_01bda818(MEHKKHFBNLM_TypeInfo);
    MEHKKHFBNLM___ctor(__this_00,NGPAOPCDOLF,(MethodInfo *)0x0);
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_10168/*"Path"*/,(MethodInfo *)0x0);
      if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
        OOKEKJMFKPE = Location__HLAPKOIPADD(__this,method_00);
      }
      else {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03157fd4;
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_10168/*"Path"*/,(MethodInfo *)0x0);
        method_01 = (MethodInfo *)0x0;
        __this_01 = (Location_o *)
                    EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
        OOKEKJMFKPE = Location__NKJDKKCJIEM(__this_01,(System_String_o *)__this_01,method_01);
      }
      if (__this_00 != (MEHKKHFBNLM_o *)0x0) {
        (__this_00->fields).FODLFBLPPBF = 0 < iVar4;
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
          iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
          (__this_00->fields).BGHFADDGPAD = iVar4;
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_6197/*"Factor"*/,(MethodInfo *)0x0);
            fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
            (__this_00->fields).JHLJELAKADM = fVar16;
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_3149/*"Atlas"*/,(MethodInfo *)0x0);
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
              (__this_00->fields).KBOFABJIPPD = pSVar7;
              thunk_FUN_01c20e04();
              plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
              if (plVar8 != (long *)0x0) {
                plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                do {
                  lVar10 = *plVar8;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_03157b28;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_03157b28:
                  uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                  if ((uVar12 & 1) == 0) {
                    plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                    if (plVar8 == (long *)0x0) goto LAB_03157ea4;
                    lVar10 = *plVar8;
                    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar12 == 0) goto LAB_03157e7c;
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    goto LAB_03157e64;
                  }
                  lVar10 = *plVar8;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_03157b88;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_03157b88:
                  AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                  if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                  if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
                     ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(AHDGNOJPPIB_00);
                  }
                  pSVar7 = (System_String_o *)
                           (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                                     (AHDGNOJPPIB_00,
                                      (AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
                  bVar3 = System_String__op_Equality(pSVar7,StringLiteral_9178/*"ModelsViewer"*/,(MethodInfo *)0x0);
                  if (bVar3) {
                    pCVar15 = (__this->fields).IFNNNFMACDH;
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_10323/*"PlayerPositionX"*/,(MethodInfo *)0x0);
                    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_10324/*"PlayerPositionY"*/,(MethodInfo *)0x0);
                    fVar17 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    if (pCVar15 == (Vector3f_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    Vector3f__FOOHBJNHOKK(pCVar15,fVar16,fVar17,0.0,(MethodInfo *)0x0);
                    pCVar15 = (__this->fields).OGNCBOHIMFJ;
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_5763/*"EnemyPositionX"*/,(MethodInfo *)0x0);
                    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB_00,
                                        (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_5764/*"EnemyPositionY"*/,(MethodInfo *)0x0);
                    fVar17 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
                    if (pCVar15 == (Vector3f_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    Vector3f__FOOHBJNHOKK(pCVar15,fVar16,fVar17,0.0,(MethodInfo *)0x0);
                  }
                  else {
                    bVar3 = System_String__op_Equality(pSVar7,StringLiteral_10157/*"ParticleEffect"*/,(MethodInfo *)0x0)
                    ;
                    if (bVar3) {
                      Location__EPNFJNCPIFC
                                ((Location_o *)(ulong)bVar3,AHDGNOJPPIB_00,__this_00,0,in_x4);
                    }
                    else {
                      bVar3 = System_String__op_Equality
                                        (pSVar7,StringLiteral_9414/*"NewParticleEffect"*/,(MethodInfo *)0x0);
                      if (bVar3) {
                        Location__EPNFJNCPIFC
                                  ((Location_o *)(ulong)bVar3,AHDGNOJPPIB_00,__this_00,1,in_x4);
                      }
                      else {
                        bVar3 = System_String__op_Equality
                                          (pSVar7,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
                        if (bVar3) {
                          Location__BHAOABOGFHK
                                    ((Location_o *)(ulong)bVar3,AHDGNOJPPIB_00,OOKEKJMFKPE,
                                     __this_00,in_x4);
                        }
                        else {
                          bVar3 = System_String__op_Equality
                                            (pSVar7,StringLiteral_12314/*"SpriteMask"*/,(MethodInfo *)0x0);
                          if (bVar3) {
                            Location__NFIOHOMJIJC
                                      ((Location_o *)(ulong)bVar3,AHDGNOJPPIB_00,OOKEKJMFKPE,
                                       __this_00,in_x4);
                          }
                          else {
                            bVar3 = System_String__op_Equality
                                              (pSVar7,StringLiteral_12140/*"SimpleEffect"*/,(MethodInfo *)0x0);
                            if (bVar3) {
                              Location__IPDANBHLKLG
                                        (__this,AHDGNOJPPIB_00,OOKEKJMFKPE,__this_00,in_x4);
                            }
                            else {
                              bVar3 = System_String__op_Equality
                                                (pSVar7,StringLiteral_4962/*"CustomAnimation"*/,(MethodInfo *)0x0);
                              if (bVar3) {
                                Location__NCMFIAFIKNA
                                          (__this,AHDGNOJPPIB_00,OOKEKJMFKPE,__this_00,in_x4);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_03157fd4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03157e64:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03157e98;
    }
  }
LAB_03157e7c:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_03157e98:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03157ea4:
  lVar10 = Method_System_Collections_Generic_List<MEHKKHFBNLM>_Add__;
  __this_02 = (__this->fields).JDLKPFCELNF;
  if (__this_02 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) {
    pMVar11 = (__this_02->fields)._items;
    (__this_02->fields)._version = (__this_02->fields)._version + 1;
    if (pMVar11 != (MEHKKHFBNLM_array *)0x0) {
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pMVar11->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pMVar11->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      bVar3 = MEHKKHFBNLM__BFBBBJOMGJA(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        ppMVar14 = &(__this->fields).CLFNHGGJHCA;
        if (*ppMVar14 != (MEHKKHFBNLM_o *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_8592/*"Location::ParseLayer: already found Game-Layer, please check corresponding params.xml"*/,(MethodInfo *)0x0);
        }
        *ppMVar14 = __this_00;
        thunk_FUN_01c20e04(ppMVar14,__this_00);
        return;
      }
      return;
    }
  }
LAB_03157fd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NFIOHOMJIJC(XmlNode AHDGNOJPPIB, string NPNDHEBBEAD, MEHKKHFBNLM DPOMBGDLHCJ)  [RVA 0x3058148]
// Location$$NFIOHOMJIJC @ RVA 0x3058148

void Location__NFIOHOMJIJC
               (Location_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *NPNDHEBBEAD
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
    FUN_01bab630(&StringLiteral_3360/*"BackSortingLayerName"*/);
    FUN_01bab630(&StringLiteral_4422/*"ClassName"*/);
    FUN_01bab630(&StringLiteral_6612/*"FrontSortingOrder"*/);
    FUN_01bab630(&StringLiteral_6611/*"FrontSortingLayerName"*/);
    FUN_01bab630(&StringLiteral_4967/*"CustomRange"*/);
    FUN_01bab630(&StringLiteral_3361/*"BackSortingOrder"*/);
    FUN_01bab630(&StringLiteral_2828/*"AlphaCutoff"*/);
    FUN_01bab630(&StringLiteral_10267/*"Pic: {0}"*/);
    FUN_01bab630(&StringLiteral_12316/*"SpriteSortPoint"*/);
    DAT_04565e72 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_4422/*"ClassName"*/,(MethodInfo *)0x0);
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
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10267/*"Pic: {0}"*/,args,(MethodInfo *)0x0);
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
                               (pSVar3,StringLiteral_2828/*"AlphaCutoff"*/,(MethodInfo *)0x0);
            value = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.2,(MethodInfo *)0x0);
            UnityEngine_SpriteMask__set_alphaCutoff(__this_01,value,(MethodInfo *)0x0);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_12316/*"SpriteSortPoint"*/,(MethodInfo *)0x0);
              iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<SpriteSortPoint>__);
              UnityEngine_SpriteMask__set_spriteSortPoint(__this_01,iVar2,(MethodInfo *)0x0);
              lVar5 = (*(AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._18_get_FirstChild.method)
              ;
              if (lVar5 == 0) {
                UnityEngine_SpriteMask__set_isCustomRangeActive(__this_01,false,(MethodInfo *)0x0);
LAB_03158674:
                Location__OOFFEHJNHFC
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
                bVar1 = System_String__op_Equality(pSVar8,StringLiteral_4967/*"CustomRange"*/,(MethodInfo *)0x0);
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
                                       (pSVar3,StringLiteral_6612/*"FrontSortingOrder"*/,(MethodInfo *)0x0);
                    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                    UnityEngine_SpriteMask__set_frontSortingOrder(__this_01,iVar2,(MethodInfo *)0x0)
                    ;
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240))
                    ;
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_6611/*"FrontSortingLayerName"*/,(MethodInfo *)0x0);
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
                                           (pSVar3,StringLiteral_3361/*"BackSortingOrder"*/,(MethodInfo *)0x0);
                        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                        UnityEngine_SpriteMask__set_backSortingOrder
                                  (__this_01,iVar2,(MethodInfo *)0x0);
                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                 (**(code **)(*plVar6 + 0x238))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar3,StringLiteral_3360/*"BackSortingLayerName"*/,(MethodInfo *)0x0);
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

