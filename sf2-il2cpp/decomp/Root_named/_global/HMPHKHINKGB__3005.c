// TypeDefIndex 3005
// Namespace: 
// public class HMPHKHINKGB : QuestAction
// Fields:
//   private string LAJBAKDJEKM; // 0x68
//   private string PKEKCJJMAOO; // 0x70
//   private string CIGHHOONGEC; // 0x78

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x34A92A0]
// HMPHKHINKGB$$MAHFCKJGBPP @ RVA 0x34A92A0

/* WARNING: Removing unreachable block (ram,0x035a99f4) */
/* WARNING: Removing unreachable block (ram,0x035a9b68) */

void HMPHKHINKGB__MAHFCKJGBPP(HMPHKHINKGB_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  QuestCondition_o *__this_01;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  Item_o *__this_02;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_03;
  IGFGDDANEPE_o *__this_04;
  System_Xml_XmlNode_o *pSVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  System_Xml_XmlAttributeCollection_o *pSVar12;
  System_Xml_XmlAttribute_o *pSVar13;
  DEKKGJNMFEB_o *__this_05;
  System_Object_array *args;
  Il2CppObject *pIVar14;
  undefined8 uVar15;
  Roster_o *pAVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_06;
  int32_t local_68;
  int32_t local_64;
  
  if ((DAT_04568515 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_3238/*"Auto"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_3114/*"Aspect"*/);
    FUN_01bab630(&StringLiteral_2810/*"All"*/);
    FUN_01bab630(&StringLiteral_10664/*"QuestActionSetPerkAspect - cant find item "{0}" with upgrade "{1}""*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568515 = 1;
  }
  local_64 = 0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
  QuestCondition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (QuestCondition_o *)0x0) {
    (__this_01->fields).AAJBIMFNMBB = (__this->fields).super.IJOKKFKPBEP;
    thunk_FUN_01c20e04();
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).LAJBAKDJEKM,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (((__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
        (pSVar6 = (__this_00->fields).DFJBJLBLBGB, pSVar6 != (System_String_o *)0x0)) &&
       (pSVar7 = System_String__Split(pSVar6,0x7c,0,(MethodInfo *)0x0),
       pSVar7 != (System_String_array *)0x0)) {
      iVar1 = (int)pSVar7->max_length;
      if (iVar1 == 0) goto LAB_035a9b54;
      pSVar6 = pSVar7->m_Items[0];
      if (iVar1 < 2) {
        iVar5 = 0;
      }
      else {
        iVar5 = System_Int32__Parse(pSVar7->m_Items[1],(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (__this_02 != (Item_o *)0x0) {
        IKKAMAMLIKA = Item__CKKIPBAIEMN(__this_02,pSVar6,(MethodInfo *)0x0);
        if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
          if (args != (System_Object_array *)0x0) {
            pSVar6 = (__this_00->fields).DFJBJLBLBGB;
                    /* try { // try from 035a98b8 to 036a997f has its CatchHandler @ 035a98b8
                       catch() { ... } // from try @ 035a98b8 with catch @ 035a98b8
                       catch() { ... } // from try @ 035a99ec with catch @ 035a98b8
                       catch() { ... } // from try @ 035a9ab4 with catch @ 035a98b8
                       catch() { ... } // from try @ 035a9b00 with catch @ 035a98b8
                       catch() { ... } // from try @ 035a9b48 with catch @ 035a98b8
                       catch() { ... } // from try @ 035a9b84 with catch @ 035a98b8
                       catch() { ... } // from try @ 035a9b98 with catch @ 035a98b8
                       catch() { ... } // from try @ 035a9bcc with catch @ 035a98b8 */
            if ((pSVar6 != (System_String_o *)0x0) &&
               (lVar17 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class),
               lVar17 == 0)) {
LAB_035a9b58:
              uVar15 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar15,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar6;
              thunk_FUN_01c20e04(args->m_Items,pSVar6);
              local_68 = iVar5;
              pIVar14 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (lVar17 = thunk_FUN_01bda71c(pIVar14,(((args->obj).klass)->_1).element_class),
                 lVar17 == 0)) goto LAB_035a9b58;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar14;
                thunk_FUN_01c20e04(args->m_Items + 1,pIVar14);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10664/*"QuestActionSetPerkAspect - cant find item "{0}" with upgrade "{1}""*/,args,(MethodInfo *)0x0);
                return;
              }
            }
