// AHOEIGAOKEL$$BPHHDPIFBOO @ RVA 0x30CFACC

void AHOEIGAOKEL__BPHHDPIFBOO(AHOEIGAOKEL_o *__this,FLCGGKEODNC_o *DNBBBGEENMM,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  HOOAAGABMBL_o *__this_01;
  System_String_o *str2;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar7;
  ACHLOMELAJE_o *__this_03;
  System_Action_object__o *IELDNEAAPBE;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_04;
  System_Collections_Generic_List_LabelButton__o *__this_05;
  FLCGGKEODNC_array *pFVar8;
  LabelButton_array *pLVar9;
  LabelButton_o **ppLVar10;
  LabelButton_o *pLVar11;
  System_String_o *pSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o UVar17;
  
  if ((DAT_045662f9 & 1) == 0) {
    FUN_01bab630(&Method_AHOEIGAOKEL_HCNNHNAIJFB__);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LabelButton>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<LabelButton>__);
    FUN_01bab630(&StringLiteral_20290);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_10394);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_8313);
    DAT_045662f9 = 1;
  }
  ppLVar10 = &(__this->fields).DMIJHGBCKCA;
  pLVar11 = *ppLVar10;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pLVar11 = (LabelButton_o *)
              UnityEngine_Resources__Load<object>
                        (StringLiteral_10394,Method_UnityEngine_Resources_Load<LabelButton>__);
    *ppLVar10 = pLVar11;
    thunk_FUN_01c20e04(ppLVar10,pLVar11);
  }
  pLVar11 = *ppLVar10;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pLVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  __this_00 = (__this->fields).MEMMHKLOBKN;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pLVar11 = (__this->fields).DMIJHGBCKCA;
    pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pLVar11 = (LabelButton_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pLVar11,pUVar6,true,
                         Method_UnityEngine_Object_Instantiate<LabelButton>__);
    if ((pLVar11 != (LabelButton_o *)0x0) &&
       (UnityEngine_Object__set_name
                  ((UnityEngine_Object_o *)pLVar11,StringLiteral_8313,(MethodInfo *)0x0),
       DNBBBGEENMM != (FLCGGKEODNC_o *)0x0)) {
      LabelButton__set_ButtonColor(pLVar11,(DNBBBGEENMM->fields).BANIDGFENDE,(MethodInfo *)0x0);
      if ((DNBBBGEENMM->fields).KMJPPCLIEDG == false) {
        LabelButton__set_Alias(pLVar11,(DNBBBGEENMM->fields).ABCHAOKFLGL,(MethodInfo *)0x0);
      }
      else {
        SFButton__set_IsFlashing((SFButton_o *)pLVar11,true,(MethodInfo *)0x0);
        iVar2 = (DNBBBGEENMM->fields).HPPDIEDAKEC;
        if (iVar2 == 8) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if ((__this_02 == (JMDPBFOCHHP_o *)0x0) ||
             (pJVar7 = JMDPBFOCHHP__DIFLKMKBENA
                                 (__this_02,(DNBBBGEENMM->fields).DMMDLLBOHNP,false,
                                  (MethodInfo *)0x0), pJVar7 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0))
          goto LAB_031d0050;
          piVar1 = &(pJVar7->fields).NGMFKGGBHND;
          pSVar12 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat
                              (StringLiteral_20290,pSVar12,StringLiteral_22500,(MethodInfo *)0x0);
          LabelButton__set_Alias(pLVar11,pSVar12,(MethodInfo *)0x0);
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
          __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_03 == (ACHLOMELAJE_o *)0x0) goto LAB_031d0050;
          bVar5 = ACHLOMELAJE__MIFEPGNGDON(__this_03,(long)*piVar1,(MethodInfo *)0x0);
          if (bVar5) {
            fVar16 = 1.0;
            fVar13 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
          }
          else {
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UVar17 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
            fVar16 = UVar17.fields.a;
            fVar15 = UVar17.fields.b;
            fVar14 = UVar17.fields.g;
            fVar13 = UVar17.fields.r;
          }
          UVar17.fields.g = fVar14;
          UVar17.fields.r = fVar13;
          UVar17.fields.a = fVar16;
          UVar17.fields.b = fVar15;
          LabelButton__set_Color(pLVar11,UVar17,(MethodInfo *)0x0);
        }
        else if (iVar2 == 6) {
          pSVar12 = (DNBBBGEENMM->fields).DMMDLLBOHNP;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = NLPJLHOEAOE__FEHJLBEGAPO(pSVar12,(MethodInfo *)0x0);
          if (__this_01 == (HOOAAGABMBL_o *)0x0) goto LAB_031d0050;
          pSVar12 = HOOAAGABMBL__GFMPCIOBMBJ(__this_01,(MethodInfo *)0x0);
          str2 = HOOAAGABMBL__EHECKFKDKJD(__this_01,(MethodInfo *)0x0);
          pSVar12 = System_String__Concat(pSVar12,StringLiteral_167,str2,(MethodInfo *)0x0);
          LabelButton__set_Text(pLVar11,pSVar12,(MethodInfo *)0x0);
        }
      }
      LabelButton__set_ControlPriority(pLVar11,3,(MethodInfo *)0x0);
      LabelButton__set_Control(pLVar11,(DNBBBGEENMM->fields).ACNLHENNKAJ,(MethodInfo *)0x0);
      (pLVar11->fields).super.super.ButtonId = (__this->fields).GPIIGPOLINL;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      SFButton__AddEventListener((SFButton_o *)pLVar11,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (pUVar6,(__this->fields).KKJILEFHKAC,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar6,(__this->fields).HBEMCBKLCOE,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        value.fields.z = 1.0;
        value.fields.x = 1.0;
        value.fields.y = 1.0;
        UnityEngine_Transform__set_localScale(pUVar6,value,(MethodInfo *)0x0);
        lVar4 = Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__;
        __this_04 = (__this->fields).PGCBEJGMIMA;
        if (__this_04 != (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
          pFVar8 = (__this_04->fields)._items;
          (__this_04->fields)._version = (__this_04->fields)._version + 1;
          if (pFVar8 != (FLCGGKEODNC_array *)0x0) {
            uVar3 = (__this_04->fields)._size;
            if (uVar3 < (uint)pFVar8->max_length) {
              (__this_04->fields)._size = uVar3 + 1;
              pFVar8->m_Items[(int)uVar3] = DNBBBGEENMM;
              thunk_FUN_01c20e04(pFVar8->m_Items + (int)uVar3,DNBBBGEENMM);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_04,
                         (Il2CppObject *)DNBBBGEENMM,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar4 = Method_System_Collections_Generic_List<LabelButton>_Add__;
            __this_05 = (__this->fields).HANEOGJOELA;
            if (__this_05 != (System_Collections_Generic_List_LabelButton__o *)0x0) {
              pLVar9 = (__this_05->fields)._items;
              (__this_05->fields)._version = (__this_05->fields)._version + 1;
              if (pLVar9 != (LabelButton_array *)0x0) {
                uVar3 = (__this_05->fields)._size;
                if (uVar3 < (uint)pLVar9->max_length) {
                  (__this_05->fields)._size = uVar3 + 1;
                  pLVar9->m_Items[(int)uVar3] = pLVar11;
                  thunk_FUN_01c20e04(pLVar9->m_Items + (int)uVar3,pLVar11);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_05,
                             (Il2CppObject *)pLVar11,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                (__this->fields).GPIIGPOLINL = (__this->fields).GPIIGPOLINL + 1;
                (__this->fields).KKJILEFHKAC =
                     (__this->fields).KKJILEFHKAC + (__this->fields).MBFIKHPCODJ;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_031d0050:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

