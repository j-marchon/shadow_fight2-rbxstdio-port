// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowRaidButton @ RVA 0x300B400

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowRaidButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Color_o JNBIEOHKMMI;
  bool bVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  int64_t iVar4;
  int64_t iVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar7;
  EEGDOGKBLNG_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x4;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  HOOAAGABMBL_o *pHVar8;
  HOOAAGABMBL_o *pHVar9;
  BHEDGAKGKPO_StaticFields *pBVar10;
  IconLabelButton_o *pIVar11;
  IconLabelButton_o **BECCOGAMKJL;
  Nekki_SF2_GUI_ResolutionImage_o *__this_04;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Color_o NEPACPNPKHJ;
  undefined1 in_stack_ffffffffffffff90;
  undefined7 in_stack_ffffffffffffff91;
  MethodInfo *in_stack_ffffffffffffff98;
  int64_t local_58;
  
  if ((DAT_04565b64 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12266);
    FUN_01bab630(&StringLiteral_16819);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04565b64 = 1;
    method = extraout_x1;
  }
  local_58 = 0;
  pHVar8 = (__this->fields).BBODGCMLKFP;
  if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar8->klass->_2).naturalAligment) &&
       ((pHVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
        if ((pHVar8->fields)._PLEEGEDKAGM_k__BackingField == 1) {
          pIVar11 = (__this->fields).HNNIFDIPKBJ;
          if (pIVar11 != (IconLabelButton_o *)0x0) {
            UVar16 = LabelButton__get_Color((LabelButton_o *)pIVar11,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                      (__this,pIVar11,StringLiteral_16819,UVar16,true,in_x4);
            return;
          }
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
            method = extraout_x1_00;
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
            method = extraout_x1_01;
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 != (ACHLOMELAJE_o *)0x0) {
            iVar4 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
            pHVar9 = (__this->fields).BBODGCMLKFP;
            if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
              iVar5 = HOOAAGABMBL__MNKCHHFDEGH(pHVar9,(MethodInfo *)0x0);
              if (iVar4 < iVar5) {
                if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UVar16 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                fVar15 = UVar16.fields.a;
                fVar14 = UVar16.fields.b;
                fVar13 = UVar16.fields.g;
                fVar12 = UVar16.fields.r;
              }
              else {
                if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pBVar10 = BHEDGAKGKPO_TypeInfo->static_fields;
                fVar12 = (pBVar10->FHIAKPJBBCB).fields.r;
                fVar13 = (pBVar10->FHIAKPJBBCB).fields.g;
                fVar14 = (pBVar10->FHIAKPJBBCB).fields.b;
                fVar15 = (pBVar10->FHIAKPJBBCB).fields.a;
              }
              pHVar9 = (__this->fields).BBODGCMLKFP;
              if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
                pIVar11 = (__this->fields).KCFECNOELAA;
                local_58 = HOOAAGABMBL__MNKCHHFDEGH(pHVar9,(MethodInfo *)0x0);
                pSVar6 = System_Int64__ToString((int64_t)&local_58,(MethodInfo *)0x0);
                iVar3 = 0;
                UVar16.fields.g = fVar13;
                UVar16.fields.r = fVar12;
                UVar16.fields.a = fVar15;
                UVar16.fields.b = fVar14;
                Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                          (__this,pIVar11,pSVar6,UVar16,false,in_x4);
                pHVar9 = (__this->fields).BBODGCMLKFP;
                if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
                  iVar4 = HOOAAGABMBL__MNKCHHFDEGH(pHVar9,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)0x1;
                  JNBIEOHKMMI.fields._1_7_ = in_stack_ffffffffffffff91;
                  JNBIEOHKMMI.fields.r._0_1_ = in_stack_ffffffffffffff90;
                  JNBIEOHKMMI.fields._8_8_ = in_stack_ffffffffffffff98;
                  NEPACPNPKHJ.fields.g = fVar13;
                  NEPACPNPKHJ.fields.r = fVar12;
                  NEPACPNPKHJ.fields.a = fVar15;
                  NEPACPNPKHJ.fields.b = fVar14;
                  Nekki_SF2_GUI_Shop_InfoPanelContent__JMKIPMNGBEG
                            (__this,-1,iVar4,iVar3,true,
                             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),NEPACPNPKHJ,
                             JNBIEOHKMMI,in_x5);
                  if (pHVar8[1].klass == (HOOAAGABMBL_c *)0x0) {
                    return;
                  }
                  __this_01 = (System_Collections_Generic_List_object__o *)
                              ((pHVar8[1].klass)->_1).implementedInterfaces;
                  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                    if ((__this_01->fields)._size < 1) {
                      return;
                    }
                    pIVar7 = System_Collections_Generic_List<object>__get_Item
                                       (__this_01,0,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                                       );
                    BECCOGAMKJL = &(__this->fields).BDGGFDABEAO;
                    pIVar11 = *BECCOGAMKJL;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar2) {
                      if ((*BECCOGAMKJL == (IconLabelButton_o *)0x0) ||
                         (pIVar7 == (Il2CppObject *)0x0)) goto LAB_0310b8a0;
                      __this_04 = ((*BECCOGAMKJL)->fields)._icon;
                      pSVar6 = OFFIONDOEPM__CDGICMOFKHE
                                         ((System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
                      if (__this_04 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0310b8a0;
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (__this_04,pSVar6,(MethodInfo *)0x0);
                    }
                    else {
                      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0310b8a0;
                      method_00 = (MethodInfo *)
                                  OFFIONDOEPM__CDGICMOFKHE
                                            ((System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                                (__this,BECCOGAMKJL,StringLiteral_12266,2,
                                 (System_String_o *)method_00,0x14,0,StringLiteral_1567,true,
                                 in_stack_ffffffffffffff98);
                    }
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (__this_02 != (EEGDOGKBLNG_o *)0x0) {
                      iVar3 = EEGDOGKBLNG__APFFEAJBAEK
                                        (__this_02,(System_String_o *)pIVar7[1].klass,
                                         (MethodInfo *)0x0);
                      if (iVar3 < *(int *)&pIVar7[1].monitor) {
                        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        UVar16 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                        fVar15 = UVar16.fields.a;
                        fVar14 = UVar16.fields.b;
                        fVar13 = UVar16.fields.g;
                        fVar12 = UVar16.fields.r;
                      }
                      else {
                        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pBVar10 = BHEDGAKGKPO_TypeInfo->static_fields;
                        fVar12 = (pBVar10->FHIAKPJBBCB).fields.r;
                        fVar13 = (pBVar10->FHIAKPJBBCB).fields.g;
                        fVar14 = (pBVar10->FHIAKPJBBCB).fields.b;
                        fVar15 = (pBVar10->FHIAKPJBBCB).fields.a;
                      }
                      pIVar11 = (__this->fields).BDGGFDABEAO;
                      pSVar6 = System_Int32__ToString((int32_t)&pIVar7[1].monitor,(MethodInfo *)0x0)
                      ;
                      EFJKPCADGJH.fields.g = fVar13;
                      EFJKPCADGJH.fields.r = fVar12;
                      EFJKPCADGJH.fields.a = fVar15;
                      EFJKPCADGJH.fields.b = fVar14;
                      Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                                (__this,pIVar11,pSVar6,EFJKPCADGJH,false,method_00);
                      if ((pHVar8->fields)._BGCHJEEOKMG_k__BackingField == false) {
                        return;
                      }
                      pIVar11 = (__this->fields).KCFECNOELAA;
                      if ((pIVar11 != (IconLabelButton_o *)0x0) &&
                         (__this_03 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pIVar11,
                                                 (MethodInfo *)0x0),
                         __this_03 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
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
LAB_0310b8a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