LAB_035a9b54:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar16 != (Roster_o *)0x0) &&
             (__this_03 = (pAVar16->fields).OIDPLCLELEN, __this_03 != (GGHCLMEFIGO_o *)0x0)) {
            __this_04 = GGHCLMEFIGO__JNFIBDBHNOA(__this_03,IKKAMAMLIKA,(MethodInfo *)0x0);
            if (__this_04 == (IGFGDDANEPE_o *)0x0) goto LAB_035a9b0c;
            pSVar8 = (__this_04->fields).DMLGJFCNNJF;
            if (pSVar8 != (System_Xml_XmlNode_o *)0x0) {
              pSVar8 = (System_Xml_XmlNode_o *)
                       (*(pSVar8->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar8,StringLiteral_5703/*"Enchantments"*/,
                                  (pSVar8->klass->vtable)._51_get_Item.method);
              if (pSVar8 == (System_Xml_XmlNode_o *)0x0) goto LAB_035a9b0c;
              plVar9 = (long *)(*(pSVar8->klass->vtable)._13_get_ChildNodes.methodPtr)
                                         (pSVar8,(pSVar8->klass->vtable)._13_get_ChildNodes.method);
              if (plVar9 != (long *)0x0) {
                plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
                bVar4 = false;
                do {
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  do {
                    do {
                      lVar17 = *plVar9;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar10 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_035a9640;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar10 = (undefined8 *)
                                FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_035a9640:
                      uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                      if ((uVar18 & 1) == 0) {
                        plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
                    /* try { // try from 035a9980 to 036a9987 has its CatchHandler @ 035a9b84 */
                        if (plVar9 == (long *)0x0) goto LAB_035a99e0;
                        lVar17 = *plVar9;
                        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar18 == 0) goto LAB_035a99b8;
                    /* try { // try from 035a9998 to 036a999f has its CatchHandler @ 035a9b1c */
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        goto LAB_035a99a0;
                      }
                      lVar17 = *plVar9;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar10 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                            goto LAB_035a96a0;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar10 = (undefined8 *)
                                FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_035a96a0:
                      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a9b44 to 036a9b47 has its CatchHandler @ 035a9b68 */
                        FUN_01bab8c8();
                      }
                      bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                      if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
                         (*(System_Xml_XmlNode_c **)
                           (*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01babc64(plVar11);
                      }
                      pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                                (**(code **)(*plVar11 + 0x238))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x240));
                      if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                          (pSVar12,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar13,(System_String_o *)0x0,(MethodInfo *)0x0);
                      bVar3 = System_String__op_Equality
                                        (pSVar6,(__this->fields).PKEKCJJMAOO,(MethodInfo *)0x0);
                    } while (((!bVar3) &&
                             (bVar3 = System_String__op_Equality
                                                ((__this->fields).PKEKCJJMAOO,StringLiteral_2810/*"All"*/,
                                                 (MethodInfo *)0x0), !bVar3)) ||
                            (plVar11 = (long *)(**(code **)(*plVar11 + 0x468))
                                                         (plVar11,StringLiteral_11876/*"Set"*/,
                                                          *(undefined8 *)(*plVar11 + 0x470)),
                            plVar11 == (long *)0x0));
                    pSVar12 = (System_Xml_XmlAttributeCollection_o *)
                              (**(code **)(*plVar11 + 0x238))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x240));
                    if (pSVar12 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf
                                        (pSVar12,StringLiteral_3114/*"Aspect"*/,(MethodInfo *)0x0);
                    if (pSVar13 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar6 = (System_String_o *)
                             (*(pSVar13->klass->vtable)._8_get_Name.methodPtr)
                                       (pSVar13,(pSVar13->klass->vtable)._8_get_Name.method);
                    bVar3 = System_String__op_Equality(pSVar6,StringLiteral_3114/*"Aspect"*/,(MethodInfo *)0x0);
                  } while (!bVar3);
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if (pAVar16 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a9b70 to 036a9b83 has its CatchHandler @ 035a9be0 */
                    FUN_01bab8c8();
                  }
                  iVar5 = Roster__EOEAKGGDBFH(pAVar16,(MethodInfo *)0x0);
                  bVar4 = System_String__op_Equality
                                    ((__this->fields).CIGHHOONGEC,StringLiteral_3238/*"Auto"*/,
                                     (MethodInfo *)0x0);
                  if (bVar4) {
                    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_05 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
                    if (__this_05 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    local_64 = DEKKGJNMFEB__HNBCOIJFCCA(__this_05,iVar5,(MethodInfo *)0x0);
                    pSVar6 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                  }
                  else {
                    pSVar6 = (__this->fields).CIGHHOONGEC;
                  }
                  bVar4 = true;
                  (*(pSVar13->klass->vtable)._10_set_Value.methodPtr)
                            (pSVar13,pSVar6,(pSVar13->klass->vtable)._10_set_Value.method);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
LAB_035a9b48:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a9b48 to 036a9b6f has its CatchHandler @ 035a98b8 */
  FUN_01bab8c8();
  while( true ) {
                    /* try { // try from 035a99ac to 036a99b3 has its CatchHandler @ 035a9b30 */
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_035a99a0:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_035a99d4;
    }
  }
LAB_035a99b8:
                    /* try { // try from 035a99c0 to 036a99c7 has its CatchHandler @ 035a9b28 */
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_035a99d4:
                    /* try { // try from 035a99d4 to 036a99db has its CatchHandler @ 035a9b2c */
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_035a99e0:
                    /* try { // try from 035a99e4 to 036a99eb has its CatchHandler @ 035a9b24 */
                    /* try { // try from 035a99ec to 036a9a47 has its CatchHandler @ 035a98b8 */
  if (bVar4) {
    IGFGDDANEPE__LPLGJMMAKJG(__this_04,pSVar8,true,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 035a9a48 to 036a9a4f has its CatchHandler @ 035a9b34 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 035a9a60 to 036a9a67 has its CatchHandler @ 035a9b04 */
    if (pAVar16 == (Roster_o *)0x0) goto LAB_035a9b48;
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar16,false,(MethodInfo *)0x0);
                    /* try { // try from 035a9a74 to 036a9a7b has its CatchHandler @ 035a9b18 */
    HOOAAGABMBL__EOAMPKBBJPL(IKKAMAMLIKA,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 035a9a88 to 036a9a8f has its CatchHandler @ 035a9b10 */
    HOOAAGABMBL__LOPGLHCEBDF(IKKAMAMLIKA,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 035a9a9c to 036a9aa3 has its CatchHandler @ 035a9b14 */
    lVar17 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
                    /* try { // try from 035a9aac to 036a9ab3 has its CatchHandler @ 035a9b0c */
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x10);
                    /* try { // try from 035a9ab4 to 036a9af7 has its CatchHandler @ 035a98b8 */
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    __this_06 = (Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar17 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar4) {
                    /* try { // try from 035a9af8 to 036a9afb has its CatchHandler @ 035a9b20 */
      if (__this_06 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_035a9b48;
                    /* try { // try from 035a9afc to 036a9aff has its CatchHandler @ 035a9b08 */
                    /* try { // try from 035a9b00 to 036a9b43 has its CatchHandler @ 035a98b8 */
                    /* catch() { ... } // from try @ 035a9a60 with catch @ 035a9b04 */
                    /* catch() { ... } // from try @ 035a9afc with catch @ 035a9b08 */
      Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed(__this_06,IKKAMAMLIKA,(MethodInfo *)0x0);
    }
  }
LAB_035a9b0c:
                    /* catch() { ... } // from try @ 035a9aac with catch @ 035a9b0c */
                    /* catch() { ... } // from try @ 035a9a88 with catch @ 035a9b10 */
                    /* catch() { ... } // from try @ 035a9a9c with catch @ 035a9b14 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a9a74 with catch @ 035a9b18 */
                    /* catch() { ... } // from try @ 035a9998 with catch @ 035a9b1c */
                    /* catch() { ... } // from try @ 035a9af8 with catch @ 035a9b20 */
                    /* catch() { ... } // from try @ 035a99e4 with catch @ 035a9b24 */
                    /* catch() { ... } // from try @ 035a99c0 with catch @ 035a9b28 */
                    /* catch() { ... } // from try @ 035a99d4 with catch @ 035a9b2c */
                    /* catch() { ... } // from try @ 035a99ac with catch @ 035a9b30 */
                    /* catch() { ... } // from try @ 035a9a48 with catch @ 035a9b34 */
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34A9CA8]
// HMPHKHINKGB$$HNIHOIAMDPC @ RVA 0x34A9CA8

void HMPHKHINKGB__HNIHOIAMDPC
               (HMPHKHINKGB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568516 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04568516 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).LAJBAKDJEKM = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).PKEKCJJMAOO = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields).CIGHHOONGEC;
          *ppSVar4 = pSVar3;
          thunk_FUN_01c20e04(ppSVar4,pSVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A9DE8]
// HMPHKHINKGB$$.ctor @ RVA 0x34A9DE8

void HMPHKHINKGB___ctor(HMPHKHINKGB_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

