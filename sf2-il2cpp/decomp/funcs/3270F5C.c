// Nekki.SF2.GUI.StrikeThroughTextLine$$KMIKLELCKNI @ RVA 0x3270F5C

void Nekki_SF2_GUI_StrikeThroughTextLine__KMIKLELCKNI
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,AEGOLGIJEBI_AOIPPHGJEND_o *ADOIANOKIIK
               ,UnityEngine_Color_o HCPAAIJOOKK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar9;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar10;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar11;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar12;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar13;
  Il2CppObject *__this_00;
  Nekki_SF2_GUI_StrikeThroughTextLine_StaticFields *pNVar14;
  Il2CppArrayBounds *pIVar15;
  UnityEngine_Vector3_array *__this_01;
  System_String_o *pSVar16;
  Il2CppClass *pIVar17;
  float local_8c;
  float local_88 [2];
  UnityEngine_Color_Fields local_80;
  
  if ((DAT_0456722d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    FUN_01bab630(&StringLiteral_19977);
    FUN_01bab630(&StringLiteral_21578);
    FUN_01bab630(&StringLiteral_21462);
    FUN_01bab630(&StringLiteral_17122);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_21497);
    DAT_0456722d = 1;
  }
  local_80.r = 0.0;
  local_80.g = 0.0;
  local_80.b = 0.0;
  local_80.a = 0.0;
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_8c = 0.0;
  if (ADOIANOKIIK != (AEGOLGIJEBI_AOIPPHGJEND_o *)0x0) {
    pAVar9 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                       ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21462,
                        (MethodInfo *)0x0);
    pAVar10 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_17122,
                         (MethodInfo *)0x0);
    pAVar11 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21497,
                         (MethodInfo *)0x0);
    pAVar12 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21578,
                         (MethodInfo *)0x0);
    pAVar13 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19977,
                         (MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    }
    pNVar14 = Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->static_fields;
    local_80.b = (pNVar14->GHJIFCNJDKD).fields.b;
    local_80.a = (pNVar14->GHJIFCNJDKD).fields.a;
    local_80.r = (pNVar14->GHJIFCNJDKD).fields.r;
    local_80.g = (pNVar14->GHJIFCNJDKD).fields.g;
    if ((pAVar9 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) ||
       (bVar8 = System_String__op_Equality
                          ((pAVar9->fields).JAICMIMBIOA,StringLiteral_1606,(MethodInfo *)0x0),
       !bVar8)) {
      if (pAVar10 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
        UnityEngine_ColorUtility__TryParseHtmlString
                  ((pAVar10->fields).JAICMIMBIOA,(UnityEngine_Color_o *)&local_80,(MethodInfo *)0x0)
        ;
      }
    }
    else {
      local_80._0_8_ = HCPAAIJOOKK.fields._0_8_;
      local_80._8_8_ = HCPAAIJOOKK.fields._8_8_;
    }
    local_88[1] = 4.0;
    if (pAVar11 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pSVar16 = (pAVar11->fields).JAICMIMBIOA;
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNPPAHHCBOM__MEEKIFOGCCL(pSVar16,local_88 + 1,(MethodInfo *)0x0);
    }
    local_88[0] = 0.15;
    if (pAVar12 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pSVar16 = (pAVar12->fields).JAICMIMBIOA;
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNPPAHHCBOM__MEEKIFOGCCL(pSVar16,local_88,(MethodInfo *)0x0);
    }
    local_8c = 0.0;
    if (pAVar13 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pSVar16 = (pAVar13->fields).JAICMIMBIOA;
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNPPAHHCBOM__MEEKIFOGCCL(pSVar16,&local_8c,(MethodInfo *)0x0);
    }
    uVar7 = local_80._8_8_;
    uVar6 = local_80._0_8_;
    fVar3 = local_8c;
    __this_01 = (__this->fields).super.m_Corners;
    pIVar17 = *(Il2CppClass **)&(ADOIANOKIIK->fields).KAAFCPPBEKP;
    fVar4 = local_88[0];
    fVar5 = local_88[1];
    __this_00 = (Il2CppObject *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_TypeInfo);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar17;
    *(float *)&__this_00[3].klass = fVar5;
    *(float *)((long)&__this_00[4].klass + 4) = fVar4;
    *(float *)&__this_00[4].monitor = fVar3;
    *(undefined8 *)((long)&__this_00[3].monitor + 4) = uVar7;
    *(undefined8 *)((long)&__this_00[3].klass + 4) = uVar6;
    *(undefined4 *)((long)&__this_00[4].monitor + 4) = 0;
    lVar2 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar15 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar15 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar15[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar15[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar15[2].length + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

